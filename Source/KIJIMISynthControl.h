//
//  KIJIMISynthControl.h
//  KIJIMITimbreSpace
//
//  Created by Frederic Font Corbera on 12/04/2019.
//  Copyright © 2019 Rita&AuroraAudio. All rights reserved.
//

#pragma once

#include <array>
#include "defines.h"

class KIJIMISynthControl

{
public:
    KIJIMISynthControl (const String& _ID, const String& _name, const String& _type, int _ccNumber, int _midiOptionID, int _midiExtendedOptionID, int _byteNumber, const String& _byteToMidiConversionType, int _range, bool _includeOnTimbreSpace, bool _acceptMidiInput)
    {
        ID = _ID;
        name = _name;
        type = _type;
        ccNumber = _ccNumber;
        midiOptionID = _midiOptionID;
        midiExtendedOptionID = _midiExtendedOptionID;
        byteNumber = _byteNumber;
        byteToMidiConversionType = _byteToMidiConversionType;
        range = _range;
        includeOnTimbreSpace = _includeOnTimbreSpace;
        acceptMidiInput = _acceptMidiInput;
    }
    
    ~KIJIMISynthControl ()
    {
    }
    
    const String getID ()
    {
        return ID;
    }
    
    const String getDisplayName ()
    {
        return name;
    }
    
    const String getDipslayValue (double normValue)
    {
        return String::formatted("%d", normValue);
    }
    
    int getCCNumber ()
    {
        return ccNumber;
    }
    
    int getMIDIOptionID ()
    {
        return midiOptionID;
    }
    
    int getMIDIExtendedOptionID ()
    {
        return midiExtendedOptionID;
    }
    
    int getPresetByteNumber ()
    {
        return byteNumber;
    }
    
    bool shouldBeIncludedInTimbreSpace()
    {
        return includeOnTimbreSpace;
    }
    
    int norm2midi (double normValue)
    {
        return jlimit(0, 127, (int) round(normValue * 127));
    }
    
    double midi2norm (int midiValue)
    {
        return jlimit(0.0, 1.0, (double)midiValue / 127);
    }
    
    double getNormValueFromPresetByteArray(KIJIMIPresetBytes& bytes)
    {
        // Return parameter value normalized [0.0-1.0] taking it from corresponding spot in KIJIMIPresetBytes array
        // If parameter is not represented in KIJIMIPresetBytes, this will return -1
        
        if ((byteNumber > -1) && (byteNumber < KIJIMI_PRESET_NUM_BYTES)){
            if (ccNumber > -1){
                // If control is MIDI CC controllable, normnalize using "byteToMidiConversionType" rules
                int midiVal = -1;
                int byteValue = (int)bytes[byteNumber];
                if (byteToMidiConversionType == "direct") {
                   // General case in which value is already in the standard 0-127 MIDI range
                    midiVal = byteValue;
                }
                else if (byteToMidiConversionType == "80_16_48_112") {
                    // Case for polarity buttons, that don't translate sequentially to MIDI
                    if (byteValue == 0){
                        midiVal = 80.0;
                    } else if (byteValue == 1){
                        midiVal = 16.0;
                    } else if (byteValue == 2){
                        midiVal = 48.0;
                    } else if (byteValue == 3){
                        midiVal = 112.0;
                    } else {
                        std::cout << "Unexpected byte value for control '" << name << "' and conv type " << byteToMidiConversionType << ":" << byteValue << ". Defaulting to 80.0" << std::endl;
                        midiVal = 80.0;
                    }
                }
                else if (byteToMidiConversionType == "115_94_73_52_31_10") {
                    // Case for lfo waveform selectors
                    if (byteValue == 0){
                        midiVal = 115.0;
                    } else if (byteValue == 1){
                        midiVal = 94.0;
                    } else if (byteValue == 2){
                        midiVal = 73.0;
                    } else if (byteValue == 3){
                        midiVal = 52.0;
                    } else if (byteValue == 4){
                        midiVal = 31.0;
                    } else if (byteValue == 5){
                        midiVal = 10.0;
                    } else {
                        std::cout << "Unexpected byte value for control '" << name << "' and conv type " << byteToMidiConversionType << ":" << byteValue << ". Defaulting to 115.0" << std::endl;
                        midiVal = 115.0;
                    }
                }
                else if  (byteToMidiConversionType == "16_48_80_112") {
                    // Case for standard 4-step buttons
                    if (byteValue == 0){
                        midiVal = 16.0;
                    } else if (byteValue == 1){
                        midiVal = 48.0;
                    } else if (byteValue == 2){
                        midiVal = 80.0;
                    } else if (byteValue == 3){
                        midiVal = 112.0;
                    } else {
                        std::cout << "Unexpected byte value for control '" << name << "' and conv type " << byteToMidiConversionType << ":" << byteValue << ". Defaulting to 16.0" << std::endl;
                        midiVal = 16.0;
                    }
                }
                else if  (byteToMidiConversionType == "-_16_48_80_112") {
                    // Case for 4-step button with offset of 1 (for multiplier case)
                    if (byteValue == 1){
                        midiVal = 16.0;
                    } else if (byteValue == 2){
                        midiVal = 48.0;
                    } else if (byteValue == 3){
                        midiVal = 80.0;
                    } else if (byteValue == 4){
                        midiVal = 112.0;
                    } else {
                        std::cout << "Unexpected byte value for control '" << name << "' and conv type " << byteToMidiConversionType << ":" << byteValue << ". Defaulting to 16.0" << std::endl;
                        midiVal = 16.0;
                    }
                }
                else if  (byteToMidiConversionType == "21_63_105") {
                    // Case for standard 3-step buttons
                    if (byteValue == 0){
                        midiVal = 21.0;
                    } else if (byteValue == 1){
                        midiVal = 63.0;
                    } else if (byteValue == 2){
                        midiVal = 105.0;
                    } else {
                        std::cout << "Unexpected byte value for control '" << name << "' and conv type " << byteToMidiConversionType << ":" << byteValue << ". Defaulting to 21.0" << std::endl;
                        midiVal = 21;
                    }
                }
                else if  (byteToMidiConversionType == "32_96") {
                    // Case for standard 2-step buttons
                    if (byteValue == 0){
                        midiVal = 32.0;
                    } else if (byteValue == 1){
                        midiVal = 96.0;
                    } else {
                        std::cout << "Unexpected byte value for control '" << name << "' and conv type " << byteToMidiConversionType << ":" << byteValue << ". Defaulting to 32.0" << std::endl;
                        midiVal = 32;
                    }
                }
                
                // Now normalize the MIDI range to the 0.0-1.0 range
                if (midiVal > -1){
                    // Normalize from MIDI range
                    return jlimit(0.0, 1.0, (double)midiVal / 127.0);
                } else {
                    // No conversion rule matched, this should not happen...
                    std::cout << "Could not find conversion rule for control '" << name << "' byte value. Defaulting to 0." << std::endl;
                    return 0.0;
                }
            } else {
                // If parameter is not MIDI CC controllable, normalize using standard parameter range divide
                // TODO: not sure if this will work well when unnormalizing, this should be tested
                return jlimit(0.0, 1.0, (double)bytes[byteNumber] / range);
            }
        }
        
        return 0.0;
    }
    
    void updatePresetByteArray (float normValue, KIJIMIPresetBytes& bytes)
    {
        // Updates KIJIMIPresetBytes with the given normalized value of the synth control parameter
        // This kind of performs the opposite operation of getNormValueFromPresetByteArray
        
        if ((byteNumber > -1) && (byteNumber < KIJIMI_PRESET_NUM_BYTES)){
            int byteValue = -1;
            
            if (ccNumber > -1){
                // If control is MIDI CC controllable, denormnalize using "byteToMidiConversionType" rules
                int midiValue = norm2midi(normValue);
                
                if (byteToMidiConversionType == "direct") {
                   // General case in which value is already in the standard 0-127 MIDI range
                    byteValue = midiValue;
                }
                else if  (byteToMidiConversionType == "80_16_48_112") {
                    // Case for polarity buttons, that don't translate sequentially to MIDI
                    if ((midiValue >= 0) && (midiValue < 32)){
                        byteValue = 1;
                    } else if ((midiValue >= 32) && (midiValue < 64)){
                        byteValue = 2;
                    } else if ((midiValue >= 64) && (midiValue < 96)){
                        byteValue = 0;
                    } else if ((midiValue >= 96) && (midiValue < 128)){
                        byteValue = 3;
                    }
                }
                else if  (byteToMidiConversionType == "115_94_73_52_31_10") {
                    // Case for lfo waveform selectors
                    if ((midiValue >= 0) && (midiValue < 21)){
                        byteValue = 5;
                    } else if ((midiValue >= 21) && (midiValue < 42)){
                        byteValue = 4;
                    } else if ((midiValue >= 42) && (midiValue < 64)){
                        byteValue = 3;
                    } else if ((midiValue >= 64) && (midiValue < 85)){
                        byteValue = 2;
                    } else if ((midiValue >= 85) && (midiValue < 107)){
                        byteValue = 1;
                    } else if ((midiValue >= 107) && (midiValue < 128)){
                        byteValue = 0;
                    }
                }
                else if  (byteToMidiConversionType == "16_48_80_112") {
                    // Case for standard 4-step buttons
                    if ((midiValue >= 0) && (midiValue < 32)){
                        byteValue = 0;
                    } else if ((midiValue >= 32) && (midiValue < 64)){
                        byteValue = 1;
                    } else if ((midiValue >= 64) && (midiValue < 96)){
                        byteValue = 2;
                    } else if ((midiValue >= 96) && (midiValue < 128)){
                        byteValue = 3;
                    }
                }
                else if  (byteToMidiConversionType == "-_16_48_80_112") {
                    // Case for 4-step button with offset of 1 (for multiplier case)
                    if ((midiValue >= 0) && (midiValue < 32)){
                        byteValue = 1;
                    } else if ((midiValue >= 32) && (midiValue < 64)){
                        byteValue = 2;
                    } else if ((midiValue >= 64) && (midiValue < 96)){
                        byteValue = 3;
                    } else if ((midiValue >= 96) && (midiValue < 128)){
                        byteValue = 4;
                    }
                }
                else if  (byteToMidiConversionType == "21_63_105") {
                    // Case for standard 3-step buttons
                    if ((midiValue >= 0) && (midiValue < 43)){
                        byteValue = 0;
                    } else if ((midiValue >= 43) && (midiValue < 86)){
                        byteValue = 1;
                    } else if ((midiValue >= 86) && (midiValue < 128)){
                        byteValue = 2;
                    }
                }
                else if  (byteToMidiConversionType == "32_96") {
                    // Case for standard 2-step buttons
                    if ((midiValue >= 0) && (midiValue < 64)){
                        byteValue = 0;
                    } else if ((midiValue >= 64) && (midiValue < 128)){
                        byteValue = 1;
                    }
                }
            } else {
                // If parameter is not MIDI CC controllable, denormalize using standard parameter range multiplication
                // TODO: not sure if this will work well when unnormalizing, this should be tested
                byteValue = (int) round(normValue * range);
            }
            
            // If a byte value was computed, update the array accordingly
            // This should always be the case if we are covering all possible parameters
            if (byteValue > -1){
                bytes[byteNumber] = jlimit(0, 255, byteValue);
            }
        }
    }
    
    bool shouldHandleMidiInput() {
        return acceptMidiInput;
    }
    
private:
    
    String ID;
    String name;
    String type;
    int ccNumber;
    int midiOptionID;
    int midiExtendedOptionID;
    int byteNumber;
    String byteToMidiConversionType;
    int range;
    bool includeOnTimbreSpace;
    bool acceptMidiInput;
};
