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
    KIJIMISynthControl (const String& _ID, const String& _name, int _ccNumber, int _byteNumber, int _byteNumberVoiceFile, int _channelNumber, bool _includeOnTimbreSpace)
    {
        ID = _ID;
        name = _name;
        ccNumber = _ccNumber;
        byteNumber = _byteNumber;
        byteNumberVoiceFile = _byteNumberVoiceFile;
        channelNumber = _channelNumber;
        includeOnTimbreSpace = _includeOnTimbreSpace;
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
    
    int getChannelNumber ()
    {
        return channelNumber;
    }
    
    int getPresetByteNumber ()
    {
        return byteNumber;
    }
    
    int getVoiceByteNumber ()
    {
        return byteNumberVoiceFile;
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
            return jlimit(0.0, 1.0, (double)bytes[byteNumber] / 255.0);
        }
        
        if (ID == "KIJIMI_GLIDE_MODE_GLIDE"){
            // Custom behaviour for KIJIMI_GLIDE_MODE_GLIDE
            // Note that some parameter info is hardcoded here and should be manually changed if needed
            // b72=255 & b80=0 -> portamento, b72=0 & b80=255 -> glissando, b72=0 & b80 = 0 -> none
            
            bool portamentoOn = bytes[72] > 127;  // Note range is 0-255 here
            bool glissandoOn = bytes[80] > 127; // Note range is 0-255 here
            
            if (portamentoOn && !glissandoOn) {
                return 0.0; // Portamento on
            } else if (!portamentoOn && glissandoOn) {
                return 1.0; // Glissando on
            } else {
                // If both off or both on, we consider none is active
                return 0.5; // Both off
            }
        }
        
        return -1.0;
    }
    
    double getNormValueFromVoiceByteArray(KIJIMIVoiceBytes& bytes)
    {
        // Return parameter value normalized [0.0-1.0] taking it from corresponding spot in KIJIMIPresetBytes array
        // If parameter is not represented in KIJIMIVoiceBytes, this will return -1
        if ((byteNumberVoiceFile > -1) && (byteNumberVoiceFile < KIJIMI_VOICE_NUM_BYTES)){
            return jlimit(0.0, 1.0, (double)bytes[byteNumberVoiceFile] / 255.0);
        }
        return -1.0;
    }
    
    void updatePresetByteArray (float normValue, KIJIMIPresetBytes& bytes)
    {
        // Updates KIJIMIPresetBytes with the given normalized value of the synth control parameter
        int byteValue = jlimit(0, 255, (int) round(normValue * 255));
        if ((byteNumber > -1) && (byteNumber < KIJIMI_PRESET_NUM_BYTES)){
            bytes[byteNumber] = byteValue;
        }
        
        if (ID == "KIJIMI_GLIDE_MODE_GLIDE"){
            // Custom behaviour for KIJIMI_GLIDE_MODE_GLIDE
            // Note that some parameter info is hardcoded here and should be manually changed if needed
            // b72=255 & b80=0 -> portamento, b72=0 & b80=255 -> glissando, b72=0 & b80 = 0 -> none
            
            int midiValue = norm2midi((double)normValue);
            
            if (midiValue < 32) { // Follow KIJIMI MIDI spec
                // Set to Portamento
                bytes[72] = 255;
                bytes[80] = 0;
            } else if (midiValue >= 32 && midiValue < 85) {
                // Set to None
                bytes[72] = 255;
                bytes[80] = 255;
            } else if (midiValue >= 85) {
                // Set to glissando
                bytes[72] = 0;
                bytes[80] = 255;
            }
        }
    }
    
    void updateVoiceByteArray (float normValue, KIJIMIVoiceBytes& bytes)
    {
        // Updates KIJIMIPresetBytes with the given normalized value of the synth control parameter
        int byteValue = jlimit(0, 255, (int) round(normValue * 255));
        if ((byteNumberVoiceFile > -1) && (byteNumberVoiceFile < KIJIMI_VOICE_NUM_BYTES)){
            bytes[byteNumberVoiceFile] = byteValue;
        }
    }
    
private:
    
    String ID;
    String name;
    int ccNumber;
    int byteNumber;
    int byteNumberVoiceFile;
    int channelNumber;
    bool includeOnTimbreSpace;
};