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
        float buttonWidth = getWidth() * 90/190;
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
                           "a droidsmith for KIJIMI, made by Rita & Aurora, v" + String(JucePlugin_VersionString),
                           AlertWindow::NoIcon);
            
            w.addCustomComponent(&about);
            w.addButton ("Ok", 0, KeyPress (KeyPress::returnKey, 0, 0));
            w.addButton ("User manual", 2, KeyPress (KeyPress::returnKey, 0, 0));
            w.addButton ("More info", 1, KeyPress (KeyPress::returnKey, 0, 0));
            w.addButton ("Donate :)", 3, KeyPress (KeyPress::returnKey, 0, 0));
            int modalReturn = w.runModalLoop();
            
            if (modalReturn == 1) // use clicked "more info"
            {
                URL(MORE_INFO_URL).launchInDefaultBrowser();
            }
            else if (modalReturn == 2) // use clicked "manual"
            {
                URL(USER_MANUAL_URL).launchInDefaultBrowser();
            } else if (modalReturn == 3) // use clicked "donate"
            {
                URL(DONATE_URL).launchInDefaultBrowser();
            }
        }
        else if (button == &settingsButton)
        {
            PopupMenu m;
            
            PopupMenu randomAmountOptionsSubmenu;
            randomAmountOptionsSubmenu.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_5_ID, "5%", true, processor->randomizationSettings.amount == 5);
            randomAmountOptionsSubmenu.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_10_ID, "10%", true, processor->randomizationSettings.amount == 10);
            randomAmountOptionsSubmenu.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_25_ID, "25%", true, processor->randomizationSettings.amount == 25);
            randomAmountOptionsSubmenu.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_50_ID, "50%", true, processor->randomizationSettings.amount == 50);
            randomAmountOptionsSubmenu.addItem (MENU_OPTION_ID_RANDOMIZE_PATCH_100_ID, "100%", true, processor->randomizationSettings.amount == 100);
            
            PopupMenu randomPanelOptionsSubmenu;
            randomPanelOptionsSubmenu.addItem (MENU_OPTION_ID_RANDOMIZE_MAIN_PANEL, "Main panel", true, processor->randomizationSettings.mainPanel == true);
            randomPanelOptionsSubmenu.addItem (MENU_OPTION_ID_RANDOMIZE_EXTRA_CONTROLS, "Extra controls", true, processor->randomizationSettings.extraPanel == true);
            randomPanelOptionsSubmenu.addItem (MENU_OPTION_ID_RANDOMIZE_LFOS_PANEL, "Individual LFOs/ADSR2", true, processor->randomizationSettings.lfosPanel == true);
            
            PopupMenu randomOptionsSubmenu;
            randomOptionsSubmenu.addSubMenu ("Amount", randomAmountOptionsSubmenu);
            randomOptionsSubmenu.addSubMenu ("Affected controls", randomPanelOptionsSubmenu);
            
            m.addSubMenu ("Randomization settings", randomOptionsSubmenu);
            
            
            PopupMenu midiDevicesSubMenu;
            bool autoScanTicked = processor->midiDevicesAutoScanEnabled;
            int autoScanMenuOptionID = processor->midiDevicesAutoScanEnabled ? MENU_OPTION_MIDI_SET_AUTOSCAN_OFF : MENU_OPTION_MIDI_SET_AUTOSCAN_ON;
            bool scanNowEnabled = !processor->midiDevicesAutoScanEnabled;
            midiDevicesSubMenu.addItem (autoScanMenuOptionID, "Auto-scan MIDI devices", true, autoScanTicked);
            midiDevicesSubMenu.addItem (MENU_OPTION_MIDI_SCAN_NOW, "Scan devices now", scanNowEnabled, false);
            m.addSubMenu ("MIDI device scan", midiDevicesSubMenu);
            
            int automaticSyncWithSynthTicked = processor->automaticSyncWithSynthEnabled;
            m.addItem (MENU_OPTION_TOGGLE_AUTO_SYNC_WITH_SYNTH, "Auto-sync with KIJIMI state", true, automaticSyncWithSynthTicked);
            
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
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_5_ID){
            processor->randomizationSettings.amount = 5;
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_10_ID){
            processor->randomizationSettings.amount = 10;
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_25_ID){
            processor->randomizationSettings.amount = 25;
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_50_ID){
            processor->randomizationSettings.amount = 50;
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_PATCH_100_ID){
            processor->randomizationSettings.amount = 100;
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_MAIN_PANEL){
            processor->randomizationSettings.mainPanel = !processor->randomizationSettings.mainPanel;
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_EXTRA_CONTROLS){
            processor->randomizationSettings.extraPanel = !processor->randomizationSettings.extraPanel;
        } else if (actionID == MENU_OPTION_ID_RANDOMIZE_LFOS_PANEL){
            processor->randomizationSettings.lfosPanel = !processor->randomizationSettings.lfosPanel;
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


