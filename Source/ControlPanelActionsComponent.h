/*
  ==============================================================================

    ControlPanelActionsComponent.h
    Created: 4 Jul 2019 9:14:13am
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "BabuFrikBaseLookAndFeel.h"
#include "defines.h"

class ControlPanelActionsComponent: public Component,
                       public ActionListener,
                       public Button::Listener
{
public:
    
    ControlPanelActionsComponent ()
    {
        importButton.addListener (this);
        importButton.setButtonText("Load patch from file");
        addAndMakeVisible (importButton);
        
        saveButton.addListener (this);
        saveButton.setButtonText("Save patch to file");
        addAndMakeVisible (saveButton);
        
        sendButton.addListener (this);
        sendButton.setButtonText("Send patch to KIJIMI");
        addAndMakeVisible (sendButton);
        
        loadStateButton.addListener (this);
        loadStateButton.setButtonText("Load current KIJIMI state");
        addAndMakeVisible (loadStateButton);
        
        randomizeButton.addListener (this);
        randomizeButton.setButtonText("Randomize!");
        addAndMakeVisible (randomizeButton);
    }
    
    ~ControlPanelActionsComponent ()
    {
        processor->removeActionListener(this);  // Stop receivng messages from processor
    }
    
    void initialize (BabuFrikAudioProcessor* p)
    {
        // Set processor object
        processor = p;
        
        // Set up listeners
        processor->addActionListener(this);  // Receive messages from processor
    }
    
    void resized () override
    {
        float buttonWidthShort = getWidth() * 100/800;
        float buttonWidthLong = getWidth() * 130/800;
        float buttonWidthXLong = getWidth() * 150/800;
        float buttonHeight = getHeight();
        float margin = getWidth() * 10/800;
        importButton.setBounds (0, 0, buttonWidthLong, buttonHeight);
        saveButton.setBounds (1 * (buttonWidthLong + margin), 0, buttonWidthLong, buttonHeight);
        sendButton.setBounds (2 * (buttonWidthLong + margin), 0, buttonWidthLong, buttonHeight);
        loadStateButton.setBounds (3 * (buttonWidthLong + margin), 0, buttonWidthXLong, buttonHeight);
        randomizeButton.setBounds (3 * (buttonWidthLong + margin) + 1 * (buttonWidthXLong + margin), 0, buttonWidthShort, buttonHeight);
    }
    
    void actionListenerCallback (const String &message) override
    {
        // TODO: implement action listenr handlers
    }
    
    void buttonClicked (Button* button) override
    {
        int  selectedActionID = -1;
        
        if (button == &importButton)
        {
            selectedActionID = MENU_OPTION_ID_IMPORT_FROM_PATCH_FILE;
        }
        else if (button == &saveButton)
        {
            selectedActionID = MENU_OPTION_ID_SAVE_PATCH_TO_PATCH_FILE;
        }
        else if (button == &randomizeButton)
        {
            selectedActionID = MENU_OPTION_ID_RANDOMIZE;
        }
        else if (button == &sendButton)
        {
            selectedActionID = MENU_OPTION_ID_SEND_PATCH_TO_SYNTH;
        }
        else if (button == &loadStateButton)
        {
            selectedActionID = MENU_OPTION_ID_LOAD_PATCH_FROM_SYNTH;
        }
        
        if (selectedActionID > 0){
            processMenuAction(selectedActionID);
        }
    }
    
    void processMenuAction(int actionID)
    {
        if (actionID == MENU_OPTION_ID_SEND_PATCH_TO_SYNTH){
            processor->sendControlsToSynth(true);
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE) {
            processor->randomizeControlValues();
        } else if (actionID == MENU_OPTION_ID_IMPORT_FROM_PATCH_FILE){
            processor->importFromPatchFile();
        } else if (actionID == MENU_OPTION_ID_SAVE_PATCH_TO_PATCH_FILE){
            processor->saveToPatchFile();
        } else if (actionID == MENU_OPTION_ID_LOAD_PATCH_FROM_SYNTH){
            processor->loadControlsStateFromSynth();
        } else {
            std::cout << "Non implemented action selected " << actionID << std::endl;
        }
    }
    
private:
    BabuFrikAudioProcessor* processor;
    
    BabuFrikBaseLookAndFeel babuFrikBaseLookAndFeel;
    
    TextButton importButton;
    TextButton saveButton;
    TextButton randomizeButton;
    TextButton sendButton;
    TextButton loadStateButton;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControlPanelActionsComponent);
};

