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
#include "BabuFrikBaseLookAndFeel.h"
#include "CustomClasses.h"
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
        
        // Initialize led strips
        ledsLFO1.initialize(processor, "KIJIMI_LFO1_SHAPE");
        ledsLFO2.initialize(processor, "KIJIMI_LFO2_SHAPE");
        addAndMakeVisible (ledsLFO1);
        addAndMakeVisible (ledsLFO2);
        
        // Configure sliders
        // --> Start auto-generated code B
        // Slider KIJIMI_LFO1_AMT
        sliderKIJIMI_LFO1_AMT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_AMT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_AMT.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_AMT);
        sliderAttachmentKIJIMI_LFO1_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_AMT", sliderKIJIMI_LFO1_AMT));
        sliderKIJIMI_LFO1_AMT.textFromValueFunction = [](double value) {
            return "LFO1 amount: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO1_P
        sliderKIJIMI_LFO1VCO1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO1_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1VCO1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_P);
        sliderAttachmentKIJIMI_LFO1VCO1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_P", sliderKIJIMI_LFO1VCO1_P));
        sliderKIJIMI_LFO1VCO1_P.textFromValueFunction = [](double value) {
            return "LFO1 to VCO1 polarity: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO2_P
        sliderKIJIMI_LFO1VCO2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO2_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1VCO2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_P);
        sliderAttachmentKIJIMI_LFO1VCO2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_P", sliderKIJIMI_LFO1VCO2_P));
        sliderKIJIMI_LFO1VCO2_P.textFromValueFunction = [](double value) {
            return "LFO1 to VCO2 polarity: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE1_P
        sliderKIJIMI_LFO1WAVE1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE1_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1WAVE1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_P);
        sliderAttachmentKIJIMI_LFO1WAVE1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_P", sliderKIJIMI_LFO1WAVE1_P));
        sliderKIJIMI_LFO1WAVE1_P.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE1 polarity: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE2_P
        sliderKIJIMI_LFO1WAVE2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE2_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1WAVE2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_P);
        sliderAttachmentKIJIMI_LFO1WAVE2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_P", sliderKIJIMI_LFO1WAVE2_P));
        sliderKIJIMI_LFO1WAVE2_P.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE2 polarity: " + String (value);
        };
        // Slider KIJIMI_LFO1SUB_P
        sliderKIJIMI_LFO1SUB_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1SUB_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1SUB_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1SUB_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1SUB_P);
        sliderAttachmentKIJIMI_LFO1SUB_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_P", sliderKIJIMI_LFO1SUB_P));
        sliderKIJIMI_LFO1SUB_P.textFromValueFunction = [](double value) {
            return "LFO1 to SUB polarity: " + String (value);
        };
        // Slider KIJIMI_LFO1VCF_P
        sliderKIJIMI_LFO1VCF_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCF_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCF_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1VCF_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCF_P);
        sliderAttachmentKIJIMI_LFO1VCF_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_P", sliderKIJIMI_LFO1VCF_P));
        sliderKIJIMI_LFO1VCF_P.textFromValueFunction = [](double value) {
            return "LFO1 to VCF polarity: " + String (value);
        };
        // Slider KIJIMI_LFO1RESO_P
        sliderKIJIMI_LFO1RESO_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1RESO_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1RESO_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1RESO_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1RESO_P);
        sliderAttachmentKIJIMI_LFO1RESO_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_P", sliderKIJIMI_LFO1RESO_P));
        sliderKIJIMI_LFO1RESO_P.textFromValueFunction = [](double value) {
            return "LFO1 to RESO polarity: " + String (value);
        };
        // Slider KIJIMI_LFO1VCA_P
        sliderKIJIMI_LFO1VCA_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCA_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCA_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1VCA_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCA_P);
        sliderAttachmentKIJIMI_LFO1VCA_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_P", sliderKIJIMI_LFO1VCA_P));
        sliderKIJIMI_LFO1VCA_P.textFromValueFunction = [](double value) {
            return "LFO1 to VCA polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2_AMT
        sliderKIJIMI_LFO2_AMT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_AMT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_AMT.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_AMT);
        sliderAttachmentKIJIMI_LFO2_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_AMT", sliderKIJIMI_LFO2_AMT));
        sliderKIJIMI_LFO2_AMT.textFromValueFunction = [](double value) {
            return "LFO2 amount: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO1_P
        sliderKIJIMI_LFO2VCO1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO1_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2VCO1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_P);
        sliderAttachmentKIJIMI_LFO2VCO1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_P", sliderKIJIMI_LFO2VCO1_P));
        sliderKIJIMI_LFO2VCO1_P.textFromValueFunction = [](double value) {
            return "LFO2 to VCO1 polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO2_P
        sliderKIJIMI_LFO2VCO2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO2_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2VCO2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_P);
        sliderAttachmentKIJIMI_LFO2VCO2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_P", sliderKIJIMI_LFO2VCO2_P));
        sliderKIJIMI_LFO2VCO2_P.textFromValueFunction = [](double value) {
            return "LFO2 to VCO2 polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE1_P
        sliderKIJIMI_LFO2WAVE1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE1_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2WAVE1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_P);
        sliderAttachmentKIJIMI_LFO2WAVE1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_P", sliderKIJIMI_LFO2WAVE1_P));
        sliderKIJIMI_LFO2WAVE1_P.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE1 polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE2_P
        sliderKIJIMI_LFO2WAVE2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE2_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2WAVE2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_P);
        sliderAttachmentKIJIMI_LFO2WAVE2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_P", sliderKIJIMI_LFO2WAVE2_P));
        sliderKIJIMI_LFO2WAVE2_P.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE2 polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2SUB_P
        sliderKIJIMI_LFO2SUB_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2SUB_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2SUB_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2SUB_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2SUB_P);
        sliderAttachmentKIJIMI_LFO2SUB_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_P", sliderKIJIMI_LFO2SUB_P));
        sliderKIJIMI_LFO2SUB_P.textFromValueFunction = [](double value) {
            return "LFO2 to SUB polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2VCF_P
        sliderKIJIMI_LFO2VCF_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCF_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCF_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2VCF_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCF_P);
        sliderAttachmentKIJIMI_LFO2VCF_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_P", sliderKIJIMI_LFO2VCF_P));
        sliderKIJIMI_LFO2VCF_P.textFromValueFunction = [](double value) {
            return "LFO2 to VCF polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2RESO_P
        sliderKIJIMI_LFO2RESO_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2RESO_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2RESO_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2RESO_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2RESO_P);
        sliderAttachmentKIJIMI_LFO2RESO_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_P", sliderKIJIMI_LFO2RESO_P));
        sliderKIJIMI_LFO2RESO_P.textFromValueFunction = [](double value) {
            return "LFO2 to RESO polarity: " + String (value);
        };
        // Slider KIJIMI_LFO2VCA_P
        sliderKIJIMI_LFO2VCA_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCA_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCA_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2VCA_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCA_P);
        sliderAttachmentKIJIMI_LFO2VCA_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_P", sliderKIJIMI_LFO2VCA_P));
        sliderKIJIMI_LFO2VCA_P.textFromValueFunction = [](double value) {
            return "LFO2 to VCA polarity: " + String (value);
        };
        // Slider KIJIMI_ADSR2_AMT
        sliderKIJIMI_ADSR2_AMT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_AMT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_AMT.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_AMT);
        sliderAttachmentKIJIMI_ADSR2_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_AMT", sliderKIJIMI_ADSR2_AMT));
        sliderKIJIMI_ADSR2_AMT.textFromValueFunction = [](double value) {
            return "ADSR2 amount: " + String (value);
        };
        // Slider KIJIMI_ADSR2VCO1_P
        sliderKIJIMI_ADSR2VCO1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2VCO1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2VCO1_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_ADSR2VCO1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2VCO1_P);
        sliderAttachmentKIJIMI_ADSR2VCO1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2VCO1_P", sliderKIJIMI_ADSR2VCO1_P));
        sliderKIJIMI_ADSR2VCO1_P.textFromValueFunction = [](double value) {
            return "ADSR2 to VCO1 polarity: " + String (value);
        };
        // Slider KIJIMI_ADSR2VCO2_P
        sliderKIJIMI_ADSR2VCO2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2VCO2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2VCO2_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_ADSR2VCO2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2VCO2_P);
        sliderAttachmentKIJIMI_ADSR2VCO2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2VCO2_P", sliderKIJIMI_ADSR2VCO2_P));
        sliderKIJIMI_ADSR2VCO2_P.textFromValueFunction = [](double value) {
            return "ADSR2 to VCO2 polarity: " + String (value);
        };
        // Slider KIJIMI_ADSR2WAVE1_P
        sliderKIJIMI_ADSR2WAVE1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2WAVE1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2WAVE1_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_ADSR2WAVE1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2WAVE1_P);
        sliderAttachmentKIJIMI_ADSR2WAVE1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2WAVE1_P", sliderKIJIMI_ADSR2WAVE1_P));
        sliderKIJIMI_ADSR2WAVE1_P.textFromValueFunction = [](double value) {
            return "ADSR2 to WAVE1 polarity: " + String (value);
        };
        // Slider KIJIMI_ADSR2WAVE2_P
        sliderKIJIMI_ADSR2WAVE2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2WAVE2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2WAVE2_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_ADSR2WAVE2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2WAVE2_P);
        sliderAttachmentKIJIMI_ADSR2WAVE2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2WAVE2_P", sliderKIJIMI_ADSR2WAVE2_P));
        sliderKIJIMI_ADSR2WAVE2_P.textFromValueFunction = [](double value) {
            return "ADSR2 to WAVE2 polarity: " + String (value);
        };
        // Slider KIJIMI_VCO2VCO1
        sliderKIJIMI_VCO2VCO1.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2VCO1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2VCO1.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO2VCO1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2VCO1);
        sliderAttachmentKIJIMI_VCO2VCO1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2VCO1", sliderKIJIMI_VCO2VCO1));
        sliderKIJIMI_VCO2VCO1.textFromValueFunction = [](double value) {
            return "VCO2 to VCO1: " + String (value);
        };
        // Slider KIJIMI_VCO2VCF
        sliderKIJIMI_VCO2VCF.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2VCF.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2VCF.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO2VCF.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2VCF);
        sliderAttachmentKIJIMI_VCO2VCF.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2VCF", sliderKIJIMI_VCO2VCF));
        sliderKIJIMI_VCO2VCF.textFromValueFunction = [](double value) {
            return "VCO2 to VCF: " + String (value);
        };
        // Slider KIJIMI_VEL_LFO1RATE
        sliderKIJIMI_VEL_LFO1RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_LFO1RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_LFO1RATE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VEL_LFO1RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_LFO1RATE);
        sliderAttachmentKIJIMI_VEL_LFO1RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_LFO1RATE", sliderKIJIMI_VEL_LFO1RATE));
        sliderKIJIMI_VEL_LFO1RATE.textFromValueFunction = [](double value) {
            return "Velocity to LFO1 rate: " + String (value);
        };
        // Slider KIJIMI_VEL_LFO2RATE
        sliderKIJIMI_VEL_LFO2RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_LFO2RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_LFO2RATE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VEL_LFO2RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_LFO2RATE);
        sliderAttachmentKIJIMI_VEL_LFO2RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_LFO2RATE", sliderKIJIMI_VEL_LFO2RATE));
        sliderKIJIMI_VEL_LFO2RATE.textFromValueFunction = [](double value) {
            return "Velocity to LFO2 rate: " + String (value);
        };
        // Slider KIJIMI_VEL_WAVE
        sliderKIJIMI_VEL_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_WAVE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VEL_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_WAVE);
        sliderAttachmentKIJIMI_VEL_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_WAVE", sliderKIJIMI_VEL_WAVE));
        sliderKIJIMI_VEL_WAVE.textFromValueFunction = [](double value) {
            return "Velocity to waveform: " + String (value);
        };
        // Slider KIJIMI_VEL_SUB
        sliderKIJIMI_VEL_SUB.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_SUB.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_SUB.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VEL_SUB.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_SUB);
        sliderAttachmentKIJIMI_VEL_SUB.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_SUB", sliderKIJIMI_VEL_SUB));
        sliderKIJIMI_VEL_SUB.textFromValueFunction = [](double value) {
            return "Velocity to sub amount: " + String (value);
        };
        // Slider KIJIMI_VEL_PITCH
        sliderKIJIMI_VEL_PITCH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_PITCH.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VEL_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_PITCH);
        sliderAttachmentKIJIMI_VEL_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_PITCH", sliderKIJIMI_VEL_PITCH));
        sliderKIJIMI_VEL_PITCH.textFromValueFunction = [](double value) {
            return "Velocity to pitchbend: " + String (value);
        };
        // Slider KIJIMI_VEL_VCA
        sliderKIJIMI_VEL_VCA.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_VCA.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_VCA.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VEL_VCA.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_VCA);
        sliderAttachmentKIJIMI_VEL_VCA.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_VCA", sliderKIJIMI_VEL_VCA));
        sliderKIJIMI_VEL_VCA.textFromValueFunction = [](double value) {
            return "Velocity to VCA: " + String (value);
        };
        // Slider KIJIMI_AT_LFO1RATE
        sliderKIJIMI_AT_LFO1RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_LFO1RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_LFO1RATE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_AT_LFO1RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_LFO1RATE);
        sliderAttachmentKIJIMI_AT_LFO1RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_LFO1RATE", sliderKIJIMI_AT_LFO1RATE));
        sliderKIJIMI_AT_LFO1RATE.textFromValueFunction = [](double value) {
            return "Aftertouch to LFO1 rate: " + String (value);
        };
        // Slider KIJIMI_AT_LFO2RATE
        sliderKIJIMI_AT_LFO2RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_LFO2RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_LFO2RATE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_AT_LFO2RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_LFO2RATE);
        sliderAttachmentKIJIMI_AT_LFO2RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_LFO2RATE", sliderKIJIMI_AT_LFO2RATE));
        sliderKIJIMI_AT_LFO2RATE.textFromValueFunction = [](double value) {
            return "Aftertouch to LFO2 rate: " + String (value);
        };
        // Slider KIJIMI_AT_WAVE
        sliderKIJIMI_AT_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_WAVE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_AT_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_WAVE);
        sliderAttachmentKIJIMI_AT_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_WAVE", sliderKIJIMI_AT_WAVE));
        sliderKIJIMI_AT_WAVE.textFromValueFunction = [](double value) {
            return "Aftertouch to waveform: " + String (value);
        };
        // Slider KIJIMI_AT_SUB
        sliderKIJIMI_AT_SUB.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_SUB.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_SUB.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_AT_SUB.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_SUB);
        sliderAttachmentKIJIMI_AT_SUB.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_SUB", sliderKIJIMI_AT_SUB));
        sliderKIJIMI_AT_SUB.textFromValueFunction = [](double value) {
            return "Aftertouch to sub amount: " + String (value);
        };
        // Slider KIJIMI_AT_PITCH
        sliderKIJIMI_AT_PITCH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_PITCH.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_AT_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_PITCH);
        sliderAttachmentKIJIMI_AT_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_PITCH", sliderKIJIMI_AT_PITCH));
        sliderKIJIMI_AT_PITCH.textFromValueFunction = [](double value) {
            return "Aftertouch to pitchbend: " + String (value);
        };
        // Slider KIJIMI_AT_VCA
        sliderKIJIMI_AT_VCA.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_VCA.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_VCA.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_AT_VCA.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_VCA);
        sliderAttachmentKIJIMI_AT_VCA.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_VCA", sliderKIJIMI_AT_VCA));
        sliderKIJIMI_AT_VCA.textFromValueFunction = [](double value) {
            return "Aftertouch to VCA: " + String (value);
        };
        // Slider KIJIMI_LFO1_RATE
        sliderKIJIMI_LFO1_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_RATE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_RATE);
        sliderAttachmentKIJIMI_LFO1_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_RATE", sliderKIJIMI_LFO1_RATE));
        sliderKIJIMI_LFO1_RATE.textFromValueFunction = [](double value) {
            return "LFO1 rate: " + String (value);
        };
        // Slider KIJIMI_LFO1_A
        sliderKIJIMI_LFO1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_A);
        sliderAttachmentKIJIMI_LFO1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_A", sliderKIJIMI_LFO1_A));
        sliderKIJIMI_LFO1_A.textFromValueFunction = [](double value) {
            return "LFO1 attack: " + String (value);
        };
        // Slider KIJIMI_LFO1_D
        sliderKIJIMI_LFO1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_D);
        sliderAttachmentKIJIMI_LFO1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_D", sliderKIJIMI_LFO1_D));
        sliderKIJIMI_LFO1_D.textFromValueFunction = [](double value) {
            return "LFO1 decay: " + String (value);
        };
        // Slider KIJIMI_LFO1_SHAPE
        sliderKIJIMI_LFO1_SHAPE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_SHAPE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_SHAPE.setLookAndFeel (&button0LookAndFeel);
        sliderKIJIMI_LFO1_SHAPE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_SHAPE);
        sliderAttachmentKIJIMI_LFO1_SHAPE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_SHAPE", sliderKIJIMI_LFO1_SHAPE));
        sliderKIJIMI_LFO1_SHAPE.textFromValueFunction = [](double value) {
            return "LFO1 shape: " + String (value);
        };
        // Slider KIJIMI_LFO2_RATE
        sliderKIJIMI_LFO2_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_RATE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_RATE);
        sliderAttachmentKIJIMI_LFO2_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_RATE", sliderKIJIMI_LFO2_RATE));
        sliderKIJIMI_LFO2_RATE.textFromValueFunction = [](double value) {
            return "LFO2 rate: " + String (value);
        };
        // Slider KIJIMI_LFO2_A
        sliderKIJIMI_LFO2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_A);
        sliderAttachmentKIJIMI_LFO2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_A", sliderKIJIMI_LFO2_A));
        sliderKIJIMI_LFO2_A.textFromValueFunction = [](double value) {
            return "LFO2 attack: " + String (value);
        };
        // Slider KIJIMI_LFO2_D
        sliderKIJIMI_LFO2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_D);
        sliderAttachmentKIJIMI_LFO2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_D", sliderKIJIMI_LFO2_D));
        sliderKIJIMI_LFO2_D.textFromValueFunction = [](double value) {
            return "LFO2 decay: " + String (value);
        };
        // Slider KIJIMI_LFO2_SHAPE
        sliderKIJIMI_LFO2_SHAPE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_SHAPE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_SHAPE.setLookAndFeel (&button0LookAndFeel);
        sliderKIJIMI_LFO2_SHAPE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_SHAPE);
        sliderAttachmentKIJIMI_LFO2_SHAPE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_SHAPE", sliderKIJIMI_LFO2_SHAPE));
        sliderKIJIMI_LFO2_SHAPE.textFromValueFunction = [](double value) {
            return "LFO2 shape: " + String (value);
        };
        // Slider KIJIMI_LFO_ENV
        sliderKIJIMI_LFO_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_ENV.setLookAndFeel (&button2AltLookAndFeel);
        sliderKIJIMI_LFO_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_ENV);
        sliderAttachmentKIJIMI_LFO_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_ENV", sliderKIJIMI_LFO_ENV));
        sliderKIJIMI_LFO_ENV.textFromValueFunction = [](double value) {
            return "LFO envelope: " + String (value);
        };
        // Slider KIJIMI_VCO1_FREQ
        sliderKIJIMI_VCO1_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_FREQ.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO1_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_FREQ);
        sliderAttachmentKIJIMI_VCO1_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_FREQ", sliderKIJIMI_VCO1_FREQ));
        sliderKIJIMI_VCO1_FREQ.textFromValueFunction = [](double value) {
            return "VCO1 frequency: " + String (value);
        };
        // Slider KIJIMI_VCO1_WAVE
        sliderKIJIMI_VCO1_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_WAVE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO1_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_WAVE);
        sliderAttachmentKIJIMI_VCO1_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_WAVE", sliderKIJIMI_VCO1_WAVE));
        sliderKIJIMI_VCO1_WAVE.textFromValueFunction = [](double value) {
            return "VCO1 waveform: " + String (value);
        };
        // Slider KIJIMI_VCO1_VOL13
        sliderKIJIMI_VCO1_VOL13.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_VOL13.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_VOL13.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_VCO1_VOL13.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_VOL13);
        sliderAttachmentKIJIMI_VCO1_VOL13.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_VOL13", sliderKIJIMI_VCO1_VOL13));
        sliderKIJIMI_VCO1_VOL13.textFromValueFunction = [](double value) {
            return "VCO1 volume 1/3: " + String (value);
        };
        // Slider KIJIMI_VCO1_VOL23
        sliderKIJIMI_VCO1_VOL23.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_VOL23.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_VOL23.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_VCO1_VOL23.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_VOL23);
        sliderAttachmentKIJIMI_VCO1_VOL23.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_VOL23", sliderKIJIMI_VCO1_VOL23));
        sliderKIJIMI_VCO1_VOL23.textFromValueFunction = [](double value) {
            return "VCO1 volume 2/3: " + String (value);
        };
        // Slider KIJIMI_SUB_VOL
        sliderKIJIMI_SUB_VOL.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_SUB_VOL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SUB_VOL.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_SUB_VOL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SUB_VOL);
        sliderAttachmentKIJIMI_SUB_VOL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SUB_VOL", sliderKIJIMI_SUB_VOL));
        sliderKIJIMI_SUB_VOL.textFromValueFunction = [](double value) {
            return "Sub volume: " + String (value);
        };
        // Slider KIJIMI_NOISE_VOL13
        sliderKIJIMI_NOISE_VOL13.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_NOISE_VOL13.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_NOISE_VOL13.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_NOISE_VOL13.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_NOISE_VOL13);
        sliderAttachmentKIJIMI_NOISE_VOL13.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_NOISE_VOL13", sliderKIJIMI_NOISE_VOL13));
        sliderKIJIMI_NOISE_VOL13.textFromValueFunction = [](double value) {
            return "Noise volume 1/3: " + String (value);
        };
        // Slider KIJIMI_NOISE_VOL23
        sliderKIJIMI_NOISE_VOL23.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_NOISE_VOL23.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_NOISE_VOL23.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_NOISE_VOL23.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_NOISE_VOL23);
        sliderAttachmentKIJIMI_NOISE_VOL23.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_NOISE_VOL23", sliderKIJIMI_NOISE_VOL23));
        sliderKIJIMI_NOISE_VOL23.textFromValueFunction = [](double value) {
            return "Noise volume 2/3: " + String (value);
        };
        // Slider KIJIMI_VCO2_FREQ
        sliderKIJIMI_VCO2_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_FREQ.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO2_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_FREQ);
        sliderAttachmentKIJIMI_VCO2_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_FREQ", sliderKIJIMI_VCO2_FREQ));
        sliderKIJIMI_VCO2_FREQ.textFromValueFunction = [](double value) {
            return "VCO2 frequency: " + String (value);
        };
        // Slider KIJIMI_VCO2WAVE
        sliderKIJIMI_VCO2WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2WAVE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO2WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2WAVE);
        sliderAttachmentKIJIMI_VCO2WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2WAVE", sliderKIJIMI_VCO2WAVE));
        sliderKIJIMI_VCO2WAVE.textFromValueFunction = [](double value) {
            return "VCO2 waveform: " + String (value);
        };
        // Slider KIJIMI_VCO2_VOL
        sliderKIJIMI_VCO2_VOL.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_VOL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_VOL.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO2_VOL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_VOL);
        sliderAttachmentKIJIMI_VCO2_VOL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_VOL", sliderKIJIMI_VCO2_VOL));
        sliderKIJIMI_VCO2_VOL.textFromValueFunction = [](double value) {
            return "VCO2 volume: " + String (value);
        };
        // Slider KIJIMI_VCO2_DETUNE
        sliderKIJIMI_VCO2_DETUNE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_DETUNE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_DETUNE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO2_DETUNE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_DETUNE);
        sliderAttachmentKIJIMI_VCO2_DETUNE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_DETUNE", sliderKIJIMI_VCO2_DETUNE));
        sliderKIJIMI_VCO2_DETUNE.textFromValueFunction = [](double value) {
            return "VCO2 detune: " + String (value);
        };
        // Slider KIJIMI_VCO_SYNC
        sliderKIJIMI_VCO_SYNC.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO_SYNC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO_SYNC.setLookAndFeel (&button2Alt3ValuesLookAndFeel);
        sliderKIJIMI_VCO_SYNC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO_SYNC);
        sliderAttachmentKIJIMI_VCO_SYNC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO_SYNC", sliderKIJIMI_VCO_SYNC));
        sliderKIJIMI_VCO_SYNC.textFromValueFunction = [](double value) {
            return "VCO sync: " + String (value);
        };
        // Slider KIJIMI_VCO_KOFF
        sliderKIJIMI_VCO_KOFF.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO_KOFF.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO_KOFF.setLookAndFeel (&button2AltLookAndFeel);
        sliderKIJIMI_VCO_KOFF.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO_KOFF);
        sliderAttachmentKIJIMI_VCO_KOFF.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO_KOFF", sliderKIJIMI_VCO_KOFF));
        sliderKIJIMI_VCO_KOFF.textFromValueFunction = [](double value) {
            return "VCO key off: " + String (value);
        };
        // Slider KIJIMI_VCF_FREQ
        sliderKIJIMI_VCF_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_FREQ.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCF_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_FREQ);
        sliderAttachmentKIJIMI_VCF_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_FREQ", sliderKIJIMI_VCF_FREQ));
        sliderKIJIMI_VCF_FREQ.textFromValueFunction = [](double value) {
            return "VCF Frequency: " + String (value);
        };
        // Slider KIJIMI_VCF_VEL_C
        sliderKIJIMI_VCF_VEL_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_VEL_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_VEL_C.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCF_VEL_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_VEL_C);
        sliderAttachmentKIJIMI_VCF_VEL_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_VEL_C", sliderKIJIMI_VCF_VEL_C));
        sliderKIJIMI_VCF_VEL_C.textFromValueFunction = [](double value) {
            return "VCF Velocity control: " + String (value);
        };
        // Slider KIJIMI_VCF_AT_C
        sliderKIJIMI_VCF_AT_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_AT_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_AT_C.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCF_AT_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_AT_C);
        sliderAttachmentKIJIMI_VCF_AT_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_AT_C", sliderKIJIMI_VCF_AT_C));
        sliderKIJIMI_VCF_AT_C.textFromValueFunction = [](double value) {
            return "VCF Aftertouch control: " + String (value);
        };
        // Slider KIJIMI_VCF_ADSR2_C
        sliderKIJIMI_VCF_ADSR2_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_ADSR2_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_ADSR2_C.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCF_ADSR2_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_ADSR2_C);
        sliderAttachmentKIJIMI_VCF_ADSR2_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_ADSR2_C", sliderKIJIMI_VCF_ADSR2_C));
        sliderKIJIMI_VCF_ADSR2_C.textFromValueFunction = [](double value) {
            return "VCF ADSR2 control: " + String (value);
        };
        // Slider KIJIMI_VCF_RESO
        sliderKIJIMI_VCF_RESO.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_RESO.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_RESO.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCF_RESO.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_RESO);
        sliderAttachmentKIJIMI_VCF_RESO.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_RESO", sliderKIJIMI_VCF_RESO));
        sliderKIJIMI_VCF_RESO.textFromValueFunction = [](double value) {
            return "VCF Resonance: " + String (value);
        };
        // Slider KIJIMI_VCF_Q_VEL_C
        sliderKIJIMI_VCF_Q_VEL_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_Q_VEL_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_Q_VEL_C.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCF_Q_VEL_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_Q_VEL_C);
        sliderAttachmentKIJIMI_VCF_Q_VEL_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_Q_VEL_C", sliderKIJIMI_VCF_Q_VEL_C));
        sliderKIJIMI_VCF_Q_VEL_C.textFromValueFunction = [](double value) {
            return "VCF Velocity Q control: " + String (value);
        };
        // Slider KIJIMI_VCF_Q_AT_C
        sliderKIJIMI_VCF_Q_AT_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_Q_AT_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_Q_AT_C.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCF_Q_AT_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_Q_AT_C);
        sliderAttachmentKIJIMI_VCF_Q_AT_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_Q_AT_C", sliderKIJIMI_VCF_Q_AT_C));
        sliderKIJIMI_VCF_Q_AT_C.textFromValueFunction = [](double value) {
            return "VCF Aftertouch Q control: " + String (value);
        };
        // Slider KIJIMI_VCF_KEY_C
        sliderKIJIMI_VCF_KEY_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_KEY_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_KEY_C.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCF_KEY_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_KEY_C);
        sliderAttachmentKIJIMI_VCF_KEY_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_KEY_C", sliderKIJIMI_VCF_KEY_C));
        sliderKIJIMI_VCF_KEY_C.textFromValueFunction = [](double value) {
            return "VCF Keyboard control: " + String (value);
        };
        // Slider KIJIMI_ADSR2_A
        sliderKIJIMI_ADSR2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_A);
        sliderAttachmentKIJIMI_ADSR2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_A", sliderKIJIMI_ADSR2_A));
        sliderKIJIMI_ADSR2_A.textFromValueFunction = [](double value) {
            return "ADSR2 attack: " + String (value);
        };
        // Slider KIJIMI_ADSR2_D
        sliderKIJIMI_ADSR2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_D);
        sliderAttachmentKIJIMI_ADSR2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_D", sliderKIJIMI_ADSR2_D));
        sliderKIJIMI_ADSR2_D.textFromValueFunction = [](double value) {
            return "ADSR2 decay: " + String (value);
        };
        // Slider KIJIMI_ADSR2_S
        sliderKIJIMI_ADSR2_S.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_S.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_S.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2_S.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_S);
        sliderAttachmentKIJIMI_ADSR2_S.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_S", sliderKIJIMI_ADSR2_S));
        sliderKIJIMI_ADSR2_S.textFromValueFunction = [](double value) {
            return "ADSR2 sustain: " + String (value);
        };
        // Slider KIJIMI_ADSR2_R
        sliderKIJIMI_ADSR2_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_R);
        sliderAttachmentKIJIMI_ADSR2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_R", sliderKIJIMI_ADSR2_R));
        sliderKIJIMI_ADSR2_R.textFromValueFunction = [](double value) {
            return "ADSR2 release: " + String (value);
        };
        // Slider KIJIMI_ADSR1_A
        sliderKIJIMI_ADSR1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_A);
        sliderAttachmentKIJIMI_ADSR1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_A", sliderKIJIMI_ADSR1_A));
        sliderKIJIMI_ADSR1_A.textFromValueFunction = [](double value) {
            return "ADSR1 attack: " + String (value);
        };
        // Slider KIJIMI_ADSR1_D
        sliderKIJIMI_ADSR1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_D);
        sliderAttachmentKIJIMI_ADSR1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_D", sliderKIJIMI_ADSR1_D));
        sliderKIJIMI_ADSR1_D.textFromValueFunction = [](double value) {
            return "ADSR1 decay: " + String (value);
        };
        // Slider KIJIMI_ADSR1_S
        sliderKIJIMI_ADSR1_S.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_S.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_S.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR1_S.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_S);
        sliderAttachmentKIJIMI_ADSR1_S.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_S", sliderKIJIMI_ADSR1_S));
        sliderKIJIMI_ADSR1_S.textFromValueFunction = [](double value) {
            return "ADSR1 sustain: " + String (value);
        };
        // Slider KIJIMI_ADSR1_R
        sliderKIJIMI_ADSR1_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR1_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_R);
        sliderAttachmentKIJIMI_ADSR1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_R", sliderKIJIMI_ADSR1_R));
        sliderKIJIMI_ADSR1_R.textFromValueFunction = [](double value) {
            return "ADSR1 release: " + String (value);
        };
        // Slider KIJIMI_ADSR_MULT
        sliderKIJIMI_ADSR_MULT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_MULT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_MULT.setLookAndFeel (&button2AltLookAndFeel);
        sliderKIJIMI_ADSR_MULT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_MULT);
        sliderAttachmentKIJIMI_ADSR_MULT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_MULT", sliderKIJIMI_ADSR_MULT));
        sliderKIJIMI_ADSR_MULT.textFromValueFunction = [](double value) {
            return "ADSR mult: " + String (value);
        };
        // Slider KIJIMI_ADSR_CYCLE
        sliderKIJIMI_ADSR_CYCLE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_CYCLE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_CYCLE.setLookAndFeel (&button2AltLookAndFeel);
        sliderKIJIMI_ADSR_CYCLE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_CYCLE);
        sliderAttachmentKIJIMI_ADSR_CYCLE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_CYCLE", sliderKIJIMI_ADSR_CYCLE));
        sliderKIJIMI_ADSR_CYCLE.textFromValueFunction = [](double value) {
            return "ADSR cycle: " + String (value);
        };
        // Slider KIJIMI_ADSR_KT
        sliderKIJIMI_ADSR_KT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_KT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_KT.setLookAndFeel (&button2AltLookAndFeel);
        sliderKIJIMI_ADSR_KT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_KT);
        sliderAttachmentKIJIMI_ADSR_KT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_KT", sliderKIJIMI_ADSR_KT));
        sliderKIJIMI_ADSR_KT.textFromValueFunction = [](double value) {
            return "ADSR KT: " + String (value);
        };
        // Slider KIJIMI_GLIDE_RATE
        sliderKIJIMI_GLIDE_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_GLIDE_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_GLIDE_RATE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_GLIDE_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_GLIDE_RATE);
        sliderAttachmentKIJIMI_GLIDE_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_GLIDE_RATE", sliderKIJIMI_GLIDE_RATE));
        sliderKIJIMI_GLIDE_RATE.textFromValueFunction = [](double value) {
            return "Glide rate: " + String (value);
        };
        // Slider KIJIMI_GLIDE_MODE
        sliderKIJIMI_GLIDE_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_GLIDE_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_GLIDE_MODE.setLookAndFeel (&button2Alt3ValuesLookAndFeel);
        sliderKIJIMI_GLIDE_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_GLIDE_MODE);
        sliderAttachmentKIJIMI_GLIDE_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_GLIDE_MODE", sliderKIJIMI_GLIDE_MODE));
        sliderKIJIMI_GLIDE_MODE.textFromValueFunction = [](double value) {
            return "Glide mode: " + String (value);
        };
        // Slider KIJIMI_VOLUME
        sliderKIJIMI_VOLUME.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VOLUME.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VOLUME.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VOLUME.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VOLUME);
        sliderAttachmentKIJIMI_VOLUME.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VOLUME", sliderKIJIMI_VOLUME));
        sliderKIJIMI_VOLUME.textFromValueFunction = [](double value) {
            return "Volume: " + String (value);
        };
        // Slider KIJIMI_CC_RECEIVE
        sliderKIJIMI_CC_RECEIVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_CC_RECEIVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_CC_RECEIVE.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_CC_RECEIVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_CC_RECEIVE);
        sliderAttachmentKIJIMI_CC_RECEIVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_CC_RECEIVE", sliderKIJIMI_CC_RECEIVE));
        sliderKIJIMI_CC_RECEIVE.textFromValueFunction = [](double value) {
            return "CC Receive: " + String (value);
        };
        // Slider KIJIMI_MPE_CH
        sliderKIJIMI_MPE_CH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MPE_CH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MPE_CH.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_MPE_CH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MPE_CH);
        sliderAttachmentKIJIMI_MPE_CH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MPE_CH", sliderKIJIMI_MPE_CH));
        sliderKIJIMI_MPE_CH.textFromValueFunction = [](double value) {
            return "MPE base channel: " + String (value);
        };
        // Slider KIJIMI_MIDI_CH
        sliderKIJIMI_MIDI_CH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MIDI_CH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MIDI_CH.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_MIDI_CH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MIDI_CH);
        sliderAttachmentKIJIMI_MIDI_CH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MIDI_CH", sliderKIJIMI_MIDI_CH));
        sliderKIJIMI_MIDI_CH.textFromValueFunction = [](double value) {
            return "MIDI channel: " + String (value);
        };
        // Slider KIJIMI_MAX_VOICES
        sliderKIJIMI_MAX_VOICES.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MAX_VOICES.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MAX_VOICES.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_MAX_VOICES.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MAX_VOICES);
        sliderAttachmentKIJIMI_MAX_VOICES.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MAX_VOICES", sliderKIJIMI_MAX_VOICES));
        sliderKIJIMI_MAX_VOICES.textFromValueFunction = [](double value) {
            return "Maximum number of voices: " + String (value);
        };
        // Slider KIJIMI_ADSR_MOD_MODE
        sliderKIJIMI_ADSR_MOD_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_MOD_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_MOD_MODE.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_ADSR_MOD_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_MOD_MODE);
        sliderAttachmentKIJIMI_ADSR_MOD_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_MOD_MODE", sliderKIJIMI_ADSR_MOD_MODE));
        sliderKIJIMI_ADSR_MOD_MODE.textFromValueFunction = [](double value) {
            return "ADSR2 modulation mode: " + String (value);
        };
        // Slider KIJIMI_CYCLE_MODE
        sliderKIJIMI_CYCLE_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_CYCLE_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_CYCLE_MODE.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_CYCLE_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_CYCLE_MODE);
        sliderAttachmentKIJIMI_CYCLE_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_CYCLE_MODE", sliderKIJIMI_CYCLE_MODE));
        sliderKIJIMI_CYCLE_MODE.textFromValueFunction = [](double value) {
            return "Cycle poly/mono: " + String (value);
        };
        // Slider KIJIMI_KT_MULTIPLIER
        sliderKIJIMI_KT_MULTIPLIER.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_KT_MULTIPLIER.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_KT_MULTIPLIER.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_KT_MULTIPLIER.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_KT_MULTIPLIER);
        sliderAttachmentKIJIMI_KT_MULTIPLIER.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_KT_MULTIPLIER", sliderKIJIMI_KT_MULTIPLIER));
        sliderKIJIMI_KT_MULTIPLIER.textFromValueFunction = [](double value) {
            return "KT multiplier: " + String (value);
        };
        // Slider KIJIMI_LFO_MAX_R
        sliderKIJIMI_LFO_MAX_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_MAX_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_MAX_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO_MAX_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_MAX_R);
        sliderAttachmentKIJIMI_LFO_MAX_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_MAX_R", sliderKIJIMI_LFO_MAX_R));
        sliderKIJIMI_LFO_MAX_R.textFromValueFunction = [](double value) {
            return "LFO max rate: " + String (value);
        };
        // Slider KIJIMI_LFO_MIN_R
        sliderKIJIMI_LFO_MIN_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_MIN_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_MIN_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO_MIN_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_MIN_R);
        sliderAttachmentKIJIMI_LFO_MIN_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_MIN_R", sliderKIJIMI_LFO_MIN_R));
        sliderKIJIMI_LFO_MIN_R.textFromValueFunction = [](double value) {
            return "LFO min rate: " + String (value);
        };
        // Slider KIJIMI_LFO_MODE
        sliderKIJIMI_LFO_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_MODE.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_MODE);
        sliderAttachmentKIJIMI_LFO_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_MODE", sliderKIJIMI_LFO_MODE));
        sliderKIJIMI_LFO_MODE.textFromValueFunction = [](double value) {
            return "LFO poly/mono: " + String (value);
        };
        // Slider KIJIMI_LFO_MOD_MODE
        sliderKIJIMI_LFO_MOD_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_MOD_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_MOD_MODE.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO_MOD_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_MOD_MODE);
        sliderAttachmentKIJIMI_LFO_MOD_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_MOD_MODE", sliderKIJIMI_LFO_MOD_MODE));
        sliderKIJIMI_LFO_MOD_MODE.textFromValueFunction = [](double value) {
            return "LFO modulation mode: " + String (value);
        };
        // Slider KIJIMI_LFO_POLY_RETRIG
        sliderKIJIMI_LFO_POLY_RETRIG.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_POLY_RETRIG.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_POLY_RETRIG.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO_POLY_RETRIG.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_POLY_RETRIG);
        sliderAttachmentKIJIMI_LFO_POLY_RETRIG.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_POLY_RETRIG", sliderKIJIMI_LFO_POLY_RETRIG));
        sliderKIJIMI_LFO_POLY_RETRIG.textFromValueFunction = [](double value) {
            return "LFO Poly mode EG retrig: " + String (value);
        };
        // Slider KIJIMI_LFO_SUST
        sliderKIJIMI_LFO_SUST.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_SUST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_SUST.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO_SUST.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_SUST);
        sliderAttachmentKIJIMI_LFO_SUST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_SUST", sliderKIJIMI_LFO_SUST));
        sliderKIJIMI_LFO_SUST.textFromValueFunction = [](double value) {
            return "LFO sustain: " + String (value);
        };
        // Slider KIJIMI_LFO1_ENV_DEST
        sliderKIJIMI_LFO1_ENV_DEST.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_ENV_DEST.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_ENV_DEST.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1_ENV_DEST.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_ENV_DEST);
        sliderAttachmentKIJIMI_LFO1_ENV_DEST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_ENV_DEST", sliderKIJIMI_LFO1_ENV_DEST));
        sliderKIJIMI_LFO1_ENV_DEST.textFromValueFunction = [](double value) {
            return "LFO1 envelope destination: " + String (value);
        };
        // Slider KIJIMI_LFO1_ENV_MAX_T
        sliderKIJIMI_LFO1_ENV_MAX_T.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_ENV_MAX_T.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_ENV_MAX_T.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO1_ENV_MAX_T.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_ENV_MAX_T);
        sliderAttachmentKIJIMI_LFO1_ENV_MAX_T.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_ENV_MAX_T", sliderKIJIMI_LFO1_ENV_MAX_T));
        sliderKIJIMI_LFO1_ENV_MAX_T.textFromValueFunction = [](double value) {
            return "LFO1 envelope max time: " + String (value);
        };
        // Slider KIJIMI_LFO1_ENV_P
        sliderKIJIMI_LFO1_ENV_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_ENV_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_ENV_P.setLookAndFeel (&button2LookAndFeel);
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
        sliderKIJIMI_LFO2_ENV_DEST.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2_ENV_DEST.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_ENV_DEST);
        sliderAttachmentKIJIMI_LFO2_ENV_DEST.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_ENV_DEST", sliderKIJIMI_LFO2_ENV_DEST));
        sliderKIJIMI_LFO2_ENV_DEST.textFromValueFunction = [](double value) {
            return "LFO2 envelope destination: " + String (value);
        };
        // Slider KIJIMI_LFO2_ENV_MAX_T
        sliderKIJIMI_LFO2_ENV_MAX_T.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_ENV_MAX_T.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_ENV_MAX_T.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LFO2_ENV_MAX_T.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_ENV_MAX_T);
        sliderAttachmentKIJIMI_LFO2_ENV_MAX_T.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_ENV_MAX_T", sliderKIJIMI_LFO2_ENV_MAX_T));
        sliderKIJIMI_LFO2_ENV_MAX_T.textFromValueFunction = [](double value) {
            return "LFO2 envelope max time: " + String (value);
        };
        // Slider KIJIMI_LFO2_ENV_P
        sliderKIJIMI_LFO2_ENV_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_ENV_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_ENV_P.setLookAndFeel (&button2LookAndFeel);
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
        // Slider KIJIMI_MODW_P
        sliderKIJIMI_MODW_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MODW_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MODW_P.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_MODW_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MODW_P);
        sliderAttachmentKIJIMI_MODW_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MODW_P", sliderKIJIMI_MODW_P));
        sliderKIJIMI_MODW_P.textFromValueFunction = [](double value) {
            return "Modwheel polarity: " + String (value);
        };
        // Slider KIJIMI_ADSR_VCA
        sliderKIJIMI_ADSR_VCA.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_VCA.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_VCA.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR_VCA.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_VCA);
        sliderAttachmentKIJIMI_ADSR_VCA.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_VCA", sliderKIJIMI_ADSR_VCA));
        sliderKIJIMI_ADSR_VCA.textFromValueFunction = [](double value) {
            return "ADSR VCA level 0-100%: " + String (value);
        };
        // Slider KIJIMI_MASTER_VOL
        sliderKIJIMI_MASTER_VOL.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MASTER_VOL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MASTER_VOL.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_MASTER_VOL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MASTER_VOL);
        sliderAttachmentKIJIMI_MASTER_VOL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MASTER_VOL", sliderKIJIMI_MASTER_VOL));
        sliderKIJIMI_MASTER_VOL.textFromValueFunction = [](double value) {
            return "Master volume (12 levels): " + String (value);
        };
        // Slider KIJIMI_VCO_DETUNE
        sliderKIJIMI_VCO_DETUNE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO_DETUNE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO_DETUNE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_VCO_DETUNE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO_DETUNE);
        sliderAttachmentKIJIMI_VCO_DETUNE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO_DETUNE", sliderKIJIMI_VCO_DETUNE));
        sliderKIJIMI_VCO_DETUNE.textFromValueFunction = [](double value) {
            return "VCO detune 0-3Hz: " + String (value);
        };
        // Slider KIJIMI_CARDS_VOCIE
        sliderKIJIMI_CARDS_VOCIE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_CARDS_VOCIE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_CARDS_VOCIE.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_CARDS_VOCIE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_CARDS_VOCIE);
        sliderAttachmentKIJIMI_CARDS_VOCIE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_CARDS_VOCIE", sliderKIJIMI_CARDS_VOCIE));
        sliderKIJIMI_CARDS_VOCIE.textFromValueFunction = [](double value) {
            return "Cards per voice: " + String (value);
        };
        // Slider KIJIMI_LEG_EG_RETRIG
        sliderKIJIMI_LEG_EG_RETRIG.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LEG_EG_RETRIG.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LEG_EG_RETRIG.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LEG_EG_RETRIG.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LEG_EG_RETRIG);
        sliderAttachmentKIJIMI_LEG_EG_RETRIG.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEG_EG_RETRIG", sliderKIJIMI_LEG_EG_RETRIG));
        sliderKIJIMI_LEG_EG_RETRIG.textFromValueFunction = [](double value) {
            return "Legato EG retrig: " + String (value);
        };
        // Slider KIJIMI_LEG_PRIORITY
        sliderKIJIMI_LEG_PRIORITY.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LEG_PRIORITY.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LEG_PRIORITY.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_LEG_PRIORITY.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LEG_PRIORITY);
        sliderAttachmentKIJIMI_LEG_PRIORITY.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEG_PRIORITY", sliderKIJIMI_LEG_PRIORITY));
        sliderKIJIMI_LEG_PRIORITY.textFromValueFunction = [](double value) {
            return "Legato priority: " + String (value);
        };
        // Slider KIJIMI_MONO_MODE
        sliderKIJIMI_MONO_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MONO_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MONO_MODE.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_MONO_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MONO_MODE);
        sliderAttachmentKIJIMI_MONO_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MONO_MODE", sliderKIJIMI_MONO_MODE));
        sliderKIJIMI_MONO_MODE.textFromValueFunction = [](double value) {
            return "Mono mode: " + String (value);
        };
        // Slider KIJIMI_MONO_POLY
        sliderKIJIMI_MONO_POLY.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MONO_POLY.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MONO_POLY.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_MONO_POLY.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MONO_POLY);
        sliderAttachmentKIJIMI_MONO_POLY.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MONO_POLY", sliderKIJIMI_MONO_POLY));
        sliderKIJIMI_MONO_POLY.textFromValueFunction = [](double value) {
            return "Mono/poly/unisson: " + String (value);
        };
        // Slider KIJIMI_SUSTAIN_MODE
        sliderKIJIMI_SUSTAIN_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_SUSTAIN_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SUSTAIN_MODE.setLookAndFeel (&button2LookAndFeel);
        sliderKIJIMI_SUSTAIN_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SUSTAIN_MODE);
        sliderAttachmentKIJIMI_SUSTAIN_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SUSTAIN_MODE", sliderKIJIMI_SUSTAIN_MODE));
        sliderKIJIMI_SUSTAIN_MODE.textFromValueFunction = [](double value) {
            return "Sustain mode: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO1_AM
        sliderKIJIMI_LFO1VCO1_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO1_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCO1_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_AM);
        sliderAttachmentKIJIMI_LFO1VCO1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_AM", sliderKIJIMI_LFO1VCO1_AM));
        sliderKIJIMI_LFO1VCO1_AM.textFromValueFunction = [](double value) {
            return "LFO1 to VCO1 amount: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO2_AM
        sliderKIJIMI_LFO1VCO2_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO2_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCO2_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_AM);
        sliderAttachmentKIJIMI_LFO1VCO2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_AM", sliderKIJIMI_LFO1VCO2_AM));
        sliderKIJIMI_LFO1VCO2_AM.textFromValueFunction = [](double value) {
            return "LFO1 to VCO2 amount: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE1_AM
        sliderKIJIMI_LFO1WAVE1_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE1_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1WAVE1_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_AM);
        sliderAttachmentKIJIMI_LFO1WAVE1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_AM", sliderKIJIMI_LFO1WAVE1_AM));
        sliderKIJIMI_LFO1WAVE1_AM.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE1 amount: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE2_AM
        sliderKIJIMI_LFO1WAVE2_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE2_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1WAVE2_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_AM);
        sliderAttachmentKIJIMI_LFO1WAVE2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_AM", sliderKIJIMI_LFO1WAVE2_AM));
        sliderKIJIMI_LFO1WAVE2_AM.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE2 amount: " + String (value);
        };
        // Slider KIJIMI_LFO1SUB_AM
        sliderKIJIMI_LFO1SUB_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1SUB_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1SUB_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1SUB_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1SUB_AM);
        sliderAttachmentKIJIMI_LFO1SUB_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_AM", sliderKIJIMI_LFO1SUB_AM));
        sliderKIJIMI_LFO1SUB_AM.textFromValueFunction = [](double value) {
            return "LFO1 to SUB amount: " + String (value);
        };
        // Slider KIJIMI_LFO1VCF_AM
        sliderKIJIMI_LFO1VCF_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCF_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCF_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCF_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCF_AM);
        sliderAttachmentKIJIMI_LFO1VCF_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_AM", sliderKIJIMI_LFO1VCF_AM));
        sliderKIJIMI_LFO1VCF_AM.textFromValueFunction = [](double value) {
            return "LFO1 to VCF amount: " + String (value);
        };
        // Slider KIJIMI_LFO1RESO_AM
        sliderKIJIMI_LFO1RESO_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1RESO_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1RESO_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1RESO_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1RESO_AM);
        sliderAttachmentKIJIMI_LFO1RESO_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_AM", sliderKIJIMI_LFO1RESO_AM));
        sliderKIJIMI_LFO1RESO_AM.textFromValueFunction = [](double value) {
            return "LFO1 to RESO amount: " + String (value);
        };
        // Slider KIJIMI_LFO1VCA_AM
        sliderKIJIMI_LFO1VCA_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCA_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCA_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCA_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCA_AM);
        sliderAttachmentKIJIMI_LFO1VCA_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_AM", sliderKIJIMI_LFO1VCA_AM));
        sliderKIJIMI_LFO1VCA_AM.textFromValueFunction = [](double value) {
            return "LFO1 to VCA amount: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO1_AM
        sliderKIJIMI_LFO2VCO1_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO1_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCO1_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_AM);
        sliderAttachmentKIJIMI_LFO2VCO1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_AM", sliderKIJIMI_LFO2VCO1_AM));
        sliderKIJIMI_LFO2VCO1_AM.textFromValueFunction = [](double value) {
            return "LFO2 to VCO1 amount: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO2_AM
        sliderKIJIMI_LFO2VCO2_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO2_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCO2_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_AM);
        sliderAttachmentKIJIMI_LFO2VCO2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_AM", sliderKIJIMI_LFO2VCO2_AM));
        sliderKIJIMI_LFO2VCO2_AM.textFromValueFunction = [](double value) {
            return "LFO2 to VCO2 amount: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE1_AM
        sliderKIJIMI_LFO2WAVE1_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE1_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2WAVE1_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_AM);
        sliderAttachmentKIJIMI_LFO2WAVE1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_AM", sliderKIJIMI_LFO2WAVE1_AM));
        sliderKIJIMI_LFO2WAVE1_AM.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE1 amount: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE2_AM
        sliderKIJIMI_LFO2WAVE2_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE2_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2WAVE2_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_AM);
        sliderAttachmentKIJIMI_LFO2WAVE2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_AM", sliderKIJIMI_LFO2WAVE2_AM));
        sliderKIJIMI_LFO2WAVE2_AM.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE2 amount: " + String (value);
        };
        // Slider KIJIMI_LFO2SUB_AM
        sliderKIJIMI_LFO2SUB_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2SUB_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2SUB_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2SUB_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2SUB_AM);
        sliderAttachmentKIJIMI_LFO2SUB_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_AM", sliderKIJIMI_LFO2SUB_AM));
        sliderKIJIMI_LFO2SUB_AM.textFromValueFunction = [](double value) {
            return "LFO2 to SUB amount: " + String (value);
        };
        // Slider KIJIMI_LFO2VCF_AM
        sliderKIJIMI_LFO2VCF_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCF_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCF_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCF_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCF_AM);
        sliderAttachmentKIJIMI_LFO2VCF_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_AM", sliderKIJIMI_LFO2VCF_AM));
        sliderKIJIMI_LFO2VCF_AM.textFromValueFunction = [](double value) {
            return "LFO2 to VCF amount: " + String (value);
        };
        // Slider KIJIMI_LFO2RESO_AM
        sliderKIJIMI_LFO2RESO_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2RESO_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2RESO_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2RESO_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2RESO_AM);
        sliderAttachmentKIJIMI_LFO2RESO_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_AM", sliderKIJIMI_LFO2RESO_AM));
        sliderKIJIMI_LFO2RESO_AM.textFromValueFunction = [](double value) {
            return "LFO2 to RESO amount: " + String (value);
        };
        // Slider KIJIMI_LFO2VCA_AM
        sliderKIJIMI_LFO2VCA_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCA_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCA_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCA_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCA_AM);
        sliderAttachmentKIJIMI_LFO2VCA_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_AM", sliderKIJIMI_LFO2VCA_AM));
        sliderKIJIMI_LFO2VCA_AM.textFromValueFunction = [](double value) {
            return "LFO2 to VCA amount: " + String (value);
        };
        // Slider KIJIMI_ADSR2VCO1_AM
        sliderKIJIMI_ADSR2VCO1_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2VCO1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2VCO1_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2VCO1_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2VCO1_AM);
        sliderAttachmentKIJIMI_ADSR2VCO1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2VCO1_AM", sliderKIJIMI_ADSR2VCO1_AM));
        sliderKIJIMI_ADSR2VCO1_AM.textFromValueFunction = [](double value) {
            return "ADSR2 to VCO1 amount: " + String (value);
        };
        // Slider KIJIMI_ADSR2VCO2_AM
        sliderKIJIMI_ADSR2VCO2_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2VCO2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2VCO2_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2VCO2_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2VCO2_AM);
        sliderAttachmentKIJIMI_ADSR2VCO2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2VCO2_AM", sliderKIJIMI_ADSR2VCO2_AM));
        sliderKIJIMI_ADSR2VCO2_AM.textFromValueFunction = [](double value) {
            return "ADSR2 to VCO2 amount: " + String (value);
        };
        // Slider KIJIMI_ADSR2WAVE1_AM
        sliderKIJIMI_ADSR2WAVE1_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2WAVE1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2WAVE1_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2WAVE1_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2WAVE1_AM);
        sliderAttachmentKIJIMI_ADSR2WAVE1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2WAVE1_AM", sliderKIJIMI_ADSR2WAVE1_AM));
        sliderKIJIMI_ADSR2WAVE1_AM.textFromValueFunction = [](double value) {
            return "ADSR2 to WAVE1 amount: " + String (value);
        };
        // Slider KIJIMI_ADSR2WAVE2_AM
        sliderKIJIMI_ADSR2WAVE2_AM.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2WAVE2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2WAVE2_AM.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_ADSR2WAVE2_AM.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2WAVE2_AM);
        sliderAttachmentKIJIMI_ADSR2WAVE2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2WAVE2_AM", sliderKIJIMI_ADSR2WAVE2_AM));
        sliderKIJIMI_ADSR2WAVE2_AM.textFromValueFunction = [](double value) {
            return "ADSR2 to WAVE2 amount: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO1_R
        sliderKIJIMI_LFO1VCO1_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO1_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCO1_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_R);
        sliderAttachmentKIJIMI_LFO1VCO1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_R", sliderKIJIMI_LFO1VCO1_R));
        sliderKIJIMI_LFO1VCO1_R.textFromValueFunction = [](double value) {
            return "LFO1 to VCO1 rate: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO2_R
        sliderKIJIMI_LFO1VCO2_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO2_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCO2_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_R);
        sliderAttachmentKIJIMI_LFO1VCO2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_R", sliderKIJIMI_LFO1VCO2_R));
        sliderKIJIMI_LFO1VCO2_R.textFromValueFunction = [](double value) {
            return "LFO1 to VCO2 rate: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE1_R
        sliderKIJIMI_LFO1WAVE1_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE1_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1WAVE1_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_R);
        sliderAttachmentKIJIMI_LFO1WAVE1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_R", sliderKIJIMI_LFO1WAVE1_R));
        sliderKIJIMI_LFO1WAVE1_R.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE1 rate: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE2_R
        sliderKIJIMI_LFO1WAVE2_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE2_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1WAVE2_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_R);
        sliderAttachmentKIJIMI_LFO1WAVE2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_R", sliderKIJIMI_LFO1WAVE2_R));
        sliderKIJIMI_LFO1WAVE2_R.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE2 rate: " + String (value);
        };
        // Slider KIJIMI_LFO1SUB_R
        sliderKIJIMI_LFO1SUB_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1SUB_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1SUB_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1SUB_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1SUB_R);
        sliderAttachmentKIJIMI_LFO1SUB_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_R", sliderKIJIMI_LFO1SUB_R));
        sliderKIJIMI_LFO1SUB_R.textFromValueFunction = [](double value) {
            return "LFO1 to SUB rate: " + String (value);
        };
        // Slider KIJIMI_LFO1VCF_R
        sliderKIJIMI_LFO1VCF_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCF_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCF_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCF_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCF_R);
        sliderAttachmentKIJIMI_LFO1VCF_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_R", sliderKIJIMI_LFO1VCF_R));
        sliderKIJIMI_LFO1VCF_R.textFromValueFunction = [](double value) {
            return "LFO1 to VCF rate: " + String (value);
        };
        // Slider KIJIMI_LFO1RESO_R
        sliderKIJIMI_LFO1RESO_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1RESO_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1RESO_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1RESO_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1RESO_R);
        sliderAttachmentKIJIMI_LFO1RESO_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_R", sliderKIJIMI_LFO1RESO_R));
        sliderKIJIMI_LFO1RESO_R.textFromValueFunction = [](double value) {
            return "LFO1 to RESO rate: " + String (value);
        };
        // Slider KIJIMI_LFO1VCA_R
        sliderKIJIMI_LFO1VCA_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCA_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCA_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCA_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCA_R);
        sliderAttachmentKIJIMI_LFO1VCA_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_R", sliderKIJIMI_LFO1VCA_R));
        sliderKIJIMI_LFO1VCA_R.textFromValueFunction = [](double value) {
            return "LFO1 to VCA rate: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO1_R
        sliderKIJIMI_LFO2VCO1_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO1_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCO1_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_R);
        sliderAttachmentKIJIMI_LFO2VCO1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_R", sliderKIJIMI_LFO2VCO1_R));
        sliderKIJIMI_LFO2VCO1_R.textFromValueFunction = [](double value) {
            return "LFO2 to VCO1 rate: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO2_R
        sliderKIJIMI_LFO2VCO2_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO2_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCO2_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_R);
        sliderAttachmentKIJIMI_LFO2VCO2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_R", sliderKIJIMI_LFO2VCO2_R));
        sliderKIJIMI_LFO2VCO2_R.textFromValueFunction = [](double value) {
            return "LFO2 to VCO2 rate: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE1_R
        sliderKIJIMI_LFO2WAVE1_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE1_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2WAVE1_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_R);
        sliderAttachmentKIJIMI_LFO2WAVE1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_R", sliderKIJIMI_LFO2WAVE1_R));
        sliderKIJIMI_LFO2WAVE1_R.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE1 rate: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE2_R
        sliderKIJIMI_LFO2WAVE2_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE2_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2WAVE2_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_R);
        sliderAttachmentKIJIMI_LFO2WAVE2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_R", sliderKIJIMI_LFO2WAVE2_R));
        sliderKIJIMI_LFO2WAVE2_R.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE2 rate: " + String (value);
        };
        // Slider KIJIMI_LFO2SUB_R
        sliderKIJIMI_LFO2SUB_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2SUB_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2SUB_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2SUB_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2SUB_R);
        sliderAttachmentKIJIMI_LFO2SUB_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_R", sliderKIJIMI_LFO2SUB_R));
        sliderKIJIMI_LFO2SUB_R.textFromValueFunction = [](double value) {
            return "LFO2 to SUB rate: " + String (value);
        };
        // Slider KIJIMI_LFO2VCF_R
        sliderKIJIMI_LFO2VCF_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCF_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCF_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCF_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCF_R);
        sliderAttachmentKIJIMI_LFO2VCF_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_R", sliderKIJIMI_LFO2VCF_R));
        sliderKIJIMI_LFO2VCF_R.textFromValueFunction = [](double value) {
            return "LFO2 to VCF rate: " + String (value);
        };
        // Slider KIJIMI_LFO2RESO_R
        sliderKIJIMI_LFO2RESO_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2RESO_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2RESO_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2RESO_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2RESO_R);
        sliderAttachmentKIJIMI_LFO2RESO_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_R", sliderKIJIMI_LFO2RESO_R));
        sliderKIJIMI_LFO2RESO_R.textFromValueFunction = [](double value) {
            return "LFO2 to RESO rate: " + String (value);
        };
        // Slider KIJIMI_LFO2VCA_R
        sliderKIJIMI_LFO2VCA_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCA_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCA_R.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCA_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCA_R);
        sliderAttachmentKIJIMI_LFO2VCA_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_R", sliderKIJIMI_LFO2VCA_R));
        sliderKIJIMI_LFO2VCA_R.textFromValueFunction = [](double value) {
            return "LFO2 to VCA rate: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO1_A
        sliderKIJIMI_LFO1VCO1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO1_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCO1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_A);
        sliderAttachmentKIJIMI_LFO1VCO1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_A", sliderKIJIMI_LFO1VCO1_A));
        sliderKIJIMI_LFO1VCO1_A.textFromValueFunction = [](double value) {
            return "LFO1 to VCO1 attack: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO2_A
        sliderKIJIMI_LFO1VCO2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO2_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCO2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_A);
        sliderAttachmentKIJIMI_LFO1VCO2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_A", sliderKIJIMI_LFO1VCO2_A));
        sliderKIJIMI_LFO1VCO2_A.textFromValueFunction = [](double value) {
            return "LFO1 to VCO2 attack: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE1_A
        sliderKIJIMI_LFO1WAVE1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE1_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1WAVE1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_A);
        sliderAttachmentKIJIMI_LFO1WAVE1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_A", sliderKIJIMI_LFO1WAVE1_A));
        sliderKIJIMI_LFO1WAVE1_A.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE1 attack: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE2_A
        sliderKIJIMI_LFO1WAVE2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE2_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1WAVE2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_A);
        sliderAttachmentKIJIMI_LFO1WAVE2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_A", sliderKIJIMI_LFO1WAVE2_A));
        sliderKIJIMI_LFO1WAVE2_A.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE2 attack: " + String (value);
        };
        // Slider KIJIMI_LFO1SUB_A
        sliderKIJIMI_LFO1SUB_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1SUB_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1SUB_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1SUB_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1SUB_A);
        sliderAttachmentKIJIMI_LFO1SUB_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_A", sliderKIJIMI_LFO1SUB_A));
        sliderKIJIMI_LFO1SUB_A.textFromValueFunction = [](double value) {
            return "LFO1 to SUB attack: " + String (value);
        };
        // Slider KIJIMI_LFO1VCF_A
        sliderKIJIMI_LFO1VCF_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCF_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCF_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCF_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCF_A);
        sliderAttachmentKIJIMI_LFO1VCF_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_A", sliderKIJIMI_LFO1VCF_A));
        sliderKIJIMI_LFO1VCF_A.textFromValueFunction = [](double value) {
            return "LFO1 to VCF attack: " + String (value);
        };
        // Slider KIJIMI_LFO1RESO_A
        sliderKIJIMI_LFO1RESO_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1RESO_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1RESO_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1RESO_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1RESO_A);
        sliderAttachmentKIJIMI_LFO1RESO_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_A", sliderKIJIMI_LFO1RESO_A));
        sliderKIJIMI_LFO1RESO_A.textFromValueFunction = [](double value) {
            return "LFO1 to RESO attack: " + String (value);
        };
        // Slider KIJIMI_LFO1VCA_A
        sliderKIJIMI_LFO1VCA_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCA_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCA_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCA_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCA_A);
        sliderAttachmentKIJIMI_LFO1VCA_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_A", sliderKIJIMI_LFO1VCA_A));
        sliderKIJIMI_LFO1VCA_A.textFromValueFunction = [](double value) {
            return "LFO1 to VCA attack: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO1_A
        sliderKIJIMI_LFO2VCO1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO1_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCO1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_A);
        sliderAttachmentKIJIMI_LFO2VCO1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_A", sliderKIJIMI_LFO2VCO1_A));
        sliderKIJIMI_LFO2VCO1_A.textFromValueFunction = [](double value) {
            return "LFO2 to VCO1 attack: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO2_A
        sliderKIJIMI_LFO2VCO2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO2_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCO2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_A);
        sliderAttachmentKIJIMI_LFO2VCO2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_A", sliderKIJIMI_LFO2VCO2_A));
        sliderKIJIMI_LFO2VCO2_A.textFromValueFunction = [](double value) {
            return "LFO2 to VCO2 attack: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE1_A
        sliderKIJIMI_LFO2WAVE1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE1_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2WAVE1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_A);
        sliderAttachmentKIJIMI_LFO2WAVE1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_A", sliderKIJIMI_LFO2WAVE1_A));
        sliderKIJIMI_LFO2WAVE1_A.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE1 attack: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE2_A
        sliderKIJIMI_LFO2WAVE2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE2_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2WAVE2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_A);
        sliderAttachmentKIJIMI_LFO2WAVE2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_A", sliderKIJIMI_LFO2WAVE2_A));
        sliderKIJIMI_LFO2WAVE2_A.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE2 attack: " + String (value);
        };
        // Slider KIJIMI_LFO2SUB_A
        sliderKIJIMI_LFO2SUB_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2SUB_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2SUB_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2SUB_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2SUB_A);
        sliderAttachmentKIJIMI_LFO2SUB_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_A", sliderKIJIMI_LFO2SUB_A));
        sliderKIJIMI_LFO2SUB_A.textFromValueFunction = [](double value) {
            return "LFO2 to SUB attack: " + String (value);
        };
        // Slider KIJIMI_LFO2VCF_A
        sliderKIJIMI_LFO2VCF_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCF_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCF_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCF_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCF_A);
        sliderAttachmentKIJIMI_LFO2VCF_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_A", sliderKIJIMI_LFO2VCF_A));
        sliderKIJIMI_LFO2VCF_A.textFromValueFunction = [](double value) {
            return "LFO2 to VCF attack: " + String (value);
        };
        // Slider KIJIMI_LFO2RESO_A
        sliderKIJIMI_LFO2RESO_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2RESO_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2RESO_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2RESO_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2RESO_A);
        sliderAttachmentKIJIMI_LFO2RESO_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_A", sliderKIJIMI_LFO2RESO_A));
        sliderKIJIMI_LFO2RESO_A.textFromValueFunction = [](double value) {
            return "LFO2 to RESO attack: " + String (value);
        };
        // Slider KIJIMI_LFO2VCA_A
        sliderKIJIMI_LFO2VCA_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCA_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCA_A.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCA_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCA_A);
        sliderAttachmentKIJIMI_LFO2VCA_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_A", sliderKIJIMI_LFO2VCA_A));
        sliderKIJIMI_LFO2VCA_A.textFromValueFunction = [](double value) {
            return "LFO2 to VCA attack: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO1_D
        sliderKIJIMI_LFO1VCO1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO1_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCO1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_D);
        sliderAttachmentKIJIMI_LFO1VCO1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_D", sliderKIJIMI_LFO1VCO1_D));
        sliderKIJIMI_LFO1VCO1_D.textFromValueFunction = [](double value) {
            return "LFO1 to VCO1 decay: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO2_D
        sliderKIJIMI_LFO1VCO2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO2_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCO2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_D);
        sliderAttachmentKIJIMI_LFO1VCO2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_D", sliderKIJIMI_LFO1VCO2_D));
        sliderKIJIMI_LFO1VCO2_D.textFromValueFunction = [](double value) {
            return "LFO1 to VCO2 decay: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE1_D
        sliderKIJIMI_LFO1WAVE1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE1_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1WAVE1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_D);
        sliderAttachmentKIJIMI_LFO1WAVE1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_D", sliderKIJIMI_LFO1WAVE1_D));
        sliderKIJIMI_LFO1WAVE1_D.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE1 decay: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE2_D
        sliderKIJIMI_LFO1WAVE2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE2_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1WAVE2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_D);
        sliderAttachmentKIJIMI_LFO1WAVE2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_D", sliderKIJIMI_LFO1WAVE2_D));
        sliderKIJIMI_LFO1WAVE2_D.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE2 decay: " + String (value);
        };
        // Slider KIJIMI_LFO1SUB_D
        sliderKIJIMI_LFO1SUB_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1SUB_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1SUB_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1SUB_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1SUB_D);
        sliderAttachmentKIJIMI_LFO1SUB_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_D", sliderKIJIMI_LFO1SUB_D));
        sliderKIJIMI_LFO1SUB_D.textFromValueFunction = [](double value) {
            return "LFO1 to SUB decay: " + String (value);
        };
        // Slider KIJIMI_LFO1VCF_D
        sliderKIJIMI_LFO1VCF_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCF_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCF_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCF_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCF_D);
        sliderAttachmentKIJIMI_LFO1VCF_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_D", sliderKIJIMI_LFO1VCF_D));
        sliderKIJIMI_LFO1VCF_D.textFromValueFunction = [](double value) {
            return "LFO1 to VCF decay: " + String (value);
        };
        // Slider KIJIMI_LFO1RESO_D
        sliderKIJIMI_LFO1RESO_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1RESO_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1RESO_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1RESO_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1RESO_D);
        sliderAttachmentKIJIMI_LFO1RESO_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_D", sliderKIJIMI_LFO1RESO_D));
        sliderKIJIMI_LFO1RESO_D.textFromValueFunction = [](double value) {
            return "LFO1 to RESO decay: " + String (value);
        };
        // Slider KIJIMI_LFO1VCA_D
        sliderKIJIMI_LFO1VCA_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCA_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCA_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO1VCA_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCA_D);
        sliderAttachmentKIJIMI_LFO1VCA_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_D", sliderKIJIMI_LFO1VCA_D));
        sliderKIJIMI_LFO1VCA_D.textFromValueFunction = [](double value) {
            return "LFO1 to VCA decay: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO1_D
        sliderKIJIMI_LFO2VCO1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO1_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCO1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_D);
        sliderAttachmentKIJIMI_LFO2VCO1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_D", sliderKIJIMI_LFO2VCO1_D));
        sliderKIJIMI_LFO2VCO1_D.textFromValueFunction = [](double value) {
            return "LFO2 to VCO1 decay: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO2_D
        sliderKIJIMI_LFO2VCO2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO2_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCO2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_D);
        sliderAttachmentKIJIMI_LFO2VCO2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_D", sliderKIJIMI_LFO2VCO2_D));
        sliderKIJIMI_LFO2VCO2_D.textFromValueFunction = [](double value) {
            return "LFO2 to VCO2 decay: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE1_D
        sliderKIJIMI_LFO2WAVE1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE1_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2WAVE1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_D);
        sliderAttachmentKIJIMI_LFO2WAVE1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_D", sliderKIJIMI_LFO2WAVE1_D));
        sliderKIJIMI_LFO2WAVE1_D.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE1 decay: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE2_D
        sliderKIJIMI_LFO2WAVE2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE2_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2WAVE2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_D);
        sliderAttachmentKIJIMI_LFO2WAVE2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_D", sliderKIJIMI_LFO2WAVE2_D));
        sliderKIJIMI_LFO2WAVE2_D.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE2 decay: " + String (value);
        };
        // Slider KIJIMI_LFO2SUB_D
        sliderKIJIMI_LFO2SUB_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2SUB_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2SUB_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2SUB_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2SUB_D);
        sliderAttachmentKIJIMI_LFO2SUB_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_D", sliderKIJIMI_LFO2SUB_D));
        sliderKIJIMI_LFO2SUB_D.textFromValueFunction = [](double value) {
            return "LFO2 to SUB decay: " + String (value);
        };
        // Slider KIJIMI_LFO2VCF_D
        sliderKIJIMI_LFO2VCF_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCF_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCF_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCF_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCF_D);
        sliderAttachmentKIJIMI_LFO2VCF_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_D", sliderKIJIMI_LFO2VCF_D));
        sliderKIJIMI_LFO2VCF_D.textFromValueFunction = [](double value) {
            return "LFO2 to VCF decay: " + String (value);
        };
        // Slider KIJIMI_LFO2RESO_D
        sliderKIJIMI_LFO2RESO_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2RESO_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2RESO_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2RESO_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2RESO_D);
        sliderAttachmentKIJIMI_LFO2RESO_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_D", sliderKIJIMI_LFO2RESO_D));
        sliderKIJIMI_LFO2RESO_D.textFromValueFunction = [](double value) {
            return "LFO2 to RESO decay: " + String (value);
        };
        // Slider KIJIMI_LFO2VCA_D
        sliderKIJIMI_LFO2VCA_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCA_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCA_D.setLookAndFeel (&knobLookAndFeel);
        sliderKIJIMI_LFO2VCA_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCA_D);
        sliderAttachmentKIJIMI_LFO2VCA_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_D", sliderKIJIMI_LFO2VCA_D));
        sliderKIJIMI_LFO2VCA_D.textFromValueFunction = [](double value) {
            return "LFO2 to VCA decay: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO1_ENV
        sliderKIJIMI_LFO1VCO1_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO1_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO1_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO1VCO1_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_ENV);
        sliderAttachmentKIJIMI_LFO1VCO1_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_ENV", sliderKIJIMI_LFO1VCO1_ENV));
        sliderKIJIMI_LFO1VCO1_ENV.textFromValueFunction = [](double value) {
            return "LFO1 to VCO1 envelope: " + String (value);
        };
        // Slider KIJIMI_LFO1VCO2_ENV
        sliderKIJIMI_LFO1VCO2_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO2_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO2_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO1VCO2_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_ENV);
        sliderAttachmentKIJIMI_LFO1VCO2_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_ENV", sliderKIJIMI_LFO1VCO2_ENV));
        sliderKIJIMI_LFO1VCO2_ENV.textFromValueFunction = [](double value) {
            return "LFO1 to VCO2 envelope: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE1_ENV
        sliderKIJIMI_LFO1WAVE1_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE1_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE1_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO1WAVE1_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_ENV);
        sliderAttachmentKIJIMI_LFO1WAVE1_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_ENV", sliderKIJIMI_LFO1WAVE1_ENV));
        sliderKIJIMI_LFO1WAVE1_ENV.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE1 envelope: " + String (value);
        };
        // Slider KIJIMI_LFO1WAVE2_ENV
        sliderKIJIMI_LFO1WAVE2_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE2_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE2_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO1WAVE2_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_ENV);
        sliderAttachmentKIJIMI_LFO1WAVE2_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_ENV", sliderKIJIMI_LFO1WAVE2_ENV));
        sliderKIJIMI_LFO1WAVE2_ENV.textFromValueFunction = [](double value) {
            return "LFO1 to WAVE2 envelope: " + String (value);
        };
        // Slider KIJIMI_LFO1SUB_ENV
        sliderKIJIMI_LFO1SUB_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1SUB_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1SUB_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO1SUB_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1SUB_ENV);
        sliderAttachmentKIJIMI_LFO1SUB_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_ENV", sliderKIJIMI_LFO1SUB_ENV));
        sliderKIJIMI_LFO1SUB_ENV.textFromValueFunction = [](double value) {
            return "LFO1 to SUB envelope: " + String (value);
        };
        // Slider KIJIMI_LFO1VCF_ENV
        sliderKIJIMI_LFO1VCF_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCF_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCF_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO1VCF_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCF_ENV);
        sliderAttachmentKIJIMI_LFO1VCF_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_ENV", sliderKIJIMI_LFO1VCF_ENV));
        sliderKIJIMI_LFO1VCF_ENV.textFromValueFunction = [](double value) {
            return "LFO1 to VCF envelope: " + String (value);
        };
        // Slider KIJIMI_LFO1RESO_ENV
        sliderKIJIMI_LFO1RESO_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1RESO_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1RESO_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO1RESO_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1RESO_ENV);
        sliderAttachmentKIJIMI_LFO1RESO_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_ENV", sliderKIJIMI_LFO1RESO_ENV));
        sliderKIJIMI_LFO1RESO_ENV.textFromValueFunction = [](double value) {
            return "LFO1 to RESO envelope: " + String (value);
        };
        // Slider KIJIMI_LFO1VCA_ENV
        sliderKIJIMI_LFO1VCA_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCA_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCA_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO1VCA_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCA_ENV);
        sliderAttachmentKIJIMI_LFO1VCA_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_ENV", sliderKIJIMI_LFO1VCA_ENV));
        sliderKIJIMI_LFO1VCA_ENV.textFromValueFunction = [](double value) {
            return "LFO1 to VCA envelope: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO1_ENV
        sliderKIJIMI_LFO2VCO1_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO1_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO1_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO2VCO1_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_ENV);
        sliderAttachmentKIJIMI_LFO2VCO1_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_ENV", sliderKIJIMI_LFO2VCO1_ENV));
        sliderKIJIMI_LFO2VCO1_ENV.textFromValueFunction = [](double value) {
            return "LFO2 to VCO1 envelope: " + String (value);
        };
        // Slider KIJIMI_LFO2VCO2_ENV
        sliderKIJIMI_LFO2VCO2_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO2_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO2_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO2VCO2_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_ENV);
        sliderAttachmentKIJIMI_LFO2VCO2_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_ENV", sliderKIJIMI_LFO2VCO2_ENV));
        sliderKIJIMI_LFO2VCO2_ENV.textFromValueFunction = [](double value) {
            return "LFO2 to VCO2 envelope: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE1_ENV
        sliderKIJIMI_LFO2WAVE1_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE1_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE1_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO2WAVE1_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_ENV);
        sliderAttachmentKIJIMI_LFO2WAVE1_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_ENV", sliderKIJIMI_LFO2WAVE1_ENV));
        sliderKIJIMI_LFO2WAVE1_ENV.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE1 envelope: " + String (value);
        };
        // Slider KIJIMI_LFO2WAVE2_ENV
        sliderKIJIMI_LFO2WAVE2_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE2_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE2_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO2WAVE2_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_ENV);
        sliderAttachmentKIJIMI_LFO2WAVE2_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_ENV", sliderKIJIMI_LFO2WAVE2_ENV));
        sliderKIJIMI_LFO2WAVE2_ENV.textFromValueFunction = [](double value) {
            return "LFO2 to WAVE2 envelope: " + String (value);
        };
        // Slider KIJIMI_LFO2SUB_ENV
        sliderKIJIMI_LFO2SUB_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2SUB_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2SUB_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO2SUB_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2SUB_ENV);
        sliderAttachmentKIJIMI_LFO2SUB_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_ENV", sliderKIJIMI_LFO2SUB_ENV));
        sliderKIJIMI_LFO2SUB_ENV.textFromValueFunction = [](double value) {
            return "LFO2 to SUB envelope: " + String (value);
        };
        // Slider KIJIMI_LFO2VCF_ENV
        sliderKIJIMI_LFO2VCF_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCF_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCF_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO2VCF_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCF_ENV);
        sliderAttachmentKIJIMI_LFO2VCF_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_ENV", sliderKIJIMI_LFO2VCF_ENV));
        sliderKIJIMI_LFO2VCF_ENV.textFromValueFunction = [](double value) {
            return "LFO2 to VCF envelope: " + String (value);
        };
        // Slider KIJIMI_LFO2RESO_ENV
        sliderKIJIMI_LFO2RESO_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2RESO_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2RESO_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO2RESO_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2RESO_ENV);
        sliderAttachmentKIJIMI_LFO2RESO_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_ENV", sliderKIJIMI_LFO2RESO_ENV));
        sliderKIJIMI_LFO2RESO_ENV.textFromValueFunction = [](double value) {
            return "LFO2 to RESO envelope: " + String (value);
        };
        // Slider KIJIMI_LFO2VCA_ENV
        sliderKIJIMI_LFO2VCA_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCA_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCA_ENV.setLookAndFeel (&button1LookAndFeel);
        sliderKIJIMI_LFO2VCA_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCA_ENV);
        sliderAttachmentKIJIMI_LFO2VCA_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_ENV", sliderKIJIMI_LFO2VCA_ENV));
        sliderKIJIMI_LFO2VCA_ENV.textFromValueFunction = [](double value) {
            return "LFO2 to VCA envelope: " + String (value);
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
        sliderKIJIMI_LFO1VCO1_P.setBounds (0.081 * getWidth(), 0.092 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1VCO1_P
        sliderKIJIMI_LFO1VCO2_P.setBounds (0.112 * getWidth(), 0.092 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1VCO2_P
        sliderKIJIMI_LFO1WAVE1_P.setBounds (0.143 * getWidth(), 0.092 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1WAVE1_P
        sliderKIJIMI_LFO1WAVE2_P.setBounds (0.174 * getWidth(), 0.092 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1WAVE2_P
        sliderKIJIMI_LFO1SUB_P.setBounds (0.205 * getWidth(), 0.092 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1SUB_P
        sliderKIJIMI_LFO1VCF_P.setBounds (0.236 * getWidth(), 0.092 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1VCF_P
        sliderKIJIMI_LFO1RESO_P.setBounds (0.267 * getWidth(), 0.092 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1RESO_P
        sliderKIJIMI_LFO1VCA_P.setBounds (0.299 * getWidth(), 0.092 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1VCA_P
        sliderKIJIMI_LFO2_AMT.setBounds (0.026 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2_AMT
        sliderKIJIMI_LFO2VCO1_P.setBounds (0.081 * getWidth(), 0.275 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2VCO1_P
        sliderKIJIMI_LFO2VCO2_P.setBounds (0.112 * getWidth(), 0.275 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2VCO2_P
        sliderKIJIMI_LFO2WAVE1_P.setBounds (0.143 * getWidth(), 0.275 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2WAVE1_P
        sliderKIJIMI_LFO2WAVE2_P.setBounds (0.174 * getWidth(), 0.275 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2WAVE2_P
        sliderKIJIMI_LFO2SUB_P.setBounds (0.205 * getWidth(), 0.275 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2SUB_P
        sliderKIJIMI_LFO2VCF_P.setBounds (0.236 * getWidth(), 0.275 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2VCF_P
        sliderKIJIMI_LFO2RESO_P.setBounds (0.267 * getWidth(), 0.275 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2RESO_P
        sliderKIJIMI_LFO2VCA_P.setBounds (0.299 * getWidth(), 0.275 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2VCA_P
        sliderKIJIMI_ADSR2_AMT.setBounds (0.026 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2_AMT
        sliderKIJIMI_ADSR2VCO1_P.setBounds (0.081 * getWidth(), 0.459 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR2VCO1_P
        sliderKIJIMI_ADSR2VCO2_P.setBounds (0.112 * getWidth(), 0.459 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR2VCO2_P
        sliderKIJIMI_ADSR2WAVE1_P.setBounds (0.143 * getWidth(), 0.459 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR2WAVE1_P
        sliderKIJIMI_ADSR2WAVE2_P.setBounds (0.174 * getWidth(), 0.459 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR2WAVE2_P
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
        sliderKIJIMI_LFO1_SHAPE.setBounds (0.369 * getWidth(), 0.817 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1_SHAPE
        sliderKIJIMI_LFO2_RATE.setBounds (0.432 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2_RATE
        sliderKIJIMI_LFO2_A.setBounds (0.432 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2_A
        sliderKIJIMI_LFO2_D.setBounds (0.432 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2_D
        sliderKIJIMI_LFO2_SHAPE.setBounds (0.431 * getWidth(), 0.817 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2_SHAPE
        sliderKIJIMI_LFO_ENV.setBounds (0.400 * getWidth(), 0.817 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO_ENV
        sliderKIJIMI_VCO1_FREQ.setBounds (0.509 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO1_FREQ
        sliderKIJIMI_VCO1_WAVE.setBounds (0.509 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO1_WAVE
        sliderKIJIMI_VCO1_VOL13.setBounds (0.495 * getWidth(), 0.459 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_VCO1_VOL13
        sliderKIJIMI_VCO1_VOL23.setBounds (0.526 * getWidth(), 0.459 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_VCO1_VOL23
        sliderKIJIMI_SUB_VOL.setBounds (0.509 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_SUB_VOL
        sliderKIJIMI_NOISE_VOL13.setBounds (0.495 * getWidth(), 0.817 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_NOISE_VOL13
        sliderKIJIMI_NOISE_VOL23.setBounds (0.526 * getWidth(), 0.817 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_NOISE_VOL23
        sliderKIJIMI_VCO2_FREQ.setBounds (0.579 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2_FREQ
        sliderKIJIMI_VCO2WAVE.setBounds (0.579 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2WAVE
        sliderKIJIMI_VCO2_VOL.setBounds (0.579 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2_VOL
        sliderKIJIMI_VCO2_DETUNE.setBounds (0.579 * getWidth(), 0.642 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VCO2_DETUNE
        sliderKIJIMI_VCO_SYNC.setBounds (0.564 * getWidth(), 0.817 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_VCO_SYNC
        sliderKIJIMI_VCO_KOFF.setBounds (0.595 * getWidth(), 0.817 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_VCO_KOFF
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
        sliderKIJIMI_ADSR_MULT.setBounds (0.821 * getWidth(), 0.183 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR_MULT
        sliderKIJIMI_ADSR_CYCLE.setBounds (0.821 * getWidth(), 0.367 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR_CYCLE
        sliderKIJIMI_ADSR_KT.setBounds (0.821 * getWidth(), 0.550 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_ADSR_KT
        sliderKIJIMI_GLIDE_RATE.setBounds (0.941 * getWidth(), 0.101 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_GLIDE_RATE
        sliderKIJIMI_GLIDE_MODE.setBounds (0.942 * getWidth(), 0.266 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_GLIDE_MODE
        sliderKIJIMI_VOLUME.setBounds (0.941 * getWidth(), 0.468 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_VOLUME
        sliderKIJIMI_CC_RECEIVE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_CC_RECEIVE
        sliderKIJIMI_MPE_CH.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_MPE_CH
        sliderKIJIMI_MIDI_CH.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_MIDI_CH
        sliderKIJIMI_MAX_VOICES.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_MAX_VOICES
        sliderKIJIMI_ADSR_MOD_MODE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_ADSR_MOD_MODE
        sliderKIJIMI_CYCLE_MODE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_CYCLE_MODE
        sliderKIJIMI_KT_MULTIPLIER.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_KT_MULTIPLIER
        sliderKIJIMI_LFO_MAX_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO_MAX_R
        sliderKIJIMI_LFO_MIN_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO_MIN_R
        sliderKIJIMI_LFO_MODE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO_MODE
        sliderKIJIMI_LFO_MOD_MODE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO_MOD_MODE
        sliderKIJIMI_LFO_POLY_RETRIG.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO_POLY_RETRIG
        sliderKIJIMI_LFO_SUST.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO_SUST
        sliderKIJIMI_LFO1_ENV_DEST.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1_ENV_DEST
        sliderKIJIMI_LFO1_ENV_MAX_T.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1_ENV_MAX_T
        sliderKIJIMI_LFO1_ENV_P.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1_ENV_P
        sliderKIJIMI_LFO1_SYNC.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1_SYNC
        sliderKIJIMI_LFO2_ENV_DEST.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2_ENV_DEST
        sliderKIJIMI_LFO2_ENV_MAX_T.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2_ENV_MAX_T
        sliderKIJIMI_LFO2_ENV_P.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2_ENV_P
        sliderKIJIMI_LFO2_SYNC.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2_SYNC
        sliderKIJIMI_MODW_P.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_MODW_P
        sliderKIJIMI_ADSR_VCA.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_ADSR_VCA
        sliderKIJIMI_MASTER_VOL.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_MASTER_VOL
        sliderKIJIMI_VCO_DETUNE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_VCO_DETUNE
        sliderKIJIMI_CARDS_VOCIE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_CARDS_VOCIE
        sliderKIJIMI_LEG_EG_RETRIG.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LEG_EG_RETRIG
        sliderKIJIMI_LEG_PRIORITY.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LEG_PRIORITY
        sliderKIJIMI_MONO_MODE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_MONO_MODE
        sliderKIJIMI_MONO_POLY.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_MONO_POLY
        sliderKIJIMI_SUSTAIN_MODE.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_SUSTAIN_MODE
        sliderKIJIMI_LFO1VCO1_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO1_AM
        sliderKIJIMI_LFO1VCO2_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO2_AM
        sliderKIJIMI_LFO1WAVE1_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE1_AM
        sliderKIJIMI_LFO1WAVE2_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE2_AM
        sliderKIJIMI_LFO1SUB_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1SUB_AM
        sliderKIJIMI_LFO1VCF_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCF_AM
        sliderKIJIMI_LFO1RESO_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1RESO_AM
        sliderKIJIMI_LFO1VCA_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCA_AM
        sliderKIJIMI_LFO2VCO1_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO1_AM
        sliderKIJIMI_LFO2VCO2_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO2_AM
        sliderKIJIMI_LFO2WAVE1_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE1_AM
        sliderKIJIMI_LFO2WAVE2_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE2_AM
        sliderKIJIMI_LFO2SUB_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2SUB_AM
        sliderKIJIMI_LFO2VCF_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCF_AM
        sliderKIJIMI_LFO2RESO_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2RESO_AM
        sliderKIJIMI_LFO2VCA_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCA_AM
        sliderKIJIMI_ADSR2VCO1_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_ADSR2VCO1_AM
        sliderKIJIMI_ADSR2VCO2_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_ADSR2VCO2_AM
        sliderKIJIMI_ADSR2WAVE1_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_ADSR2WAVE1_AM
        sliderKIJIMI_ADSR2WAVE2_AM.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_ADSR2WAVE2_AM
        sliderKIJIMI_LFO1VCO1_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO1_R
        sliderKIJIMI_LFO1VCO2_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO2_R
        sliderKIJIMI_LFO1WAVE1_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE1_R
        sliderKIJIMI_LFO1WAVE2_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE2_R
        sliderKIJIMI_LFO1SUB_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1SUB_R
        sliderKIJIMI_LFO1VCF_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCF_R
        sliderKIJIMI_LFO1RESO_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1RESO_R
        sliderKIJIMI_LFO1VCA_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCA_R
        sliderKIJIMI_LFO2VCO1_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO1_R
        sliderKIJIMI_LFO2VCO2_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO2_R
        sliderKIJIMI_LFO2WAVE1_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE1_R
        sliderKIJIMI_LFO2WAVE2_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE2_R
        sliderKIJIMI_LFO2SUB_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2SUB_R
        sliderKIJIMI_LFO2VCF_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCF_R
        sliderKIJIMI_LFO2RESO_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2RESO_R
        sliderKIJIMI_LFO2VCA_R.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCA_R
        sliderKIJIMI_LFO1VCO1_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO1_A
        sliderKIJIMI_LFO1VCO2_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO2_A
        sliderKIJIMI_LFO1WAVE1_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE1_A
        sliderKIJIMI_LFO1WAVE2_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE2_A
        sliderKIJIMI_LFO1SUB_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1SUB_A
        sliderKIJIMI_LFO1VCF_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCF_A
        sliderKIJIMI_LFO1RESO_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1RESO_A
        sliderKIJIMI_LFO1VCA_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCA_A
        sliderKIJIMI_LFO2VCO1_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO1_A
        sliderKIJIMI_LFO2VCO2_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO2_A
        sliderKIJIMI_LFO2WAVE1_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE1_A
        sliderKIJIMI_LFO2WAVE2_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE2_A
        sliderKIJIMI_LFO2SUB_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2SUB_A
        sliderKIJIMI_LFO2VCF_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCF_A
        sliderKIJIMI_LFO2RESO_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2RESO_A
        sliderKIJIMI_LFO2VCA_A.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCA_A
        sliderKIJIMI_LFO1VCO1_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO1_D
        sliderKIJIMI_LFO1VCO2_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO2_D
        sliderKIJIMI_LFO1WAVE1_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE1_D
        sliderKIJIMI_LFO1WAVE2_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE2_D
        sliderKIJIMI_LFO1SUB_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1SUB_D
        sliderKIJIMI_LFO1VCF_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCF_D
        sliderKIJIMI_LFO1RESO_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1RESO_D
        sliderKIJIMI_LFO1VCA_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCA_D
        sliderKIJIMI_LFO2VCO1_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO1_D
        sliderKIJIMI_LFO2VCO2_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO2_D
        sliderKIJIMI_LFO2WAVE1_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE1_D
        sliderKIJIMI_LFO2WAVE2_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE2_D
        sliderKIJIMI_LFO2SUB_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2SUB_D
        sliderKIJIMI_LFO2VCF_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCF_D
        sliderKIJIMI_LFO2RESO_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2RESO_D
        sliderKIJIMI_LFO2VCA_D.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCA_D
        sliderKIJIMI_LFO1VCO1_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO1_ENV
        sliderKIJIMI_LFO1VCO2_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCO2_ENV
        sliderKIJIMI_LFO1WAVE1_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE1_ENV
        sliderKIJIMI_LFO1WAVE2_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1WAVE2_ENV
        sliderKIJIMI_LFO1SUB_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1SUB_ENV
        sliderKIJIMI_LFO1VCF_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCF_ENV
        sliderKIJIMI_LFO1RESO_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1RESO_ENV
        sliderKIJIMI_LFO1VCA_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO1VCA_ENV
        sliderKIJIMI_LFO2VCO1_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO1_ENV
        sliderKIJIMI_LFO2VCO2_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCO2_ENV
        sliderKIJIMI_LFO2WAVE1_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE1_ENV
        sliderKIJIMI_LFO2WAVE2_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2WAVE2_ENV
        sliderKIJIMI_LFO2SUB_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2SUB_ENV
        sliderKIJIMI_LFO2VCF_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCF_ENV
        sliderKIJIMI_LFO2RESO_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2RESO_ENV
        sliderKIJIMI_LFO2VCA_ENV.setBounds (-1.000 * getWidth(), -1.000 * getHeight(), -1.000 * getWidth(), -1.000 * getHeight()); // Slider KIJIMI_LFO2VCA_ENV
        // --> End auto-generated code C
        
        ledsLFO1.setBounds(getWidth() * 515/1365, getHeight() * 335/545, getWidth() * 11.5/1365, getHeight() * 108.85/545);
        ledsLFO2.setBounds(getWidth() * 610/1365, getHeight() * 335/545, getWidth() * 11.5/1365, getHeight() * 108.85/545);
    }
    
private:
    BabuFrikAudioProcessor* processor;
    
    // Look and feel objects
    BabuFrikKnobLookAndFeel knobLookAndFeel;
    BabuFrikButton2LookAndFeel button2LookAndFeel;
    BabuFrikButton2AltLookAndFeel button2AltLookAndFeel;
    BabuFrikButton2Alt3ValuesLookAndFeel button2Alt3ValuesLookAndFeel;
    BabuFrikButton1LookAndFeel button1LookAndFeel;
    BabuFrikButton0LookAndFeel button0LookAndFeel;
    
    // LED strip objects
    KijimiLEDStripComponent ledsLFO1;
    KijimiLEDStripComponent ledsLFO2;
    
    // Slider declarations
    // --> Start auto-generated code A
    Slider sliderKIJIMI_LFO1_AMT;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_AMT;
    CycleButtonSlider4Steps sliderKIJIMI_LFO1VCO1_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO1_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO1VCO2_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO2_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO1WAVE1_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE1_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO1WAVE2_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE2_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO1SUB_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1SUB_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO1VCF_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCF_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO1RESO_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1RESO_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO1VCA_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCA_P;
    Slider sliderKIJIMI_LFO2_AMT;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_AMT;
    CycleButtonSlider4Steps sliderKIJIMI_LFO2VCO1_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO1_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO2VCO2_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO2_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO2WAVE1_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE1_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO2WAVE2_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE2_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO2SUB_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2SUB_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO2VCF_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCF_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO2RESO_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2RESO_P;
    CycleButtonSlider4Steps sliderKIJIMI_LFO2VCA_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCA_P;
    Slider sliderKIJIMI_ADSR2_AMT;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2_AMT;
    CycleButtonSlider4Steps sliderKIJIMI_ADSR2VCO1_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2VCO1_P;
    CycleButtonSlider4Steps sliderKIJIMI_ADSR2VCO2_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2VCO2_P;
    CycleButtonSlider4Steps sliderKIJIMI_ADSR2WAVE1_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2WAVE1_P;
    CycleButtonSlider4Steps sliderKIJIMI_ADSR2WAVE2_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2WAVE2_P;
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
    CycleButtonSlider6StepsInverted sliderKIJIMI_LFO1_SHAPE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_SHAPE;
    Slider sliderKIJIMI_LFO2_RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_RATE;
    Slider sliderKIJIMI_LFO2_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_A;
    Slider sliderKIJIMI_LFO2_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_D;
    CycleButtonSlider6StepsInverted sliderKIJIMI_LFO2_SHAPE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_SHAPE;
    CycleButtonSlider4Steps sliderKIJIMI_LFO_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_ENV;
    Slider sliderKIJIMI_VCO1_FREQ;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO1_FREQ;
    Slider sliderKIJIMI_VCO1_WAVE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO1_WAVE;
    CycleButtonSlider2Steps sliderKIJIMI_VCO1_VOL13;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO1_VOL13;
    CycleButtonSlider2Steps sliderKIJIMI_VCO1_VOL23;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO1_VOL23;
    Slider sliderKIJIMI_SUB_VOL;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SUB_VOL;
    CycleButtonSlider2Steps sliderKIJIMI_NOISE_VOL13;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_NOISE_VOL13;
    CycleButtonSlider2Steps sliderKIJIMI_NOISE_VOL23;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_NOISE_VOL23;
    Slider sliderKIJIMI_VCO2_FREQ;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2_FREQ;
    Slider sliderKIJIMI_VCO2WAVE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2WAVE;
    Slider sliderKIJIMI_VCO2_VOL;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2_VOL;
    Slider sliderKIJIMI_VCO2_DETUNE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO2_DETUNE;
    CycleButtonSlider3Steps sliderKIJIMI_VCO_SYNC;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO_SYNC;
    CycleButtonSlider4Steps sliderKIJIMI_VCO_KOFF;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO_KOFF;
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
    CycleButtonSlider4Steps sliderKIJIMI_ADSR_MULT;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR_MULT;
    CycleButtonSlider4Steps sliderKIJIMI_ADSR_CYCLE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR_CYCLE;
    CycleButtonSlider4Steps sliderKIJIMI_ADSR_KT;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR_KT;
    Slider sliderKIJIMI_GLIDE_RATE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_GLIDE_RATE;
    CycleButtonSlider3Steps sliderKIJIMI_GLIDE_MODE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_GLIDE_MODE;
    Slider sliderKIJIMI_VOLUME;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VOLUME;
    Slider sliderKIJIMI_CC_RECEIVE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_CC_RECEIVE;
    Slider sliderKIJIMI_MPE_CH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MPE_CH;
    Slider sliderKIJIMI_MIDI_CH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MIDI_CH;
    Slider sliderKIJIMI_MAX_VOICES;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MAX_VOICES;
    Slider sliderKIJIMI_ADSR_MOD_MODE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR_MOD_MODE;
    Slider sliderKIJIMI_CYCLE_MODE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_CYCLE_MODE;
    Slider sliderKIJIMI_KT_MULTIPLIER;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_KT_MULTIPLIER;
    Slider sliderKIJIMI_LFO_MAX_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_MAX_R;
    Slider sliderKIJIMI_LFO_MIN_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_MIN_R;
    Slider sliderKIJIMI_LFO_MODE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_MODE;
    Slider sliderKIJIMI_LFO_MOD_MODE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_MOD_MODE;
    Slider sliderKIJIMI_LFO_POLY_RETRIG;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_POLY_RETRIG;
    Slider sliderKIJIMI_LFO_SUST;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO_SUST;
    Slider sliderKIJIMI_LFO1_ENV_DEST;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_ENV_DEST;
    Slider sliderKIJIMI_LFO1_ENV_MAX_T;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_ENV_MAX_T;
    Slider sliderKIJIMI_LFO1_ENV_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_ENV_P;
    Slider sliderKIJIMI_LFO1_SYNC;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1_SYNC;
    Slider sliderKIJIMI_LFO2_ENV_DEST;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_ENV_DEST;
    Slider sliderKIJIMI_LFO2_ENV_MAX_T;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_ENV_MAX_T;
    Slider sliderKIJIMI_LFO2_ENV_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_ENV_P;
    Slider sliderKIJIMI_LFO2_SYNC;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2_SYNC;
    Slider sliderKIJIMI_MODW_P;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MODW_P;
    Slider sliderKIJIMI_ADSR_VCA;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR_VCA;
    Slider sliderKIJIMI_MASTER_VOL;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MASTER_VOL;
    Slider sliderKIJIMI_VCO_DETUNE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO_DETUNE;
    Slider sliderKIJIMI_CARDS_VOCIE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_CARDS_VOCIE;
    Slider sliderKIJIMI_LEG_EG_RETRIG;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LEG_EG_RETRIG;
    Slider sliderKIJIMI_LEG_PRIORITY;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LEG_PRIORITY;
    Slider sliderKIJIMI_MONO_MODE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MONO_MODE;
    Slider sliderKIJIMI_MONO_POLY;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MONO_POLY;
    Slider sliderKIJIMI_SUSTAIN_MODE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SUSTAIN_MODE;
    Slider sliderKIJIMI_LFO1VCO1_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO1_AM;
    Slider sliderKIJIMI_LFO1VCO2_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO2_AM;
    Slider sliderKIJIMI_LFO1WAVE1_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE1_AM;
    Slider sliderKIJIMI_LFO1WAVE2_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE2_AM;
    Slider sliderKIJIMI_LFO1SUB_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1SUB_AM;
    Slider sliderKIJIMI_LFO1VCF_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCF_AM;
    Slider sliderKIJIMI_LFO1RESO_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1RESO_AM;
    Slider sliderKIJIMI_LFO1VCA_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCA_AM;
    Slider sliderKIJIMI_LFO2VCO1_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO1_AM;
    Slider sliderKIJIMI_LFO2VCO2_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO2_AM;
    Slider sliderKIJIMI_LFO2WAVE1_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE1_AM;
    Slider sliderKIJIMI_LFO2WAVE2_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE2_AM;
    Slider sliderKIJIMI_LFO2SUB_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2SUB_AM;
    Slider sliderKIJIMI_LFO2VCF_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCF_AM;
    Slider sliderKIJIMI_LFO2RESO_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2RESO_AM;
    Slider sliderKIJIMI_LFO2VCA_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCA_AM;
    Slider sliderKIJIMI_ADSR2VCO1_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2VCO1_AM;
    Slider sliderKIJIMI_ADSR2VCO2_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2VCO2_AM;
    Slider sliderKIJIMI_ADSR2WAVE1_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2WAVE1_AM;
    Slider sliderKIJIMI_ADSR2WAVE2_AM;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_ADSR2WAVE2_AM;
    Slider sliderKIJIMI_LFO1VCO1_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO1_R;
    Slider sliderKIJIMI_LFO1VCO2_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO2_R;
    Slider sliderKIJIMI_LFO1WAVE1_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE1_R;
    Slider sliderKIJIMI_LFO1WAVE2_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE2_R;
    Slider sliderKIJIMI_LFO1SUB_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1SUB_R;
    Slider sliderKIJIMI_LFO1VCF_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCF_R;
    Slider sliderKIJIMI_LFO1RESO_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1RESO_R;
    Slider sliderKIJIMI_LFO1VCA_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCA_R;
    Slider sliderKIJIMI_LFO2VCO1_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO1_R;
    Slider sliderKIJIMI_LFO2VCO2_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO2_R;
    Slider sliderKIJIMI_LFO2WAVE1_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE1_R;
    Slider sliderKIJIMI_LFO2WAVE2_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE2_R;
    Slider sliderKIJIMI_LFO2SUB_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2SUB_R;
    Slider sliderKIJIMI_LFO2VCF_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCF_R;
    Slider sliderKIJIMI_LFO2RESO_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2RESO_R;
    Slider sliderKIJIMI_LFO2VCA_R;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCA_R;
    Slider sliderKIJIMI_LFO1VCO1_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO1_A;
    Slider sliderKIJIMI_LFO1VCO2_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO2_A;
    Slider sliderKIJIMI_LFO1WAVE1_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE1_A;
    Slider sliderKIJIMI_LFO1WAVE2_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE2_A;
    Slider sliderKIJIMI_LFO1SUB_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1SUB_A;
    Slider sliderKIJIMI_LFO1VCF_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCF_A;
    Slider sliderKIJIMI_LFO1RESO_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1RESO_A;
    Slider sliderKIJIMI_LFO1VCA_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCA_A;
    Slider sliderKIJIMI_LFO2VCO1_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO1_A;
    Slider sliderKIJIMI_LFO2VCO2_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO2_A;
    Slider sliderKIJIMI_LFO2WAVE1_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE1_A;
    Slider sliderKIJIMI_LFO2WAVE2_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE2_A;
    Slider sliderKIJIMI_LFO2SUB_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2SUB_A;
    Slider sliderKIJIMI_LFO2VCF_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCF_A;
    Slider sliderKIJIMI_LFO2RESO_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2RESO_A;
    Slider sliderKIJIMI_LFO2VCA_A;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCA_A;
    Slider sliderKIJIMI_LFO1VCO1_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO1_D;
    Slider sliderKIJIMI_LFO1VCO2_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO2_D;
    Slider sliderKIJIMI_LFO1WAVE1_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE1_D;
    Slider sliderKIJIMI_LFO1WAVE2_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE2_D;
    Slider sliderKIJIMI_LFO1SUB_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1SUB_D;
    Slider sliderKIJIMI_LFO1VCF_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCF_D;
    Slider sliderKIJIMI_LFO1RESO_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1RESO_D;
    Slider sliderKIJIMI_LFO1VCA_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCA_D;
    Slider sliderKIJIMI_LFO2VCO1_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO1_D;
    Slider sliderKIJIMI_LFO2VCO2_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO2_D;
    Slider sliderKIJIMI_LFO2WAVE1_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE1_D;
    Slider sliderKIJIMI_LFO2WAVE2_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE2_D;
    Slider sliderKIJIMI_LFO2SUB_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2SUB_D;
    Slider sliderKIJIMI_LFO2VCF_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCF_D;
    Slider sliderKIJIMI_LFO2RESO_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2RESO_D;
    Slider sliderKIJIMI_LFO2VCA_D;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCA_D;
    Slider sliderKIJIMI_LFO1VCO1_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO1_ENV;
    Slider sliderKIJIMI_LFO1VCO2_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO2_ENV;
    Slider sliderKIJIMI_LFO1WAVE1_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE1_ENV;
    Slider sliderKIJIMI_LFO1WAVE2_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE2_ENV;
    Slider sliderKIJIMI_LFO1SUB_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1SUB_ENV;
    Slider sliderKIJIMI_LFO1VCF_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCF_ENV;
    Slider sliderKIJIMI_LFO1RESO_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1RESO_ENV;
    Slider sliderKIJIMI_LFO1VCA_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCA_ENV;
    Slider sliderKIJIMI_LFO2VCO1_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO1_ENV;
    Slider sliderKIJIMI_LFO2VCO2_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO2_ENV;
    Slider sliderKIJIMI_LFO2WAVE1_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE1_ENV;
    Slider sliderKIJIMI_LFO2WAVE2_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE2_ENV;
    Slider sliderKIJIMI_LFO2SUB_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2SUB_ENV;
    Slider sliderKIJIMI_LFO2VCF_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCF_ENV;
    Slider sliderKIJIMI_LFO2RESO_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2RESO_ENV;
    Slider sliderKIJIMI_LFO2VCA_ENV;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCA_ENV;
    // --> End auto-generated code A
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMIControlPanelComponent);
};
