/*
  ==============================================================================

    FooterComponent.h
    Created: 2 Jul 2019 8:51:40am
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "BabuFrikBaseLookAndFeel.h"
#include "AboutComponent.h"
#include "defines.h"

class FooterComponent: public Component,
                       public ActionListener,
                       public Button::Listener
{
public:
    
    FooterComponent ()
    {
        aboutButton.addListener (this);
        aboutButton.setButtonText("About");
        addAndMakeVisible (aboutButton);
        
        settingsButton.addListener (this);
        settingsButton.setButtonText("Settings...");
        addAndMakeVisible (settingsButton);
    }
    
    ~FooterComponent ()
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
        float buttonWidth = getWidth() * 80/170;
        float buttonHeight = getHeight();
        aboutButton.setBounds (getWidth() - buttonWidth, 0, buttonWidth, buttonHeight);
        about.setBounds (0, 0, 400, 300);
        
        settingsButton.setBounds (getWidth() - 2.05 * buttonWidth, 0, buttonWidth, buttonHeight);
    }
    
    void actionListenerCallback (const String &message) override
    {
        // TODO: implement action listenr handlers
    }
    
    void buttonClicked (Button* button) override
    {
        int selectedActionID = -1;
        
        if (button == &aboutButton)
        {
            AlertWindow w ("Babu Frik",
                           "a droidsmith for KIJIMI, made by Rita & Aurora, v" + String(VERSION),
                           AlertWindow::NoIcon);
            
            w.setLookAndFeel(&babuFrikBaseLookAndFeel);
            w.addCustomComponent(&about);
            w.addButton ("Ok", 0, KeyPress (KeyPress::returnKey, 0, 0));
            w.addButton ("More info", 1, KeyPress (KeyPress::returnKey, 0, 0));
            //w.addButton ("Donate :)", 2, KeyPress (KeyPress::returnKey, 0, 0));
            int modalReturn = w.runModalLoop();
            if (modalReturn == 1) // use clicked "more info"
            {
                URL(MORE_INFO_URL).launchInDefaultBrowser();
            }
            else if (modalReturn == 2) // use clicked "donate"
            {
                URL(DONATE_URL).launchInDefaultBrowser();
            }
        }
        else if (button == &settingsButton)
        {
            PopupMenu midiDevicesSubMenu;
            bool autoScanTicked = processor->midiDevicesAutoScanEnabled;
            int autoScanMenuOptionID = processor->midiDevicesAutoScanEnabled ? MENU_OPTION_MIDI_SET_AUTOSCAN_OFF : MENU_OPTION_MIDI_SET_AUTOSCAN_ON;
            bool scanNowEnabled = !processor->midiDevicesAutoScanEnabled;
            midiDevicesSubMenu.addItem (autoScanMenuOptionID, "Auto-scan MIDI devices", true, autoScanTicked);
            midiDevicesSubMenu.addItem (MENU_OPTION_MIDI_SCAN_NOW, "Scan devices now", scanNowEnabled, false);
            
            PopupMenu m;
            m.setLookAndFeel(&babuFrikBaseLookAndFeel);
            m.addSubMenu ("MIDI device scan", midiDevicesSubMenu);
            
            int automaticSyncWithSynthTicked = processor->automaticSyncWithSynthEnabled;
            m.addItem (MENU_OPTION_TOGGLE_AUTO_SYNC_WITH_SYNTH, "Auto-sync with KIJIMI", true, automaticSyncWithSynthTicked);
            
            selectedActionID = m.showAt(button);
            
        }
        
        if (selectedActionID > 0){
            processMenuAction(selectedActionID);
        }
    }
    
    void processMenuAction(int actionID)
    {
        if (actionID == MENU_OPTION_MIDI_SET_AUTOSCAN_OFF){
            processor->setMidiDevicesAutoScan(false);
        } else if (actionID == MENU_OPTION_MIDI_SET_AUTOSCAN_ON){
            processor->setMidiDevicesAutoScan(true);
        } else if (actionID == MENU_OPTION_MIDI_SCAN_NOW){
            processor->triggerMidiDevicesScan();
        } else if (actionID == MENU_OPTION_TOGGLE_AUTO_SYNC_WITH_SYNTH){
            processor->toggleAutomaticSyncWithSynth();
        }
    }
    
private:
    BabuFrikAudioProcessor* processor;
    
    BabuFrikBaseLookAndFeel babuFrikBaseLookAndFeel;
    
    AboutComponent about;
    TextButton aboutButton;
    TextButton settingsButton;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FooterComponent);
};


