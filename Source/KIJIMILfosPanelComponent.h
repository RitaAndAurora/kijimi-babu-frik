/*
  ==============================================================================

    KIJIMILfosPanelComponent.h
    Created: 9 Oct 2020 7:28:23am
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"
#include "KIJIMIControlPanelComponent.h"
#include "KIJIMIInterface.h"
#include "BabuFrikBaseLookAndFeel.h"
#include "CustomClasses.h"
#include "defines.h"


class KIJIMILfosPanelComponent: public KIJIMIBasePanelComponent

{
public:
    
    KIJIMILfosPanelComponent ()
    {
    }
    
    ~KIJIMILfosPanelComponent ()
    {
    }
    
    void initializeSliders () override
    {
        // Configure sliders
        // --> Start auto-generated code B
        // Slider KIJIMI_LFO1VCO1_AM
                sliderKIJIMI_LFO1VCO1_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO1_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCO1_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_AM);
                sliderAttachmentKIJIMI_LFO1VCO1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_AM", sliderKIJIMI_LFO1VCO1_AM));
        sliderKIJIMI_LFO1VCO1_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCO1 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCO2_AM
                sliderKIJIMI_LFO1VCO2_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO2_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCO2_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_AM);
                sliderAttachmentKIJIMI_LFO1VCO2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_AM", sliderKIJIMI_LFO1VCO2_AM));
        sliderKIJIMI_LFO1VCO2_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCO2 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1WAVE1_AM
                sliderKIJIMI_LFO1WAVE1_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE1_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1WAVE1_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_AM);
                sliderAttachmentKIJIMI_LFO1WAVE1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_AM", sliderKIJIMI_LFO1WAVE1_AM));
        sliderKIJIMI_LFO1WAVE1_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to WAVE1 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1WAVE2_AM
                sliderKIJIMI_LFO1WAVE2_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE2_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1WAVE2_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_AM);
                sliderAttachmentKIJIMI_LFO1WAVE2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_AM", sliderKIJIMI_LFO1WAVE2_AM));
        sliderKIJIMI_LFO1WAVE2_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to WAVE2 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1SUB_AM
                sliderKIJIMI_LFO1SUB_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1SUB_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1SUB_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1SUB_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1SUB_AM);
                sliderAttachmentKIJIMI_LFO1SUB_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_AM", sliderKIJIMI_LFO1SUB_AM));
        sliderKIJIMI_LFO1SUB_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to SUB amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCF_AM
                sliderKIJIMI_LFO1VCF_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCF_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCF_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCF_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCF_AM);
                sliderAttachmentKIJIMI_LFO1VCF_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_AM", sliderKIJIMI_LFO1VCF_AM));
        sliderKIJIMI_LFO1VCF_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCF amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1RESO_AM
                sliderKIJIMI_LFO1RESO_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1RESO_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1RESO_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1RESO_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1RESO_AM);
                sliderAttachmentKIJIMI_LFO1RESO_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_AM", sliderKIJIMI_LFO1RESO_AM));
        sliderKIJIMI_LFO1RESO_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to RESO amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCA_AM
                sliderKIJIMI_LFO1VCA_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCA_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCA_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCA_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCA_AM);
                sliderAttachmentKIJIMI_LFO1VCA_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_AM", sliderKIJIMI_LFO1VCA_AM));
        sliderKIJIMI_LFO1VCA_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCA amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCO1_AM
                sliderKIJIMI_LFO2VCO1_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO1_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCO1_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_AM);
                sliderAttachmentKIJIMI_LFO2VCO1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_AM", sliderKIJIMI_LFO2VCO1_AM));
        sliderKIJIMI_LFO2VCO1_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCO1 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCO2_AM
                sliderKIJIMI_LFO2VCO2_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO2_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCO2_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_AM);
                sliderAttachmentKIJIMI_LFO2VCO2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_AM", sliderKIJIMI_LFO2VCO2_AM));
        sliderKIJIMI_LFO2VCO2_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCO2 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2WAVE1_AM
                sliderKIJIMI_LFO2WAVE1_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE1_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2WAVE1_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_AM);
                sliderAttachmentKIJIMI_LFO2WAVE1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_AM", sliderKIJIMI_LFO2WAVE1_AM));
        sliderKIJIMI_LFO2WAVE1_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to WAVE1 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2WAVE2_AM
                sliderKIJIMI_LFO2WAVE2_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE2_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2WAVE2_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_AM);
                sliderAttachmentKIJIMI_LFO2WAVE2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_AM", sliderKIJIMI_LFO2WAVE2_AM));
        sliderKIJIMI_LFO2WAVE2_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to WAVE2 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2SUB_AM
                sliderKIJIMI_LFO2SUB_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2SUB_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2SUB_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2SUB_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2SUB_AM);
                sliderAttachmentKIJIMI_LFO2SUB_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_AM", sliderKIJIMI_LFO2SUB_AM));
        sliderKIJIMI_LFO2SUB_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to SUB amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCF_AM
                sliderKIJIMI_LFO2VCF_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCF_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCF_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCF_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCF_AM);
                sliderAttachmentKIJIMI_LFO2VCF_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_AM", sliderKIJIMI_LFO2VCF_AM));
        sliderKIJIMI_LFO2VCF_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCF amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2RESO_AM
                sliderKIJIMI_LFO2RESO_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2RESO_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2RESO_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2RESO_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2RESO_AM);
                sliderAttachmentKIJIMI_LFO2RESO_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_AM", sliderKIJIMI_LFO2RESO_AM));
        sliderKIJIMI_LFO2RESO_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to RESO amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCA_AM
                sliderKIJIMI_LFO2VCA_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCA_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCA_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCA_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCA_AM);
                sliderAttachmentKIJIMI_LFO2VCA_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_AM", sliderKIJIMI_LFO2VCA_AM));
        sliderKIJIMI_LFO2VCA_AM.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCA amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_ADSR2VCO1_AM
                sliderKIJIMI_ADSR2VCO1_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_ADSR2VCO1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_ADSR2VCO1_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_ADSR2VCO1_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_ADSR2VCO1_AM);
                sliderAttachmentKIJIMI_ADSR2VCO1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2VCO1_AM", sliderKIJIMI_ADSR2VCO1_AM));
        sliderKIJIMI_ADSR2VCO1_AM.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 to VCO1 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_ADSR2VCO2_AM
                sliderKIJIMI_ADSR2VCO2_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_ADSR2VCO2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_ADSR2VCO2_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_ADSR2VCO2_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_ADSR2VCO2_AM);
                sliderAttachmentKIJIMI_ADSR2VCO2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2VCO2_AM", sliderKIJIMI_ADSR2VCO2_AM));
        sliderKIJIMI_ADSR2VCO2_AM.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 to VCO2 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_ADSR2WAVE1_AM
                sliderKIJIMI_ADSR2WAVE1_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_ADSR2WAVE1_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_ADSR2WAVE1_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_ADSR2WAVE1_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_ADSR2WAVE1_AM);
                sliderAttachmentKIJIMI_ADSR2WAVE1_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2WAVE1_AM", sliderKIJIMI_ADSR2WAVE1_AM));
        sliderKIJIMI_ADSR2WAVE1_AM.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 to WAVE1 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_ADSR2WAVE2_AM
                sliderKIJIMI_ADSR2WAVE2_AM.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_ADSR2WAVE2_AM.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_ADSR2WAVE2_AM.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_ADSR2WAVE2_AM.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_ADSR2WAVE2_AM);
                sliderAttachmentKIJIMI_ADSR2WAVE2_AM.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2WAVE2_AM", sliderKIJIMI_ADSR2WAVE2_AM));
        sliderKIJIMI_ADSR2WAVE2_AM.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 to WAVE2 amount: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCO1_R
                sliderKIJIMI_LFO1VCO1_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO1_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCO1_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_R);
                sliderAttachmentKIJIMI_LFO1VCO1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_R", sliderKIJIMI_LFO1VCO1_R));
        sliderKIJIMI_LFO1VCO1_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCO1 rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCO2_R
                sliderKIJIMI_LFO1VCO2_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO2_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCO2_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_R);
                sliderAttachmentKIJIMI_LFO1VCO2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_R", sliderKIJIMI_LFO1VCO2_R));
        sliderKIJIMI_LFO1VCO2_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCO2 rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1WAVE1_R
                sliderKIJIMI_LFO1WAVE1_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE1_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1WAVE1_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_R);
                sliderAttachmentKIJIMI_LFO1WAVE1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_R", sliderKIJIMI_LFO1WAVE1_R));
        sliderKIJIMI_LFO1WAVE1_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to WAVE1 rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1WAVE2_R
                sliderKIJIMI_LFO1WAVE2_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE2_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1WAVE2_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_R);
                sliderAttachmentKIJIMI_LFO1WAVE2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_R", sliderKIJIMI_LFO1WAVE2_R));
        sliderKIJIMI_LFO1WAVE2_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to WAVE2 rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1SUB_R
                sliderKIJIMI_LFO1SUB_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1SUB_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1SUB_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1SUB_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1SUB_R);
                sliderAttachmentKIJIMI_LFO1SUB_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_R", sliderKIJIMI_LFO1SUB_R));
        sliderKIJIMI_LFO1SUB_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to SUB rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCF_R
                sliderKIJIMI_LFO1VCF_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCF_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCF_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCF_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCF_R);
                sliderAttachmentKIJIMI_LFO1VCF_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_R", sliderKIJIMI_LFO1VCF_R));
        sliderKIJIMI_LFO1VCF_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCF rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1RESO_R
                sliderKIJIMI_LFO1RESO_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1RESO_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1RESO_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1RESO_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1RESO_R);
                sliderAttachmentKIJIMI_LFO1RESO_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_R", sliderKIJIMI_LFO1RESO_R));
        sliderKIJIMI_LFO1RESO_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to RESO rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCA_R
                sliderKIJIMI_LFO1VCA_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCA_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCA_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCA_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCA_R);
                sliderAttachmentKIJIMI_LFO1VCA_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_R", sliderKIJIMI_LFO1VCA_R));
        sliderKIJIMI_LFO1VCA_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCA rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCO1_R
                sliderKIJIMI_LFO2VCO1_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO1_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCO1_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_R);
                sliderAttachmentKIJIMI_LFO2VCO1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_R", sliderKIJIMI_LFO2VCO1_R));
        sliderKIJIMI_LFO2VCO1_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCO1 rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCO2_R
                sliderKIJIMI_LFO2VCO2_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO2_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCO2_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_R);
                sliderAttachmentKIJIMI_LFO2VCO2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_R", sliderKIJIMI_LFO2VCO2_R));
        sliderKIJIMI_LFO2VCO2_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCO2 rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2WAVE1_R
                sliderKIJIMI_LFO2WAVE1_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE1_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2WAVE1_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_R);
                sliderAttachmentKIJIMI_LFO2WAVE1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_R", sliderKIJIMI_LFO2WAVE1_R));
        sliderKIJIMI_LFO2WAVE1_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to WAVE1 rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2WAVE2_R
                sliderKIJIMI_LFO2WAVE2_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE2_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2WAVE2_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_R);
                sliderAttachmentKIJIMI_LFO2WAVE2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_R", sliderKIJIMI_LFO2WAVE2_R));
        sliderKIJIMI_LFO2WAVE2_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to WAVE2 rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2SUB_R
                sliderKIJIMI_LFO2SUB_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2SUB_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2SUB_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2SUB_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2SUB_R);
                sliderAttachmentKIJIMI_LFO2SUB_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_R", sliderKIJIMI_LFO2SUB_R));
        sliderKIJIMI_LFO2SUB_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to SUB rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCF_R
                sliderKIJIMI_LFO2VCF_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCF_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCF_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCF_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCF_R);
                sliderAttachmentKIJIMI_LFO2VCF_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_R", sliderKIJIMI_LFO2VCF_R));
        sliderKIJIMI_LFO2VCF_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCF rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2RESO_R
                sliderKIJIMI_LFO2RESO_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2RESO_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2RESO_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2RESO_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2RESO_R);
                sliderAttachmentKIJIMI_LFO2RESO_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_R", sliderKIJIMI_LFO2RESO_R));
        sliderKIJIMI_LFO2RESO_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to RESO rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCA_R
                sliderKIJIMI_LFO2VCA_R.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCA_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCA_R.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCA_R.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCA_R);
                sliderAttachmentKIJIMI_LFO2VCA_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_R", sliderKIJIMI_LFO2VCA_R));
        sliderKIJIMI_LFO2VCA_R.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCA rate: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCO1_A
                sliderKIJIMI_LFO1VCO1_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO1_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCO1_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_A);
                sliderAttachmentKIJIMI_LFO1VCO1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_A", sliderKIJIMI_LFO1VCO1_A));
        sliderKIJIMI_LFO1VCO1_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCO1 attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCO2_A
                sliderKIJIMI_LFO1VCO2_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO2_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCO2_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_A);
                sliderAttachmentKIJIMI_LFO1VCO2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_A", sliderKIJIMI_LFO1VCO2_A));
        sliderKIJIMI_LFO1VCO2_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCO2 attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1WAVE1_A
                sliderKIJIMI_LFO1WAVE1_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE1_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1WAVE1_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_A);
                sliderAttachmentKIJIMI_LFO1WAVE1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_A", sliderKIJIMI_LFO1WAVE1_A));
        sliderKIJIMI_LFO1WAVE1_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to WAVE1 attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1WAVE2_A
                sliderKIJIMI_LFO1WAVE2_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE2_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1WAVE2_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_A);
                sliderAttachmentKIJIMI_LFO1WAVE2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_A", sliderKIJIMI_LFO1WAVE2_A));
        sliderKIJIMI_LFO1WAVE2_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to WAVE2 attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1SUB_A
                sliderKIJIMI_LFO1SUB_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1SUB_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1SUB_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1SUB_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1SUB_A);
                sliderAttachmentKIJIMI_LFO1SUB_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_A", sliderKIJIMI_LFO1SUB_A));
        sliderKIJIMI_LFO1SUB_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to SUB attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCF_A
                sliderKIJIMI_LFO1VCF_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCF_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCF_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCF_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCF_A);
                sliderAttachmentKIJIMI_LFO1VCF_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_A", sliderKIJIMI_LFO1VCF_A));
        sliderKIJIMI_LFO1VCF_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCF attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1RESO_A
                sliderKIJIMI_LFO1RESO_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1RESO_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1RESO_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1RESO_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1RESO_A);
                sliderAttachmentKIJIMI_LFO1RESO_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_A", sliderKIJIMI_LFO1RESO_A));
        sliderKIJIMI_LFO1RESO_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to RESO attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCA_A
                sliderKIJIMI_LFO1VCA_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCA_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCA_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCA_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCA_A);
                sliderAttachmentKIJIMI_LFO1VCA_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_A", sliderKIJIMI_LFO1VCA_A));
        sliderKIJIMI_LFO1VCA_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCA attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCO1_A
                sliderKIJIMI_LFO2VCO1_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO1_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCO1_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_A);
                sliderAttachmentKIJIMI_LFO2VCO1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_A", sliderKIJIMI_LFO2VCO1_A));
        sliderKIJIMI_LFO2VCO1_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCO1 attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCO2_A
                sliderKIJIMI_LFO2VCO2_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO2_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCO2_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_A);
                sliderAttachmentKIJIMI_LFO2VCO2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_A", sliderKIJIMI_LFO2VCO2_A));
        sliderKIJIMI_LFO2VCO2_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCO2 attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2WAVE1_A
                sliderKIJIMI_LFO2WAVE1_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE1_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2WAVE1_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_A);
                sliderAttachmentKIJIMI_LFO2WAVE1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_A", sliderKIJIMI_LFO2WAVE1_A));
        sliderKIJIMI_LFO2WAVE1_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to WAVE1 attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2WAVE2_A
                sliderKIJIMI_LFO2WAVE2_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE2_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2WAVE2_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_A);
                sliderAttachmentKIJIMI_LFO2WAVE2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_A", sliderKIJIMI_LFO2WAVE2_A));
        sliderKIJIMI_LFO2WAVE2_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to WAVE2 attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2SUB_A
                sliderKIJIMI_LFO2SUB_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2SUB_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2SUB_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2SUB_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2SUB_A);
                sliderAttachmentKIJIMI_LFO2SUB_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_A", sliderKIJIMI_LFO2SUB_A));
        sliderKIJIMI_LFO2SUB_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to SUB attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCF_A
                sliderKIJIMI_LFO2VCF_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCF_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCF_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCF_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCF_A);
                sliderAttachmentKIJIMI_LFO2VCF_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_A", sliderKIJIMI_LFO2VCF_A));
        sliderKIJIMI_LFO2VCF_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCF attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2RESO_A
                sliderKIJIMI_LFO2RESO_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2RESO_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2RESO_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2RESO_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2RESO_A);
                sliderAttachmentKIJIMI_LFO2RESO_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_A", sliderKIJIMI_LFO2RESO_A));
        sliderKIJIMI_LFO2RESO_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to RESO attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCA_A
                sliderKIJIMI_LFO2VCA_A.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCA_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCA_A.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCA_A.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCA_A);
                sliderAttachmentKIJIMI_LFO2VCA_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_A", sliderKIJIMI_LFO2VCA_A));
        sliderKIJIMI_LFO2VCA_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCA attack: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCO1_D
                sliderKIJIMI_LFO1VCO1_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO1_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCO1_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_D);
                sliderAttachmentKIJIMI_LFO1VCO1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_D", sliderKIJIMI_LFO1VCO1_D));
        sliderKIJIMI_LFO1VCO1_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCO1 decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCO2_D
                sliderKIJIMI_LFO1VCO2_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO2_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCO2_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_D);
                sliderAttachmentKIJIMI_LFO1VCO2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_D", sliderKIJIMI_LFO1VCO2_D));
        sliderKIJIMI_LFO1VCO2_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCO2 decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1WAVE1_D
                sliderKIJIMI_LFO1WAVE1_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE1_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1WAVE1_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_D);
                sliderAttachmentKIJIMI_LFO1WAVE1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_D", sliderKIJIMI_LFO1WAVE1_D));
        sliderKIJIMI_LFO1WAVE1_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to WAVE1 decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1WAVE2_D
                sliderKIJIMI_LFO1WAVE2_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE2_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1WAVE2_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_D);
                sliderAttachmentKIJIMI_LFO1WAVE2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_D", sliderKIJIMI_LFO1WAVE2_D));
        sliderKIJIMI_LFO1WAVE2_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to WAVE2 decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1SUB_D
                sliderKIJIMI_LFO1SUB_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1SUB_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1SUB_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1SUB_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1SUB_D);
                sliderAttachmentKIJIMI_LFO1SUB_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_D", sliderKIJIMI_LFO1SUB_D));
        sliderKIJIMI_LFO1SUB_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to SUB decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCF_D
                sliderKIJIMI_LFO1VCF_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCF_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCF_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCF_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCF_D);
                sliderAttachmentKIJIMI_LFO1VCF_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_D", sliderKIJIMI_LFO1VCF_D));
        sliderKIJIMI_LFO1VCF_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCF decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1RESO_D
                sliderKIJIMI_LFO1RESO_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1RESO_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1RESO_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1RESO_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1RESO_D);
                sliderAttachmentKIJIMI_LFO1RESO_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_D", sliderKIJIMI_LFO1RESO_D));
        sliderKIJIMI_LFO1RESO_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to RESO decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO1VCA_D
                sliderKIJIMI_LFO1VCA_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCA_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCA_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO1VCA_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCA_D);
                sliderAttachmentKIJIMI_LFO1VCA_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_D", sliderKIJIMI_LFO1VCA_D));
        sliderKIJIMI_LFO1VCA_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 to VCA decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCO1_D
                sliderKIJIMI_LFO2VCO1_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO1_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCO1_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_D);
                sliderAttachmentKIJIMI_LFO2VCO1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_D", sliderKIJIMI_LFO2VCO1_D));
        sliderKIJIMI_LFO2VCO1_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCO1 decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCO2_D
                sliderKIJIMI_LFO2VCO2_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO2_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCO2_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_D);
                sliderAttachmentKIJIMI_LFO2VCO2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_D", sliderKIJIMI_LFO2VCO2_D));
        sliderKIJIMI_LFO2VCO2_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCO2 decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2WAVE1_D
                sliderKIJIMI_LFO2WAVE1_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE1_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2WAVE1_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_D);
                sliderAttachmentKIJIMI_LFO2WAVE1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_D", sliderKIJIMI_LFO2WAVE1_D));
        sliderKIJIMI_LFO2WAVE1_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to WAVE1 decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2WAVE2_D
                sliderKIJIMI_LFO2WAVE2_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE2_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2WAVE2_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_D);
                sliderAttachmentKIJIMI_LFO2WAVE2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_D", sliderKIJIMI_LFO2WAVE2_D));
        sliderKIJIMI_LFO2WAVE2_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to WAVE2 decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2SUB_D
                sliderKIJIMI_LFO2SUB_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2SUB_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2SUB_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2SUB_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2SUB_D);
                sliderAttachmentKIJIMI_LFO2SUB_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_D", sliderKIJIMI_LFO2SUB_D));
        sliderKIJIMI_LFO2SUB_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to SUB decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCF_D
                sliderKIJIMI_LFO2VCF_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCF_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCF_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCF_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCF_D);
                sliderAttachmentKIJIMI_LFO2VCF_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_D", sliderKIJIMI_LFO2VCF_D));
        sliderKIJIMI_LFO2VCF_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCF decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2RESO_D
                sliderKIJIMI_LFO2RESO_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2RESO_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2RESO_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2RESO_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2RESO_D);
                sliderAttachmentKIJIMI_LFO2RESO_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_D", sliderKIJIMI_LFO2RESO_D));
        sliderKIJIMI_LFO2RESO_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to RESO decay: %.2f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LFO2VCA_D
                sliderKIJIMI_LFO2VCA_D.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCA_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCA_D.setLookAndFeel (&knobLookAndFeel);
                sliderKIJIMI_LFO2VCA_D.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCA_D);
                sliderAttachmentKIJIMI_LFO2VCA_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_D", sliderKIJIMI_LFO2VCA_D));
        sliderKIJIMI_LFO2VCA_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 to VCA decay: %.2f", 10.0 * (value / 127.0));
        };
        // ComboBox KIJIMI_LFO1VCO1_W
                sliderKIJIMI_LFO1VCO1_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO1VCO1_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_W);
                sliderAttachmentKIJIMI_LFO1VCO1_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO1VCO1_W", sliderKIJIMI_LFO1VCO1_W));
        // ComboBox KIJIMI_LFO1VCO2_W
                sliderKIJIMI_LFO1VCO2_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO1VCO2_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_W);
                sliderAttachmentKIJIMI_LFO1VCO2_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO1VCO2_W", sliderKIJIMI_LFO1VCO2_W));
        // ComboBox KIJIMI_LFO1WAVE1_W
                sliderKIJIMI_LFO1WAVE1_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO1WAVE1_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_W);
                sliderAttachmentKIJIMI_LFO1WAVE1_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_W", sliderKIJIMI_LFO1WAVE1_W));
        // ComboBox KIJIMI_LFO1WAVE2_W
                sliderKIJIMI_LFO1WAVE2_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO1WAVE2_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_W);
                sliderAttachmentKIJIMI_LFO1WAVE2_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_W", sliderKIJIMI_LFO1WAVE2_W));
        // ComboBox KIJIMI_LFO1SUB_W
                sliderKIJIMI_LFO1SUB_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO1SUB_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO1SUB_W);
                sliderAttachmentKIJIMI_LFO1SUB_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO1SUB_W", sliderKIJIMI_LFO1SUB_W));
        // ComboBox KIJIMI_LFO1VCF_W
                sliderKIJIMI_LFO1VCF_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO1VCF_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCF_W);
                sliderAttachmentKIJIMI_LFO1VCF_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO1VCF_W", sliderKIJIMI_LFO1VCF_W));
        // ComboBox KIJIMI_LFO1RESO_W
                sliderKIJIMI_LFO1RESO_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO1RESO_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO1RESO_W);
                sliderAttachmentKIJIMI_LFO1RESO_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO1RESO_W", sliderKIJIMI_LFO1RESO_W));
        // ComboBox KIJIMI_LFO1VCA_W
                sliderKIJIMI_LFO1VCA_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO1VCA_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCA_W);
                sliderAttachmentKIJIMI_LFO1VCA_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO1VCA_W", sliderKIJIMI_LFO1VCA_W));
        // ComboBox KIJIMI_LFO2VCO1_W
                sliderKIJIMI_LFO2VCO1_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO2VCO1_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_W);
                sliderAttachmentKIJIMI_LFO2VCO1_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO2VCO1_W", sliderKIJIMI_LFO2VCO1_W));
        // ComboBox KIJIMI_LFO2VCO2_W
                sliderKIJIMI_LFO2VCO2_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO2VCO2_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_W);
                sliderAttachmentKIJIMI_LFO2VCO2_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO2VCO2_W", sliderKIJIMI_LFO2VCO2_W));
        // ComboBox KIJIMI_LFO2WAVE1_W
                sliderKIJIMI_LFO2WAVE1_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO2WAVE1_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_W);
                sliderAttachmentKIJIMI_LFO2WAVE1_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_W", sliderKIJIMI_LFO2WAVE1_W));
        // ComboBox KIJIMI_LFO2WAVE2_W
                sliderKIJIMI_LFO2WAVE2_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO2WAVE2_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_W);
                sliderAttachmentKIJIMI_LFO2WAVE2_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_W", sliderKIJIMI_LFO2WAVE2_W));
        // ComboBox KIJIMI_LFO2SUB_W
                sliderKIJIMI_LFO2SUB_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO2SUB_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO2SUB_W);
                sliderAttachmentKIJIMI_LFO2SUB_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO2SUB_W", sliderKIJIMI_LFO2SUB_W));
        // ComboBox KIJIMI_LFO2VCF_W
                sliderKIJIMI_LFO2VCF_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO2VCF_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCF_W);
                sliderAttachmentKIJIMI_LFO2VCF_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO2VCF_W", sliderKIJIMI_LFO2VCF_W));
        // ComboBox KIJIMI_LFO2RESO_W
                sliderKIJIMI_LFO2RESO_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO2RESO_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO2RESO_W);
                sliderAttachmentKIJIMI_LFO2RESO_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO2RESO_W", sliderKIJIMI_LFO2RESO_W));
        // ComboBox KIJIMI_LFO2VCA_W
                sliderKIJIMI_LFO2VCA_W.addItemList (StringArray ({"SIN", "TRI", "SAW", "RAM", "SQU", "RAN"}), 1);
                sliderKIJIMI_LFO2VCA_W.setLookAndFeel (&selectLookAndFeel);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCA_W);
                sliderAttachmentKIJIMI_LFO2VCA_W.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_LFO2VCA_W", sliderKIJIMI_LFO2VCA_W));
        // Slider KIJIMI_LFO1VCO1_ENV
                sliderKIJIMI_LFO1VCO1_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO1_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO1_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO1VCO1_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_ENV);
                sliderAttachmentKIJIMI_LFO1VCO1_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_ENV", sliderKIJIMI_LFO1VCO1_ENV));
        sliderKIJIMI_LFO1VCO1_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 to VCO1 envelope: on"; } 
            else { return "LFO1 to VCO1 envelope: off";}
        };
        // Slider KIJIMI_LFO1VCO2_ENV
                sliderKIJIMI_LFO1VCO2_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCO2_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCO2_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO1VCO2_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_ENV);
                sliderAttachmentKIJIMI_LFO1VCO2_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_ENV", sliderKIJIMI_LFO1VCO2_ENV));
        sliderKIJIMI_LFO1VCO2_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 to VCO2 envelope: on"; } 
            else { return "LFO1 to VCO2 envelope: off";}
        };
        // Slider KIJIMI_LFO1WAVE1_ENV
                sliderKIJIMI_LFO1WAVE1_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE1_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE1_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO1WAVE1_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_ENV);
                sliderAttachmentKIJIMI_LFO1WAVE1_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_ENV", sliderKIJIMI_LFO1WAVE1_ENV));
        sliderKIJIMI_LFO1WAVE1_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 to WAVE1 envelope: on"; } 
            else { return "LFO1 to WAVE1 envelope: off";}
        };
        // Slider KIJIMI_LFO1WAVE2_ENV
                sliderKIJIMI_LFO1WAVE2_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1WAVE2_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1WAVE2_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO1WAVE2_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_ENV);
                sliderAttachmentKIJIMI_LFO1WAVE2_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_ENV", sliderKIJIMI_LFO1WAVE2_ENV));
        sliderKIJIMI_LFO1WAVE2_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 to WAVE2 envelope: on"; } 
            else { return "LFO1 to WAVE2 envelope: off";}
        };
        // Slider KIJIMI_LFO1SUB_ENV
                sliderKIJIMI_LFO1SUB_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1SUB_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1SUB_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO1SUB_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1SUB_ENV);
                sliderAttachmentKIJIMI_LFO1SUB_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_ENV", sliderKIJIMI_LFO1SUB_ENV));
        sliderKIJIMI_LFO1SUB_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 to SUB envelope: on"; } 
            else { return "LFO1 to SUB envelope: off";}
        };
        // Slider KIJIMI_LFO1VCF_ENV
                sliderKIJIMI_LFO1VCF_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCF_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCF_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO1VCF_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCF_ENV);
                sliderAttachmentKIJIMI_LFO1VCF_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_ENV", sliderKIJIMI_LFO1VCF_ENV));
        sliderKIJIMI_LFO1VCF_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 to VCF envelope: on"; } 
            else { return "LFO1 to VCF envelope: off";}
        };
        // Slider KIJIMI_LFO1RESO_ENV
                sliderKIJIMI_LFO1RESO_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1RESO_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1RESO_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO1RESO_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1RESO_ENV);
                sliderAttachmentKIJIMI_LFO1RESO_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_ENV", sliderKIJIMI_LFO1RESO_ENV));
        sliderKIJIMI_LFO1RESO_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 to RESO envelope: on"; } 
            else { return "LFO1 to RESO envelope: off";}
        };
        // Slider KIJIMI_LFO1VCA_ENV
                sliderKIJIMI_LFO1VCA_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO1VCA_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO1VCA_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO1VCA_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO1VCA_ENV);
                sliderAttachmentKIJIMI_LFO1VCA_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_ENV", sliderKIJIMI_LFO1VCA_ENV));
        sliderKIJIMI_LFO1VCA_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO1 to VCA envelope: on"; } 
            else { return "LFO1 to VCA envelope: off";}
        };
        // Slider KIJIMI_LFO2VCO1_ENV
                sliderKIJIMI_LFO2VCO1_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO1_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO1_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO2VCO1_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_ENV);
                sliderAttachmentKIJIMI_LFO2VCO1_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_ENV", sliderKIJIMI_LFO2VCO1_ENV));
        sliderKIJIMI_LFO2VCO1_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 to VCO1 envelope: on"; } 
            else { return "LFO2 to VCO1 envelope: off";}
        };
        // Slider KIJIMI_LFO2VCO2_ENV
                sliderKIJIMI_LFO2VCO2_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCO2_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCO2_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO2VCO2_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_ENV);
                sliderAttachmentKIJIMI_LFO2VCO2_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_ENV", sliderKIJIMI_LFO2VCO2_ENV));
        sliderKIJIMI_LFO2VCO2_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 to VCO2 envelope: on"; } 
            else { return "LFO2 to VCO2 envelope: off";}
        };
        // Slider KIJIMI_LFO2WAVE1_ENV
                sliderKIJIMI_LFO2WAVE1_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE1_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE1_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO2WAVE1_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_ENV);
                sliderAttachmentKIJIMI_LFO2WAVE1_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_ENV", sliderKIJIMI_LFO2WAVE1_ENV));
        sliderKIJIMI_LFO2WAVE1_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 to WAVE1 envelope: on"; } 
            else { return "LFO2 to WAVE1 envelope: off";}
        };
        // Slider KIJIMI_LFO2WAVE2_ENV
                sliderKIJIMI_LFO2WAVE2_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2WAVE2_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2WAVE2_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO2WAVE2_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_ENV);
                sliderAttachmentKIJIMI_LFO2WAVE2_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_ENV", sliderKIJIMI_LFO2WAVE2_ENV));
        sliderKIJIMI_LFO2WAVE2_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 to WAVE2 envelope: on"; } 
            else { return "LFO2 to WAVE2 envelope: off";}
        };
        // Slider KIJIMI_LFO2SUB_ENV
                sliderKIJIMI_LFO2SUB_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2SUB_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2SUB_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO2SUB_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2SUB_ENV);
                sliderAttachmentKIJIMI_LFO2SUB_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_ENV", sliderKIJIMI_LFO2SUB_ENV));
        sliderKIJIMI_LFO2SUB_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 to SUB envelope: on"; } 
            else { return "LFO2 to SUB envelope: off";}
        };
        // Slider KIJIMI_LFO2VCF_ENV
                sliderKIJIMI_LFO2VCF_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCF_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCF_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO2VCF_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCF_ENV);
                sliderAttachmentKIJIMI_LFO2VCF_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_ENV", sliderKIJIMI_LFO2VCF_ENV));
        sliderKIJIMI_LFO2VCF_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 to VCF envelope: on"; } 
            else { return "LFO2 to VCF envelope: off";}
        };
        // Slider KIJIMI_LFO2RESO_ENV
                sliderKIJIMI_LFO2RESO_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2RESO_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2RESO_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO2RESO_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2RESO_ENV);
                sliderAttachmentKIJIMI_LFO2RESO_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_ENV", sliderKIJIMI_LFO2RESO_ENV));
        sliderKIJIMI_LFO2RESO_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 to RESO envelope: on"; } 
            else { return "LFO2 to RESO envelope: off";}
        };
        // Slider KIJIMI_LFO2VCA_ENV
                sliderKIJIMI_LFO2VCA_ENV.setSliderStyle (Slider::Rotary);
                sliderKIJIMI_LFO2VCA_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
                sliderKIJIMI_LFO2VCA_ENV.setLookAndFeel (&button1LookAndFeel);
                sliderKIJIMI_LFO2VCA_ENV.setPopupDisplayEnabled (true, true, this, -1);
                addAndMakeVisible (&sliderKIJIMI_LFO2VCA_ENV);
                sliderAttachmentKIJIMI_LFO2VCA_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_ENV", sliderKIJIMI_LFO2VCA_ENV));
        sliderKIJIMI_LFO2VCA_ENV.textFromValueFunction = [](double value) {
            if (value == 0){ return "LFO2 to VCA envelope: on"; } 
            else { return "LFO2 to VCA envelope: off";}
        };
        // --> End auto-generated code B
    }
    
    void configureControlsForADSR2ModModeCommon () override
    {
        sliderKIJIMI_ADSR2VCO1_AM.setEnabled(false);
        sliderKIJIMI_ADSR2VCO2_AM.setEnabled(false);
        sliderKIJIMI_ADSR2WAVE1_AM.setEnabled(false);
        sliderKIJIMI_ADSR2WAVE2_AM.setEnabled(false);
    }
    
    void configureControlsForADSR2ModModeIndividual () override
    {
        sliderKIJIMI_ADSR2VCO1_AM.setEnabled(true);
        sliderKIJIMI_ADSR2VCO2_AM.setEnabled(true);
        sliderKIJIMI_ADSR2WAVE1_AM.setEnabled(true);
        sliderKIJIMI_ADSR2WAVE2_AM.setEnabled(true);
    }
    
    void configureControlsForLFOModModeCommon () override
    {
        sliderKIJIMI_LFO1VCO1_AM.setEnabled(false);
        sliderKIJIMI_LFO1VCO2_AM.setEnabled(false);
        sliderKIJIMI_LFO1WAVE1_AM.setEnabled(false);
        sliderKIJIMI_LFO1WAVE2_AM.setEnabled(false);
        sliderKIJIMI_LFO1SUB_AM.setEnabled(false);
        sliderKIJIMI_LFO1VCF_AM.setEnabled(false);
        sliderKIJIMI_LFO1RESO_AM.setEnabled(false);
        sliderKIJIMI_LFO1VCA_AM.setEnabled(false);
        sliderKIJIMI_LFO2VCO1_AM.setEnabled(false);
        sliderKIJIMI_LFO2VCO2_AM.setEnabled(false);
        sliderKIJIMI_LFO2WAVE1_AM.setEnabled(false);
        sliderKIJIMI_LFO2WAVE2_AM.setEnabled(false);
        sliderKIJIMI_LFO2SUB_AM.setEnabled(false);
        sliderKIJIMI_LFO2VCF_AM.setEnabled(false);
        sliderKIJIMI_LFO2RESO_AM.setEnabled(false);
        sliderKIJIMI_LFO2VCA_AM.setEnabled(false);https://docs.juce.com/master/classSlider.html#a47c37989ff5f6453f2c44f1a7455e1c1

        sliderKIJIMI_LFO1VCO1_R.setEnabled(false);
        sliderKIJIMI_LFO1VCO2_R.setEnabled(false);
        sliderKIJIMI_LFO1WAVE1_R.setEnabled(false);
        sliderKIJIMI_LFO1WAVE2_R.setEnabled(false);
        sliderKIJIMI_LFO1SUB_R.setEnabled(false);
        sliderKIJIMI_LFO1VCF_R.setEnabled(false);
        sliderKIJIMI_LFO1RESO_R.setEnabled(false);
        sliderKIJIMI_LFO1VCA_R.setEnabled(false);
        sliderKIJIMI_LFO2VCO1_R.setEnabled(false);
        sliderKIJIMI_LFO2VCO2_R.setEnabled(false);
        sliderKIJIMI_LFO2WAVE1_R.setEnabled(false);
        sliderKIJIMI_LFO2WAVE2_R.setEnabled(false);
        sliderKIJIMI_LFO2SUB_R.setEnabled(false);
        sliderKIJIMI_LFO2VCF_R.setEnabled(false);
        sliderKIJIMI_LFO2RESO_R.setEnabled(false);
        sliderKIJIMI_LFO2VCA_R.setEnabled(false);
        sliderKIJIMI_LFO1VCO1_A.setEnabled(false);
        sliderKIJIMI_LFO1VCO2_A.setEnabled(false);
        sliderKIJIMI_LFO1WAVE1_A.setEnabled(false);
        sliderKIJIMI_LFO1WAVE2_A.setEnabled(false);
        sliderKIJIMI_LFO1SUB_A.setEnabled(false);
        sliderKIJIMI_LFO1VCF_A.setEnabled(false);
        sliderKIJIMI_LFO1RESO_A.setEnabled(false);
        sliderKIJIMI_LFO1VCA_A.setEnabled(false);
        sliderKIJIMI_LFO2VCO1_A.setEnabled(false);
        sliderKIJIMI_LFO2VCO2_A.setEnabled(false);
        sliderKIJIMI_LFO2WAVE1_A.setEnabled(false);
        sliderKIJIMI_LFO2WAVE2_A.setEnabled(false);
        sliderKIJIMI_LFO2SUB_A.setEnabled(false);
        sliderKIJIMI_LFO2VCF_A.setEnabled(false);
        sliderKIJIMI_LFO2RESO_A.setEnabled(false);
        sliderKIJIMI_LFO2VCA_A.setEnabled(false);
        sliderKIJIMI_LFO1VCO1_D.setEnabled(false);
        sliderKIJIMI_LFO1VCO2_D.setEnabled(false);
        sliderKIJIMI_LFO1WAVE1_D.setEnabled(false);
        sliderKIJIMI_LFO1WAVE2_D.setEnabled(false);
        sliderKIJIMI_LFO1SUB_D.setEnabled(false);
        sliderKIJIMI_LFO1VCF_D.setEnabled(false);
        sliderKIJIMI_LFO1RESO_D.setEnabled(false);
        sliderKIJIMI_LFO1VCA_D.setEnabled(false);
        sliderKIJIMI_LFO2VCO1_D.setEnabled(false);
        sliderKIJIMI_LFO2VCO2_D.setEnabled(false);
        sliderKIJIMI_LFO2WAVE1_D.setEnabled(false);
        sliderKIJIMI_LFO2WAVE2_D.setEnabled(false);
        sliderKIJIMI_LFO2SUB_D.setEnabled(false);
        sliderKIJIMI_LFO2VCF_D.setEnabled(false);
        sliderKIJIMI_LFO2RESO_D.setEnabled(false);
        sliderKIJIMI_LFO2VCA_D.setEnabled(false);
        sliderKIJIMI_LFO1VCO1_W.setEnabled(false);
        sliderKIJIMI_LFO1VCO2_W.setEnabled(false);
        sliderKIJIMI_LFO1WAVE1_W.setEnabled(false);
        sliderKIJIMI_LFO1WAVE2_W.setEnabled(false);
        sliderKIJIMI_LFO1SUB_W.setEnabled(false);
        sliderKIJIMI_LFO1VCF_W.setEnabled(false);
        sliderKIJIMI_LFO1RESO_W.setEnabled(false);
        sliderKIJIMI_LFO1VCA_W.setEnabled(false);
        sliderKIJIMI_LFO2VCO1_W.setEnabled(false);
        sliderKIJIMI_LFO2VCO2_W.setEnabled(false);
        sliderKIJIMI_LFO2WAVE1_W.setEnabled(false);
        sliderKIJIMI_LFO2WAVE2_W.setEnabled(false);
        sliderKIJIMI_LFO2SUB_W.setEnabled(false);
        sliderKIJIMI_LFO2VCF_W.setEnabled(false);
        sliderKIJIMI_LFO2RESO_W.setEnabled(false);
        sliderKIJIMI_LFO2VCA_W.setEnabled(false);
        sliderKIJIMI_LFO1VCO1_ENV.setEnabled(false);
        sliderKIJIMI_LFO1VCO2_ENV.setEnabled(false);
        sliderKIJIMI_LFO1WAVE1_ENV.setEnabled(false);
        sliderKIJIMI_LFO1WAVE2_ENV.setEnabled(false);
        sliderKIJIMI_LFO1SUB_ENV.setEnabled(false);
        sliderKIJIMI_LFO1VCF_ENV.setEnabled(false);
        sliderKIJIMI_LFO1RESO_ENV.setEnabled(false);
        sliderKIJIMI_LFO1VCA_ENV.setEnabled(false);
        sliderKIJIMI_LFO2VCO1_ENV.setEnabled(false);
        sliderKIJIMI_LFO2VCO2_ENV.setEnabled(false);
        sliderKIJIMI_LFO2WAVE1_ENV.setEnabled(false);
        sliderKIJIMI_LFO2WAVE2_ENV.setEnabled(false);
        sliderKIJIMI_LFO2SUB_ENV.setEnabled(false);
        sliderKIJIMI_LFO2VCF_ENV.setEnabled(false);
        sliderKIJIMI_LFO2RESO_ENV.setEnabled(false);
        sliderKIJIMI_LFO2VCA_ENV.setEnabled(false);
    }
    
    void configureControlsForLFOModModeIndividual () override
    {
        sliderKIJIMI_LFO1VCO1_AM.setEnabled(true);
        sliderKIJIMI_LFO1VCO2_AM.setEnabled(true);
        sliderKIJIMI_LFO1WAVE1_AM.setEnabled(true);
        sliderKIJIMI_LFO1WAVE2_AM.setEnabled(true);
        sliderKIJIMI_LFO1SUB_AM.setEnabled(true);
        sliderKIJIMI_LFO1VCF_AM.setEnabled(true);
        sliderKIJIMI_LFO1RESO_AM.setEnabled(true);
        sliderKIJIMI_LFO1VCA_AM.setEnabled(true);
        sliderKIJIMI_LFO2VCO1_AM.setEnabled(true);
        sliderKIJIMI_LFO2VCO2_AM.setEnabled(true);
        sliderKIJIMI_LFO2WAVE1_AM.setEnabled(true);
        sliderKIJIMI_LFO2WAVE2_AM.setEnabled(true);
        sliderKIJIMI_LFO2SUB_AM.setEnabled(true);
        sliderKIJIMI_LFO2VCF_AM.setEnabled(true);
        sliderKIJIMI_LFO2RESO_AM.setEnabled(true);
        sliderKIJIMI_LFO2VCA_AM.setEnabled(true);
        sliderKIJIMI_LFO1VCO1_R.setEnabled(true);
        sliderKIJIMI_LFO1VCO2_R.setEnabled(true);
        sliderKIJIMI_LFO1WAVE1_R.setEnabled(true);
        sliderKIJIMI_LFO1WAVE2_R.setEnabled(true);
        sliderKIJIMI_LFO1SUB_R.setEnabled(true);
        sliderKIJIMI_LFO1VCF_R.setEnabled(true);
        sliderKIJIMI_LFO1RESO_R.setEnabled(true);
        sliderKIJIMI_LFO1VCA_R.setEnabled(true);
        sliderKIJIMI_LFO2VCO1_R.setEnabled(true);
        sliderKIJIMI_LFO2VCO2_R.setEnabled(true);
        sliderKIJIMI_LFO2WAVE1_R.setEnabled(true);
        sliderKIJIMI_LFO2WAVE2_R.setEnabled(true);
        sliderKIJIMI_LFO2SUB_R.setEnabled(true);
        sliderKIJIMI_LFO2VCF_R.setEnabled(true);
        sliderKIJIMI_LFO2RESO_R.setEnabled(true);
        sliderKIJIMI_LFO2VCA_R.setEnabled(true);
        sliderKIJIMI_LFO1VCO1_A.setEnabled(true);
        sliderKIJIMI_LFO1VCO2_A.setEnabled(true);
        sliderKIJIMI_LFO1WAVE1_A.setEnabled(true);
        sliderKIJIMI_LFO1WAVE2_A.setEnabled(true);
        sliderKIJIMI_LFO1SUB_A.setEnabled(true);
        sliderKIJIMI_LFO1VCF_A.setEnabled(true);
        sliderKIJIMI_LFO1RESO_A.setEnabled(true);
        sliderKIJIMI_LFO1VCA_A.setEnabled(true);
        sliderKIJIMI_LFO2VCO1_A.setEnabled(true);
        sliderKIJIMI_LFO2VCO2_A.setEnabled(true);
        sliderKIJIMI_LFO2WAVE1_A.setEnabled(true);
        sliderKIJIMI_LFO2WAVE2_A.setEnabled(true);
        sliderKIJIMI_LFO2SUB_A.setEnabled(true);
        sliderKIJIMI_LFO2VCF_A.setEnabled(true);
        sliderKIJIMI_LFO2RESO_A.setEnabled(true);
        sliderKIJIMI_LFO2VCA_A.setEnabled(true);
        sliderKIJIMI_LFO1VCO1_D.setEnabled(true);
        sliderKIJIMI_LFO1VCO2_D.setEnabled(true);
        sliderKIJIMI_LFO1WAVE1_D.setEnabled(true);
        sliderKIJIMI_LFO1WAVE2_D.setEnabled(true);
        sliderKIJIMI_LFO1SUB_D.setEnabled(true);
        sliderKIJIMI_LFO1VCF_D.setEnabled(true);
        sliderKIJIMI_LFO1RESO_D.setEnabled(true);
        sliderKIJIMI_LFO1VCA_D.setEnabled(true);
        sliderKIJIMI_LFO2VCO1_D.setEnabled(true);
        sliderKIJIMI_LFO2VCO2_D.setEnabled(true);
        sliderKIJIMI_LFO2WAVE1_D.setEnabled(true);
        sliderKIJIMI_LFO2WAVE2_D.setEnabled(true);
        sliderKIJIMI_LFO2SUB_D.setEnabled(true);
        sliderKIJIMI_LFO2VCF_D.setEnabled(true);
        sliderKIJIMI_LFO2RESO_D.setEnabled(true);
        sliderKIJIMI_LFO2VCA_D.setEnabled(true);
        sliderKIJIMI_LFO1VCO1_W.setEnabled(true);
        sliderKIJIMI_LFO1VCO2_W.setEnabled(true);
        sliderKIJIMI_LFO1WAVE1_W.setEnabled(true);
        sliderKIJIMI_LFO1WAVE2_W.setEnabled(true);
        sliderKIJIMI_LFO1SUB_W.setEnabled(true);
        sliderKIJIMI_LFO1VCF_W.setEnabled(true);
        sliderKIJIMI_LFO1RESO_W.setEnabled(true);
        sliderKIJIMI_LFO1VCA_W.setEnabled(true);
        sliderKIJIMI_LFO2VCO1_W.setEnabled(true);
        sliderKIJIMI_LFO2VCO2_W.setEnabled(true);
        sliderKIJIMI_LFO2WAVE1_W.setEnabled(true);
        sliderKIJIMI_LFO2WAVE2_W.setEnabled(true);
        sliderKIJIMI_LFO2SUB_W.setEnabled(true);
        sliderKIJIMI_LFO2VCF_W.setEnabled(true);
        sliderKIJIMI_LFO2RESO_W.setEnabled(true);
        sliderKIJIMI_LFO2VCA_W.setEnabled(true);
        sliderKIJIMI_LFO1VCO1_ENV.setEnabled(true);
        sliderKIJIMI_LFO1VCO2_ENV.setEnabled(true);
        sliderKIJIMI_LFO1WAVE1_ENV.setEnabled(true);
        sliderKIJIMI_LFO1WAVE2_ENV.setEnabled(true);
        sliderKIJIMI_LFO1SUB_ENV.setEnabled(true);
        sliderKIJIMI_LFO1VCF_ENV.setEnabled(true);
        sliderKIJIMI_LFO1RESO_ENV.setEnabled(true);
        sliderKIJIMI_LFO1VCA_ENV.setEnabled(true);
        sliderKIJIMI_LFO2VCO1_ENV.setEnabled(true);
        sliderKIJIMI_LFO2VCO2_ENV.setEnabled(true);
        sliderKIJIMI_LFO2WAVE1_ENV.setEnabled(true);
        sliderKIJIMI_LFO2WAVE2_ENV.setEnabled(true);
        sliderKIJIMI_LFO2SUB_ENV.setEnabled(true);
        sliderKIJIMI_LFO2VCF_ENV.setEnabled(true);
        sliderKIJIMI_LFO2RESO_ENV.setEnabled(true);
        sliderKIJIMI_LFO2VCA_ENV.setEnabled(true);
    }
    
    void paint (Graphics& g) override
    {
        Image background = ImageCache::getFromMemory (BinaryData::KijimiLfoPanelBackground_png, BinaryData::KijimiLfoPanelBackground_pngSize);
        g.drawImage (background, getLocalBounds().toFloat());
    }

    void resized() override
    {
        // Position sliders
        // --> Start auto-generated code C
        sliderKIJIMI_LFO1VCO1_AM.setBounds (0.022 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCO1_AM
        sliderKIJIMI_LFO1VCO2_AM.setBounds (0.077 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCO2_AM
        sliderKIJIMI_LFO1WAVE1_AM.setBounds (0.132 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1WAVE1_AM
        sliderKIJIMI_LFO1WAVE2_AM.setBounds (0.187 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1WAVE2_AM
        sliderKIJIMI_LFO1SUB_AM.setBounds (0.242 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1SUB_AM
        sliderKIJIMI_LFO1VCF_AM.setBounds (0.297 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCF_AM
        sliderKIJIMI_LFO1RESO_AM.setBounds (0.352 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1RESO_AM
        sliderKIJIMI_LFO1VCA_AM.setBounds (0.407 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCA_AM
        sliderKIJIMI_LFO2VCO1_AM.setBounds (0.480 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCO1_AM
        sliderKIJIMI_LFO2VCO2_AM.setBounds (0.535 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCO2_AM
        sliderKIJIMI_LFO2WAVE1_AM.setBounds (0.590 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2WAVE1_AM
        sliderKIJIMI_LFO2WAVE2_AM.setBounds (0.645 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2WAVE2_AM
        sliderKIJIMI_LFO2SUB_AM.setBounds (0.700 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2SUB_AM
        sliderKIJIMI_LFO2VCF_AM.setBounds (0.755 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCF_AM
        sliderKIJIMI_LFO2RESO_AM.setBounds (0.810 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2RESO_AM
        sliderKIJIMI_LFO2VCA_AM.setBounds (0.864 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCA_AM
        sliderKIJIMI_ADSR2VCO1_AM.setBounds (0.941 * getWidth(), 0.128 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2VCO1_AM
        sliderKIJIMI_ADSR2VCO2_AM.setBounds (0.941 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2VCO2_AM
        sliderKIJIMI_ADSR2WAVE1_AM.setBounds (0.941 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2WAVE1_AM
        sliderKIJIMI_ADSR2WAVE2_AM.setBounds (0.941 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_ADSR2WAVE2_AM
        sliderKIJIMI_LFO1VCO1_R.setBounds (0.022 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCO1_R
        sliderKIJIMI_LFO1VCO2_R.setBounds (0.077 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCO2_R
        sliderKIJIMI_LFO1WAVE1_R.setBounds (0.132 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1WAVE1_R
        sliderKIJIMI_LFO1WAVE2_R.setBounds (0.187 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1WAVE2_R
        sliderKIJIMI_LFO1SUB_R.setBounds (0.242 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1SUB_R
        sliderKIJIMI_LFO1VCF_R.setBounds (0.297 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCF_R
        sliderKIJIMI_LFO1RESO_R.setBounds (0.352 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1RESO_R
        sliderKIJIMI_LFO1VCA_R.setBounds (0.407 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCA_R
        sliderKIJIMI_LFO2VCO1_R.setBounds (0.480 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCO1_R
        sliderKIJIMI_LFO2VCO2_R.setBounds (0.535 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCO2_R
        sliderKIJIMI_LFO2WAVE1_R.setBounds (0.590 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2WAVE1_R
        sliderKIJIMI_LFO2WAVE2_R.setBounds (0.645 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2WAVE2_R
        sliderKIJIMI_LFO2SUB_R.setBounds (0.700 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2SUB_R
        sliderKIJIMI_LFO2VCF_R.setBounds (0.755 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCF_R
        sliderKIJIMI_LFO2RESO_R.setBounds (0.810 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2RESO_R
        sliderKIJIMI_LFO2VCA_R.setBounds (0.864 * getWidth(), 0.284 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCA_R
        sliderKIJIMI_LFO1VCO1_A.setBounds (0.022 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCO1_A
        sliderKIJIMI_LFO1VCO2_A.setBounds (0.077 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCO2_A
        sliderKIJIMI_LFO1WAVE1_A.setBounds (0.132 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1WAVE1_A
        sliderKIJIMI_LFO1WAVE2_A.setBounds (0.187 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1WAVE2_A
        sliderKIJIMI_LFO1SUB_A.setBounds (0.242 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1SUB_A
        sliderKIJIMI_LFO1VCF_A.setBounds (0.297 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCF_A
        sliderKIJIMI_LFO1RESO_A.setBounds (0.352 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1RESO_A
        sliderKIJIMI_LFO1VCA_A.setBounds (0.407 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCA_A
        sliderKIJIMI_LFO2VCO1_A.setBounds (0.480 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCO1_A
        sliderKIJIMI_LFO2VCO2_A.setBounds (0.535 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCO2_A
        sliderKIJIMI_LFO2WAVE1_A.setBounds (0.590 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2WAVE1_A
        sliderKIJIMI_LFO2WAVE2_A.setBounds (0.645 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2WAVE2_A
        sliderKIJIMI_LFO2SUB_A.setBounds (0.700 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2SUB_A
        sliderKIJIMI_LFO2VCF_A.setBounds (0.755 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCF_A
        sliderKIJIMI_LFO2RESO_A.setBounds (0.810 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2RESO_A
        sliderKIJIMI_LFO2VCA_A.setBounds (0.864 * getWidth(), 0.440 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCA_A
        sliderKIJIMI_LFO1VCO1_D.setBounds (0.022 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCO1_D
        sliderKIJIMI_LFO1VCO2_D.setBounds (0.077 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCO2_D
        sliderKIJIMI_LFO1WAVE1_D.setBounds (0.132 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1WAVE1_D
        sliderKIJIMI_LFO1WAVE2_D.setBounds (0.187 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1WAVE2_D
        sliderKIJIMI_LFO1SUB_D.setBounds (0.242 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1SUB_D
        sliderKIJIMI_LFO1VCF_D.setBounds (0.297 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCF_D
        sliderKIJIMI_LFO1RESO_D.setBounds (0.352 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1RESO_D
        sliderKIJIMI_LFO1VCA_D.setBounds (0.407 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO1VCA_D
        sliderKIJIMI_LFO2VCO1_D.setBounds (0.480 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCO1_D
        sliderKIJIMI_LFO2VCO2_D.setBounds (0.535 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCO2_D
        sliderKIJIMI_LFO2WAVE1_D.setBounds (0.590 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2WAVE1_D
        sliderKIJIMI_LFO2WAVE2_D.setBounds (0.645 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2WAVE2_D
        sliderKIJIMI_LFO2SUB_D.setBounds (0.700 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2SUB_D
        sliderKIJIMI_LFO2VCF_D.setBounds (0.755 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCF_D
        sliderKIJIMI_LFO2RESO_D.setBounds (0.810 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2RESO_D
        sliderKIJIMI_LFO2VCA_D.setBounds (0.864 * getWidth(), 0.596 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_LFO2VCA_D
        sliderKIJIMI_LFO1VCO1_W.setBounds (0.013 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO1VCO1_W
        sliderKIJIMI_LFO1VCO2_W.setBounds (0.068 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO1VCO2_W
        sliderKIJIMI_LFO1WAVE1_W.setBounds (0.123 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO1WAVE1_W
        sliderKIJIMI_LFO1WAVE2_W.setBounds (0.178 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO1WAVE2_W
        sliderKIJIMI_LFO1SUB_W.setBounds (0.233 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO1SUB_W
        sliderKIJIMI_LFO1VCF_W.setBounds (0.288 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO1VCF_W
        sliderKIJIMI_LFO1RESO_W.setBounds (0.342 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO1RESO_W
        sliderKIJIMI_LFO1VCA_W.setBounds (0.397 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO1VCA_W
        sliderKIJIMI_LFO2VCO1_W.setBounds (0.471 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO2VCO1_W
        sliderKIJIMI_LFO2VCO2_W.setBounds (0.526 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO2VCO2_W
        sliderKIJIMI_LFO2WAVE1_W.setBounds (0.581 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO2WAVE1_W
        sliderKIJIMI_LFO2WAVE2_W.setBounds (0.636 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO2WAVE2_W
        sliderKIJIMI_LFO2SUB_W.setBounds (0.690 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO2SUB_W
        sliderKIJIMI_LFO2VCF_W.setBounds (0.745 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO2VCF_W
        sliderKIJIMI_LFO2RESO_W.setBounds (0.800 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO2RESO_W
        sliderKIJIMI_LFO2VCA_W.setBounds (0.855 * getWidth(), 0.927 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_LFO2VCA_W
        sliderKIJIMI_LFO1VCO1_ENV.setBounds (0.023 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1VCO1_ENV
        sliderKIJIMI_LFO1VCO2_ENV.setBounds (0.078 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1VCO2_ENV
        sliderKIJIMI_LFO1WAVE1_ENV.setBounds (0.133 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1WAVE1_ENV
        sliderKIJIMI_LFO1WAVE2_ENV.setBounds (0.188 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1WAVE2_ENV
        sliderKIJIMI_LFO1SUB_ENV.setBounds (0.243 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1SUB_ENV
        sliderKIJIMI_LFO1VCF_ENV.setBounds (0.298 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1VCF_ENV
        sliderKIJIMI_LFO1RESO_ENV.setBounds (0.353 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1RESO_ENV
        sliderKIJIMI_LFO1VCA_ENV.setBounds (0.408 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO1VCA_ENV
        sliderKIJIMI_LFO2VCO1_ENV.setBounds (0.481 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2VCO1_ENV
        sliderKIJIMI_LFO2VCO2_ENV.setBounds (0.536 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2VCO2_ENV
        sliderKIJIMI_LFO2WAVE1_ENV.setBounds (0.591 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2WAVE1_ENV
        sliderKIJIMI_LFO2WAVE2_ENV.setBounds (0.646 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2WAVE2_ENV
        sliderKIJIMI_LFO2SUB_ENV.setBounds (0.701 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2SUB_ENV
        sliderKIJIMI_LFO2VCF_ENV.setBounds (0.756 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2VCF_ENV
        sliderKIJIMI_LFO2RESO_ENV.setBounds (0.810 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2RESO_ENV
        sliderKIJIMI_LFO2VCA_ENV.setBounds (0.865 * getWidth(), 0.752 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_LFO2VCA_ENV
        // --> End auto-generated code C
    }
    
private:
    
    // Slider declarations
    // --> Start auto-generated code A
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
    ComboBox sliderKIJIMI_LFO1VCO1_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO1VCO1_W;
    ComboBox sliderKIJIMI_LFO1VCO2_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO1VCO2_W;
    ComboBox sliderKIJIMI_LFO1WAVE1_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO1WAVE1_W;
    ComboBox sliderKIJIMI_LFO1WAVE2_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO1WAVE2_W;
    ComboBox sliderKIJIMI_LFO1SUB_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO1SUB_W;
    ComboBox sliderKIJIMI_LFO1VCF_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO1VCF_W;
    ComboBox sliderKIJIMI_LFO1RESO_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO1RESO_W;
    ComboBox sliderKIJIMI_LFO1VCA_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO1VCA_W;
    ComboBox sliderKIJIMI_LFO2VCO1_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO2VCO1_W;
    ComboBox sliderKIJIMI_LFO2VCO2_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO2VCO2_W;
    ComboBox sliderKIJIMI_LFO2WAVE1_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO2WAVE1_W;
    ComboBox sliderKIJIMI_LFO2WAVE2_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO2WAVE2_W;
    ComboBox sliderKIJIMI_LFO2SUB_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO2SUB_W;
    ComboBox sliderKIJIMI_LFO2VCF_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO2VCF_W;
    ComboBox sliderKIJIMI_LFO2RESO_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO2RESO_W;
    ComboBox sliderKIJIMI_LFO2VCA_W;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_LFO2VCA_W;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1VCO1_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO1_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1VCO2_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCO2_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1WAVE1_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE1_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1WAVE2_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1WAVE2_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1SUB_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1SUB_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1VCF_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCF_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1RESO_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1RESO_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO1VCA_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO1VCA_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2VCO1_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO1_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2VCO2_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCO2_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2WAVE1_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE1_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2WAVE2_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2WAVE2_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2SUB_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2SUB_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2VCF_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCF_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2RESO_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2RESO_ENV;
    CycleButtonSlider2StepsInt sliderKIJIMI_LFO2VCA_ENV;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LFO2VCA_ENV;
    // --> End auto-generated code A
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMILfosPanelComponent);
};
