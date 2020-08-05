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
    KIJIMISynthControl (const String& _ID, const String& _name, const String& _type, int _ccNumber, int _byteNumber, bool _includeOnTimbreSpace)
    {
        ID = _ID;
        name = _name;
        type = _type;
        ccNumber = _ccNumber;
        byteNumber = _byteNumber;
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
            if (type == "button2") {
                if ((int)bytes[byteNumber] == 0){
                    return 33.0;
                } else if ((int)bytes[byteNumber] == 1){
                    return 0.0;
                } else if ((int)bytes[byteNumber] == 2){
                    return 64.0;
                } else {
                    return 96.0;
                }
            }
            else {
                return jlimit(0.0, 1.0, (double)bytes[byteNumber] / 127.0);  // TODO: double check this for KIJIMI, I changed range to 0-127
            }
        }
        
        return -1.0;
    }
    
    void updatePresetByteArray (float normValue, KIJIMIPresetBytes& bytes)
    {
        // Updates KIJIMIPresetBytes with the given normalized value of the synth control parameter
        // TODO: double check this for KIJIMI, I changed range to 0-127
        int byteValue = jlimit(0, 127, (int) round(normValue * 127));
        if ((byteNumber > -1) && (byteNumber < KIJIMI_PRESET_NUM_BYTES)){
            bytes[byteNumber] = byteValue;
        }
    }
    
    
private:
    
    String ID;
    String name;
    String type;
    int ccNumber;
    int byteNumber;
    bool includeOnTimbreSpace;
};
