/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
BabuFrikAudioProcessorEditor::BabuFrikAudioProcessorEditor (BabuFrikAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    setLookAndFeel(&customLookAndFeel);
    
    // Init header and footer components
    header.initialize(&processor);
    addAndMakeVisible (header);
    footer.initialize(&processor);
    addAndMakeVisible (footer);
    
    // Add logo component (does not need initialization)
    addAndMakeVisible (logo);
    
    // Init MIDI settings panel
    midiSettingsPanel.initialize(&processor);
    addAndMakeVisible (midiSettingsPanel);
    
    // Init preset control component
    presetControlPanel.initialize(&processor);
    addAndMakeVisible (presetControlPanel);
    
    // Init KIJIMI contorl panel component
    kijimiControlPanel.initialize(&processor);
    addAndMakeVisible (kijimiControlPanel);
    controlPanelActions.initialize(&processor);
    addAndMakeVisible (controlPanelActions);
    
    // Init timbre space component
    timbreSpace.initialize(&processor);
    addAndMakeVisible (timbreSpace);

    // Logging area
    if (LOG_IN_UI == 1){
        addAndMakeVisible (logArea);
        logArea.setMultiLine (true);
        logArea.setReturnKeyStartsNewLine (true);
        logArea.setReadOnly (true);
        logArea.setScrollbarsShown (true);
        logArea.setCaretVisible (false);
        logArea.setPopupMenuEnabled (true);
        logArea.setColour (TextEditor::backgroundColourId, Colour (0x32ffffff));
        logArea.setColour (TextEditor::outlineColourId, Colour (0x1c000000));
        logArea.setColour (TextEditor::shadowColourId, Colour (0x16000000));
    }
    
    // Register editor as an ActionListener for actions comming from the processor
    processor.addActionListener(this);  // Receive messages from processor
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (10, 10);  // Is re-set when running resize()
    
    // Disable resize
    setResizable(false, false);
}

BabuFrikAudioProcessorEditor::~BabuFrikAudioProcessorEditor()
{
    setLookAndFeel (nullptr);
    processor.removeActionListener(this);
}

//==============================================================================
void BabuFrikAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::black);
}

void BabuFrikAudioProcessorEditor::resized()
{
    float scale = processor.uiScaleFactor;
    
    float unitMargin = 5 * scale;
    float unitRowHeight = 20 * scale;
    float fullWidth = 1200 * scale;
    float footerWidth = 170 * scale;
    
    float headerHeight = 1.5 * unitRowHeight;
    float midiSettingsHeight = 1 * unitRowHeight;
    float presetLoaderHeight = 1 * unitRowHeight;
    float timbreSpaceHeight = fullWidth / 2.5;
    float kijimiControlPanelHeight = fullWidth / 2.5;
    float controlPanelActionsHeight = 1 * unitRowHeight;
    float footerHeight = 1 * unitRowHeight;
    float logAreaHeight = 3 * unitRowHeight;
    
    bool _showTimbreSpace = true;
    bool _showLogArea = LOG_IN_UI == 1;
    
    float accumulatedHeight = 0;
    
    float raLogoHeight = (headerHeight + midiSettingsHeight + presetLoaderHeight + 1 * unitMargin) * 0.85;
    logo.setBounds(getWidth() - raLogoHeight * 2.2 - unitMargin * 1.5, unitMargin, raLogoHeight * 2.2, raLogoHeight);  // 2.2 = aspect ratio of logo image
    
    header.setBounds(unitMargin, accumulatedHeight + unitMargin, fullWidth, headerHeight);
    accumulatedHeight += unitMargin + headerHeight;
    
    midiSettingsPanel.setBounds(unitMargin, accumulatedHeight + unitMargin, fullWidth, midiSettingsHeight);
    accumulatedHeight += unitMargin + midiSettingsHeight;
    
    presetControlPanel.setBounds (unitMargin, accumulatedHeight + unitMargin, fullWidth, presetLoaderHeight);
    accumulatedHeight += unitMargin + presetLoaderHeight;
    
    kijimiControlPanel.setBounds (0,  accumulatedHeight, fullWidth, kijimiControlPanelHeight);
    accumulatedHeight += kijimiControlPanelHeight - unitMargin;  // Remove unit margin as it is already embeded in TS component
    
    if (_showTimbreSpace){
        timbreSpace.setBounds (0.368 * fullWidth, accumulatedHeight, (1 - 0.368) * (fullWidth + 0.5 * unitMargin), timbreSpaceHeight);
        accumulatedHeight += timbreSpaceHeight;
    }
    
    controlPanelActions.setBounds(unitMargin,  accumulatedHeight, fullWidth - footerWidth, controlPanelActionsHeight); // No add unitMargin, already in kijimiControlPanel
    // NOTE: don't accumulate height here as KIJIMI control panel extra is at same height as footer
    
    footer.setBounds(fullWidth - (footerWidth + 0.5 * unitMargin), accumulatedHeight, footerWidth, footerHeight); // No add unitMargin, already in kijimiControlPanel
    accumulatedHeight += footerHeight;
    
    if (_showLogArea){
        logArea.setBounds (unitMargin, accumulatedHeight + unitMargin, fullWidth, logAreaHeight);
        accumulatedHeight += unitMargin + logAreaHeight;
    }
    
    setSize(fullWidth, accumulatedHeight + unitMargin);
}

//==============================================================================
void BabuFrikAudioProcessorEditor::actionListenerCallback (const String &message)
{
    if (message.startsWith(String(ACTION_LOG_PREFIX))){
        logMessageInUI(message.substring(String(ACTION_LOG_PREFIX).length()));
    } else if (message.startsWith(String(ACTION_UPDATE_UI_SCALE_FACTOR))){
        resized();  // No need to update any local member here as scale factor is stored in processor
    }
}

void BabuFrikAudioProcessorEditor::logMessageInUI (const String& message)
{
    logArea.moveCaretToEnd();
    logArea.insertTextAtCaret(message);
}
