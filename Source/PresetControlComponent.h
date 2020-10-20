/*
  ==============================================================================

    PresetControlComponent.h
    Created: 24 May 2019 7:02:31pm
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "KIJIMIInterface.h"
#include "BabuFrikBaseLookAndFeel.h"
#include "defines.h"


class NumericEditorLabel: public Label
{
public:
    virtual TextEditor* createEditorComponent() override
    {
        // Sublass Label method to create an editor that only allows numeric characters and sets a max length
        TextEditor* const ed = Label::createEditorComponent();
        ed->setInputRestrictions(3, "0123456789");
        ed->setJustification(Justification::centred);
        ed->setColour(TextEditor::focusedOutlineColourId, Colours::transparentBlack);
        return ed;
    }
};


class PresetControlComponent: public Component,
                              public Button::Listener,
                              public ActionListener
{
public:
    
    PresetControlComponent ()
    {
        currentPresetSlidersOutOfSync = false;
        
        loadFileButton.addListener (this);
        loadFileButton.setButtonText("Load bank...");
        addAndMakeVisible (loadFileButton);
        
        loadedFileLabel.setJustificationType (Justification::left);
        loadedFileLabel.setText("-", dontSendNotification);
        addAndMakeVisible (loadedFileLabel);
                
        babuFrikBaseLookAndFeelSmallerFont.defaultFontSize = 11.0;

        nextPresetButton.addListener (this);
        nextPresetButton.setButtonText(">");
        nextPresetButton.setEnabled(false);
        nextPresetButton.setLookAndFeel(&babuFrikBaseLookAndFeelSmallerFont);
        addAndMakeVisible (nextPresetButton);
        
        previousPresetButton.addListener (this);
        previousPresetButton.setButtonText("<");
        previousPresetButton.setEnabled(false);
        previousPresetButton.setLookAndFeel(&babuFrikBaseLookAndFeelSmallerFont);
        addAndMakeVisible (previousPresetButton);
        
        presetNameLabel.setJustificationType (Justification::centred);
        presetNameLabel.setText(String(PRESET_NAME_DEFAULT_TEXT), dontSendNotification);
        presetNameLabel.setEnabled(false);
        presetNameLabel.setEditable (true);
        presetNameLabel.onTextChange = [this] { setPresetFromName(); };
        addAndMakeVisible (presetNameLabel);
        
        saveToCurrentBankLocationButton.addListener (this);
        saveToCurrentBankLocationButton.setEnabled(false);
        saveToCurrentBankLocationButton.setButtonText("Save to bank location...");
        addAndMakeVisible (saveToCurrentBankLocationButton);
        
        saveBankFileButton.addListener (this);
        saveBankFileButton.setEnabled(false);
        saveBankFileButton.setButtonText("Save bank file...");
        addAndMakeVisible (saveBankFileButton);
    }
    
    ~PresetControlComponent ()
    {
        processor->removeActionListener(this);  // Stop receivng messages from processor
        
        kijimiBankImporterThreadModal.getAlertWindow()->setLookAndFeel(nullptr);
    }
    
    void initialize (BabuFrikAudioProcessor* p)
    {
        // Set processor object
        processor = p;
        
        // Set up listeners
        processor->addActionListener(this);  // Receive messages from processor
        
        // Set initial state of mmebers by getting data from processor
        setStateFromProcessor();
        
        // Also intitialize the bank importer so it has reference to processor
        kijimiBankImporterThreadModal.initialize(processor);
        kijimiBankImporterThreadModal.getAlertWindow()->setLookAndFeel(&babuFrikBaseLookAndFeel);
    }
    
    void setStateFromProcessor () {
        // Load preset (plus out of sync indicator) name and bank filename (if data loaded)
        loadedFileLabel.setText(processor->kijimiInterface->getPresetBankLoadedFilename(), dontSendNotification);
        setPresetNameLabel ();
        if ((processor->currentPresetOutOfSyncWithSliders) && (presetNameLabel.getText() != String(PRESET_NAME_DEFAULT_TEXT))){
            presetNameLabel.setText(presetNameLabel.getText() + String(PRESET_NAME_MODIFIED_TEXT), dontSendNotification);
            //saveToCurrentBankLocationButton.setEnabled(true);  // Enable save preset button as it is out of sync
        }
        
        if (processor->kijimiInterface->hasPresetsDataLoaded()){
            enableBankTransportButtons();
        }
    }
    
    void resized () override
    {
        float unitMargin = getWidth() * 10/800;
        float fileNameLabelWidth = getWidth() * 120/800;
        float presetNameLabelWidth = getWidth() * 45/800;
        float defaultButtonWidth = getWidth() * 110/800;
        float nextPrevButtonWidth = getWidth() * 22/800;
        float saveBankLocationButtonWidth = getWidth() * 150/800;
        
        loadFileButton.setBounds (0, 0, defaultButtonWidth, getHeight());
        loadedFileLabel.setBounds (defaultButtonWidth + unitMargin, 0, fileNameLabelWidth, getHeight());
        previousPresetButton.setBounds (defaultButtonWidth + fileNameLabelWidth + 2 * unitMargin, 0, nextPrevButtonWidth, getHeight());
        presetNameLabel.setBounds (defaultButtonWidth + fileNameLabelWidth + nextPrevButtonWidth + 3 * unitMargin, 0, presetNameLabelWidth, getHeight());
        nextPresetButton.setBounds (defaultButtonWidth + fileNameLabelWidth + nextPrevButtonWidth + presetNameLabelWidth + 4 * unitMargin, 0, nextPrevButtonWidth, getHeight());
        saveToCurrentBankLocationButton.setBounds (defaultButtonWidth + fileNameLabelWidth + 2 * nextPrevButtonWidth + presetNameLabelWidth + 5 * unitMargin, 0, saveBankLocationButtonWidth, getHeight());
        saveBankFileButton.setBounds (defaultButtonWidth + fileNameLabelWidth + 2 * nextPrevButtonWidth + presetNameLabelWidth + saveBankLocationButtonWidth + 6 * unitMargin, 0, defaultButtonWidth, getHeight());
    }
    
    void loadBankFile()
    {
        FileChooser fileChooser ("Please select a KIJIMI bank file to load...",
                                 processor->getDirectoryForFileSaveLoad(),
                                 "*.syx");
        if (fileChooser.browseForFileToOpen())
        {
            File bankFile (fileChooser.getResult());
            processor->setLastUserDirectoryForFileSaveLoad(bankFile);
            processor->loadBankFile(&bankFile);
            processor->computeTimbreSpace();
        }
    }
    
    // Modal with progress bar for importing bank from KIJIMI
    class KIJIMIBankImporterThreadModal  : public ThreadWithProgressWindow
    {
    public:
        KIJIMIBankImporterThreadModal()    : ThreadWithProgressWindow ("Loading bank from KIJIMI...", true, true)
        {
        }
        
        void initialize (BabuFrikAudioProcessor* p)
        {
            // Set processor object
            processor = p;
        }
        
        int bankNumber = 0;
        bool succeeded = false;
        BabuFrikAudioProcessor* processor;
     
        void run()
        {
            processor->receivedPresetsBytes.clear();
            int nPresets = 128;
            int nCancelled = 0;
            
            for (int currentPreset = 0; currentPreset < nPresets; currentPreset++)
            {
                if (threadShouldExit())
                    break;
                
                if (nCancelled > 5)
                    break;
     
                // this will update the progress bar on the dialog box
                setProgress ((currentPreset + 1) / (double) nPresets);
                
                // Get one preset and wait until received
                int64 timeRequestedPreset = Time::getCurrentTime().toMilliseconds();
                processor->lastReceivedKIJIMIPresetBytes = {0};
                processor->waitingToReceiveKIJIMIPresetBytes = true;
                processor->requestGetPresetFromKIJIMI(bankNumber, currentPreset);
                bool cancelled = false;
                while (processor->waitingToReceiveKIJIMIPresetBytes == true){
                    sleep(50);
                    if (Time::getCurrentTime().toMilliseconds() - timeRequestedPreset > 300){
                        cancelled = true;
                        nCancelled += 1;
                        break; // if waiting too much for receiving a single preset, cancel this one
                    }
                }
                if (!cancelled){
                    processor->receivedPresetsBytes.push_back(processor->lastReceivedKIJIMIPresetBytes);
                }
            }
            if (nCancelled == 0){
                succeeded = true;
            }
            
        }
    };
    KIJIMIBankImporterThreadModal kijimiBankImporterThreadModal;
    
    void loadBankFromKijimi(int bankNumber, const String& bankName)
    {
        kijimiBankImporterThreadModal.bankNumber = bankNumber;
        
        if (kijimiBankImporterThreadModal.runThread())
        {
            if (kijimiBankImporterThreadModal.succeeded){
                // Importing succeeded, compute timbre space
                processor->loadPresetBankFromPresetsBytes(processor->receivedPresetsBytes, bankName);
                processor->computeTimbreSpace();
                kijimiBankImporterThreadModal.succeeded = false;
            } else {
                // Importing failed, show message
                AlertWindow w ("Oups, there was a problem loading the bank from KIJIMI...", "", AlertWindow::NoIcon);
                w.setLookAndFeel(&babuFrikBaseLookAndFeel);
                w.addButton ("Ok", 0, KeyPress (KeyPress::returnKey, 0, 0));
                w.runModalLoop();
            }
        }
        else
        {
            // If user canceled, do nothing
        }
    }
    
    void enableBankTransportButtons() {
        previousPresetButton.setEnabled(true);
        nextPresetButton.setEnabled(true);
        presetNameLabel.setEnabled(true);
        saveBankFileButton.setEnabled(true);
        saveToCurrentBankLocationButton.setEnabled(true);
    }
    
    void buttonClicked (Button* button) override
    {
        if (button == &nextPresetButton)
        {
            processor->nextPreset();
        }
        else if (button == &previousPresetButton)
        {
            processor->previousPreset();
        }
        else if (button == &loadFileButton)
        {
            PopupMenu loadBankSubmenu;
            loadBankSubmenu.setLookAndFeel(&babuFrikBaseLookAndFeel);
            loadBankSubmenu.addItem (MENU_OPTION_ID_LOAD_BANK_FROM_FILE, "...from file");
            PopupMenu bankOptionsSubmenu;
            bankOptionsSubmenu.setLookAndFeel(&babuFrikBaseLookAndFeel);
            bankOptionsSubmenu.addItem (1, "Bank 1");
            bankOptionsSubmenu.addItem (2, "Bank 2");
            bankOptionsSubmenu.addItem (4, "Bank 3");
            bankOptionsSubmenu.addItem (5, "Bank 4");
            bankOptionsSubmenu.addItem (6, "Bank 5");
            bankOptionsSubmenu.addItem (7, "Bank 6");
            bankOptionsSubmenu.addItem (8, "Bank 7");
            bankOptionsSubmenu.addItem (9, "Bank 8");
            bankOptionsSubmenu.addItem (10, "Bank 9");
            bankOptionsSubmenu.addItem (3, "MJ");
            bankOptionsSubmenu.addItem (11, "RD");
            loadBankSubmenu.addSubMenu ("..from KIJIMI", bankOptionsSubmenu);
            
            int selectedActionID = loadBankSubmenu.showAt(button);
            if (selectedActionID == MENU_OPTION_ID_LOAD_BANK_FROM_FILE){
                loadBankFile();
            } else if ((selectedActionID >= 1) && (selectedActionID <= 11)){
                int selectedBank = selectedActionID - 1;
                StringArray bankNames = {
                    "Bank 1",
                    "Bank 2",
                    "MJ",
                    "Bank 3",
                    "Bank 4",
                    "Bank 5",
                    "Bank 6",
                    "Bank 7",
                    "Bank 8",
                    "Bank 9",
                    "RD",
                };
                loadBankFromKijimi(selectedBank, bankNames[selectedBank]);
            }

        } else if (button == &saveToCurrentBankLocationButton)
        {
            AlertWindow w ("Plase choose the location where the preset should be saved", "", AlertWindow::NoIcon);
            w.setLookAndFeel(&babuFrikBaseLookAndFeel);
            w.addTextEditor ("bankLocation", "", "");
            w.getTextEditor ("bankLocation")->setInputRestrictions(3, "0123456789");  // Make it numbers only
            w.addButton ("Cancel", 0, KeyPress (KeyPress::escapeKey, 0, 0));
            w.addButton ("Save", 1, KeyPress (KeyPress::returnKey, 0, 0));
            
            if (w.runModalLoop() == 1) // use clicked "ok"
            {
                // this is the text they entered..
                int location = w.getTextEditorContents ("bankLocation").getIntValue() - 1;
                processor->savePresetToBankLocation(location);
            }
            
        } else if (button == &saveBankFileButton)
        {
            processor->saveBankFile();
        }
    }
    
    void setPresetFromName ()
    {
        // Subtract 1 as loadPresetAtIndex is 0-indexed but user inputs 1-indexed
        int presetIdx = presetNameLabel.getText().getIntValue() - 1;
        if (presetIdx > -1){
            // Valid number entered
            processor->loadPresetAtIndex(presetIdx);
        } else {
            // Re-set it to the preset already had
            processor->loadPresetAtIndex(processor->currentPreset);
        }
    }
    
    void setPresetNameLabel () {
        if (processor->currentPreset > -1){
            // Add 1 as label should show preset numbers 1-indexed but currentPreset stores them 0-indexed
            presetNameLabel.setText(String(PRESET_NAME_PREFIX) + (String)(processor->currentPreset + 1), dontSendNotification);
        } else {
            presetNameLabel.setText(String(PRESET_NAME_DEFAULT_TEXT), dontSendNotification);
        }
    }
    
    void actionListenerCallback (const String &message) override
    {
        if (message.startsWith(String(ACTION_SET_CURRENT_PRESET_NAME))){
            setPresetNameLabel ();
            
        } else if (message.startsWith(String(ACTION_SET_CURRENT_PRESET_NAME_OUT_OF_SYNC))){
            if (!currentPresetSlidersOutOfSync) {
                currentPresetSlidersOutOfSync = true;
                if ((presetNameLabel.getText() != String(PRESET_NAME_DEFAULT_TEXT)) && (!presetNameLabel.getText().endsWith(String(PRESET_NAME_MODIFIED_TEXT)))){
                    presetNameLabel.setText(presetNameLabel.getText() + String(PRESET_NAME_MODIFIED_TEXT), dontSendNotification);
                    //saveToCurrentBankLocationButton.setEnabled(true);  // Enable save preset button as it is out of sync
                }
            }
        } else if (message.startsWith(String(ACTION_SET_CURRENT_PRESET_NAME_IN_SYNC))){
            setPresetNameLabel ();
            if (currentPresetSlidersOutOfSync) {
                currentPresetSlidersOutOfSync = false;
                //saveToCurrentBankLocationButton.setEnabled(false);  // Disable save preset button as it is out of sync
                if ((presetNameLabel.getText() != String(PRESET_NAME_DEFAULT_TEXT)) && (presetNameLabel.getText().endsWith(String(PRESET_NAME_MODIFIED_TEXT)))){
                    String presetNameLabelText = presetNameLabel.getText();
                    presetNameLabel.setText(presetNameLabelText.substring(presetNameLabelText.length() - 1), dontSendNotification);   
                }
            }
        }
        else if (message.startsWith(String(ACTION_BANK_FILE_LOADED))){
            loadedFileLabel.setText(processor->kijimiInterface->getPresetBankLoadedFilename() , dontSendNotification);
            presetNameLabel.setText(String(PRESET_NAME_DEFAULT_TEXT), dontSendNotification);
            enableBankTransportButtons();
        } else if (message.startsWith(String(ACTION_CURRENT_PRESENT_SAVED_TO_BANK))){
            //saveToCurrentBankLocationButton.setEnabled(false);
        }
    }
    
private:
    BabuFrikAudioProcessor* processor;
    
    BabuFrikBaseLookAndFeel babuFrikBaseLookAndFeel;
    BabuFrikBaseLookAndFeel babuFrikBaseLookAndFeelSmallerFont;  // Needed for the next/previous preset buttons to show properly on smaller scales
    
    TextButton loadFileButton;
    Label loadedFileLabel;
    TextButton nextPresetButton;
    TextButton previousPresetButton;
    NumericEditorLabel presetNameLabel;
    TextButton saveToCurrentBankLocationButton;
    TextButton saveBankFileButton;
    
    bool currentPresetSlidersOutOfSync;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PresetControlComponent);
};
