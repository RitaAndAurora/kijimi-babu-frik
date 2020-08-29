//
//  KIJIMIPresetBank.h
//  KIJIMITimbreSpace
//
//  Created by Frederic Font Corbera on 17/04/2019.
//  Copyright © 2019 Rita&AuroraAudio. All rights reserved.
//

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "defines.h"

class KIJIMIPresetBank: public ActionBroadcaster

{
public:
    KIJIMIPresetBank ()
    {
        bankFilename = "-";
    }
    
    ~KIJIMIPresetBank ()
    {
        // De-register action listeners
        removeAllActionListeners();
    }
    
    KIJIMIPresetBytes& getPresetBytesAtIndex(int index){
        // Return reference to preset byes at index position
        return presetsBytes.at(index);
    }
    
    void setPresetBytesAtIndex(int index, KIJIMIPresetBytes bytes)
    {
        presetsBytes[index] = bytes;
    }
    
    int getNumPresetsInBank(){
        // Returns number of loaded presets
        return (int)presetsBytes.size();
    }
    
    String getLoadedFilename()
    {
        return bankFilename;
    }
    
    bool hasDataLoaded() {
        return presetsBytes.size() > 0;
    }
    
    void loadFromFile(const String& filepath)
    {
        // Reads from KIJIMI bank file and fills presetsBytes
        // This function might throw errors if file has not correct format or other problems happen
        // Calls to this function should be prepared for that
        
        File path (filepath);
        MemoryBlock fileContents;
        path.loadFileAsData(fileContents);
        presetsBytes.clear();
        for (int i=0; i<fileContents.getSize(); i=i+KIJIMI_PRESET_NUM_BYTES){  // Move in blocks of KIJIMI_PRESET_NUM_BYTES bytes (KIJIMI preset size)
            KIJIMIPresetBytes currentPresetBytes = {0};
            for (int j=0; j<KIJIMI_PRESET_NUM_BYTES; j++){  // Go byte by byte
                unsigned char byte = fileContents[i + j];
                uint8 byte_int = uint8(byte);
                currentPresetBytes[j] = byte_int;
            }
            presetsBytes.push_back(currentPresetBytes);
        }
        bankFilename = path.getFileName();
    }
    
    void loadState(ValueTree state)
    {
        // Load filename
        if (state.hasProperty(STATE_BANK_FILENAME_IDENTIFIER)){
            bankFilename = state.getProperty(STATE_BANK_FILENAME_IDENTIFIER).toString();
        }
     
        // Load preset data
        presetsBytes.clear();
        for (int i=0; i<state.getNumChildren(); i++){
            String serlializedPresetBytes = state.getChild(i)["bytes"].toString();
            StringArray serlializedPresetBytesTokens = StringArray::fromTokens(serlializedPresetBytes, ",", "\"");
            KIJIMIPresetBytes currentPresetBytes = {0};
            for (int j=0; j<serlializedPresetBytesTokens.size(); j++){
                currentPresetBytes[j] = uint8(serlializedPresetBytesTokens[j].getIntValue());
            }
            presetsBytes.push_back(currentPresetBytes);
        }
    }
    
    ValueTree getState()
    {
        // Returns the internal state of KIJIMIPResetBank as a value tree object, including:
        // - preset bytes for all presets in loaded bank
        ValueTree state = ValueTree(STATE_PRESET_BANK_IDENTIFIER);
        state.setProperty(STATE_BANK_FILENAME_IDENTIFIER, bankFilename, nullptr);
        for (int i=0; i<presetsBytes.size(); i++){
            ValueTree presetState = ValueTree(STATE_PRESET_IDENTIFIER);
            
            KIJIMIPresetBytes presetBytes = presetsBytes[i];
            StringArray currentPresetBytes;
            for (int j=0; j<presetBytes.size(); j++){
                currentPresetBytes.add((String)presetBytes[j]);
            }
            
            presetState.setProperty(STATE_PRESET_BYTES_IDENTIFIER, currentPresetBytes.joinIntoString(","), nullptr);
            presetState.setProperty(STATE_PRESET_IDX_IDENTIFIER, i, nullptr);
            // TODO: Add extra info about the current preset (if any)
            
            state.appendChild(presetState, nullptr);
        }
        return state;
    }
    
    void writeToFile()
    {
        // Writes the contents of presetsBytes to a file
    }
    
private:
    
    std::vector<KIJIMIPresetBytes> presetsBytes;
    String bankFilename;

};
