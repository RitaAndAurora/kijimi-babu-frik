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
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SPEED_VCO_1", "Ch I: PWM Speed", 40, 0, 0, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_PWM_VCO_1", "Ch I: PWM Amount", 41, 1, 1, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_PW_VCO_1", "Ch I: PW", 42, 2, 2, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SQR_VCO_1", "Ch I: Square", 43, 73, 24, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SAW_VCO_1", "Ch I: Sawtooth", 44, 74, 25, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_NOISE_VCO_1", "Ch I: Noise", 45, 3, 3, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_HPF_VCF_1", "Ch I: HPF", 46, 4, 4, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_RESh_VCF_1", "Ch I: RESh", 47, 5, 5, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LPF_VCF_1", "Ch I: LPF", 48, 6, 6, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_RESl_VCF_1", "Ch I: RESl", 49, 7, 7, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_IL_VCF_1", "Ch I: VCF IL", 50, 8, 8, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AL_VCF_1", "Ch I: VCF AL", 51, 9, 9, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_A_VCF_1", "Ch I: VCF A", 52, 10, 10, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_D_VCF_1", "Ch I: VCF D", 53, 11, 11, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_R_VCF_1", "Ch I: VCF R", 54, 12, 12, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_VCA_1", "Ch I: VCF Level", 55, 13, 13, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SINE__VCA_1", "Ch I: Sine Level", 56, 14, 14, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_A_VCA_1", "Ch I: VCA A", 57, 15, 15, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_D_VCA_1", "Ch I: VCA D", 58, 16, 16, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_S_VCA_1", "Ch I: VCA S", 59, 17, 17, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_R_VCA_1", "Ch I: VCA R", 60, 18, 18, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LEVEL_VCA_1", "Ch I: Channel Level", 61, 19, 19, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_INIT_BR_TOUCH_1", "Ch I: Initial Brilliance", 62, 20, 20, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_INIT_LEV_TOUCH_1", "Ch I: Initial Level", 63, 21, 21, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_BR_TOUCH_1", "Ch I: After Brilliance", 65, 22, 22, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_LEV_TOUCH_1", "Ch I: After Level", 66, 23, 23, 1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SPEED_VCO_2", "Ch II: PWM Speed", 67, 30, 0, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_PWM_VCO_2", "Ch II: PWM Amount", 68, 31, 1, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_PW_VCO_2", "Ch II: PW", 69, 32, 2, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SQR_VCO_2", "Ch II: Square", 70, 76, 24, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SAW_VCO_2", "Ch II: Sawtooth", 71, 75, 25, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_NOISE_VCO_2", "Ch II: Noise", 72, 33, 3, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_HPF_VCF_2", "Ch II: HPF", 73, 34, 4, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_RESh_VCF_2", "Ch II: RESh", 119, 35, 5, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LPF_VCF_2", "Ch II: LPF", 75, 36, 6, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_RESl_VCF_2", "Ch II: RESl", 76, 37, 7, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_IL_VCF_2", "Ch II: VCF IL", 77, 38, 8, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AL_VCF_2", "Ch II: VCF AL", 78, 39, 9, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_A_VCF_2", "Ch II: VCF A", 79, 24, 10, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_D_VCF_2", "Ch II: VCF D", 80, 25, 11, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_R_VCF_2", "Ch II: VCF R", 81, 26, 12, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_VCA_2", "Ch II: VCF Level", 82, 27, 13, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SINE__VCA_2", "Ch II: Sine Level", 83, 28, 14, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_A_VCA_2", "Ch II: VCA A", 84, 29, 15, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_D_VCA_2", "Ch II: VCA D", 85, 40, 16, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_S_VCA_2", "Ch II: VCA S", 86, 41, 17, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_R_VCA_2", "Ch II: VCA R", 87, 42, 18, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LEVEL_VCA_2", "Ch II: Channel Level", 88, 43, 19, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_INIT_BR_TOUCH_2", "Ch II: Initial Brilliance", 89, 44, 20, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_INIT_LEV_TOUCH_2", "Ch II: Initial Level", 90, 45, 21, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_BR_TOUCH_2", "Ch II: After Brilliance", 91, 46, 22, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_LEV_TOUCH_2", "Ch II: After Level", 92, 47, 23, 2, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_COARSE_PITCH", "Pitch Coarse", 93, 77, -1, -1, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_FINE_PITCH", "Pitch Fine", 94, 78, -1, -1, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_DETUNE_CH2_PITCH", "Detune Ch II", 95, 79, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_FEET_1_FEET", "Feet I", 102, 48, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_FEET_2_FEET", "Feet II", 103, 49, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_FUNCTION_SUB_OSC", "Sub Osc Function", 104, 50, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SPEED_SUB_OSC", "Sub Osc Speed", 105, 51, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO_SUB_OSC", "Sub Osc VCO Amount", 106, 52, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_SUB_OSC", "Sub Osc VCF Amount", 107, 53, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCA_SUB_OSC", "Sub Osc VCA Amount", 108, 54, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MIX", "Mix", 8, 55, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_BRILL", "Brilliance", 109, 56, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_RESSO", "Ressonance", 110, 57, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_INITIAL_TOUCH", "Initial Pitch Bend", 111, 58, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SPEED_TOUCH", "Touch Response Sub Osc Speed", 112, 59, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO_TOUCH", "Touch Response Sub Osc VCO Amount", 113, 60, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_TOUCH", "Touch Response Sub Osc VCF Amount", 114, 61, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_BR_LOW_KBRD", "Brilliance Low", 115, 62, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_BR_HIGH_KBRD", "Brilliance High", 116, 63, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LEV_LOW_KBRD", "Level Low", 117, 64, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LEV_HIGH_KBRD", "Level High", 118, 65, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_GLIDE_MODE_GLIDE", "Glide Mode", 39, -1, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_GLIDE_TIME_GLIDE", "Glide Time", 5, 66, -1, -1, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SUSTAIN_MODE", "Sustain Mode", 9, -1, -1, -1, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SUSTAIN_TIME", "Sustain Time", 11, -1, -1, -1, false));
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
