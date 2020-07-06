//
//  KIJIMIInterface.h
//  KIJIMITimbreSpace
//
//  Created by Frederic Font Corbera on 22/02/2019.
//  Copyright © 2019 Rita&AuroraAudio. All rights reserved.
//


#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "KIJIMISynthControl.h"
#include "KIJIMIPresetBank.h"
#include "defines.h"

class KIJIMIInterface: public ActionBroadcaster

{
public:
    KIJIMIInterface ()
    {
    }
    
    ~KIJIMIInterface ()
    {
        // De-register action listeners
        removeAllActionListeners();
    }
    
    void loadSynthControlObjects() {
        // Add KIJIMISynthControl objects to the synthControls vector
        // --> Start auto-generated code A
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_AMT", "LFO1 amount", 5, 4, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_AMT", "LFO2 amount", 8, 5, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_AMT", "ADSR2 amount", 40, 6, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2VCO1", "VCO2 to VCO1", 49, 15, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2VCF", "VCO2 to VCF", 52, 18, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_LFO1RATE", "Velocity to LFO1 rate ", 41, 7, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_LFO2RATE", "Velocity to LFO2 rate ", 43, 9, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_WAVE", "Velocity to waveform", 45, 11, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_SUB", "Velocity to sub amount", 47, 13, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_PITCH", "Velocity to pitchbend", 50, 16, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_VCA", "Velocity to VCA", 53, 19, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_LFO1RATE", "Aftertouch to LFO1 rate ", 42, 8, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_LFO2RATE", "Aftertouch to LFO2 rate ", 44, 10, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_WAVE", "Aftertouch to waveform", 46, 12, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_SUB", "Aftertouch to sub amount", 48, 14, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_PITCH", "Aftertouch to pitchbend", 51, 17, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_VCA", "Aftertouch to VCA", 54, 20, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_RATE", "LFO1 rate", 55, 21, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_A", "LFO1 attack", 56, 22, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_D", "LFO1 decay", 57, 23, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_RATE", "LFO2 rate", 58, 24, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_A", "LFO2 attack", 59, 25, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_D", "LFO2 decay", 60, 26, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_FREQ", "VCO1 frequency", 61, 27, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_WAVE", "VCO1 waveform", 62, 28, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SUB_VOL", "Sub volume", 63, 29, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_FREQ", "VCO2 frequency", 65, 30, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2WAVE", "VCO2 waveform", 66, 31, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_VOL", "VCO2 volume", 67, 32, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_DETUNE", "VCO2 detune", 68, 33, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_FREQ", "VCF Frequency", 69, 34, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_VEL_C", "VCF Velocity control", 70, 35, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_AT_C", "VCF Aftertouch control", 71, 36, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_ADSR2_C", "VCF ADSR2 control", 72, 37, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_RESO", "VCF Resonance", 73, 38, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_Q_VEL_C", "VCF Velocity Q control", 75, 39, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_Q_AT_C", "VCF Aftertouch Q control", 76, 40, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_KEY_C", "VCF Keyboard control", 77, 41, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_A", "ADSR2 attack", 78, 42, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_D", "ADSR2 decay", 79, 43, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_S", "ADSR2 sustain", 80, 44, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_R", "ADSR2 release", 81, 45, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_A", "ADSR1 attack", 82, 46, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_D", "ADSR1 decay", 83, 47, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_S", "ADSR1 sustain", 84, 48, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_R", "ADSR1 release", 85, 49, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_GLIDE_RATE", "Glide rate", 86, 50, 0, 0, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VOLUME", "Volume", 87, 51, 0, 0, false));
        // --> End auto-generated code A
        
        #if JUCE_DEBUG
            logMessage(String::formatted("Loaded %i KIJIMI controls", synthControls.size()));
        #endif
    }
    
    std::vector<String> getKIJIMISynthControlIDs (){
        // Returns a vector with all synth control IDs
        std::vector<String> synthControlIDS;
        for (int i=0; i < synthControls.size(); i++){
            synthControlIDS.push_back(synthControls[i].getID());
        }
        return synthControlIDS;
    }
    
    std::vector<String> getKIJIMISynthControlIDsForChannel (int channel){
        // Returns a vector with all synth control IDs for a specific channel
        std::vector<String> synthControlIDS;
        for (int i=0; i < synthControls.size(); i++){
            if (synthControls[i].getChannelNumber() == channel){
                synthControlIDS.push_back(synthControls[i].getID());
            }
        }
        return synthControlIDS;
    }
    
    std::vector<String> getKIJIMISynthControlIDsForTimbreSpace (){
        // Returns a vector with all synth control IDs to be included in the timbre space
        std::vector<String> synthControlIDS;
        for (int i=0; i < synthControls.size(); i++){
            if (synthControls[i].shouldBeIncludedInTimbreSpace()){
                synthControlIDS.push_back(synthControls[i].getID());
            }
        }
        return synthControlIDS;
    }
    
    KIJIMISynthControl* getKIJIMISynthControlWithID(const String& synthControlID)
    {
        // Returns a reference to a KIJIMISynthControl with the requested ID
        // Throws an exception if no KIJIMISynthControl exists with such ID
        for (int i=0; i < synthControls.size(); i++){
            if (synthControls[i].getID() == synthControlID){
                return &synthControls[i];
            }
        }
        throw std::invalid_argument("No KIJIMISynthControl with ID \"" + synthControlID.toStdString() + "\"");
    }
    
    KIJIMISynthControl* getKIJIMISynthControlWithCCNumber(int ccNumber)
    {
        // Returns a reference to a KIJIMISynthControl with the requested Control Change number
        // Throws an exception if no KIJIMISynthControl exists with such Control Change number
        for (int i=0; i < synthControls.size(); i++){
            if (synthControls[i].getCCNumber() == ccNumber){
                return &synthControls[i];
            }
        }
        throw std::invalid_argument("No KIJIMISynthControl with CC number \"" + std::to_string(ccNumber) + "\"");
    }
    
    int getCCNumberForParameterID (const String &parameterID)
    {
        // Gets the correspoding MIDI Control Change number for a given parameterID
        // Parameter IDs should have a 1-1 relationship with KIJIMISynthControl IDs
        // Throws an exception if no KIJIMISynthControl exists with parameterID
        return getKIJIMISynthControlWithID(parameterID)->getCCNumber();
    }
    
    int getChannelNumberForParameterID (const String &parameterID)
    {
        // Gets the correspoding KIJIMI channel number (1 or 2) for a given parameterID
        // Parameter IDs should have a 1-1 relationship with KIJIMISynthControl IDs
        // Throws an exception if no KIJIMISynthControl exists with parameterID
        return getKIJIMISynthControlWithID(parameterID)->getChannelNumber();
    }
    
    const String getParameterIDFromCCNumber (int ccNumber)
    {
        // Gets the Parameter ID that corresponds to a synth control assigned to the given control change number
        // If more than one KIJIMISynthControl objects exist with the same CC number, only the first one in the vector will be returned
        // Parameter IDs should have a 1-1 relationship with KIJIMISynthControl IDs
        // Throws an exception if no KIJIMISynthControl exists with assigned ccNumber
        return getKIJIMISynthControlWithCCNumber(ccNumber)->getID();
    }
    
    const String getSynthControlDisaplayNameFromParameterID (const String& parameterID)
    {
        // Gets the synth control name that corresponds to a synth control assigned to the given parameterID
        // Parameter IDs should have a 1-1 relationship with KIJIMISynthControl IDs
        // Throws an exception if no KIJIMISynthControl exists with assigned parameterID
        return getKIJIMISynthControlWithID(parameterID)->getDisplayName();
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForPresetBytesArray(KIJIMIPresetBytes& presetBytes)
    {
        // Returns a list of pairs of KIJIMISynthControl and the value they should take to load a specific presetBytes
        SynthControlIdValuePairs idValuePairs;
        for (int i=0; i < synthControls.size(); i++){
            KIJIMISynthControl synthControl = synthControls[i];
            idValuePairs.emplace_back(synthControl.getID(), synthControl.getNormValueFromPresetByteArray(presetBytes));
        }
        return idValuePairs;
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForVoiceBytesArray(KIJIMIVoiceBytes& voiceBytes, int channelTo)
    {
        // Returns a list of pairs of KIJIMISynthControl and the value they should take to load a specific voiceBytes
        std::vector<String> channelControlIDs = getKIJIMISynthControlIDsForChannel(channelTo);
        SynthControlIdValuePairs idValuePairs;
        for (int i=0; i<channelControlIDs.size(); i++){
            String controlID = channelControlIDs[i];
            KIJIMISynthControl* synthControl =  getKIJIMISynthControlWithID(controlID);
            double value = synthControl->getNormValueFromVoiceByteArray(voiceBytes);
            idValuePairs.emplace_back(controlID, value);
        }
        return idValuePairs;
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForPresetAtIndex(int index)
    {
        // Returns a list of pairs of KIJIMISynthControl and the value they should take to load a specific preset
        KIJIMIPresetBytes& presetBytes = presetBank.getPresetBytesAtIndex(index);
        return getSynthControlIdValuePairsForPresetBytesArray(presetBytes);
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForInterpolatedPresets(PresetDistancePairsToInterpolate interpolationData)
    {
        // Returns a list of pairs of KIJIMISynthControl and the value they should take to load a new preset which is
        // created after the interpolation of N presets and distances.
        // Interpolation is done by computing a weight for each preset (based on distance) and linearly summing the
        // each synth control vlaue of the preset multiplied by the weight.
        
        // Calculate total distance and pre-fetch preset bytes
        float totalDistance = 0.0;
        std::vector<KIJIMIPresetBytes> presetsBytes;
        for (int i=0;i<interpolationData.size(); i++){
            totalDistance += interpolationData[i].presetDist;
            presetsBytes.push_back(presetBank.getPresetBytesAtIndex(interpolationData[i].presetIdx));
        }
        
        // Interpolate synth control values
        SynthControlIdValuePairs idValuePairs;
        std::vector<String> controlIDs = getKIJIMISynthControlIDsForTimbreSpace();
        for (int i=0; i < controlIDs.size(); i++){
            KIJIMISynthControl* synthControl = getKIJIMISynthControlWithID(controlIDs[i]);
            double newValue = 0.0;
            for (int j=0;j<interpolationData.size(); j++){
                double normValuePreset = (double)synthControl->getNormValueFromPresetByteArray(presetsBytes[j]);
                newValue += normValuePreset * (double)(interpolationData[j].presetDist/totalDistance);
            }
            idValuePairs.emplace_back(synthControl->getID(), newValue);
        }
        return idValuePairs;
    }
    
    timbreSpaceInputDataMatrix generateBankDataForTimbreSpaceEngine()
    {
        // Generates a matrix of floats with normalized values of the relevant parameters to include
        // as input data for the timbre space. Each row in the matrix corresponds to one preset, each
        // column to the normalized value of one parameter.
        timbreSpaceInputDataMatrix data;
        std::vector<String> controlIDs = getKIJIMISynthControlIDsForTimbreSpace();
        for (int i=0; i < presetBank.getNumPresetsInBank(); i++){
            std::vector<float> presetValues;
            KIJIMIPresetBytes& presetBytes = presetBank.getPresetBytesAtIndex(i);
            for (int j=0; j < controlIDs.size(); j++){
                KIJIMISynthControl* synthControl = getKIJIMISynthControlWithID(controlIDs[j]);
                float value = (float)synthControl->getNormValueFromPresetByteArray(presetBytes);
                presetValues.push_back(value);
            }
            data.push_back(presetValues);
        }
        return data;
    }
    
    bool hasPresetsDataLoaded()
    {
        return presetBank.hasDataLoaded();
    }
    
    int getNumLoadedPresets ()
    {
        if (!hasPresetsDataLoaded()){
            return 0;
        } else {
            return presetBank.getNumPresetsInBank();
        }
    }
    
    ValueTree getPresetBankState()
    {
        return presetBank.getState();
    }
    
    void loadPresetBankState(ValueTree state)
    {
        presetBank.loadState(state);
        #if JUCE_DEBUG
            logMessage(String::formatted("Loaded %i presets from ", presetBank.getNumPresetsInBank()) + presetBank.getLoadedFilename());
        #endif
    }
    
    void saveCurrentPresetAtBankIndex(int index, KIJIMIPresetBytes bytes)
    {
        presetBank.setPresetBytesAtIndex(index, bytes);
    }
    
    String getPresetBankLoadedFilename()
    {
        return presetBank.getLoadedFilename();
    }
    
    void loadPresetBankFromFile(const String& filepath)
    {
        try {
            presetBank.loadFromFile(filepath);
            #if JUCE_DEBUG
                logMessage(String::formatted("Loaded %i presets from ", presetBank.getNumPresetsInBank()) + presetBank.getLoadedFilename());
            #endif
        } catch (...) {
            // TODO: would be nice to catch specific exceptions instead of broad catching
            #if JUCE_DEBUG
                logMessage("Could not load bank file " + filepath);
            #endif
        }
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForCopyingChannelFromToChannelTo(AudioProcessorValueTreeState* currentParameters, int channelFrom, int channelTo)
    {
        std::vector<String> controlIDsChannelFrom = getKIJIMISynthControlIDsForChannel(channelFrom);
        std::vector<String> controlIDsChannelTo = getKIJIMISynthControlIDsForChannel(channelTo);
        SynthControlIdValuePairs idValuePairs;
        
        for (int i=0; i<controlIDsChannelFrom.size(); i++){
            String channelFromControlID = controlIDsChannelFrom[i];
            String genericChannelControlID = channelFromControlID.substring(0, channelFromControlID.length() - 2);
            String channelToControlID = "";
            for (int j=0; j<controlIDsChannelTo.size(); j++){
                if (controlIDsChannelTo[j].startsWith(genericChannelControlID)){
                    channelToControlID = controlIDsChannelTo[j];
                    break;
                }
            }
            if (channelToControlID != ""){
                AudioParameterFloat* audioParameter = (AudioParameterFloat*)currentParameters->getParameter(channelFromControlID);
                double channelFromParameterValueNorm = (double)audioParameter->get() / 127.0;  // Needs normalized value to set
                idValuePairs.emplace_back(channelToControlID, channelFromParameterValueNorm);
            }
        }
        return idValuePairs;
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsFromPatchFile(const String& filepath)
    {
        // Reads from KIJIMI patch file and prepares SynthControlIdValuePairs to update the current preset
        // This function might throw errors if file has not correct format or other problems happen
        // Calls to this function should be prepared for that

        File path (filepath);
        MemoryBlock fileContents;
        path.loadFileAsData(fileContents);
        
        if (fileContents.getSize() != KIJIMI_PRESET_NUM_BYTES) {
            throw std::invalid_argument("Wrong number of bytes for preset file");
        }
        
        KIJIMIPresetBytes presetBytes = {0};
        for (int i=0; i<KIJIMI_PRESET_NUM_BYTES; i++){  // Go byte by byte
            unsigned char byte = fileContents[i];
            uint8 byte_int = uint8(byte);
            presetBytes[i] = byte_int;
        }
        
        return getSynthControlIdValuePairsForPresetBytesArray(presetBytes);
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForChannelFromVoiceFile(const String& filepath, int channelTo)
    {
        // Reads from KIJIMI voice file and prepares SynthControlIdValuePairs to update the current preset
        // This function might throw errors if file has not correct format or other problems happen
        // Calls to this function should be prepared for that
        
        File path (filepath);
        MemoryBlock fileContents;
        path.loadFileAsData(fileContents);
        
        if (fileContents.getSize() != KIJIMI_VOICE_NUM_BYTES) {
            throw std::invalid_argument("Wrong number of bytes for voice file");
        }
        
        KIJIMIVoiceBytes voiceBytes = {0};
        for (int i=0; i<KIJIMI_VOICE_NUM_BYTES; i++){  // Go byte by byte
            unsigned char byte = fileContents[i];
            uint8 byte_int = uint8(byte);
            voiceBytes[i] = byte_int;
        }
        
        return getSynthControlIdValuePairsForVoiceBytesArray(voiceBytes, channelTo);
    }
    
    KIJIMIPresetBytes& getLoadedPresetBytesAtIndex(int index)
    {
        return presetBank.getPresetBytesAtIndex(index);
    }
    
private:
    
    std::vector<KIJIMISynthControl> synthControls;
    KIJIMIPresetBank presetBank;
    
    void logMessage (const String& message)
    {
        // Broadcasts a "LOG:" action with a message that will be received in the editor and printed to the logArea component
        sendActionMessage(ACTION_LOG_PREFIX + message);
    }
    
};
