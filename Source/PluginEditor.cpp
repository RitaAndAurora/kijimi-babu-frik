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
    setLookAndFeel(&babuFrikBaseLookAndFeel);
    
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
    
    // Add view button (after preset controls to be on top)
    viewButton.addListener (this);
    viewButton.setButtonText("View...");
    addAndMakeVisible (viewButton);
    
    // Init KIJIMI contorl panel component
    kijimiControlPanel.initialize(&processor);
    addAndMakeVisible (kijimiControlPanel);
    kijimiExtraControlsPanel.initialize(&processor);
    addAndMakeVisible (kijimiExtraControlsPanel);
    kijimiLfosPanel.initialize(&processor);
    addAndMakeVisible (kijimiLfosPanel);
    controlPanelActions.initialize(&processor);
    addAndMakeVisible (controlPanelActions);

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
    float kijimiControlPanelHeight = fullWidth / 2.5;
    float kijimiExtraControlsPanelHeight = kijimiControlPanelHeight;
    float kijimiLfoPanelHeight = kijimiControlPanelHeight;
    float controlPanelActionsHeight = 1 * unitRowHeight;
    float footerHeight = 1 * unitRowHeight;
    float logAreaHeight = 3 * unitRowHeight;
    
    bool _showMainControlsPanel = processor.showMainControlsPanel;
    bool _showExtraControlsPanel = processor.showExtraControlsPanel;
    bool _showLfosPanel = processor.showLfosPanel;
    bool _showLogArea = LOG_IN_UI == 1;
    
    float accumulatedHeight = 0;
    
    float raLogoHeight = (headerHeight + midiSettingsHeight + presetLoaderHeight + 1 * unitMargin) * 0.8;
    logo.setBounds(getWidth() - raLogoHeight * 2.2 - unitMargin * 1.5, unitMargin, raLogoHeight * 2.2, raLogoHeight);  // 2.2 = aspect ratio of logo image
    
    header.setBounds(unitMargin, accumulatedHeight + unitMargin, fullWidth, headerHeight);
    accumulatedHeight += unitMargin + headerHeight;
    
    midiSettingsPanel.setBounds(unitMargin, accumulatedHeight + unitMargin, fullWidth, midiSettingsHeight);
    accumulatedHeight += unitMargin + midiSettingsHeight;
    
    presetControlPanel.setBounds (unitMargin, accumulatedHeight + unitMargin, fullWidth, presetLoaderHeight);
    viewButton.setBounds(fullWidth - (unitRowHeight * 3 + 2 * unitMargin), accumulatedHeight + unitMargin, unitMargin + unitRowHeight * 3, unitRowHeight);
    accumulatedHeight += unitMargin + presetLoaderHeight;
    
    if (_showMainControlsPanel){
        kijimiControlPanel.setVisible(true);
        kijimiControlPanel.setBounds (0,  accumulatedHeight, fullWidth, kijimiControlPanelHeight);
        accumulatedHeight += kijimiControlPanelHeight - unitMargin;  // Remove unit margin as it is already embeded in next component
    } else {
        kijimiControlPanel.setVisible(false);
    }
    
    if (_showExtraControlsPanel){
        kijimiExtraControlsPanel.setVisible(true);
        kijimiExtraControlsPanel.setBounds (0, accumulatedHeight, fullWidth, kijimiExtraControlsPanelHeight);
        accumulatedHeight += kijimiExtraControlsPanelHeight - unitMargin;  // Remove unit margin as it is already embeded in next component;
    } else {
        kijimiExtraControlsPanel.setVisible(false);
    }
    
    if (_showLfosPanel){
        kijimiLfosPanel.setVisible(true);
        kijimiLfosPanel.setBounds (0, accumulatedHeight, fullWidth, kijimiLfoPanelHeight);
        accumulatedHeight += kijimiLfoPanelHeight - unitMargin;  // Remove unit margin as it is already embeded in next component
    } else {
        kijimiLfosPanel.setVisible(false);
    }
    
    accumulatedHeight += unitMargin;  // Fix unit margin after KIJIMI panels (regardless of which are active)
    
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
    } else if (message.startsWith(String(ACTION_TOGGLE_SHOW_MAIN_PANEL))){
        processor.showMainControlsPanel = true;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_HIDE_MAIN_PANEL))){
        processor.showMainControlsPanel = false;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_SHOW_EXTRA_PANEL))){
        processor.showExtraControlsPanel = true;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_HIDE_EXTRA_PANEL))){
        processor.showExtraControlsPanel = false;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_SHOW_LFO_PANEL))){
        processor.showLfosPanel = true;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_HIDE_LFO_PANEL))){
        processor.showLfosPanel = false;
        resized();
    }
}

void BabuFrikAudioProcessorEditor::buttonClicked (Button* button)
{
    int selectedActionID = -1;
    
    if (button == &viewButton)
    {
        PopupMenu zoomSubMenu;
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_70, "70%");
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_80, "80%");
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_90, "90%");
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_100, "100%");
        
        PopupMenu m;
        m.setLookAndFeel(&babuFrikBaseLookAndFeel);
        m.addSubMenu ("Zoom", zoomSubMenu);
        int mainPanelShowOptionID = processor.showMainControlsPanel ? MENU_OPTION_HIDE_MAIN_PANEL : MENU_OPTION_SHOW_MAIN_PANEL;
        m.addItem (mainPanelShowOptionID, "Main controls", true, processor.showMainControlsPanel);
        int extraPanelShowOptionID = processor.showExtraControlsPanel ? MENU_OPTION_HIDE_EXTRA_PANEL : MENU_OPTION_SHOW_EXTRA_PANEL;
        m.addItem (extraPanelShowOptionID, "Extra controls + Timbre Space", true, processor.showExtraControlsPanel);
        int lfosPanelShowOptionID = processor.showLfosPanel ? MENU_OPTION_HIDE_LFO_PANEL : MENU_OPTION_SHOW_LFO_PANEL;
        m.addItem (lfosPanelShowOptionID, "LFOs panel", true, processor.showLfosPanel);
        selectedActionID = m.showAt(button);
    }
    
    if (selectedActionID > 0){
        processMenuAction(selectedActionID);
    }
}

void BabuFrikAudioProcessorEditor::processMenuAction(int actionID)
{
    if (actionID == MENU_OPTION_ID_ZOOM_60){
        processor.setUIScaleFactor(0.6);
    } else if (actionID == MENU_OPTION_ID_ZOOM_70){
        processor.setUIScaleFactor(0.7);
    } else if (actionID == MENU_OPTION_ID_ZOOM_80){
        processor.setUIScaleFactor(0.8);
    } else if (actionID == MENU_OPTION_ID_ZOOM_90){
        processor.setUIScaleFactor(0.9);
    } else if (actionID == MENU_OPTION_ID_ZOOM_100){
        processor.setUIScaleFactor(1.0);
    } else if (actionID == MENU_OPTION_ID_ZOOM_75){
        processor.setUIScaleFactor(0.75);
    } else if (actionID == MENU_OPTION_SHOW_MAIN_PANEL){
        processor.showOrHideKIJIMIPanel("main", true);
    } else if (actionID == MENU_OPTION_HIDE_MAIN_PANEL){
        processor.showOrHideKIJIMIPanel("main", false);
    } else if (actionID == MENU_OPTION_SHOW_EXTRA_PANEL){
        processor.showOrHideKIJIMIPanel("extra", true);
    } else if (actionID == MENU_OPTION_HIDE_EXTRA_PANEL){
        processor.showOrHideKIJIMIPanel("extra", false);
    } else if (actionID == MENU_OPTION_SHOW_LFO_PANEL){
        processor.showOrHideKIJIMIPanel("lfos", true);
    } else if (actionID == MENU_OPTION_HIDE_LFO_PANEL){
        processor.showOrHideKIJIMIPanel("lfos", false);
    }
}

void BabuFrikAudioProcessorEditor::logMessageInUI (const String& message)
{
    logArea.moveCaretToEnd();
    logArea.insertTextAtCaret(message);
}
