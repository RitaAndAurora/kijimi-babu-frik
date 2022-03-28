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
    babuFrikBaseLookAndFeel.scaleFactor = processor.uiScaleFactor;
    LookAndFeel::setDefaultLookAndFeel(&babuFrikBaseLookAndFeel);
    
    uiWrapper.initialize(&processor, this);
    
    addAndMakeVisible (uiViewport);
    uiViewport.setViewedComponent(static_cast<Component*>(&uiWrapper), false);
    setSize (10, 10); // this is re-set later
    
    // Get screen height
    Rectangle<int> r = Desktop::getInstance().getDisplays().getMainDisplay().userArea;
    screenHeight = r.getHeight();
    
    // Disable resize
    setResizable(false, false);
    
    // Now that editor is ready, ask for firmware version and show alert message if firmware is not ok. also check for other configuration params
    processor.requestFirmwareVersion();
    processor.checkConfigurationIsOk();
    
    resized();
}

BabuFrikAudioProcessorEditor::~BabuFrikAudioProcessorEditor()
{
    uiViewport.setViewedComponent(nullptr);
}

void BabuFrikAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll (Colours::black);
}

void BabuFrikAudioProcessorEditor::resized ()
{
    uiViewport.setScrollBarsShown(!processor.neverShowScrollbars, !processor.neverShowScrollbars, true, true);  // configure scroll bars
    
    uiViewport.setBounds(getBounds());

    int maxHeight = (int)(screenHeight * 0.95);  // take maximum of 90% of the height of the screen
    if (maxHeight == 0){
        maxHeight = 100; // This can happen when not everything is initialised (?), make sure we don't set a size of 0 or JUCE will complain
    }
    
    int width = uiWrapper.sizeWidth;
    if (!processor.neverShowScrollbars) {
        if (uiWrapper.sizeHeight > maxHeight){
            width += uiViewport.getScrollBarThickness();
        }
    }
    
    setSize (width, jmin(uiWrapper.sizeHeight, maxHeight)); // max plugin window UI size
}


//==============================================================================

UIWrapperComponent::UIWrapperComponent ()
{
    setSize (10, 10);  // Is re-set when running resize()
}

UIWrapperComponent::~UIWrapperComponent()
{
    processor->removeActionListener(this);
}

void UIWrapperComponent::initialize (BabuFrikAudioProcessor* p, BabuFrikAudioProcessorEditor* e)
{
    // Set processor object
    editor = e;
    processor = p;
    processor->addActionListener(this);  // Receive messages from processor
    
    // Init header and footer components
    header.initialize(processor);
    addAndMakeVisible (header);
    footer.initialize(processor);
    addAndMakeVisible (footer);
    
    // Add logo component (does not need initialization)
    addAndMakeVisible (logo);
    
    // Init MIDI settings panel
    midiSettingsPanel.initialize(processor);
    addAndMakeVisible (midiSettingsPanel);
    
    // Init preset control component
    presetControlPanel.initialize(processor);
    addAndMakeVisible (presetControlPanel);
    
    // Add view button (after preset controls to be on top)
    viewButton.addListener (this);
    viewButton.setButtonText("View...");
    addAndMakeVisible (viewButton);
    
    // Init KIJIMI contorl panel component
    kijimiControlPanel.initialize(processor);
    addAndMakeVisible (kijimiControlPanel);
    kijimiExtraControlsPanel.initialize(processor);
    addAndMakeVisible (kijimiExtraControlsPanel);
    kijimiLfosPanel.initialize(processor);
    addAndMakeVisible (kijimiLfosPanel);
    controlPanelActions.initialize(processor);
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
        
    wasInitialized = true;
    resized();
}

void UIWrapperComponent::paint (Graphics& g)
{
    g.fillAll (Colours::black);
}

void UIWrapperComponent::resized()
{
    if (!wasInitialized){
        return;
    }
    
    float scale = processor->uiScaleFactor;

    float unitMargin = 5 * scale;
    float unitRowHeight = 20 * scale;
    float fullWidth = 1200 * scale;
    float footerWidth = 190 * scale;
    
    float headerHeight = 1.5 * unitRowHeight;
    float midiSettingsHeight = 1 * unitRowHeight;
    float presetLoaderHeight = 1 * unitRowHeight;
    float kijimiControlPanelHeight = fullWidth / 2.5;
    float kijimiExtraControlsPanelHeight = kijimiControlPanelHeight;
    float kijimiLfoPanelHeight = kijimiControlPanelHeight;
    float controlPanelActionsHeight = 1 * unitRowHeight;
    float footerHeight = 1 * unitRowHeight;
    float logAreaHeight = 3 * unitRowHeight;
    
    bool _showMainControlsPanel = processor->showMainControlsPanel;
    bool _showExtraControlsPanel = processor->showExtraControlsPanel;
    bool _showLfosPanel = processor->showLfosPanel;
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
    
    footer.setBounds(fullWidth - (footerWidth + 1.0 * unitMargin), accumulatedHeight, footerWidth, footerHeight); // No add unitMargin, already in kijimiControlPanel
    accumulatedHeight += footerHeight;
    
    if (_showLogArea){
        logArea.setBounds (unitMargin, accumulatedHeight + unitMargin, fullWidth, logAreaHeight);
        accumulatedHeight += unitMargin + logAreaHeight;
    }
    
    setSize(fullWidth, accumulatedHeight + unitMargin);
    sizeWidth = fullWidth;  // used by the viewport
    sizeHeight = accumulatedHeight + unitMargin;  // used by the viewport
    
    editor->resized();
}

//==============================================================================
void UIWrapperComponent::actionListenerCallback (const String &message)
{
    if (message.startsWith(String(ACTION_LOG_PREFIX))){
        logMessageInUI(message.substring(String(ACTION_LOG_PREFIX).length()));
    } else if (message.startsWith(String(ACTION_UPDATE_UI_SCALE_FACTOR))){
        editor->babuFrikBaseLookAndFeel.scaleFactor = processor->uiScaleFactor;
        resized();  // No need to update any local member here as scale factor is stored in processor
    } else if (message.startsWith(String(ACTION_TOGGLE_SHOW_MAIN_PANEL))){
        processor->showMainControlsPanel = true;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_HIDE_MAIN_PANEL))){
        processor->showMainControlsPanel = false;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_SHOW_EXTRA_PANEL))){
        processor->showExtraControlsPanel = true;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_HIDE_EXTRA_PANEL))){
        processor->showExtraControlsPanel = false;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_SHOW_LFO_PANEL))){
        processor->showLfosPanel = true;
        resized();
    } else if (message.startsWith(String(ACTION_TOGGLE_HIDE_LFO_PANEL))){
        processor->showLfosPanel = false;
        resized();
    } else if (message.startsWith(String(ACTION_UPDATE_ENABLED_DISABLED_CONTROLS))){
        // ADSR2 stuff
        kijimiControlPanel.configureControlsForADSR2ModMode();
        kijimiLfosPanel.configureControlsForADSR2ModMode();
        
        // LFOs
        kijimiControlPanel.configureControlsForLFOModMode();
        kijimiLfosPanel.configureControlsForLFOModMode();
        
        resized();
    } else if (message.startsWith(String(ACTION_FIRMWARE_UPDATE_REQUIRED))){
        AlertWindow w ("Firmware out of date", "", AlertWindow::NoIcon);
        w.addTextBlock ("Your KIJIMI has firmware version " + processor->currentFirmwareLabel + ", but this version of Babu Frik requires firmware " + processor->requiredFirmwareLabel + ". Either you update the firmware or download an older version of Babu Frik, otherwise things might not work as expected. You can download the new firmware and older versions of Babu Frik from the Babu Frik download page :)");
        w.addButton ("Ok", 0, KeyPress (KeyPress::returnKey, 0, 0));
        w.runModalLoop();
    } else if (message.startsWith(String(ACTION_CC_REVEICE_IS_TURNED_OFF))){
        if (!processor->ccReceiveOffNotificationShown){
            AlertWindow w ("CC receive option seems to be off", "", AlertWindow::NoIcon);
            w.addTextBlock ("Be aware that with CC receive off KIJIMI might not be receiving all messages from Babu Frik properly and therefore some things might not work as expected. Please turn CC receive on either using the KIJIMI menu options or clicking the button in the lower-right side of Babu Frik main panel.");
            w.addButton ("Ok", 0, KeyPress (KeyPress::returnKey, 0, 0));
            w.runModalLoop();
            processor->ccReceiveOffNotificationShown = true;
        }
    }
}

void UIWrapperComponent::buttonClicked (Button* button)
{
    int selectedActionID = -1;
    
    if (button == &viewButton)
    {
        PopupMenu zoomSubMenu;
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_60, "60%");
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_70, "70%");
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_80, "80%");
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_90, "90%");
        zoomSubMenu.addItem (MENU_OPTION_ID_ZOOM_100, "100%");
        
        PopupMenu panelsSubMenu;
        int mainPanelShowOptionID = processor->showMainControlsPanel ? MENU_OPTION_HIDE_MAIN_PANEL : MENU_OPTION_SHOW_MAIN_PANEL;
        panelsSubMenu.addItem (mainPanelShowOptionID, "Main controls", true, processor->showMainControlsPanel);
        int extraPanelShowOptionID = processor->showExtraControlsPanel ? MENU_OPTION_HIDE_EXTRA_PANEL : MENU_OPTION_SHOW_EXTRA_PANEL;
        panelsSubMenu.addItem (extraPanelShowOptionID, "Extra controls + Timbre Space", true, processor->showExtraControlsPanel);
        int lfosPanelShowOptionID = processor->showLfosPanel ? MENU_OPTION_HIDE_LFO_PANEL : MENU_OPTION_SHOW_LFO_PANEL;
        panelsSubMenu.addItem (lfosPanelShowOptionID, "LFOs/ADSR2 panel", true, processor->showLfosPanel);
        
        PopupMenu m;
        m.addSubMenu ("Zoom", zoomSubMenu);
        m.addSubMenu ("Panels", panelsSubMenu);
        
        int neverShowScrollbarsTicked = processor->neverShowScrollbars;
        m.addItem (MENU_OPTION_TOGGLE_NEVER_SHOW_SCROLLBARS, "Hide scrollbars", true, neverShowScrollbarsTicked);
                    
        selectedActionID = m.showAt(button);
    }
    
    if (selectedActionID > 0){
        processMenuAction(selectedActionID);
    }
}

void UIWrapperComponent::processMenuAction(int actionID)
{
    if (actionID == MENU_OPTION_ID_ZOOM_60){
        processor->setUIScaleFactor(0.6);
    } else if (actionID == MENU_OPTION_ID_ZOOM_70){
        processor->setUIScaleFactor(0.7);
    } else if (actionID == MENU_OPTION_ID_ZOOM_80){
        processor->setUIScaleFactor(0.8);
    } else if (actionID == MENU_OPTION_ID_ZOOM_90){
        processor->setUIScaleFactor(0.9);
    } else if (actionID == MENU_OPTION_ID_ZOOM_100){
        processor->setUIScaleFactor(1.0);
    } else if (actionID == MENU_OPTION_ID_ZOOM_75){
        processor->setUIScaleFactor(0.75);
    } else if (actionID == MENU_OPTION_SHOW_MAIN_PANEL){
        processor->showOrHideKIJIMIPanel("main", true);
    } else if (actionID == MENU_OPTION_HIDE_MAIN_PANEL){
        processor->showOrHideKIJIMIPanel("main", false);
    } else if (actionID == MENU_OPTION_SHOW_EXTRA_PANEL){
        processor->showOrHideKIJIMIPanel("extra", true);
    } else if (actionID == MENU_OPTION_HIDE_EXTRA_PANEL){
        processor->showOrHideKIJIMIPanel("extra", false);
    } else if (actionID == MENU_OPTION_SHOW_LFO_PANEL){
        processor->showOrHideKIJIMIPanel("lfos", true);
    } else if (actionID == MENU_OPTION_HIDE_LFO_PANEL){
        processor->showOrHideKIJIMIPanel("lfos", false);
    } else if (actionID == MENU_OPTION_TOGGLE_NEVER_SHOW_SCROLLBARS){
        processor->neverShowScrollbars = !processor->neverShowScrollbars;
        resized();
    }
}

void UIWrapperComponent::logMessageInUI (const String& message)
{
    logArea.moveCaretToEnd();
    logArea.insertTextAtCaret(message);
}
