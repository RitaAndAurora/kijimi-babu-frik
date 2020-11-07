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
    KIJIMISynthControl (const String& _ID, const String& _name, const String& _type, int _ccNumber, int _midiOptionID, int _midiExtendedOptionID, int _byteNumber, const String& _byteToMidiConversionType, const String& _audioParameterType, bool _includeOnTimbreSpace, const String& _interpolationType, bool _acceptMidiInput, int _byteRangeMin, int _byteRangeMax, int _defaultValue)
    {
        ID = _ID;
        name = _name;
        type = _type;
        ccNumber = _ccNumber;
        midiOptionID = _midiOptionID;
        midiExtendedOptionID = _midiExtendedOptionID;
        byteNumber = _byteNumber;
        byteToMidiConversionType = _byteToMidiConversionType;
        audioParameterType = _audioParameterType;
        includeOnTimbreSpace = _includeOnTimbreSpace;
        interpolationType = _interpolationType;
        acceptMidiInput = _acceptMidiInput;
        byteRangeMin = _byteRangeMin;
        byteRangeMax = _byteRangeMax;
        defaultValue = _defaultValue;
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
    
    const String getInterpolationType()
    {
        return interpolationType;
    }
    
    const String getAudioParameterType ()
    {
        // Gets a string describing the JUCE audio parameter type of object that is used for this parameter.
        // "float" = AudioParameterFloat
        // "choice" = AudioParameterChoice
        // This is used to know which one should be used for casting
        return audioParameterType;
    }
    
    int norm2midi (double normValue)
    {
        return jlimit(0, 127, (int) round(normValue * 127));
    }
    
    double midi2norm (int midiValue)
    {
        return jlimit(0.0, 1.0, (double)midiValue / 127);
    }
    
    int byte2midi (int byteValue)
    {
        // The midi range value is the "real" value of the parameter stored in the audio parameter objects
        
        int midiVal = -1;
        
        if ((byteValue < byteRangeMin) || (byteValue > byteRangeMax)){
            // If byte value is outside the valid byte range, use the default value for it
            byteValue = defaultValue;
        }
        
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
        else if (byteToMidiConversionType == "32_96") {
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
        return midiVal;
    }
    
    int midi2byte(int midiValue)
    {
        int byteValue = -1;
        
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
        
        return byteValue;
    }
    
    float byte2norm(int byteValue)
    {
        return midi2norm(byte2midi(byteValue));
    }
    
    int getValueFromPresetByteArray(KIJIMIPresetBytes& bytes)
    {
        // This is to be used for getting the "unormalized" parameter value prepared for setting an audio parameter value
        // or directly sending via MIDI message (either CC or sysex) to KIJIMI
        
        if ((byteNumber > -1) && (byteNumber < KIJIMI_PRESET_NUM_BYTES)){
            int byteValue = (int)bytes[byteNumber];
            return byte2midi(byteValue);
        }
        return 0;
    }
    
    double getNormValueFromPresetByteArray(KIJIMIPresetBytes& bytes)
    {
        // Return parameter value normalized [0.0-1.0] taking it from corresponding spot in KIJIMIPresetBytes array
        // If parameter is not represented in KIJIMIPresetBytes, this will return -1
        // This is used to compute preset distances in timbre space. Normalisation for audio parameters is handled by the
        // audio parameters objects themselves
        
        if ((byteNumber > -1) && (byteNumber < KIJIMI_PRESET_NUM_BYTES)){
            int byteValue = (int)bytes[byteNumber];
            return byte2norm(byteValue);
        }
        
        return 0.0;
    }
    
    void updatePresetByteArray (int value, KIJIMIPresetBytes& bytes)
    {
        // Updates KIJIMIPresetBytes with the given value of the synth control parameter in the "MIDI range" (which is
        // the natrual range of the audio parameter object.
        // This "MIDI range" means that the received value here is a value in the range that could be sent to kijimi
        // via MIDI message to set it. We need therefore to map this to the corresponding byte representation which in
        // some cases means not changing the parameter at all, but in other cases means doing some custom mappings.
        
        if ((byteNumber > -1) && (byteNumber < KIJIMI_PRESET_NUM_BYTES)){
            int byteValue = midi2byte(value);
            // If a byte value was computed, update the array accordingly
            // This should always be the case if we are covering all possible parameters
            if (byteValue > -1){
                bytes[byteNumber] = (uint8)jlimit(0, 255, byteValue);
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
    String audioParameterType;
    bool includeOnTimbreSpace;
    String interpolationType;
    bool acceptMidiInput;
    int byteRangeMin;
    int byteRangeMax;
    int defaultValue;
};
