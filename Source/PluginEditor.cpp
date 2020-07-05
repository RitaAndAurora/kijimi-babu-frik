/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
KijimitimbreSpaceAudioProcessorEditor::KijimitimbreSpaceAudioProcessorEditor (KijimitimbreSpaceAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    bgImage = ImageCache::getFromMemory (BinaryData::UIBackground_png, BinaryData::UIBackground_pngSize);
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

KijimitimbreSpaceAudioProcessorEditor::~KijimitimbreSpaceAudioProcessorEditor()
{
    setLookAndFeel (nullptr);
    processor.removeActionListener(this);
}

//==============================================================================
void KijimitimbreSpaceAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    //g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    g.drawImage(bgImage, getLocalBounds().toFloat());
}

void KijimitimbreSpaceAudioProcessorEditor::resized()
{
    float scale = processor.uiScaleFactor;
    
    float unitMargin = 10 * scale;
    float unitRowHeight = 20 * scale;
    float fullWidth = 800 * scale;
    float footerWidth = 170 * scale;
    
    float headerHeight = 1.5 * unitRowHeight;
    float midiSettingsHeight = 1 * unitRowHeight;
    float presetLoaderHeight = 1 * unitRowHeight;
    float timbreSpaceHeight = 18 * unitRowHeight;
    float kijimiControlPanelHeight = 14 * unitRowHeight;
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
    
    kijimiControlPanel.setBounds (unitMargin,  accumulatedHeight, fullWidth, kijimiControlPanelHeight); // No add unitMargin, already in kijimiControlPanel
    accumulatedHeight += kijimiControlPanelHeight;
    
    if (_showTimbreSpace){
        timbreSpace.setBounds (unitMargin, accumulatedHeight + unitMargin, fullWidth, timbreSpaceHeight);
        accumulatedHeight += unitMargin + timbreSpaceHeight + unitMargin;
    }
    
    controlPanelActions.setBounds(unitMargin,  accumulatedHeight, fullWidth - footerWidth, controlPanelActionsHeight); // No add unitMargin, already in kijimiControlPanel
    // NOTE: don't accumulate height here as KIJIMI control panel extra is at same height as footer
    
    footer.setBounds(fullWidth - footerWidth + unitMargin, accumulatedHeight, footerWidth, footerHeight); // No add unitMargin, already in kijimiControlPanel
    accumulatedHeight += footerHeight;
    
    if (_showLogArea){
        logArea.setBounds (unitMargin, accumulatedHeight + unitMargin, fullWidth, logAreaHeight);
        accumulatedHeight += unitMargin + logAreaHeight;
    }
    
    setSize(fullWidth + 2 * unitMargin, accumulatedHeight + unitMargin);
}

//==============================================================================
void KijimitimbreSpaceAudioProcessorEditor::actionListenerCallback (const String &message)
{
    if (message.startsWith(String(ACTION_LOG_PREFIX))){
        logMessageInUI(message.substring(String(ACTION_LOG_PREFIX).length()));
    } else if (message.startsWith(String(ACTION_UPDATE_UI_SCALE_FACTOR))){
        resized();  // No need to update any local member here as scale factor is stored in processor
    }
}

void KijimitimbreSpaceAudioProcessorEditor::logMessageInUI (const String& message)
{
    logArea.moveCaretToEnd();
    logArea.insertTextAtCaret(message);
}
