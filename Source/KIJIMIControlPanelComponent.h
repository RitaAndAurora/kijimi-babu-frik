//
//  KIJIMIControlPanelComponent.h
//  KIJIMIControlPanelComponent.h
//
//  Created by Frederic Font Corbera on 24/04/2019.
//  Copyright © 2019 Rita&AuroraAudio. All rights reserved.
//


#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "KIJIMIInterface.h"
#include "CustomLookAndFeel.h"
#include "defines.h"

class KIJIMIControlPanelComponent: public Component

{
public:
    KIJIMIControlPanelComponent ()
    {
    }
    
    ~KIJIMIControlPanelComponent ()
    {
    }
    
    void initialize (BabuFrikAudioProcessor* p)
    {
        // Set processor object
        processor = p;
        
        // Configure look and feel classes
        kijimiKnob.setColour (Slider::thumbColourId, Colour(Colours::white));
        
        // Configure sliders
        // --> Start auto-generated code B
        // Slider KIJIMI_LFO1_AMT
        sliderKIJIMI_LFO1_AMT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_AMT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_AMT.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_LFO1_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_AMT);
        sliderAttachmentKIJIMI_LFO1_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_AMT", sliderKIJIMI_LFO1_AMT));
        sliderKIJIMI_LFO1_AMT.textFromValueFunction = [](double value) {
            return "LFO1 amount: " + String (value);
        };
        // Slider KIJIMI_LFO2_AMT
        sliderKIJIMI_LFO2_AMT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_AMT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_AMT.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_LFO2_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_AMT);
        sliderAttachmentKIJIMI_LFO2_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_AMT", sliderKIJIMI_LFO2_AMT));
        sliderKIJIMI_LFO2_AMT.textFromValueFunction = [](double value) {
            return "LFO2 amount: " + String (value);
        };
        // Slider KIJIMI_ADSR2_AMT
        sliderKIJIMI_ADSR2_AMT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_AMT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_AMT.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR2_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_AMT);
        sliderAttachmentKIJIMI_ADSR2_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_AMT", sliderKIJIMI_ADSR2_AMT));
        sliderKIJIMI_ADSR2_AMT.textFromValueFunction = [](double value) {
            return "ADSR2 amount: " + String (value);
        };
        // Slider KIJIMI_VCO2VCO1
        sliderKIJIMI_VCO2VCO1.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2VCO1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2VCO1.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCO2VCO1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2VCO1);
        sliderAttachmentKIJIMI_VCO2VCO1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2VCO1", sliderKIJIMI_VCO2VCO1));
        sliderKIJIMI_VCO2VCO1.textFromValueFunction = [](double value) {
            return "VCO2 to VCO1: " + String (value);
        };
        // Slider KIJIMI_VCO2VCF
        sliderKIJIMI_VCO2VCF.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2VCF.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2VCF.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCO2VCF.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2VCF);
        sliderAttachmentKIJIMI_VCO2VCF.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2VCF", sliderKIJIMI_VCO2VCF));
        sliderKIJIMI_VCO2VCF.textFromValueFunction = [](double value) {
            return "VCO2 to VCF: " + String (value);
        };
        // Slider KIJIMI_VEL_LFO1RATE
        sliderKIJIMI_VEL_LFO1RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_LFO1RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_LFO1RATE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VEL_LFO1RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_LFO1RATE);
        sliderAttachmentKIJIMI_VEL_LFO1RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_LFO1RATE", sliderKIJIMI_VEL_LFO1RATE));
        sliderKIJIMI_VEL_LFO1RATE.textFromValueFunction = [](double value) {
            return "Velocity to LFO1 rate: " + String (value);
        };
        // Slider KIJIMI_VEL_LFO2RATE
        sliderKIJIMI_VEL_LFO2RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_LFO2RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_LFO2RATE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VEL_LFO2RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_LFO2RATE);
        sliderAttachmentKIJIMI_VEL_LFO2RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_LFO2RATE", sliderKIJIMI_VEL_LFO2RATE));
        sliderKIJIMI_VEL_LFO2RATE.textFromValueFunction = [](double value) {
            return "Velocity to LFO2 rate: " + String (value);
        };
        // Slider KIJIMI_VEL_WAVE
        sliderKIJIMI_VEL_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_WAVE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VEL_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_WAVE);
        sliderAttachmentKIJIMI_VEL_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_WAVE", sliderKIJIMI_VEL_WAVE));
        sliderKIJIMI_VEL_WAVE.textFromValueFunction = [](double value) {
            return "Velocity to waveform: " + String (value);
        };
        // Slider KIJIMI_VEL_SUB
        sliderKIJIMI_VEL_SUB.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_SUB.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_SUB.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VEL_SUB.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_SUB);
        sliderAttachmentKIJIMI_VEL_SUB.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_SUB", sliderKIJIMI_VEL_SUB));
        sliderKIJIMI_VEL_SUB.textFromValueFunction = [](double value) {
            return "Velocity to sub amount: " + String (value);
        };
        // Slider KIJIMI_VEL_PITCH
        sliderKIJIMI_VEL_PITCH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_PITCH.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VEL_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_PITCH);
        sliderAttachmentKIJIMI_VEL_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_PITCH", sliderKIJIMI_VEL_PITCH));
        sliderKIJIMI_VEL_PITCH.textFromValueFunction = [](double value) {
            return "Velocity to pitchbend: " + String (value);
        };
        // Slider KIJIMI_VEL_VCA
        sliderKIJIMI_VEL_VCA.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_VCA.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_VCA.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VEL_VCA.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_VCA);
        sliderAttachmentKIJIMI_VEL_VCA.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_VCA", sliderKIJIMI_VEL_VCA));
        sliderKIJIMI_VEL_VCA.textFromValueFunction = [](double value) {
            return "Velocity to VCA: " + String (value);
        };
        // Slider KIJIMI_AT_LFO1RATE
        sliderKIJIMI_AT_LFO1RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_LFO1RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_LFO1RATE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_AT_LFO1RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_LFO1RATE);
        sliderAttachmentKIJIMI_AT_LFO1RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_LFO1RATE", sliderKIJIMI_AT_LFO1RATE));
        sliderKIJIMI_AT_LFO1RATE.textFromValueFunction = [](double value) {
            return "Aftertouch to LFO1 rate: " + String (value);
        };
        // Slider KIJIMI_AT_LFO2RATE
        sliderKIJIMI_AT_LFO2RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_LFO2RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_LFO2RATE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_AT_LFO2RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_LFO2RATE);
        sliderAttachmentKIJIMI_AT_LFO2RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_LFO2RATE", sliderKIJIMI_AT_LFO2RATE));
        sliderKIJIMI_AT_LFO2RATE.textFromValueFunction = [](double value) {
            return "Aftertouch to LFO2 rate: " + String (value);
        };
        // Slider KIJIMI_AT_WAVE
        sliderKIJIMI_AT_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_WAVE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_AT_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_WAVE);
        sliderAttachmentKIJIMI_AT_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_WAVE", sliderKIJIMI_AT_WAVE));
        sliderKIJIMI_AT_WAVE.textFromValueFunction = [](double value) {
            return "Aftertouch to waveform: " + String (value);
        };
        // Slider KIJIMI_AT_SUB
        sliderKIJIMI_AT_SUB.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_SUB.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_SUB.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_AT_SUB.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_SUB);
        sliderAttachmentKIJIMI_AT_SUB.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_SUB", sliderKIJIMI_AT_SUB));
        sliderKIJIMI_AT_SUB.textFromValueFunction = [](double value) {
            return "Aftertouch to sub amount: " + String (value);
        };
        // Slider KIJIMI_AT_PITCH
        sliderKIJIMI_AT_PITCH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_PITCH.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_AT_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_PITCH);
        sliderAttachmentKIJIMI_AT_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_PITCH", sliderKIJIMI_AT_PITCH));
        sliderKIJIMI_AT_PITCH.textFromValueFunction = [](double value) {
            return "Aftertouch to pitchbend: " + String (value);
        };
        // Slider KIJIMI_AT_VCA
        sliderKIJIMI_AT_VCA.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_VCA.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_VCA.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_AT_VCA.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_VCA);
        sliderAttachmentKIJIMI_AT_VCA.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_VCA", sliderKIJIMI_AT_VCA));
        sliderKIJIMI_AT_VCA.textFromValueFunction = [](double value) {
            return "Aftertouch to VCA: " + String (value);
        };
        // Slider KIJIMI_LFO1_RATE
        sliderKIJIMI_LFO1_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_RATE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_LFO1_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_RATE);
        sliderAttachmentKIJIMI_LFO1_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_RATE", sliderKIJIMI_LFO1_RATE));
        sliderKIJIMI_LFO1_RATE.textFromValueFunction = [](double value) {
            return "LFO1 rate: " + String (value);
        };
        // Slider KIJIMI_LFO1_A
        sliderKIJIMI_LFO1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_A.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_LFO1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_A);
        sliderAttachmentKIJIMI_LFO1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_A", sliderKIJIMI_LFO1_A));
        sliderKIJIMI_LFO1_A.textFromValueFunction = [](double value) {
            return "LFO1 attack: " + String (value);
        };
        // Slider KIJIMI_LFO1_D
        sliderKIJIMI_LFO1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_D.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_LFO1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_D);
        sliderAttachmentKIJIMI_LFO1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_D", sliderKIJIMI_LFO1_D));
        sliderKIJIMI_LFO1_D.textFromValueFunction = [](double value) {
            return "LFO1 decay: " + String (value);
        };
        // Slider KIJIMI_LFO2_RATE
        sliderKIJIMI_LFO2_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_RATE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_LFO2_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_RATE);
        sliderAttachmentKIJIMI_LFO2_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_RATE", sliderKIJIMI_LFO2_RATE));
        sliderKIJIMI_LFO2_RATE.textFromValueFunction = [](double value) {
            return "LFO2 rate: " + String (value);
        };
        // Slider KIJIMI_LFO2_A
        sliderKIJIMI_LFO2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_A.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_LFO2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_A);
        sliderAttachmentKIJIMI_LFO2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_A", sliderKIJIMI_LFO2_A));
        sliderKIJIMI_LFO2_A.textFromValueFunction = [](double value) {
            return "LFO2 attack: " + String (value);
        };
        // Slider KIJIMI_LFO2_D
        sliderKIJIMI_LFO2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_D.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_LFO2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_D);
        sliderAttachmentKIJIMI_LFO2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_D", sliderKIJIMI_LFO2_D));
        sliderKIJIMI_LFO2_D.textFromValueFunction = [](double value) {
            return "LFO2 decay: " + String (value);
        };
        // Slider KIJIMI_VCO1_FREQ
        sliderKIJIMI_VCO1_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_FREQ.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCO1_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_FREQ);
        sliderAttachmentKIJIMI_VCO1_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_FREQ", sliderKIJIMI_VCO1_FREQ));
        sliderKIJIMI_VCO1_FREQ.textFromValueFunction = [](double value) {
            return "VCO1 frequency: " + String (value);
        };
        // Slider KIJIMI_VCO1_WAVE
        sliderKIJIMI_VCO1_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_WAVE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCO1_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_WAVE);
        sliderAttachmentKIJIMI_VCO1_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_WAVE", sliderKIJIMI_VCO1_WAVE));
        sliderKIJIMI_VCO1_WAVE.textFromValueFunction = [](double value) {
            return "VCO1 waveform: " + String (value);
        };
        // Slider KIJIMI_SUB_VOL
        sliderKIJIMI_SUB_VOL.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_SUB_VOL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SUB_VOL.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_SUB_VOL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SUB_VOL);
        sliderAttachmentKIJIMI_SUB_VOL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SUB_VOL", sliderKIJIMI_SUB_VOL));
        sliderKIJIMI_SUB_VOL.textFromValueFunction = [](double value) {
            return "Sub volume: " + String (value);
        };
        // Slider KIJIMI_VCO2_FREQ
        sliderKIJIMI_VCO2_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_FREQ.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCO2_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_FREQ);
        sliderAttachmentKIJIMI_VCO2_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_FREQ", sliderKIJIMI_VCO2_FREQ));
        sliderKIJIMI_VCO2_FREQ.textFromValueFunction = [](double value) {
            return "VCO2 frequency: " + String (value);
        };
        // Slider KIJIMI_VCO2WAVE
        sliderKIJIMI_VCO2WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2WAVE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCO2WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2WAVE);
        sliderAttachmentKIJIMI_VCO2WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2WAVE", sliderKIJIMI_VCO2WAVE));
        sliderKIJIMI_VCO2WAVE.textFromValueFunction = [](double value) {
            return "VCO2 waveform: " + String (value);
        };
        // Slider KIJIMI_VCO2_VOL
        sliderKIJIMI_VCO2_VOL.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_VOL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_VOL.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCO2_VOL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_VOL);
        sliderAttachmentKIJIMI_VCO2_VOL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_VOL", sliderKIJIMI_VCO2_VOL));
        sliderKIJIMI_VCO2_VOL.textFromValueFunction = [](double value) {
            return "VCO2 volume: " + String (value);
        };
        // Slider KIJIMI_VCO2_DETUNE
        sliderKIJIMI_VCO2_DETUNE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_DETUNE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_DETUNE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCO2_DETUNE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_DETUNE);
        sliderAttachmentKIJIMI_VCO2_DETUNE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_DETUNE", sliderKIJIMI_VCO2_DETUNE));
        sliderKIJIMI_VCO2_DETUNE.textFromValueFunction = [](double value) {
            return "VCO2 detune: " + String (value);
        };
        // Slider KIJIMI_VCF_FREQ
        sliderKIJIMI_VCF_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_FREQ.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCF_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_FREQ);
        sliderAttachmentKIJIMI_VCF_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_FREQ", sliderKIJIMI_VCF_FREQ));
        sliderKIJIMI_VCF_FREQ.textFromValueFunction = [](double value) {
            return "VCF Frequency: " + String (value);
        };
        // Slider KIJIMI_VCF_VEL_C
        sliderKIJIMI_VCF_VEL_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_VEL_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_VEL_C.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCF_VEL_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_VEL_C);
        sliderAttachmentKIJIMI_VCF_VEL_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_VEL_C", sliderKIJIMI_VCF_VEL_C));
        sliderKIJIMI_VCF_VEL_C.textFromValueFunction = [](double value) {
            return "VCF Velocity control: " + String (value);
        };
        // Slider KIJIMI_VCF_AT_C
        sliderKIJIMI_VCF_AT_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_AT_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_AT_C.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCF_AT_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_AT_C);
        sliderAttachmentKIJIMI_VCF_AT_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_AT_C", sliderKIJIMI_VCF_AT_C));
        sliderKIJIMI_VCF_AT_C.textFromValueFunction = [](double value) {
            return "VCF Aftertouch control: " + String (value);
        };
        // Slider KIJIMI_VCF_ADSR2_C
        sliderKIJIMI_VCF_ADSR2_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_ADSR2_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_ADSR2_C.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCF_ADSR2_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_ADSR2_C);
        sliderAttachmentKIJIMI_VCF_ADSR2_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_ADSR2_C", sliderKIJIMI_VCF_ADSR2_C));
        sliderKIJIMI_VCF_ADSR2_C.textFromValueFunction = [](double value) {
            return "VCF ADSR2 control: " + String (value);
        };
        // Slider KIJIMI_VCF_RESO
        sliderKIJIMI_VCF_RESO.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_RESO.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_RESO.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCF_RESO.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_RESO);
        sliderAttachmentKIJIMI_VCF_RESO.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_RESO", sliderKIJIMI_VCF_RESO));
        sliderKIJIMI_VCF_RESO.textFromValueFunction = [](double value) {
            return "VCF Resonance: " + String (value);
        };
        // Slider KIJIMI_VCF_Q_VEL_C
        sliderKIJIMI_VCF_Q_VEL_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_Q_VEL_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_Q_VEL_C.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCF_Q_VEL_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_Q_VEL_C);
        sliderAttachmentKIJIMI_VCF_Q_VEL_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_Q_VEL_C", sliderKIJIMI_VCF_Q_VEL_C));
        sliderKIJIMI_VCF_Q_VEL_C.textFromValueFunction = [](double value) {
            return "VCF Velocity Q control: " + String (value);
        };
        // Slider KIJIMI_VCF_Q_AT_C
        sliderKIJIMI_VCF_Q_AT_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_Q_AT_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_Q_AT_C.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCF_Q_AT_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_Q_AT_C);
        sliderAttachmentKIJIMI_VCF_Q_AT_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_Q_AT_C", sliderKIJIMI_VCF_Q_AT_C));
        sliderKIJIMI_VCF_Q_AT_C.textFromValueFunction = [](double value) {
            return "VCF Aftertouch Q control: " + String (value);
        };
        // Slider KIJIMI_VCF_KEY_C
        sliderKIJIMI_VCF_KEY_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_KEY_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_KEY_C.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VCF_KEY_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_KEY_C);
        sliderAttachmentKIJIMI_VCF_KEY_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_KEY_C", sliderKIJIMI_VCF_KEY_C));
        sliderKIJIMI_VCF_KEY_C.textFromValueFunction = [](double value) {
            return "VCF Keyboard control: " + String (value);
        };
        // Slider KIJIMI_ADSR2_A
        sliderKIJIMI_ADSR2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_A.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_A);
        sliderAttachmentKIJIMI_ADSR2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_A", sliderKIJIMI_ADSR2_A));
        sliderKIJIMI_ADSR2_A.textFromValueFunction = [](double value) {
            return "ADSR2 attack: " + String (value);
        };
        // Slider KIJIMI_ADSR2_D
        sliderKIJIMI_ADSR2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_D.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_D);
        sliderAttachmentKIJIMI_ADSR2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_D", sliderKIJIMI_ADSR2_D));
        sliderKIJIMI_ADSR2_D.textFromValueFunction = [](double value) {
            return "ADSR2 decay: " + String (value);
        };
        // Slider KIJIMI_ADSR2_S
        sliderKIJIMI_ADSR2_S.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_S.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_S.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR2_S.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_S);
        sliderAttachmentKIJIMI_ADSR2_S.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_S", sliderKIJIMI_ADSR2_S));
        sliderKIJIMI_ADSR2_S.textFromValueFunction = [](double value) {
            return "ADSR2 sustain: " + String (value);
        };
        // Slider KIJIMI_ADSR2_R
        sliderKIJIMI_ADSR2_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_R.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR2_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_R);
        sliderAttachmentKIJIMI_ADSR2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_R", sliderKIJIMI_ADSR2_R));
        sliderKIJIMI_ADSR2_R.textFromValueFunction = [](double value) {
            return "ADSR2 release: " + String (value);
        };
        // Slider KIJIMI_ADSR1_A
        sliderKIJIMI_ADSR1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_A.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_A);
        sliderAttachmentKIJIMI_ADSR1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_A", sliderKIJIMI_ADSR1_A));
        sliderKIJIMI_ADSR1_A.textFromValueFunction = [](double value) {
            return "ADSR1 attack: " + String (value);
        };
        // Slider KIJIMI_ADSR1_D
        sliderKIJIMI_ADSR1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_D.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_D);
        sliderAttachmentKIJIMI_ADSR1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_D", sliderKIJIMI_ADSR1_D));
        sliderKIJIMI_ADSR1_D.textFromValueFunction = [](double value) {
            return "ADSR1 decay: " + String (value);
        };
        // Slider KIJIMI_ADSR1_S
        sliderKIJIMI_ADSR1_S.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_S.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_S.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR1_S.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_S);
        sliderAttachmentKIJIMI_ADSR1_S.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_S", sliderKIJIMI_ADSR1_S));
        sliderKIJIMI_ADSR1_S.textFromValueFunction = [](double value) {
            return "ADSR1 sustain: " + String (value);
        };
        // Slider KIJIMI_ADSR1_R
        sliderKIJIMI_ADSR1_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_R.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_ADSR1_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_R);
        sliderAttachmentKIJIMI_ADSR1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_R", sliderKIJIMI_ADSR1_R));
        sliderKIJIMI_ADSR1_R.textFromValueFunction = [](double value) {
            return "ADSR1 release: " + String (value);
        };
        // Slider KIJIMI_GLIDE_RATE
        sliderKIJIMI_GLIDE_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_GLIDE_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_GLIDE_RATE.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_GLIDE_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_GLIDE_RATE);
        sliderAttachmentKIJIMI_GLIDE_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_GLIDE_RATE", sliderKIJIMI_GLIDE_RATE));
        sliderKIJIMI_GLIDE_RATE.textFromValueFunction = [](double value) {
            return "Glide rate: " + String (value);
        };
        // Slider KIJIMI_VOLUME
        sliderKIJIMI_VOLUME.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VOLUME.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VOLUME.setLookAndFeel (&kijimiKnob);
        sliderKIJIMI_VOLUME.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VOLUME);
        sliderAttachmentKIJIMI_VOLUME.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VOLUME", sliderKIJIMI_VOLUME));
        sliderKIJIMI_VOLUME.textFromValueFunction = [](double value) {
            return "Volume: " + String (value);
        };
        // --> End auto-generated code B
    }
    
    void paint (Graphics& g) override
    {
        Image background = ImageCache::getFromMemory (BinaryData::KijimiMainPanelBackground_png, BinaryData::KijimiMainPanelBackground_pngSize);
        g.drawImage (background, getLocalBounds().toFloat());
    }

    void resized() override
    {
        // Position sliders
        // --> Start auto-generated code C
        sliderKIJIMI_LFO1_AMT.setBounds (0.026 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1_AMT
        sliderKIJIMI_LFO2_AMT.setBounds (0.026 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2_AMT
        sliderKIJIMI_ADSR2_AMT.setBounds (0.026 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2_AMT
        sliderKIJIMI_VCO2VCO1.setBounds (0.245 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2VCO1
        sliderKIJIMI_VCO2VCF.setBounds (0.300 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2VCF
        sliderKIJIMI_VEL_LFO1RATE.setBounds (0.026 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VEL_LFO1RATE
        sliderKIJIMI_VEL_LFO2RATE.setBounds (0.081 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VEL_LFO2RATE
        sliderKIJIMI_VEL_WAVE.setBounds (0.136 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VEL_WAVE
        sliderKIJIMI_VEL_SUB.setBounds (0.190 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VEL_SUB
        sliderKIJIMI_VEL_PITCH.setBounds (0.245 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VEL_PITCH
        sliderKIJIMI_VEL_VCA.setBounds (0.300 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VEL_VCA
        sliderKIJIMI_AT_LFO1RATE.setBounds (0.026 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_AT_LFO1RATE
        sliderKIJIMI_AT_LFO2RATE.setBounds (0.081 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_AT_LFO2RATE
        sliderKIJIMI_AT_WAVE.setBounds (0.136 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_AT_WAVE
        sliderKIJIMI_AT_SUB.setBounds (0.190 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_AT_SUB
        sliderKIJIMI_AT_PITCH.setBounds (0.245 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_AT_PITCH
        sliderKIJIMI_AT_VCA.setBounds (0.300 * getWidth(), 0.826 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_AT_VCA
        sliderKIJIMI_LFO1_RATE.setBounds (0.366 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1_RATE
        sliderKIJIMI_LFO1_A.setBounds (0.366 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1_A
        sliderKIJIMI_LFO1_D.setBounds (0.366 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1_D
        sliderKIJIMI_LFO2_RATE.setBounds (0.432 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2_RATE
        sliderKIJIMI_LFO2_A.setBounds (0.432 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2_A
        sliderKIJIMI_LFO2_D.setBounds (0.432 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2_D
        sliderKIJIMI_VCO1_FREQ.setBounds (0.509 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO1_FREQ
        sliderKIJIMI_VCO1_WAVE.setBounds (0.509 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO1_WAVE
        sliderKIJIMI_SUB_VOL.setBounds (0.509 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_SUB_VOL
        sliderKIJIMI_VCO2_FREQ.setBounds (0.579 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2_FREQ
        sliderKIJIMI_VCO2WAVE.setBounds (0.579 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2WAVE
        sliderKIJIMI_VCO2_VOL.setBounds (0.579 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2_VOL
        sliderKIJIMI_VCO2_DETUNE.setBounds (0.579 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2_DETUNE
        sliderKIJIMI_VCF_FREQ.setBounds (0.659 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCF_FREQ
        sliderKIJIMI_VCF_VEL_C.setBounds (0.659 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCF_VEL_C
        sliderKIJIMI_VCF_AT_C.setBounds (0.659 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCF_AT_C
        sliderKIJIMI_VCF_ADSR2_C.setBounds (0.659 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCF_ADSR2_C
        sliderKIJIMI_VCF_RESO.setBounds (0.720 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCF_RESO
        sliderKIJIMI_VCF_Q_VEL_C.setBounds (0.720 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCF_Q_VEL_C
        sliderKIJIMI_VCF_Q_AT_C.setBounds (0.720 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCF_Q_AT_C
        sliderKIJIMI_VCF_KEY_C.setBounds (0.720 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCF_KEY_C
        sliderKIJIMI_ADSR2_A.setBounds (0.780 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2_A
        sliderKIJIMI_ADSR2_D.setBounds (0.780 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2_D
        sliderKIJIMI_ADSR2_S.setBounds (0.780 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2_S
        sliderKIJIMI_ADSR2_R.setBounds (0.780 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2_R
        sliderKIJIMI_ADSR1_A.setBounds (0.861 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR1_A
        sliderKIJIMI_ADSR1_D.setBounds (0.861 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR1_D
        sliderKIJIMI_ADSR1_S.setBounds (0.861 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR1_S
        sliderKIJIMI_ADSR1_R.setBounds (0.861 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR1_R
        sliderKIJIMI_GLIDE_RATE.setBounds (0.941 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_GLIDE_RATE
        sliderKIJIMI_VOLUME.setBounds (0.941 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VOLUME
        // --> End auto-generated code C
    }
    
private:
    BabuFrikAudioProcessor* processor;
    
    // Look and feel objects
    CustomLookAndFeel kijimiKnob;
    
    // Slider declarations
    // --> Start auto-generated code A
    Slider sliderKIJIMI_LFO1_AMT;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_AMT;
    Slider sliderKIJIMI_LFO2_AMT;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_AMT;
    Slider sliderKIJIMI_ADSR2_AMT;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2_AMT;
    Slider sliderKIJIMI_VCO2VCO1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2VCO1;
    Slider sliderKIJIMI_VCO2VCF;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2VCF;
    Slider sliderKIJIMI_VEL_LFO1RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VEL_LFO1RATE;
    Slider sliderKIJIMI_VEL_LFO2RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VEL_LFO2RATE;
    Slider sliderKIJIMI_VEL_WAVE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VEL_WAVE;
    Slider sliderKIJIMI_VEL_SUB;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VEL_SUB;
    Slider sliderKIJIMI_VEL_PITCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VEL_PITCH;
    Slider sliderKIJIMI_VEL_VCA;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VEL_VCA;
    Slider sliderKIJIMI_AT_LFO1RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_LFO1RATE;
    Slider sliderKIJIMI_AT_LFO2RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_LFO2RATE;
    Slider sliderKIJIMI_AT_WAVE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_WAVE;
    Slider sliderKIJIMI_AT_SUB;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_SUB;
    Slider sliderKIJIMI_AT_PITCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_PITCH;
    Slider sliderKIJIMI_AT_VCA;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_VCA;
    Slider sliderKIJIMI_LFO1_RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_RATE;
    Slider sliderKIJIMI_LFO1_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_A;
    Slider sliderKIJIMI_LFO1_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_D;
    Slider sliderKIJIMI_LFO2_RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_RATE;
    Slider sliderKIJIMI_LFO2_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_A;
    Slider sliderKIJIMI_LFO2_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_D;
    Slider sliderKIJIMI_VCO1_FREQ;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO1_FREQ;
    Slider sliderKIJIMI_VCO1_WAVE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO1_WAVE;
    Slider sliderKIJIMI_SUB_VOL;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SUB_VOL;
    Slider sliderKIJIMI_VCO2_FREQ;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2_FREQ;
    Slider sliderKIJIMI_VCO2WAVE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2WAVE;
    Slider sliderKIJIMI_VCO2_VOL;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2_VOL;
    Slider sliderKIJIMI_VCO2_DETUNE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2_DETUNE;
    Slider sliderKIJIMI_VCF_FREQ;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_FREQ;
    Slider sliderKIJIMI_VCF_VEL_C;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_VEL_C;
    Slider sliderKIJIMI_VCF_AT_C;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_AT_C;
    Slider sliderKIJIMI_VCF_ADSR2_C;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_ADSR2_C;
    Slider sliderKIJIMI_VCF_RESO;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_RESO;
    Slider sliderKIJIMI_VCF_Q_VEL_C;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_Q_VEL_C;
    Slider sliderKIJIMI_VCF_Q_AT_C;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_Q_AT_C;
    Slider sliderKIJIMI_VCF_KEY_C;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_KEY_C;
    Slider sliderKIJIMI_ADSR2_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2_A;
    Slider sliderKIJIMI_ADSR2_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2_D;
    Slider sliderKIJIMI_ADSR2_S;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2_S;
    Slider sliderKIJIMI_ADSR2_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2_R;
    Slider sliderKIJIMI_ADSR1_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR1_A;
    Slider sliderKIJIMI_ADSR1_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR1_D;
    Slider sliderKIJIMI_ADSR1_S;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR1_S;
    Slider sliderKIJIMI_ADSR1_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR1_R;
    Slider sliderKIJIMI_GLIDE_RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_GLIDE_RATE;
    Slider sliderKIJIMI_VOLUME;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VOLUME;
    // --> End auto-generated code A
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMIControlPanelComponent);
};
