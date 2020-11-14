/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "defines.h"
#include "PluginProcessor.h"
#include "KIJIMIControlPanelComponent.h"
#include "KIJIMIExtendedControlsComponent.h"
#include "KIJIMILfosPanelComponent.h"
#include "ControlPanelActionsComponent.h"
#include "PresetControlComponent.h"
#include "MIDISettingsComponent.h"
#include "HeaderComponent.h"
#include "FooterComponent.h"
#include "LogoComponent.h"
#include "BabuFrikBaseLookAndFeel.h"

//==============================================================================
/**
*/

class BabuFrikAudioProcessorEditor;


class UIWrapperComponent: public Component,
                          public ActionListener,
                          public Button::Listener
{
public:
    UIWrapperComponent();
    ~UIWrapperComponent();
    
    void initialize (BabuFrikAudioProcessor* p, BabuFrikAudioProcessorEditor* e);
    void paint (Graphics&) override;
    void resized() override;
    void buttonClicked (Button* button) override;
    void processMenuAction(int actionID);
    
    int sizeWidth = 0;
    int sizeHeight = 0;
    
private:
    BabuFrikAudioProcessor* processor;
    BabuFrikAudioProcessorEditor* editor;
    bool wasInitialized = false;
    
    // Header & footer components
    HeaderComponent header;
    LogoComponent logo;
    FooterComponent footer;
    TextButton viewButton;
    
    // MIDI Settings component
    MIDISettingsComponent midiSettingsPanel;
    
    // Preset control component
    PresetControlComponent presetControlPanel;
    
    // KIJIMI Control panel component
    KIJIMIControlPanelComponent kijimiControlPanel;
    KIJIMIExtendedControlsPanelComponent kijimiExtraControlsPanel;
    KIJIMILfosPanelComponent kijimiLfosPanel;
    ControlPanelActionsComponent controlPanelActions;
    
    // Logging code
    void actionListenerCallback (const String &message) override;
    void logMessageInUI (const String& message);
    TextEditor logArea;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (UIWrapperComponent)
};



class BabuFrikAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    BabuFrikAudioProcessorEditor (BabuFrikAudioProcessor&);
    ~BabuFrikAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    BabuFrikBaseLookAndFeel babuFrikBaseLookAndFeel;  // Make it public so UIWrapperComponent can access it

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BabuFrikAudioProcessor& processor;
    UIWrapperComponent uiWrapper;
    Viewport uiViewport;
    
    int screenHeight = 0;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BabuFrikAudioProcessorEditor)
};
