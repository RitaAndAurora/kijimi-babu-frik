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
#include "ControlPanelActionsComponent.h"
#include "TimbreSpaceComponent.h"
#include "PresetControlComponent.h"
#include "MIDISettingsComponent.h"
#include "HeaderComponent.h"
#include "FooterComponent.h"
#include "LogoComponent.h"
#include "CustomLookAndFeel.h"

//==============================================================================
/**
*/
class BabuFrikAudioProcessorEditor  : public AudioProcessorEditor,
                                             public ActionListener
{
public:
    BabuFrikAudioProcessorEditor (BabuFrikAudioProcessor&);
    ~BabuFrikAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BabuFrikAudioProcessor& processor;
    
    // Look and feel
    CustomLookAndFeel customLookAndFeel;
    
    // Header & footer components
    HeaderComponent header;
    LogoComponent logo;
    FooterComponent footer;
    
    // MIDI Settings component
    MIDISettingsComponent midiSettingsPanel;
    
    // Preset control component
    PresetControlComponent presetControlPanel;
    
    // KIJIMI Control panel component
    KIJIMIControlPanelComponent kijimiControlPanel;
    ControlPanelActionsComponent controlPanelActions;
    
    // Timbre Space component
    TimbreSpaceComponent timbreSpace;
    
    // Logging code
    void actionListenerCallback (const String &message) override;
    void logMessageInUI (const String& message);
    TextEditor logArea;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BabuFrikAudioProcessorEditor)
};
