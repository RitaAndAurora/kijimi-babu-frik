/*
  ==============================================================================

    KIJIMIExtendedControlsComponent.h
    Created: 9 Oct 2020 7:27:54am
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "KIJIMIControlPanelComponent.h"
#include "TimbreSpaceComponent.h"
#include "KIJIMIInterface.h"
#include "BabuFrikBaseLookAndFeel.h"
#include "CustomClasses.h"
#include "defines.h"

class KIJIMIExtendedControlsPanelComponent: public KIJIMIBasePanelComponent

{
public:
    
    KIJIMIExtendedControlsPanelComponent ()
    {
    }
    
    ~KIJIMIExtendedControlsPanelComponent ()
    {
    }
    
    void initializeSliders () override
    {
        // Init timbre space component
        timbreSpace.initialize(processor);
        addAndMakeVisible (timbreSpace);
        
        // Configure sliders
        // --> Start auto-generated code B
        // Slider KIJIMI_ADSR_MOD_MODE
                sliderKIJIMI_ADSR_MOD_MODE.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_ADSR_MOD_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_ADSR_MOD_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
                sliderKIJIMI_ADSR_MOD_MODE.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_ADSR_MOD_MODE);
                sliderAttachmentKIJIMI_ADSR_MOD_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_MOD_MODE", sliderKIJIMI_ADSR_MOD_MODE));
        sliderKIJIMI_ADSR_MOD_MODE.textFromValueFunction = [](double value) {
            return "ADSR2 modulation mode: " + String (value);
        };
        // Slider KIJIMI_CYCLE_MODE
                sliderKIJIMI_CYCLE_MODE.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_CYCLE_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_CYCLE_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
                sliderKIJIMI_CYCLE_MODE.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_CYCLE_MODE);
                sliderAttachmentKIJIMI_CYCLE_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_CYCLE_MODE", sliderKIJIMI_CYCLE_MODE));
        sliderKIJIMI_CYCLE_MODE.textFromValueFunction = [](double value) {
            return "Cycle poly/mono: " + String (value);
        };
        // Slider KIJIMI_KT_MULTIPLIER
                sliderKIJIMI_KT_MULTIPLIER.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_KT_MULTIPLIER.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_KT_MULTIPLIER.setLookAndFeel (&button2Alt3ValuesLookAndFeelOffset1);
                sliderKIJIMI_KT_MULTIPLIER.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_KT_MULTIPLIER);
                sliderAttachmentKIJIMI_KT_MULTIPLIER.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_KT_MULTIPLIER", sliderKIJIMI_KT_MULTIPLIER));
        sliderKIJIMI_KT_MULTIPLIER.textFromValueFunction = [](double value) {
            return "KT multiplier: " + String (value);
        };
        // Slider KIJIMI_LFO_MODE
                sliderKIJIMI_LFO_MODE.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
                sliderKIJIMI_LFO_MODE.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO_MODE);
                sliderAttachmentKIJIMI_LFO_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_MODE", sliderKIJIMI_LFO_MODE));
        sliderKIJIMI_LFO_MODE.textFromValueFunction = [](double value) {
            return "LFO poly/mono: " + String (value);
        };
        // Slider KIJIMI_LFO_MOD_MODE
                sliderKIJIMI_LFO_MOD_MODE.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO_MOD_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO_MOD_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
                sliderKIJIMI_LFO_MOD_MODE.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO_MOD_MODE);
                sliderAttachmentKIJIMI_LFO_MOD_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_MOD_MODE", sliderKIJIMI_LFO_MOD_MODE));
        sliderKIJIMI_LFO_MOD_MODE.textFromValueFunction = [](double value) {
            return "LFO modulation mode: " + String (value);
        };
        // Slider KIJIMI_LFO_POLY_RETRIG
                sliderKIJIMI_LFO_POLY_RETRIG.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO_POLY_RETRIG.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO_POLY_RETRIG.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO_POLY_RETRIG.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO_POLY_RETRIG);
                sliderAttachmentKIJIMI_LFO_POLY_RETRIG.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_POLY_RETRIG", sliderKIJIMI_LFO_POLY_RETRIG));
        sliderKIJIMI_LFO_POLY_RETRIG.textFromValueFunction = [](double value) {
            return "LFO poly mode EG retrig: " + String (value);
        };
        // Slider KIJIMI_LFO_SUST
                sliderKIJIMI_LFO_SUST.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO_SUST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO_SUST.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO_SUST.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO_SUST);
                sliderAttachmentKIJIMI_LFO_SUST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_SUST", sliderKIJIMI_LFO_SUST));
        sliderKIJIMI_LFO_SUST.textFromValueFunction = [](double value) {
            return "LFO sustain: " + String (value);
        };
        // Slider KIJIMI_LFO1_ENV_DEST
                sliderKIJIMI_LFO1_ENV_DEST.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1_ENV_DEST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1_ENV_DEST.setLookAndFeel (&button2Alt3ValuesLookAndFeelMiddleBoth);
                sliderKIJIMI_LFO1_ENV_DEST.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1_ENV_DEST);
                sliderAttachmentKIJIMI_LFO1_ENV_DEST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_ENV_DEST", sliderKIJIMI_LFO1_ENV_DEST));
        sliderKIJIMI_LFO1_ENV_DEST.textFromValueFunction = [](double value) {
            return "LFO1 envelope destination: " + String (value);
        };
        // Slider KIJIMI_LFO1_ENV_P
                sliderKIJIMI_LFO1_ENV_P.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1_ENV_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1_ENV_P.setLookAndFeel (&button2Alt2InvertedValuesLookAndFeel);
                sliderKIJIMI_LFO1_ENV_P.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1_ENV_P);
                sliderAttachmentKIJIMI_LFO1_ENV_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_ENV_P", sliderKIJIMI_LFO1_ENV_P));
        sliderKIJIMI_LFO1_ENV_P.textFromValueFunction = [](double value) {
            return "LFO1 envelope polarity: " + String (value);
        };
        // Slider KIJIMI_LFO1_SYNC
                sliderKIJIMI_LFO1_SYNC.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1_SYNC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1_SYNC.setLookAndFeel (&button2LookAndFeel);
                sliderKIJIMI_LFO1_SYNC.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1_SYNC);
                sliderAttachmentKIJIMI_LFO1_SYNC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_SYNC", sliderKIJIMI_LFO1_SYNC));
        sliderKIJIMI_LFO1_SYNC.textFromValueFunction = [](double value) {
            return "LFO1 sync: " + String (value);
        };
        // Slider KIJIMI_LFO2_ENV_DEST
                sliderKIJIMI_LFO2_ENV_DEST.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2_ENV_DEST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2_ENV_DEST.setLookAndFeel (&button2Alt3ValuesLookAndFeelMiddleBoth);
                sliderKIJIMI_LFO2_ENV_DEST.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2_ENV_DEST);
                sliderAttachmentKIJIMI_LFO2_ENV_DEST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_ENV_DEST", sliderKIJIMI_LFO2_ENV_DEST));
        sliderKIJIMI_LFO2_ENV_DEST.textFromValueFunction = [](double value) {
            return "LFO2 envelope destination: " + String (value);
        };
        // Slider KIJIMI_LFO2_ENV_P
                sliderKIJIMI_LFO2_ENV_P.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2_ENV_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2_ENV_P.setLookAndFeel (&button2Alt2InvertedValuesLookAndFeel);
                sliderKIJIMI_LFO2_ENV_P.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2_ENV_P);
                sliderAttachmentKIJIMI_LFO2_ENV_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_ENV_P", sliderKIJIMI_LFO2_ENV_P));
        sliderKIJIMI_LFO2_ENV_P.textFromValueFunction = [](double value) {
            return "LFO2 envelope polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2_SYNC
                sliderKIJIMI_LFO2_SYNC.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2_SYNC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2_SYNC.setLookAndFeel (&button2LookAndFeel);
                sliderKIJIMI_LFO2_SYNC.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2_SYNC);
                sliderAttachmentKIJIMI_LFO2_SYNC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_SYNC", sliderKIJIMI_LFO2_SYNC));
        sliderKIJIMI_LFO2_SYNC.textFromValueFunction = [](double value) {
            return "LFO2 sync: " + String (value);
        };
        // ComboBox KIJIMI_AT_CURVE
                sliderKIJIMI_AT_CURVE.addItemList (StringArray ({"LINEAR", "LOG", "EXP", "S-TYPE", "N-TYPE"}), 1);
                sliderKIJIMI_AT_CURVE.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_AT_CURVE);
                sliderAttachmentKIJIMI_AT_CURVE.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_AT_CURVE", sliderKIJIMI_AT_CURVE));
        // ComboBox KIJIMI_CC74_DEST
                sliderKIJIMI_CC74_DEST.addItemList (StringArray ({"OFF", "LFO1 RATE", "LFO2 RATE", "SUB OSC", "VCF FREQ", "VCF RESO"}), 1);
                sliderKIJIMI_CC74_DEST.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_CC74_DEST);
                sliderAttachmentKIJIMI_CC74_DEST.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_CC74_DEST", sliderKIJIMI_CC74_DEST));
        // ComboBox KIJIMI_MODW_DEST
                sliderKIJIMI_MODW_DEST.addItemList (StringArray ({"LFO1 RATE", "LFO2 RATE", "LFO1 AMT", "LFO2 AMT", "VCF FREQ"}), 1);
                sliderKIJIMI_MODW_DEST.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_MODW_DEST);
                sliderAttachmentKIJIMI_MODW_DEST.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_MODW_DEST", sliderKIJIMI_MODW_DEST));
        // Slider KIJIMI_MODW_P
                sliderKIJIMI_MODW_P.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_MODW_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_MODW_P.setLookAndFeel (&button2Alt2InvertedValuesLookAndFeel);
                sliderKIJIMI_MODW_P.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_MODW_P);
                sliderAttachmentKIJIMI_MODW_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MODW_P", sliderKIJIMI_MODW_P));
        sliderKIJIMI_MODW_P.textFromValueFunction = [](double value) {
            return "Modwheel polarity: " + String (value);
        };
        // ComboBox KIJIMI_VEL_CURVE
                sliderKIJIMI_VEL_CURVE.addItemList (StringArray ({"LINEAR", "LOG", "EXP", "S-TYPE", "N-TYPE"}), 1);
                sliderKIJIMI_VEL_CURVE.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_VEL_CURVE);
                sliderAttachmentKIJIMI_VEL_CURVE.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_VEL_CURVE", sliderKIJIMI_VEL_CURVE));
        // Slider KIJIMI_LEG_EG_RETRIG
                sliderKIJIMI_LEG_EG_RETRIG.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LEG_EG_RETRIG.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LEG_EG_RETRIG.setLookAndFeel (&button1LookAndFeelInverted);
                sliderKIJIMI_LEG_EG_RETRIG.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LEG_EG_RETRIG);
                sliderAttachmentKIJIMI_LEG_EG_RETRIG.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEG_EG_RETRIG", sliderKIJIMI_LEG_EG_RETRIG));
        sliderKIJIMI_LEG_EG_RETRIG.textFromValueFunction = [](double value) {
            return "Legato EG retrig: " + String (value);
        };
        // Slider KIJIMI_LEG_PRIORITY
                sliderKIJIMI_LEG_PRIORITY.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LEG_PRIORITY.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LEG_PRIORITY.setLookAndFeel (&button2Alt3ValuesLookAndFeel);
                sliderKIJIMI_LEG_PRIORITY.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LEG_PRIORITY);
                sliderAttachmentKIJIMI_LEG_PRIORITY.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEG_PRIORITY", sliderKIJIMI_LEG_PRIORITY));
        sliderKIJIMI_LEG_PRIORITY.textFromValueFunction = [](double value) {
            return "Legato priority: " + String (value);
        };
        // Slider KIJIMI_MONO_MODE
                sliderKIJIMI_MONO_MODE.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_MONO_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_MONO_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
                sliderKIJIMI_MONO_MODE.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_MONO_MODE);
                sliderAttachmentKIJIMI_MONO_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MONO_MODE", sliderKIJIMI_MONO_MODE));
        sliderKIJIMI_MONO_MODE.textFromValueFunction = [](double value) {
            return "Mono mode: " + String (value);
        };
        // Slider KIJIMI_MONO_POLY
                sliderKIJIMI_MONO_POLY.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_MONO_POLY.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_MONO_POLY.setLookAndFeel (&button2Alt3ValuesLookAndFeelOffset1);
                sliderKIJIMI_MONO_POLY.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_MONO_POLY);
                sliderAttachmentKIJIMI_MONO_POLY.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MONO_POLY", sliderKIJIMI_MONO_POLY));
        sliderKIJIMI_MONO_POLY.textFromValueFunction = [](double value) {
            return "Mono/poly/unisson: " + String (value);
        };
        // Slider KIJIMI_SUSTAIN_MODE
                sliderKIJIMI_SUSTAIN_MODE.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_SUSTAIN_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_SUSTAIN_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
                sliderKIJIMI_SUSTAIN_MODE.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_SUSTAIN_MODE);
                sliderAttachmentKIJIMI_SUSTAIN_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SUSTAIN_MODE", sliderKIJIMI_SUSTAIN_MODE));
        sliderKIJIMI_SUSTAIN_MODE.textFromValueFunction = [](double value) {
            return "Sustain mode: " + String (value);
        };
        // --> End auto-generated code B
    }
    
    void paint (Graphics& g) override
    {
        Image background = ImageCache::getFromMemory (BinaryData::KijimiExtraPanelBackground_png, BinaryData::KijimiExtraPanelBackground_pngSize);
        g.drawImage (background, getLocalBounds().toFloat());
    }

    void resized() override
    {
        float scale = processor->uiScaleFactor;
        float unitMargin = 5 * scale;
        timbreSpace.setBounds (0.368 * getWidth(), 0, (1 - 0.368) * (getWidth() + 0.5 * unitMargin), getHeight());
        
        // Position sliders
        // --> Start auto-generated code C
        sliderKIJIMI_ADSR_MOD_MODE.setBounds (0.185 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR_MOD_MODE
        sliderKIJIMI_CYCLE_MODE.setBounds (0.099 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_CYCLE_MODE
        sliderKIJIMI_KT_MULTIPLIER.setBounds (0.142 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_KT_MULTIPLIER
        sliderKIJIMI_LFO_MODE.setBounds (0.240 * getWidth(), 0.284 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO_MODE
        sliderKIJIMI_LFO_MOD_MODE.setBounds (0.333 * getWidth(), 0.284 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO_MOD_MODE
        sliderKIJIMI_LFO_POLY_RETRIG.setBounds (0.271 * getWidth(), 0.284 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO_POLY_RETRIG
        sliderKIJIMI_LFO_SUST.setBounds (0.302 * getWidth(), 0.284 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO_SUST
        sliderKIJIMI_LFO1_ENV_DEST.setBounds (0.271 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1_ENV_DEST
        sliderKIJIMI_LFO1_ENV_P.setBounds (0.333 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1_ENV_P
        sliderKIJIMI_LFO1_SYNC.setBounds (0.240 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1_SYNC
        sliderKIJIMI_LFO2_ENV_DEST.setBounds (0.271 * getWidth(), 0.789 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2_ENV_DEST
        sliderKIJIMI_LFO2_ENV_P.setBounds (0.333 * getWidth(), 0.789 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2_ENV_P
        sliderKIJIMI_LFO2_SYNC.setBounds (0.240 * getWidth(), 0.789 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2_SYNC
        sliderKIJIMI_AT_CURVE.setBounds (0.009 * getWidth(), 0.202 * getHeight(), 0.070 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_AT_CURVE
        sliderKIJIMI_CC74_DEST.setBounds (0.009 * getWidth(), 0.294 * getHeight(), 0.070 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_CC74_DEST
        sliderKIJIMI_MODW_DEST.setBounds (0.009 * getWidth(), 0.385 * getHeight(), 0.070 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_MODW_DEST
        sliderKIJIMI_MODW_P.setBounds (0.028 * getWidth(), 0.477 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_MODW_P
        sliderKIJIMI_VEL_CURVE.setBounds (0.009 * getWidth(), 0.110 * getHeight(), 0.070 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_VEL_CURVE
        sliderKIJIMI_LEG_EG_RETRIG.setBounds (0.185 * getWidth(), 0.284 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LEG_EG_RETRIG
        sliderKIJIMI_LEG_PRIORITY.setBounds (0.142 * getWidth(), 0.284 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LEG_PRIORITY
        sliderKIJIMI_MONO_MODE.setBounds (0.099 * getWidth(), 0.284 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_MONO_MODE
        sliderKIJIMI_MONO_POLY.setBounds (0.142 * getWidth(), 0.083 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_MONO_POLY
        sliderKIJIMI_SUSTAIN_MODE.setBounds (0.185 * getWidth(), 0.083 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_SUSTAIN_MODE
        // --> End auto-generated code C
    }
    
private:
    
    // Timbre Space component
    TimbreSpaceComponent timbreSpace;
    
    // Slider declarations
    // --> Start auto-generated code A
    CycleButtonSlider2StepsInt sliderKIJIMI_ADSR_MOD_MODE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR_MOD_MODE;
    CycleButtonSlider2StepsInt sliderKIJIMI_CYCLE_MODE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_CYCLE_MODE;
    CycleButtonSlider3StepsInt sliderKIJIMI_KT_MULTIPLIER;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_KT_MULTIPLIER;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO_MODE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_MODE;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO_MOD_MODE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_MOD_MODE;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO_POLY_RETRIG;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_POLY_RETRIG;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO_SUST;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_SUST;
    CycleButtonSlider3StepsInt sliderKIJIMI_LFO1_ENV_DEST;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_ENV_DEST;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1_ENV_P;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_ENV_P;
    CycleButtonSlider3StepsInt sliderKIJIMI_LFO1_SYNC;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_SYNC;
    CycleButtonSlider3StepsInt sliderKIJIMI_LFO2_ENV_DEST;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_ENV_DEST;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2_ENV_P;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_ENV_P;
    CycleButtonSlider3StepsInt sliderKIJIMI_LFO2_SYNC;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_SYNC;
    ComboBox sliderKIJIMI_AT_CURVE;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_AT_CURVE;
    ComboBox sliderKIJIMI_CC74_DEST;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_CC74_DEST;
    ComboBox sliderKIJIMI_MODW_DEST;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_MODW_DEST;
    CycleButtonSlider2StepsInt sliderKIJIMI_MODW_P;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MODW_P;
    ComboBox sliderKIJIMI_VEL_CURVE;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_VEL_CURVE;
    CycleButtonSlider2StepsInt sliderKIJIMI_LEG_EG_RETRIG;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LEG_EG_RETRIG;
    CycleButtonSlider3StepsInt sliderKIJIMI_LEG_PRIORITY;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LEG_PRIORITY;
    CycleButtonSlider2StepsInt sliderKIJIMI_MONO_MODE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MONO_MODE;
    CycleButtonSlider3StepsInt sliderKIJIMI_MONO_POLY;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MONO_POLY;
    CycleButtonSlider2StepsInt sliderKIJIMI_SUSTAIN_MODE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SUSTAIN_MODE;
    // --> End auto-generated code A
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMIExtendedControlsPanelComponent);
};
