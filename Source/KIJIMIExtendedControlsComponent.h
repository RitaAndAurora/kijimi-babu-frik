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
        sliderKIJIMI_ADSR_MOD_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_MOD_MODE);
        sliderAttachmentKIJIMI_ADSR_MOD_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_MOD_MODE", sliderKIJIMI_ADSR_MOD_MODE));
        sliderKIJIMI_ADSR_MOD_MODE.textFromValueFunction = [](double value) {
            if (value == 0){ return "ADSR2 modulation mode: common"; } 
            else { return "ADSR2 modulation mode: individual";}
        };
        sliderKIJIMI_ADSR_MOD_MODE.setLookAndFeel (&button2Alt2YellowValuesLookAndFeel);
        // Slider KIJIMI_CYCLE_MODE
        sliderKIJIMI_CYCLE_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_CYCLE_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_CYCLE_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_CYCLE_MODE);
        sliderAttachmentKIJIMI_CYCLE_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_CYCLE_MODE", sliderKIJIMI_CYCLE_MODE));
        sliderKIJIMI_CYCLE_MODE.textFromValueFunction = [](double value) {
            if (value == 0){ return "Cycle poly/mono: poly"; } 
            else { return "Cycle poly/mono: mono";}
        };
        sliderKIJIMI_CYCLE_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
        // Slider KIJIMI_KT_MULTIPLIER
        sliderKIJIMI_KT_MULTIPLIER.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_KT_MULTIPLIER.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_KT_MULTIPLIER.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_KT_MULTIPLIER);
        sliderAttachmentKIJIMI_KT_MULTIPLIER.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_KT_MULTIPLIER", sliderKIJIMI_KT_MULTIPLIER));
        sliderKIJIMI_KT_MULTIPLIER.textFromValueFunction = [](double value) {
            if (value == 0){ return "KT multiplier: x1"; } 
            else if (value == 1) { return "KT multiplier: x2";}
            else { return "KT multiplier: x4";}
        };
        sliderKIJIMI_KT_MULTIPLIER.setLookAndFeel (&button2Alt3ValuesLookAndFeelOffset1);
        // Slider KIJIMI_LFO_MODE
        sliderKIJIMI_LFO_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_MODE);
        sliderAttachmentKIJIMI_LFO_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_MODE", sliderKIJIMI_LFO_MODE));
        sliderKIJIMI_LFO_MODE.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO poly/mono: poly"; } 
            else { return "LFO poly/mono: mono";}
        };
        sliderKIJIMI_LFO_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
        // Slider KIJIMI_LFO_MOD_MODE
        sliderKIJIMI_LFO_MOD_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_MOD_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_MOD_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_MOD_MODE);
        sliderAttachmentKIJIMI_LFO_MOD_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_MOD_MODE", sliderKIJIMI_LFO_MOD_MODE));
        sliderKIJIMI_LFO_MOD_MODE.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO modulation mode: common"; } 
            else { return "LFO modulation mode: individual";}
        };
        sliderKIJIMI_LFO_MOD_MODE.setLookAndFeel (&button2Alt2YellowValuesLookAndFeel);
        // Slider KIJIMI_LFO_POLY_RETRIG
        sliderKIJIMI_LFO_POLY_RETRIG.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_POLY_RETRIG.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_POLY_RETRIG.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_POLY_RETRIG);
        sliderAttachmentKIJIMI_LFO_POLY_RETRIG.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_POLY_RETRIG", sliderKIJIMI_LFO_POLY_RETRIG));
        sliderKIJIMI_LFO_POLY_RETRIG.textFromValueFunction = [](double value) {
            if (value < 64){ return "LFO poly mode EG retrig: off"; } 
            else { return "LFO poly mode EG retrig: on";}
        };
        sliderKIJIMI_LFO_POLY_RETRIG.setLookAndFeel (&button1LookAndFeel);
        // Slider KIJIMI_LFO1_ENV_DEST
        sliderKIJIMI_LFO1_ENV_DEST.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_ENV_DEST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_ENV_DEST.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_ENV_DEST);
        sliderAttachmentKIJIMI_LFO1_ENV_DEST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_ENV_DEST", sliderKIJIMI_LFO1_ENV_DEST));
        sliderKIJIMI_LFO1_ENV_DEST.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 EG destination: amplitude"; } 
            else if (value == 1) { return "LFO1 EG destination: both";}
            else { return "LFO1 EG destination: rate";}
        };
        sliderKIJIMI_LFO1_ENV_DEST.setLookAndFeel (&button2Alt3ValuesLookAndFeelMiddleBoth);
        // Slider KIJIMI_LFO1_ENV_MAX_T
        sliderKIJIMI_LFO1_ENV_MAX_T.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_ENV_MAX_T.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_ENV_MAX_T.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_ENV_MAX_T);
        sliderAttachmentKIJIMI_LFO1_ENV_MAX_T.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_ENV_MAX_T", sliderKIJIMI_LFO1_ENV_MAX_T));
        sliderKIJIMI_LFO1_ENV_MAX_T.textFromValueFunction = [](double value) {
            return "LFO1 EG max time: " + String (value) + "s";
        };
        sliderKIJIMI_LFO1_ENV_MAX_T.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1_ENV_P
        sliderKIJIMI_LFO1_ENV_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_ENV_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_ENV_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_ENV_P);
        sliderAttachmentKIJIMI_LFO1_ENV_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_ENV_P", sliderKIJIMI_LFO1_ENV_P));
        sliderKIJIMI_LFO1_ENV_P.textFromValueFunction = [](double value) {
            if (value <= 9){ return String::formatted("LFO1 EG amount: %i%%", ((int)(10.0*(value - 10)))); } 
            else { return String::formatted("LFO1 EG amount: %i%%", ((int)(10.0*(value - 9)))); }
        };
        sliderKIJIMI_LFO1_ENV_P.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1_SYNC
        sliderKIJIMI_LFO1_SYNC.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_SYNC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_SYNC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_SYNC);
        sliderAttachmentKIJIMI_LFO1_SYNC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_SYNC", sliderKIJIMI_LFO1_SYNC));
        sliderKIJIMI_LFO1_SYNC.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 sync: off"; } 
            else if (value == 1){ return "LFO1 sync: from MIDI";}
            else { return "LFO1 sync: from LFO2";}
        };
        sliderKIJIMI_LFO1_SYNC.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO1_MAX_R
        sliderKIJIMI_LFO1_MAX_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_MAX_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_MAX_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_MAX_R);
        sliderAttachmentKIJIMI_LFO1_MAX_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_MAX_R", sliderKIJIMI_LFO1_MAX_R));
        sliderKIJIMI_LFO1_MAX_R.textFromValueFunction = [](double value) {
            return "LFO1 max rate: " + String (value) + "Hz";
        };
        sliderKIJIMI_LFO1_MAX_R.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1_MIN_R
        sliderKIJIMI_LFO1_MIN_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_MIN_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_MIN_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_MIN_R);
        sliderAttachmentKIJIMI_LFO1_MIN_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_MIN_R", sliderKIJIMI_LFO1_MIN_R));
        sliderKIJIMI_LFO1_MIN_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 min rate: %.2fHz", 0.01 * value);
        };
        sliderKIJIMI_LFO1_MIN_R.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1_SUST
        sliderKIJIMI_LFO1_SUST.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_SUST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_SUST.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_SUST);
        sliderAttachmentKIJIMI_LFO1_SUST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_SUST", sliderKIJIMI_LFO1_SUST));
        sliderKIJIMI_LFO1_SUST.textFromValueFunction = [](double value) {
            if (value < 64){ return "LFO1 sustain: on"; } 
            else { return "LFO1 sustain: off";}
        };
        sliderKIJIMI_LFO1_SUST.setLookAndFeel (&button1LookAndFeel);
        // Slider KIJIMI_LFO2_ENV_DEST
        sliderKIJIMI_LFO2_ENV_DEST.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_ENV_DEST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_ENV_DEST.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_ENV_DEST);
        sliderAttachmentKIJIMI_LFO2_ENV_DEST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_ENV_DEST", sliderKIJIMI_LFO2_ENV_DEST));
        sliderKIJIMI_LFO2_ENV_DEST.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 EG destination: amplitude"; } 
            else if (value == 1) { return "LFO2 EG destination: both";}
            else { return "LFO2 EG destination: rate";}
        };
        sliderKIJIMI_LFO2_ENV_DEST.setLookAndFeel (&button2Alt3ValuesLookAndFeelMiddleBoth);
        // Slider KIJIMI_LFO2_ENV_MAX_T
        sliderKIJIMI_LFO2_ENV_MAX_T.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_ENV_MAX_T.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_ENV_MAX_T.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_ENV_MAX_T);
        sliderAttachmentKIJIMI_LFO2_ENV_MAX_T.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_ENV_MAX_T", sliderKIJIMI_LFO2_ENV_MAX_T));
        sliderKIJIMI_LFO2_ENV_MAX_T.textFromValueFunction = [](double value) {
            return "LFO2 EG max time: " + String (value) + "s";
        };
        sliderKIJIMI_LFO2_ENV_MAX_T.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO2_ENV_P
        sliderKIJIMI_LFO2_ENV_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_ENV_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_ENV_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_ENV_P);
        sliderAttachmentKIJIMI_LFO2_ENV_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_ENV_P", sliderKIJIMI_LFO2_ENV_P));
        sliderKIJIMI_LFO2_ENV_P.textFromValueFunction = [](double value) {
            if (value <= 9){ return String::formatted("LFO2 EG amount: %i%%", ((int)(10.0*(value - 10)))); } 
            else { return String::formatted("LFO2 EG amount: %i%%", ((int)(10.0*(value - 9)))); }
        };
        sliderKIJIMI_LFO2_ENV_P.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO2_SYNC
        sliderKIJIMI_LFO2_SYNC.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_SYNC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_SYNC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_SYNC);
        sliderAttachmentKIJIMI_LFO2_SYNC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_SYNC", sliderKIJIMI_LFO2_SYNC));
        sliderKIJIMI_LFO2_SYNC.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 sync: off"; } 
            else if (value == 1){ return "LFO2 sync: from MIDI";}
            else { return "LFO2 sync: from LFO1";}
        };
        sliderKIJIMI_LFO2_SYNC.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2_MAX_R
        sliderKIJIMI_LFO2_MAX_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_MAX_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_MAX_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_MAX_R);
        sliderAttachmentKIJIMI_LFO2_MAX_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_MAX_R", sliderKIJIMI_LFO2_MAX_R));
        sliderKIJIMI_LFO2_MAX_R.textFromValueFunction = [](double value) {
            return "LFO2 max rate: " + String (value) + "Hz";
        };
        sliderKIJIMI_LFO2_MAX_R.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO2_MIN_R
        sliderKIJIMI_LFO2_MIN_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_MIN_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_MIN_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_MIN_R);
        sliderAttachmentKIJIMI_LFO2_MIN_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_MIN_R", sliderKIJIMI_LFO2_MIN_R));
        sliderKIJIMI_LFO2_MIN_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 min rate: %.2fHz", 0.01 * value);
        };
        sliderKIJIMI_LFO2_MIN_R.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO2_SUST
        sliderKIJIMI_LFO2_SUST.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_SUST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_SUST.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_SUST);
        sliderAttachmentKIJIMI_LFO2_SUST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_SUST", sliderKIJIMI_LFO2_SUST));
        sliderKIJIMI_LFO2_SUST.textFromValueFunction = [](double value) {
            if (value < 64){ return "LFO2 sustain: on"; } 
            else { return "LFO2 sustain: off";}
        };
        sliderKIJIMI_LFO2_SUST.setLookAndFeel (&button1LookAndFeel);
        // ComboBox KIJIMI_AT_CURVE
        sliderKIJIMI_AT_CURVE.addItemList (StringArray ({"LINEAR", "LOG", "EXP", "S-TYPE", "N-TYPE"}), 1);
        addAndMakeVisible (&sliderKIJIMI_AT_CURVE);
        sliderAttachmentKIJIMI_AT_CURVE.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_AT_CURVE", sliderKIJIMI_AT_CURVE));
        // ComboBox KIJIMI_CC74_DEST
        sliderKIJIMI_CC74_DEST.addItemList (StringArray ({"OFF", "LFO1 RATE", "LFO2 RATE", "SUB OSC", "VCF FREQ", "VCF RESO"}), 1);
        addAndMakeVisible (&sliderKIJIMI_CC74_DEST);
        sliderAttachmentKIJIMI_CC74_DEST.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_CC74_DEST", sliderKIJIMI_CC74_DEST));
        // ComboBox KIJIMI_MODW_DEST
        sliderKIJIMI_MODW_DEST.addItemList (StringArray ({"LFO1 RATE", "LFO2 RATE", "LFO1 AMT", "LFO2 AMT", "VCF FREQ"}), 1);
        addAndMakeVisible (&sliderKIJIMI_MODW_DEST);
        sliderAttachmentKIJIMI_MODW_DEST.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_MODW_DEST", sliderKIJIMI_MODW_DEST));
        // Slider KIJIMI_MODW_P
        sliderKIJIMI_MODW_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MODW_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MODW_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MODW_P);
        sliderAttachmentKIJIMI_MODW_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MODW_P", sliderKIJIMI_MODW_P));
        sliderKIJIMI_MODW_P.textFromValueFunction = [](double value) {
            if (value == 0){ return "Modwheel polarity: positive"; } 
            else { return "Modwheel polarity: negative";}
        };
        sliderKIJIMI_MODW_P.setLookAndFeel (&button2Alt2InvertedValuesLookAndFeel);
        // Slider KIJIMI_PBEND_RANGE
        sliderKIJIMI_PBEND_RANGE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_PBEND_RANGE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_PBEND_RANGE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_PBEND_RANGE);
        sliderAttachmentKIJIMI_PBEND_RANGE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_PBEND_RANGE", sliderKIJIMI_PBEND_RANGE));
        sliderKIJIMI_PBEND_RANGE.textFromValueFunction = [](double value) {
            return "Pitchbend range: " + String (value);
        };
        sliderKIJIMI_PBEND_RANGE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_MPE_PBEND_RANGE
        sliderKIJIMI_MPE_PBEND_RANGE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MPE_PBEND_RANGE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MPE_PBEND_RANGE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MPE_PBEND_RANGE);
        sliderAttachmentKIJIMI_MPE_PBEND_RANGE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MPE_PBEND_RANGE", sliderKIJIMI_MPE_PBEND_RANGE));
        sliderKIJIMI_MPE_PBEND_RANGE.textFromValueFunction = [](double value) {
            return "MPE Pitchbend range: " + String (value);
        };
        sliderKIJIMI_MPE_PBEND_RANGE.setLookAndFeel (&knobLookAndFeel);
        // ComboBox KIJIMI_VEL_CURVE
        sliderKIJIMI_VEL_CURVE.addItemList (StringArray ({"LINEAR", "LOG", "EXP", "S-TYPE", "N-TYPE"}), 1);
        addAndMakeVisible (&sliderKIJIMI_VEL_CURVE);
        sliderAttachmentKIJIMI_VEL_CURVE.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_VEL_CURVE", sliderKIJIMI_VEL_CURVE));
        // Slider KIJIMI_ADSR_VCA
        sliderKIJIMI_ADSR_VCA.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_VCA.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_VCA.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_VCA);
        sliderAttachmentKIJIMI_ADSR_VCA.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_VCA", sliderKIJIMI_ADSR_VCA));
        sliderKIJIMI_ADSR_VCA.textFromValueFunction = [](double value) {
            return String::formatted("ADSR VCA level: %i%%", (int)(100.0 * (value / 10.0)));
        };
        sliderKIJIMI_ADSR_VCA.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_MASTER_VOL
        sliderKIJIMI_MASTER_VOL.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MASTER_VOL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MASTER_VOL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MASTER_VOL);
        sliderAttachmentKIJIMI_MASTER_VOL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MASTER_VOL", sliderKIJIMI_MASTER_VOL));
        sliderKIJIMI_MASTER_VOL.textFromValueFunction = [](double value) {
            return String::formatted("Master volume: %idB", ((int)value - 6));
        };
        sliderKIJIMI_MASTER_VOL.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCO_DETUNE
        sliderKIJIMI_VCO_DETUNE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO_DETUNE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO_DETUNE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO_DETUNE);
        sliderAttachmentKIJIMI_VCO_DETUNE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO_DETUNE", sliderKIJIMI_VCO_DETUNE));
        sliderKIJIMI_VCO_DETUNE.textFromValueFunction = [](double value) {
            return String::formatted("VCO detune: %.2fHz", 0.1 * value);
        };
        sliderKIJIMI_VCO_DETUNE.setLookAndFeel (&knobLookAndFeel);
        // ComboBox KIJIMI_CARDS_VOCIE
        sliderKIJIMI_CARDS_VOCIE.addItemList (StringArray ({"1", "2", "4"}), 1);
        addAndMakeVisible (&sliderKIJIMI_CARDS_VOCIE);
        sliderAttachmentKIJIMI_CARDS_VOCIE.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_CARDS_VOCIE", sliderKIJIMI_CARDS_VOCIE));
        // Slider KIJIMI_LEG_EG_RETRIG
        sliderKIJIMI_LEG_EG_RETRIG.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LEG_EG_RETRIG.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LEG_EG_RETRIG.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LEG_EG_RETRIG);
        sliderAttachmentKIJIMI_LEG_EG_RETRIG.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEG_EG_RETRIG", sliderKIJIMI_LEG_EG_RETRIG));
        sliderKIJIMI_LEG_EG_RETRIG.textFromValueFunction = [](double value) {
            if (value == 0){ return "Legato EG retrig: on"; } 
            else { return "Legato EG retrig: off";}
        };
        sliderKIJIMI_LEG_EG_RETRIG.setLookAndFeel (&button1LookAndFeelInverted);
        // Slider KIJIMI_LEG_PRIORITY
        sliderKIJIMI_LEG_PRIORITY.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LEG_PRIORITY.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LEG_PRIORITY.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LEG_PRIORITY);
        sliderAttachmentKIJIMI_LEG_PRIORITY.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEG_PRIORITY", sliderKIJIMI_LEG_PRIORITY));
        sliderKIJIMI_LEG_PRIORITY.textFromValueFunction = [](double value) {
            if (value == 0){ return "Legato priority: no"; } 
            else if (value == 1){ return "Legato priority: low";}
            else { return "Legato priority: high";}
        };
        sliderKIJIMI_LEG_PRIORITY.setLookAndFeel (&button2Alt3ValuesLookAndFeel);
        // Slider KIJIMI_MONO_MODE
        sliderKIJIMI_MONO_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MONO_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MONO_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MONO_MODE);
        sliderAttachmentKIJIMI_MONO_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MONO_MODE", sliderKIJIMI_MONO_MODE));
        sliderKIJIMI_MONO_MODE.textFromValueFunction = [](double value) {
            if (value == 0){ return "Mono mode: legato"; } 
            else { return "Mono mode: stacatto";}
        };
        sliderKIJIMI_MONO_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
        // Slider KIJIMI_MONO_POLY
        sliderKIJIMI_MONO_POLY.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MONO_POLY.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MONO_POLY.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MONO_POLY);
        sliderAttachmentKIJIMI_MONO_POLY.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MONO_POLY", sliderKIJIMI_MONO_POLY));
        sliderKIJIMI_MONO_POLY.textFromValueFunction = [](double value) {
            if (value == 0){ return "Mono/poly/unisson: mono"; } 
            else if (value == 1){ return "Mono/poly/unisson: poly";}
            else { return "Mono/poly/unisson: unisson";}
        };
        sliderKIJIMI_MONO_POLY.setLookAndFeel (&button2Alt3ValuesLookAndFeelOffset1);
        // Slider KIJIMI_SUSTAIN_MODE
        sliderKIJIMI_SUSTAIN_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_SUSTAIN_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SUSTAIN_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SUSTAIN_MODE);
        sliderAttachmentKIJIMI_SUSTAIN_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SUSTAIN_MODE", sliderKIJIMI_SUSTAIN_MODE));
        sliderKIJIMI_SUSTAIN_MODE.textFromValueFunction = [](double value) {
            if (value == 0){ return "Sustain mode: I"; } 
            else { return "Sustain mode: II";}
        };
        sliderKIJIMI_SUSTAIN_MODE.setLookAndFeel (&button2Alt2ValuesLookAndFeel);
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
        float timbreSpaceYOffset = 0.373;
        timbreSpace.setBounds (timbreSpaceYOffset * getWidth(), 0, (1 - timbreSpaceYOffset) * (getWidth() + 0.5 * unitMargin), getHeight());
        
        // Position sliders
        // --> Start auto-generated code C
        sliderKIJIMI_ADSR_MOD_MODE.setBounds (0.185 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR_MOD_MODE
        sliderKIJIMI_CYCLE_MODE.setBounds (0.099 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_CYCLE_MODE
        sliderKIJIMI_KT_MULTIPLIER.setBounds (0.142 * getWidth(), 0.541 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_KT_MULTIPLIER
        sliderKIJIMI_LFO_MODE.setBounds (0.244 * getWidth(), 0.082 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO_MODE
        sliderKIJIMI_LFO_MOD_MODE.setBounds (0.330 * getWidth(), 0.082 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO_MOD_MODE
        sliderKIJIMI_LFO_POLY_RETRIG.setBounds (0.287 * getWidth(), 0.082 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO_POLY_RETRIG
        sliderKIJIMI_LFO1_ENV_DEST.setBounds (0.287 * getWidth(), 0.321 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1_ENV_DEST
        sliderKIJIMI_LFO1_ENV_MAX_T.setBounds (0.308 * getWidth(), 0.495 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_LFO1_ENV_MAX_T
        sliderKIJIMI_LFO1_ENV_P.setBounds (0.341 * getWidth(), 0.495 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_LFO1_ENV_P
        sliderKIJIMI_LFO1_SYNC.setBounds (0.244 * getWidth(), 0.321 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1_SYNC
        sliderKIJIMI_LFO1_MAX_R.setBounds (0.271 * getWidth(), 0.495 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_LFO1_MAX_R
        sliderKIJIMI_LFO1_MIN_R.setBounds (0.238 * getWidth(), 0.495 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_LFO1_MIN_R
        sliderKIJIMI_LFO1_SUST.setBounds (0.330 * getWidth(), 0.321 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1_SUST
        sliderKIJIMI_LFO2_ENV_DEST.setBounds (0.287 * getWidth(), 0.679 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2_ENV_DEST
        sliderKIJIMI_LFO2_ENV_MAX_T.setBounds (0.308 * getWidth(), 0.853 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_LFO2_ENV_MAX_T
        sliderKIJIMI_LFO2_ENV_P.setBounds (0.341 * getWidth(), 0.853 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_LFO2_ENV_P
        sliderKIJIMI_LFO2_SYNC.setBounds (0.244 * getWidth(), 0.679 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2_SYNC
        sliderKIJIMI_LFO2_MAX_R.setBounds (0.271 * getWidth(), 0.853 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_LFO2_MAX_R
        sliderKIJIMI_LFO2_MIN_R.setBounds (0.238 * getWidth(), 0.853 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_LFO2_MIN_R
        sliderKIJIMI_LFO2_SUST.setBounds (0.330 * getWidth(), 0.679 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2_SUST
        sliderKIJIMI_AT_CURVE.setBounds (0.009 * getWidth(), 0.202 * getHeight(), 0.070 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_AT_CURVE
        sliderKIJIMI_CC74_DEST.setBounds (0.009 * getWidth(), 0.294 * getHeight(), 0.070 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_CC74_DEST
        sliderKIJIMI_MODW_DEST.setBounds (0.009 * getWidth(), 0.385 * getHeight(), 0.070 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_MODW_DEST
        sliderKIJIMI_MODW_P.setBounds (0.028 * getWidth(), 0.468 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_MODW_P
        sliderKIJIMI_PBEND_RANGE.setBounds (0.013 * getWidth(), 0.624 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_PBEND_RANGE
        sliderKIJIMI_MPE_PBEND_RANGE.setBounds (0.049 * getWidth(), 0.624 * getHeight(), 0.026 * getWidth(), 0.064 * getHeight()); // Slider KIJIMI_MPE_PBEND_RANGE
        sliderKIJIMI_VEL_CURVE.setBounds (0.009 * getWidth(), 0.110 * getHeight(), 0.070 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_VEL_CURVE
        sliderKIJIMI_ADSR_VCA.setBounds (0.110 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR_VCA
        sliderKIJIMI_MASTER_VOL.setBounds (0.172 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_MASTER_VOL
        sliderKIJIMI_VCO_DETUNE.setBounds (0.027 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO_DETUNE
        sliderKIJIMI_CARDS_VOCIE.setBounds (0.095 * getWidth(), 0.118 * getHeight(), 0.040 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_CARDS_VOCIE
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
    CycleButtonSlider3StepsInt sliderKIJIMI_LFO1_ENV_DEST;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_ENV_DEST;
    Slider sliderKIJIMI_LFO1_ENV_MAX_T;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_ENV_MAX_T;
    Slider sliderKIJIMI_LFO1_ENV_P;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_ENV_P;
    CycleButtonSlider3StepsInt sliderKIJIMI_LFO1_SYNC;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_SYNC;
    Slider sliderKIJIMI_LFO1_MAX_R;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_MAX_R;
    Slider sliderKIJIMI_LFO1_MIN_R;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_MIN_R;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1_SUST;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_SUST;
    CycleButtonSlider3StepsInt sliderKIJIMI_LFO2_ENV_DEST;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_ENV_DEST;
    Slider sliderKIJIMI_LFO2_ENV_MAX_T;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_ENV_MAX_T;
    Slider sliderKIJIMI_LFO2_ENV_P;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_ENV_P;
    CycleButtonSlider3StepsInt sliderKIJIMI_LFO2_SYNC;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_SYNC;
    Slider sliderKIJIMI_LFO2_MAX_R;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_MAX_R;
    Slider sliderKIJIMI_LFO2_MIN_R;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_MIN_R;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2_SUST;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_SUST;
    ComboBox sliderKIJIMI_AT_CURVE;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_AT_CURVE;
    ComboBox sliderKIJIMI_CC74_DEST;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_CC74_DEST;
    ComboBox sliderKIJIMI_MODW_DEST;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_MODW_DEST;
    CycleButtonSlider2StepsInt sliderKIJIMI_MODW_P;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MODW_P;
    Slider sliderKIJIMI_PBEND_RANGE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_PBEND_RANGE;
    Slider sliderKIJIMI_MPE_PBEND_RANGE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MPE_PBEND_RANGE;
    ComboBox sliderKIJIMI_VEL_CURVE;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_VEL_CURVE;
    Slider sliderKIJIMI_ADSR_VCA;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR_VCA;
    Slider sliderKIJIMI_MASTER_VOL;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MASTER_VOL;
    Slider sliderKIJIMI_VCO_DETUNE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO_DETUNE;
    ComboBox sliderKIJIMI_CARDS_VOCIE;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_CARDS_VOCIE;
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
