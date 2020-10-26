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
        float buttonHeight = getHeight();
        float margin = getWidth() * 10/800;
        importButton.setBounds (0, 0, buttonWidthLong, buttonHeight);
        saveButton.setBounds (1 * (buttonWidthLong + margin), 0, buttonWidthLong, buttonHeight);
        randomizeButton.setBounds (2 * (buttonWidthLong + margin), 0, buttonWidthShort, buttonHeight);
    }
    
    void actionListenerCallback (const String &message) override
    {
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
        
        if (selectedActionID > 0){
            processMenuAction(selectedActionID);
        }
    }
    
    void processMenuAction(int actionID)
    {
        if (actionID == MENU_OPTION_ID_RANDOMIZE) {
            processor->randomizeControlValues();
        } else if (actionID == MENU_OPTION_ID_IMPORT_FROM_PATCH_FILE){
            processor->importFromPatchFile();
        } else if (actionID == MENU_OPTION_ID_SAVE_PATCH_TO_PATCH_FILE){
            processor->saveToPatchFile();
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
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ControlPanelActionsComponent);
};

