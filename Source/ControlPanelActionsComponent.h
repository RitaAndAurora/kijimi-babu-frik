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
        importButton.setButtonText("Load patch");
        addAndMakeVisible (importButton);
        
        saveButton.addListener (this);
        saveButton.setButtonText("Save patch");
        addAndMakeVisible (saveButton);
        
        randomizeButton.addListener (this);
        randomizeButton.setButtonText("Randomize...");
        addAndMakeVisible (randomizeButton);
        
        sendButton.addListener (this);
        sendButton.setButtonText("Send to synth");
        addAndMakeVisible (sendButton);
        
        loadStateButton.addListener (this);
        loadStateButton.setButtonText("Load from synth");
        addAndMakeVisible (loadStateButton);
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
        float buttonWidthShort = getWidth() * 80/800;
        float buttonWidthLong = getWidth() * 120/800;
        float buttonHeight = getHeight();
        float margin = getWidth() * 10/800;
        importButton.setBounds (0, 0, buttonWidthShort, buttonHeight);
        saveButton.setBounds (1 * (buttonWidthShort + margin), 0, buttonWidthShort, buttonHeight);
        randomizeButton.setBounds (2 * (buttonWidthShort + margin), 0, buttonWidthLong, buttonHeight);
        sendButton.setBounds (2 * (buttonWidthShort + margin) + 1 * (buttonWidthLong + margin), 0, buttonWidthLong, buttonHeight);
        loadStateButton.setBounds (2 * (buttonWidthShort + margin) + 2 * (buttonWidthLong + margin), 0, buttonWidthLong, buttonHeight);
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
            /*PopupMenu m;
            m.setLookAndFeel(&babuFrikBaseLookAndFeel);
            m.addItem (MENU_OPTION_ID_IMPORT_FROM_PATCH_FILE, "From patch file");
            selectedActionID = m.showAt(button);*/
            selectedActionID = MENU_OPTION_ID_IMPORT_FROM_PATCH_FILE;
        }
        else if (button == &saveButton)
        {
            /*PopupMenu m;
            m.setLookAndFeel(&babuFrikBaseLookAndFeel);
            m.addItem (MENU_OPTION_ID_SAVE_PATCH_TO_PATCH_FILE, "To patch file");
            selectedActionID = m.showAt(button);*/
            selectedActionID = MENU_OPTION_ID_SAVE_PATCH_TO_PATCH_FILE;
        }
        else if (button == &randomizeButton)
        {
            /*PopupMenu subMenuPatch;
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_5_ID, "5%");
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_10_ID, "10%");
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_25_ID, "25%");
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_50_ID, "50%");
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_100_ID, "100%");
             
            PopupMenu m;
            m.setLookAndFeel(&babuFrikBaseLookAndFeel);
            m.addSubMenu ("Patch", subMenuPatch);
            selectedActionID = m.showAt(button);*/
            PopupMenu subMenuPatch;
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_5_ID, "5%");
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_10_ID, "10%");
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_25_ID, "25%");
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_50_ID, "50%");
            subMenuPatch.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_100_ID, "100%");
            subMenuPatch.setLookAndFeel(&babuFrikBaseLookAndFeel);
            selectedActionID = subMenuPatch.showAt(button);
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
            processor->sendControlsToSynth();
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_5_ID){
            processor->randomizeControlValues(0.05);
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_10_ID){
            processor->randomizeControlValues(0.10);
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_25_ID){
            processor->randomizeControlValues(0.25);
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_50_ID){
            processor->randomizeControlValues(0.50);
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_100_ID){
            processor->randomizeControlValues(1.0);
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

