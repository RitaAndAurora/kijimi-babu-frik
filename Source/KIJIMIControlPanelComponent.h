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
    
    void initialize (KijimitimbreSpaceAudioProcessor* p)
    {
        // Set processor object
        processor = p;
        
        // Configure look and feel classes
        yellowSlider.setColour (Slider::thumbColourId, Colour(CS80COLOR_YELLOW));
        greenSlider.setColour (Slider::thumbColourId, Colour(CS80COLOR_GREEN));
        blackSlider.setColour (Slider::thumbColourId, Colour(CS80COLOR_BLACK));
        redSlider.setColour (Slider::thumbColourId, Colour(CS80COLOR_RED));
        whiteSlider.setColour (Slider::thumbColourId, Colour(CS80COLOR_WHITE));
        graySlider.setColour (Slider::thumbColourId, Colour(CS80COLOR_GREY));
        
        // Configure sliders
        // --> Start auto-generated code B
        // Slider KIJIMI_SPEED_VCO_1
        sliderKIJIMI_SPEED_VCO_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SPEED_VCO_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SPEED_VCO_1.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_SPEED_VCO_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SPEED_VCO_1);
        sliderAttachmentKIJIMI_SPEED_VCO_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SPEED_VCO_1", sliderKIJIMI_SPEED_VCO_1));
        sliderKIJIMI_SPEED_VCO_1.textFromValueFunction = [](double value) {
            return String::formatted("PWM Speed: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_PWM_VCO_1
        sliderKIJIMI_PWM_VCO_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_PWM_VCO_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_PWM_VCO_1.setLookAndFeel (&greenSlider);
        sliderKIJIMI_PWM_VCO_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_PWM_VCO_1);
        sliderAttachmentKIJIMI_PWM_VCO_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_PWM_VCO_1", sliderKIJIMI_PWM_VCO_1));
        sliderKIJIMI_PWM_VCO_1.textFromValueFunction = [](double value) {
            return String::formatted("PWM Amount: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_PW_VCO_1
        sliderKIJIMI_PW_VCO_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_PW_VCO_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_PW_VCO_1.setLookAndFeel (&greenSlider);
        sliderKIJIMI_PW_VCO_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_PW_VCO_1);
        sliderAttachmentKIJIMI_PW_VCO_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_PW_VCO_1", sliderKIJIMI_PW_VCO_1));
        sliderKIJIMI_PW_VCO_1.textFromValueFunction = [](double value) {
            return String::formatted("PW: %.0f%%", 100.0 * ((0.4 * value / 127.0) + 0.5));
        };
        // Slider KIJIMI_SQR_VCO_1
        sliderKIJIMI_SQR_VCO_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SQR_VCO_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SQR_VCO_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_SQR_VCO_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SQR_VCO_1);
        sliderAttachmentKIJIMI_SQR_VCO_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SQR_VCO_1", sliderKIJIMI_SQR_VCO_1));
        sliderKIJIMI_SQR_VCO_1.setRange(sliderKIJIMI_SQR_VCO_1.getMinimum(), sliderKIJIMI_SQR_VCO_1.getMaximum(), sliderKIJIMI_SQR_VCO_1.getMaximum());
        sliderKIJIMI_SQR_VCO_1.textFromValueFunction = [](double value) {
            if (value <= 64){ return "Square: ON"; } else { return "Square OFF";}
        };
        // Slider KIJIMI_SAW_VCO_1
        sliderKIJIMI_SAW_VCO_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SAW_VCO_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SAW_VCO_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_SAW_VCO_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SAW_VCO_1);
        sliderAttachmentKIJIMI_SAW_VCO_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SAW_VCO_1", sliderKIJIMI_SAW_VCO_1));
        sliderKIJIMI_SAW_VCO_1.setRange(sliderKIJIMI_SAW_VCO_1.getMinimum(), sliderKIJIMI_SAW_VCO_1.getMaximum(), sliderKIJIMI_SAW_VCO_1.getMaximum());
        sliderKIJIMI_SAW_VCO_1.textFromValueFunction = [](double value) {
            if (value <= 64){ return "Sawtooth: ON"; } else { return "Sawtooth OFF";}
        };
        // Slider KIJIMI_NOISE_VCO_1
        sliderKIJIMI_NOISE_VCO_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_NOISE_VCO_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_NOISE_VCO_1.setLookAndFeel (&graySlider);
        sliderKIJIMI_NOISE_VCO_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_NOISE_VCO_1);
        sliderAttachmentKIJIMI_NOISE_VCO_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_NOISE_VCO_1", sliderKIJIMI_NOISE_VCO_1));
        sliderKIJIMI_NOISE_VCO_1.textFromValueFunction = [](double value) {
            return String::formatted("Noise: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_HPF_VCF_1
        sliderKIJIMI_HPF_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_HPF_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_HPF_VCF_1.setLookAndFeel (&greenSlider);
        sliderKIJIMI_HPF_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_HPF_VCF_1);
        sliderAttachmentKIJIMI_HPF_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_HPF_VCF_1", sliderKIJIMI_HPF_VCF_1));
        sliderKIJIMI_HPF_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("HPF: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_RESh_VCF_1
        sliderKIJIMI_RESh_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_RESh_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_RESh_VCF_1.setLookAndFeel (&redSlider);
        sliderKIJIMI_RESh_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_RESh_VCF_1);
        sliderAttachmentKIJIMI_RESh_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_RESh_VCF_1", sliderKIJIMI_RESh_VCF_1));
        sliderKIJIMI_RESh_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("RESh: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LPF_VCF_1
        sliderKIJIMI_LPF_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_LPF_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LPF_VCF_1.setLookAndFeel (&greenSlider);
        sliderKIJIMI_LPF_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LPF_VCF_1);
        sliderAttachmentKIJIMI_LPF_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LPF_VCF_1", sliderKIJIMI_LPF_VCF_1));
        sliderKIJIMI_LPF_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("LPF: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_RESl_VCF_1
        sliderKIJIMI_RESl_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_RESl_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_RESl_VCF_1.setLookAndFeel (&redSlider);
        sliderKIJIMI_RESl_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_RESl_VCF_1);
        sliderAttachmentKIJIMI_RESl_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_RESl_VCF_1", sliderKIJIMI_RESl_VCF_1));
        sliderKIJIMI_RESl_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("RESl: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_IL_VCF_1
        sliderKIJIMI_IL_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_IL_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_IL_VCF_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_IL_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_IL_VCF_1);
        sliderAttachmentKIJIMI_IL_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_IL_VCF_1", sliderKIJIMI_IL_VCF_1));
        sliderKIJIMI_IL_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("VCF IL: %.2f%", -5.0 * value / 127.0);
        };
        // Slider KIJIMI_AL_VCF_1
        sliderKIJIMI_AL_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_AL_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AL_VCF_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_AL_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AL_VCF_1);
        sliderAttachmentKIJIMI_AL_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AL_VCF_1", sliderKIJIMI_AL_VCF_1));
        sliderKIJIMI_AL_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("VCF AL: %.2f%", 5.0 * value / 127.0);
        };
        // Slider KIJIMI_A_VCF_1
        sliderKIJIMI_A_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_A_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_A_VCF_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_A_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_A_VCF_1);
        sliderAttachmentKIJIMI_A_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_A_VCF_1", sliderKIJIMI_A_VCF_1));
        sliderKIJIMI_A_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("VCF A: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_D_VCF_1
        sliderKIJIMI_D_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_D_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_D_VCF_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_D_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_D_VCF_1);
        sliderAttachmentKIJIMI_D_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_D_VCF_1", sliderKIJIMI_D_VCF_1));
        sliderKIJIMI_D_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("VCF D: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_R_VCF_1
        sliderKIJIMI_R_VCF_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_R_VCF_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_R_VCF_1.setLookAndFeel (&yellowSlider);
        sliderKIJIMI_R_VCF_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_R_VCF_1);
        sliderAttachmentKIJIMI_R_VCF_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_R_VCF_1", sliderKIJIMI_R_VCF_1));
        sliderKIJIMI_R_VCF_1.textFromValueFunction = [](double value) {
            return String::formatted("VCF R: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_VCF_VCA_1
        sliderKIJIMI_VCF_VCA_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_VCF_VCA_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_VCA_1.setLookAndFeel (&graySlider);
        sliderKIJIMI_VCF_VCA_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_VCA_1);
        sliderAttachmentKIJIMI_VCF_VCA_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_VCA_1", sliderKIJIMI_VCF_VCA_1));
        sliderKIJIMI_VCF_VCA_1.textFromValueFunction = [](double value) {
            return String::formatted("VCF Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_SINE__VCA_1
        sliderKIJIMI_SINE__VCA_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SINE__VCA_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SINE__VCA_1.setLookAndFeel (&graySlider);
        sliderKIJIMI_SINE__VCA_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SINE__VCA_1);
        sliderAttachmentKIJIMI_SINE__VCA_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SINE__VCA_1", sliderKIJIMI_SINE__VCA_1));
        sliderKIJIMI_SINE__VCA_1.textFromValueFunction = [](double value) {
            return String::formatted("Sine Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_A_VCA_1
        sliderKIJIMI_A_VCA_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_A_VCA_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_A_VCA_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_A_VCA_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_A_VCA_1);
        sliderAttachmentKIJIMI_A_VCA_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_A_VCA_1", sliderKIJIMI_A_VCA_1));
        sliderKIJIMI_A_VCA_1.textFromValueFunction = [](double value) {
            return String::formatted("VCA A: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_D_VCA_1
        sliderKIJIMI_D_VCA_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_D_VCA_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_D_VCA_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_D_VCA_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_D_VCA_1);
        sliderAttachmentKIJIMI_D_VCA_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_D_VCA_1", sliderKIJIMI_D_VCA_1));
        sliderKIJIMI_D_VCA_1.textFromValueFunction = [](double value) {
            return String::formatted("VCA D: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_S_VCA_1
        sliderKIJIMI_S_VCA_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_S_VCA_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_S_VCA_1.setLookAndFeel (&blackSlider);
        sliderKIJIMI_S_VCA_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_S_VCA_1);
        sliderAttachmentKIJIMI_S_VCA_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_S_VCA_1", sliderKIJIMI_S_VCA_1));
        sliderKIJIMI_S_VCA_1.textFromValueFunction = [](double value) {
            return String::formatted("VCA S: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_R_VCA_1
        sliderKIJIMI_R_VCA_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_R_VCA_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_R_VCA_1.setLookAndFeel (&yellowSlider);
        sliderKIJIMI_R_VCA_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_R_VCA_1);
        sliderAttachmentKIJIMI_R_VCA_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_R_VCA_1", sliderKIJIMI_R_VCA_1));
        sliderKIJIMI_R_VCA_1.textFromValueFunction = [](double value) {
            return String::formatted("VCA R: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LEVEL_VCA_1
        sliderKIJIMI_LEVEL_VCA_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_LEVEL_VCA_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LEVEL_VCA_1.setLookAndFeel (&graySlider);
        sliderKIJIMI_LEVEL_VCA_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LEVEL_VCA_1);
        sliderAttachmentKIJIMI_LEVEL_VCA_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEVEL_VCA_1", sliderKIJIMI_LEVEL_VCA_1));
        sliderKIJIMI_LEVEL_VCA_1.textFromValueFunction = [](double value) {
            return String::formatted("Channel Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_INIT_BR_TOUCH_1
        sliderKIJIMI_INIT_BR_TOUCH_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_INIT_BR_TOUCH_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_INIT_BR_TOUCH_1.setLookAndFeel (&greenSlider);
        sliderKIJIMI_INIT_BR_TOUCH_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_INIT_BR_TOUCH_1);
        sliderAttachmentKIJIMI_INIT_BR_TOUCH_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_INIT_BR_TOUCH_1", sliderKIJIMI_INIT_BR_TOUCH_1));
        sliderKIJIMI_INIT_BR_TOUCH_1.textFromValueFunction = [](double value) {
            return String::formatted("Initial Brilliance: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_INIT_LEV_TOUCH_1
        sliderKIJIMI_INIT_LEV_TOUCH_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_INIT_LEV_TOUCH_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_INIT_LEV_TOUCH_1.setLookAndFeel (&graySlider);
        sliderKIJIMI_INIT_LEV_TOUCH_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_INIT_LEV_TOUCH_1);
        sliderAttachmentKIJIMI_INIT_LEV_TOUCH_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_INIT_LEV_TOUCH_1", sliderKIJIMI_INIT_LEV_TOUCH_1));
        sliderKIJIMI_INIT_LEV_TOUCH_1.textFromValueFunction = [](double value) {
            return String::formatted("Initial Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_AT_BR_TOUCH_1
        sliderKIJIMI_AT_BR_TOUCH_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_AT_BR_TOUCH_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_BR_TOUCH_1.setLookAndFeel (&greenSlider);
        sliderKIJIMI_AT_BR_TOUCH_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_BR_TOUCH_1);
        sliderAttachmentKIJIMI_AT_BR_TOUCH_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_BR_TOUCH_1", sliderKIJIMI_AT_BR_TOUCH_1));
        sliderKIJIMI_AT_BR_TOUCH_1.textFromValueFunction = [](double value) {
            return String::formatted("After Brilliance: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_AT_LEV_TOUCH_1
        sliderKIJIMI_AT_LEV_TOUCH_1.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_AT_LEV_TOUCH_1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_LEV_TOUCH_1.setLookAndFeel (&graySlider);
        sliderKIJIMI_AT_LEV_TOUCH_1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_LEV_TOUCH_1);
        sliderAttachmentKIJIMI_AT_LEV_TOUCH_1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_LEV_TOUCH_1", sliderKIJIMI_AT_LEV_TOUCH_1));
        sliderKIJIMI_AT_LEV_TOUCH_1.textFromValueFunction = [](double value) {
            return String::formatted("After Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_SPEED_VCO_2
        sliderKIJIMI_SPEED_VCO_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SPEED_VCO_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SPEED_VCO_2.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_SPEED_VCO_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SPEED_VCO_2);
        sliderAttachmentKIJIMI_SPEED_VCO_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SPEED_VCO_2", sliderKIJIMI_SPEED_VCO_2));
        sliderKIJIMI_SPEED_VCO_2.textFromValueFunction = [](double value) {
            return String::formatted("PWM Speed: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_PWM_VCO_2
        sliderKIJIMI_PWM_VCO_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_PWM_VCO_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_PWM_VCO_2.setLookAndFeel (&greenSlider);
        sliderKIJIMI_PWM_VCO_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_PWM_VCO_2);
        sliderAttachmentKIJIMI_PWM_VCO_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_PWM_VCO_2", sliderKIJIMI_PWM_VCO_2));
        sliderKIJIMI_PWM_VCO_2.textFromValueFunction = [](double value) {
            return String::formatted("PWM Amount: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_PW_VCO_2
        sliderKIJIMI_PW_VCO_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_PW_VCO_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_PW_VCO_2.setLookAndFeel (&greenSlider);
        sliderKIJIMI_PW_VCO_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_PW_VCO_2);
        sliderAttachmentKIJIMI_PW_VCO_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_PW_VCO_2", sliderKIJIMI_PW_VCO_2));
        sliderKIJIMI_PW_VCO_2.textFromValueFunction = [](double value) {
            return String::formatted("PW: %.0f%%", 100.0 * ((0.4 * value / 127.0) + 0.5));
        };
        // Slider KIJIMI_SQR_VCO_2
        sliderKIJIMI_SQR_VCO_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SQR_VCO_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SQR_VCO_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_SQR_VCO_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SQR_VCO_2);
        sliderAttachmentKIJIMI_SQR_VCO_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SQR_VCO_2", sliderKIJIMI_SQR_VCO_2));
        sliderKIJIMI_SQR_VCO_2.setRange(sliderKIJIMI_SQR_VCO_2.getMinimum(), sliderKIJIMI_SQR_VCO_2.getMaximum(), sliderKIJIMI_SQR_VCO_2.getMaximum());
        sliderKIJIMI_SQR_VCO_2.textFromValueFunction = [](double value) {
            if (value <= 64){ return "Square: ON"; } else { return "Square OFF";}
        };
        // Slider KIJIMI_SAW_VCO_2
        sliderKIJIMI_SAW_VCO_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SAW_VCO_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SAW_VCO_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_SAW_VCO_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SAW_VCO_2);
        sliderAttachmentKIJIMI_SAW_VCO_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SAW_VCO_2", sliderKIJIMI_SAW_VCO_2));
        sliderKIJIMI_SAW_VCO_2.setRange(sliderKIJIMI_SAW_VCO_2.getMinimum(), sliderKIJIMI_SAW_VCO_2.getMaximum(), sliderKIJIMI_SAW_VCO_2.getMaximum());
        sliderKIJIMI_SAW_VCO_2.textFromValueFunction = [](double value) {
            if (value <= 64){ return "Sawtooth: ON"; } else { return "Sawtooth OFF";}
        };
        // Slider KIJIMI_NOISE_VCO_2
        sliderKIJIMI_NOISE_VCO_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_NOISE_VCO_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_NOISE_VCO_2.setLookAndFeel (&graySlider);
        sliderKIJIMI_NOISE_VCO_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_NOISE_VCO_2);
        sliderAttachmentKIJIMI_NOISE_VCO_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_NOISE_VCO_2", sliderKIJIMI_NOISE_VCO_2));
        sliderKIJIMI_NOISE_VCO_2.textFromValueFunction = [](double value) {
            return String::formatted("Noise: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_HPF_VCF_2
        sliderKIJIMI_HPF_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_HPF_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_HPF_VCF_2.setLookAndFeel (&greenSlider);
        sliderKIJIMI_HPF_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_HPF_VCF_2);
        sliderAttachmentKIJIMI_HPF_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_HPF_VCF_2", sliderKIJIMI_HPF_VCF_2));
        sliderKIJIMI_HPF_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("HPF: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_RESh_VCF_2
        sliderKIJIMI_RESh_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_RESh_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_RESh_VCF_2.setLookAndFeel (&redSlider);
        sliderKIJIMI_RESh_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_RESh_VCF_2);
        sliderAttachmentKIJIMI_RESh_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_RESh_VCF_2", sliderKIJIMI_RESh_VCF_2));
        sliderKIJIMI_RESh_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("RESh: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LPF_VCF_2
        sliderKIJIMI_LPF_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_LPF_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LPF_VCF_2.setLookAndFeel (&greenSlider);
        sliderKIJIMI_LPF_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LPF_VCF_2);
        sliderAttachmentKIJIMI_LPF_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LPF_VCF_2", sliderKIJIMI_LPF_VCF_2));
        sliderKIJIMI_LPF_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("LPF: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_RESl_VCF_2
        sliderKIJIMI_RESl_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_RESl_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_RESl_VCF_2.setLookAndFeel (&redSlider);
        sliderKIJIMI_RESl_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_RESl_VCF_2);
        sliderAttachmentKIJIMI_RESl_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_RESl_VCF_2", sliderKIJIMI_RESl_VCF_2));
        sliderKIJIMI_RESl_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("RESl: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_IL_VCF_2
        sliderKIJIMI_IL_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_IL_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_IL_VCF_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_IL_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_IL_VCF_2);
        sliderAttachmentKIJIMI_IL_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_IL_VCF_2", sliderKIJIMI_IL_VCF_2));
        sliderKIJIMI_IL_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("VCF IL: %.2f%", -5.0 * value / 127.0);
        };
        // Slider KIJIMI_AL_VCF_2
        sliderKIJIMI_AL_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_AL_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AL_VCF_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_AL_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AL_VCF_2);
        sliderAttachmentKIJIMI_AL_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AL_VCF_2", sliderKIJIMI_AL_VCF_2));
        sliderKIJIMI_AL_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("VCF AL: %.2f%", 5.0 * value / 127.0);
        };
        // Slider KIJIMI_A_VCF_2
        sliderKIJIMI_A_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_A_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_A_VCF_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_A_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_A_VCF_2);
        sliderAttachmentKIJIMI_A_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_A_VCF_2", sliderKIJIMI_A_VCF_2));
        sliderKIJIMI_A_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("VCF A: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_D_VCF_2
        sliderKIJIMI_D_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_D_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_D_VCF_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_D_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_D_VCF_2);
        sliderAttachmentKIJIMI_D_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_D_VCF_2", sliderKIJIMI_D_VCF_2));
        sliderKIJIMI_D_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("VCF D: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_R_VCF_2
        sliderKIJIMI_R_VCF_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_R_VCF_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_R_VCF_2.setLookAndFeel (&yellowSlider);
        sliderKIJIMI_R_VCF_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_R_VCF_2);
        sliderAttachmentKIJIMI_R_VCF_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_R_VCF_2", sliderKIJIMI_R_VCF_2));
        sliderKIJIMI_R_VCF_2.textFromValueFunction = [](double value) {
            return String::formatted("VCF R: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_VCF_VCA_2
        sliderKIJIMI_VCF_VCA_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_VCF_VCA_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_VCA_2.setLookAndFeel (&graySlider);
        sliderKIJIMI_VCF_VCA_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_VCA_2);
        sliderAttachmentKIJIMI_VCF_VCA_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_VCA_2", sliderKIJIMI_VCF_VCA_2));
        sliderKIJIMI_VCF_VCA_2.textFromValueFunction = [](double value) {
            return String::formatted("VCF Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_SINE__VCA_2
        sliderKIJIMI_SINE__VCA_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SINE__VCA_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SINE__VCA_2.setLookAndFeel (&graySlider);
        sliderKIJIMI_SINE__VCA_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SINE__VCA_2);
        sliderAttachmentKIJIMI_SINE__VCA_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SINE__VCA_2", sliderKIJIMI_SINE__VCA_2));
        sliderKIJIMI_SINE__VCA_2.textFromValueFunction = [](double value) {
            return String::formatted("Sine Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_A_VCA_2
        sliderKIJIMI_A_VCA_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_A_VCA_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_A_VCA_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_A_VCA_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_A_VCA_2);
        sliderAttachmentKIJIMI_A_VCA_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_A_VCA_2", sliderKIJIMI_A_VCA_2));
        sliderKIJIMI_A_VCA_2.textFromValueFunction = [](double value) {
            return String::formatted("VCA A: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_D_VCA_2
        sliderKIJIMI_D_VCA_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_D_VCA_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_D_VCA_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_D_VCA_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_D_VCA_2);
        sliderAttachmentKIJIMI_D_VCA_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_D_VCA_2", sliderKIJIMI_D_VCA_2));
        sliderKIJIMI_D_VCA_2.textFromValueFunction = [](double value) {
            return String::formatted("VCA D: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_S_VCA_2
        sliderKIJIMI_S_VCA_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_S_VCA_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_S_VCA_2.setLookAndFeel (&blackSlider);
        sliderKIJIMI_S_VCA_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_S_VCA_2);
        sliderAttachmentKIJIMI_S_VCA_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_S_VCA_2", sliderKIJIMI_S_VCA_2));
        sliderKIJIMI_S_VCA_2.textFromValueFunction = [](double value) {
            return String::formatted("VCA S: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_R_VCA_2
        sliderKIJIMI_R_VCA_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_R_VCA_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_R_VCA_2.setLookAndFeel (&yellowSlider);
        sliderKIJIMI_R_VCA_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_R_VCA_2);
        sliderAttachmentKIJIMI_R_VCA_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_R_VCA_2", sliderKIJIMI_R_VCA_2));
        sliderKIJIMI_R_VCA_2.textFromValueFunction = [](double value) {
            return String::formatted("VCA R: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LEVEL_VCA_2
        sliderKIJIMI_LEVEL_VCA_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_LEVEL_VCA_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LEVEL_VCA_2.setLookAndFeel (&graySlider);
        sliderKIJIMI_LEVEL_VCA_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LEVEL_VCA_2);
        sliderAttachmentKIJIMI_LEVEL_VCA_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEVEL_VCA_2", sliderKIJIMI_LEVEL_VCA_2));
        sliderKIJIMI_LEVEL_VCA_2.textFromValueFunction = [](double value) {
            return String::formatted("Channel Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_INIT_BR_TOUCH_2
        sliderKIJIMI_INIT_BR_TOUCH_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_INIT_BR_TOUCH_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_INIT_BR_TOUCH_2.setLookAndFeel (&greenSlider);
        sliderKIJIMI_INIT_BR_TOUCH_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_INIT_BR_TOUCH_2);
        sliderAttachmentKIJIMI_INIT_BR_TOUCH_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_INIT_BR_TOUCH_2", sliderKIJIMI_INIT_BR_TOUCH_2));
        sliderKIJIMI_INIT_BR_TOUCH_2.textFromValueFunction = [](double value) {
            return String::formatted("Initial Brilliance: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_INIT_LEV_TOUCH_2
        sliderKIJIMI_INIT_LEV_TOUCH_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_INIT_LEV_TOUCH_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_INIT_LEV_TOUCH_2.setLookAndFeel (&graySlider);
        sliderKIJIMI_INIT_LEV_TOUCH_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_INIT_LEV_TOUCH_2);
        sliderAttachmentKIJIMI_INIT_LEV_TOUCH_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_INIT_LEV_TOUCH_2", sliderKIJIMI_INIT_LEV_TOUCH_2));
        sliderKIJIMI_INIT_LEV_TOUCH_2.textFromValueFunction = [](double value) {
            return String::formatted("Initial Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_AT_BR_TOUCH_2
        sliderKIJIMI_AT_BR_TOUCH_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_AT_BR_TOUCH_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_BR_TOUCH_2.setLookAndFeel (&greenSlider);
        sliderKIJIMI_AT_BR_TOUCH_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_BR_TOUCH_2);
        sliderAttachmentKIJIMI_AT_BR_TOUCH_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_BR_TOUCH_2", sliderKIJIMI_AT_BR_TOUCH_2));
        sliderKIJIMI_AT_BR_TOUCH_2.textFromValueFunction = [](double value) {
            return String::formatted("After Brilliance: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_AT_LEV_TOUCH_2
        sliderKIJIMI_AT_LEV_TOUCH_2.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_AT_LEV_TOUCH_2.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_LEV_TOUCH_2.setLookAndFeel (&graySlider);
        sliderKIJIMI_AT_LEV_TOUCH_2.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_LEV_TOUCH_2);
        sliderAttachmentKIJIMI_AT_LEV_TOUCH_2.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_LEV_TOUCH_2", sliderKIJIMI_AT_LEV_TOUCH_2));
        sliderKIJIMI_AT_LEV_TOUCH_2.textFromValueFunction = [](double value) {
            return String::formatted("After Level: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_COARSE_PITCH
        sliderKIJIMI_COARSE_PITCH.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_COARSE_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_COARSE_PITCH.setLookAndFeel (&blackSlider);
        sliderKIJIMI_COARSE_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_COARSE_PITCH);
        sliderAttachmentKIJIMI_COARSE_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_COARSE_PITCH", sliderKIJIMI_COARSE_PITCH));
        sliderKIJIMI_COARSE_PITCH.textFromValueFunction = [](double value) {
            return String::formatted("Pitch Coarse: %.0f%%", (-200.0 * ((value - 64.0) / 127.0) -0.5));  // Needs last -0.5 to match [-100, +100]
        };
        // Slider KIJIMI_FINE_PITCH
        sliderKIJIMI_FINE_PITCH.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_FINE_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_FINE_PITCH.setLookAndFeel (&blackSlider);
        sliderKIJIMI_FINE_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_FINE_PITCH);
        sliderAttachmentKIJIMI_FINE_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_FINE_PITCH", sliderKIJIMI_FINE_PITCH));
        sliderKIJIMI_FINE_PITCH.textFromValueFunction = [](double value) {
            return String::formatted("Pitch Fine: %.0f%%", (-200.0 * ((value - 64.0) / 127.0) -0.5));  // Needs last -0.5 to match [-100, +100]
        };
        // Slider KIJIMI_DETUNE_CH2_PITCH
        sliderKIJIMI_DETUNE_CH2_PITCH.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_DETUNE_CH2_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_DETUNE_CH2_PITCH.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_DETUNE_CH2_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_DETUNE_CH2_PITCH);
        sliderAttachmentKIJIMI_DETUNE_CH2_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_DETUNE_CH2_PITCH", sliderKIJIMI_DETUNE_CH2_PITCH));
        sliderKIJIMI_DETUNE_CH2_PITCH.textFromValueFunction = [](double value) {
            return String::formatted("Detune Ch II: %.0f%%", (-200.0 * ((value - 64.0) / 127.0) -0.5));  // Needs last -0.5 to match [-100, +100]
        };
        // Slider KIJIMI_FEET_1_FEET
        sliderKIJIMI_FEET_1_FEET.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_FEET_1_FEET.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_FEET_1_FEET.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_FEET_1_FEET.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_FEET_1_FEET);
        sliderAttachmentKIJIMI_FEET_1_FEET.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_FEET_1_FEET", sliderKIJIMI_FEET_1_FEET));
        sliderKIJIMI_FEET_1_FEET.setRange(sliderKIJIMI_FEET_1_FEET.getMinimum(), sliderKIJIMI_FEET_1_FEET.getMaximum(), sliderKIJIMI_FEET_1_FEET.getMaximum()/5);
        sliderKIJIMI_FEET_1_FEET.textFromValueFunction = [](double value) {
            float midiValue = 127.0 - value;
            if (midiValue >= 0 && midiValue < 22){
                return "Feet I: 16'";
            } else if (midiValue >= 22 && midiValue < 43){
                return "Feet I: 8'";
            } else if (midiValue >= 43 && midiValue < 64){
                return "Feet I: 5 1/3'";
            } else if (midiValue >= 64 && midiValue < 85){
                return "Feet I: 4'";
            } else if (midiValue >= 85 && midiValue < 106){
                return "Feet I: 2 2/3'";
            } else {
                return "Feet I: 2'";
            }
        };
        // Slider KIJIMI_FEET_2_FEET
        sliderKIJIMI_FEET_2_FEET.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_FEET_2_FEET.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_FEET_2_FEET.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_FEET_2_FEET.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_FEET_2_FEET);
        sliderAttachmentKIJIMI_FEET_2_FEET.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_FEET_2_FEET", sliderKIJIMI_FEET_2_FEET));
        sliderKIJIMI_FEET_2_FEET.setRange(sliderKIJIMI_FEET_2_FEET.getMinimum(), sliderKIJIMI_FEET_2_FEET.getMaximum(), sliderKIJIMI_FEET_2_FEET.getMaximum()/5);
        sliderKIJIMI_FEET_2_FEET.textFromValueFunction = [](double value) {
            float midiValue = 127.0 - value;
            if (midiValue >= 0 && midiValue < 22){
                return "Feet II: 16'";
            } else if (midiValue >= 22 && midiValue < 43){
                return "Feet II: 8'";
            } else if (midiValue >= 43 && midiValue < 64){
                return "Feet II: 5 1/3'";
            } else if (midiValue >= 64 && midiValue < 85){
                return "Feet II: 4'";
            } else if (midiValue >= 85 && midiValue < 106){
                return "Feet II: 2 2/3'";
            } else {
                return "Feet II: 2'";
            }
        };
        // Slider KIJIMI_FUNCTION_SUB_OSC
        sliderKIJIMI_FUNCTION_SUB_OSC.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_FUNCTION_SUB_OSC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_FUNCTION_SUB_OSC.setLookAndFeel (&blackSlider);
        sliderKIJIMI_FUNCTION_SUB_OSC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_FUNCTION_SUB_OSC);
        sliderAttachmentKIJIMI_FUNCTION_SUB_OSC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_FUNCTION_SUB_OSC", sliderKIJIMI_FUNCTION_SUB_OSC));
        sliderKIJIMI_FUNCTION_SUB_OSC.setRange(sliderKIJIMI_FUNCTION_SUB_OSC.getMinimum(), sliderKIJIMI_FUNCTION_SUB_OSC.getMaximum(), sliderKIJIMI_FUNCTION_SUB_OSC.getMaximum()/5);
        sliderKIJIMI_FUNCTION_SUB_OSC.textFromValueFunction = [](double value) {
            float midiValue = 127.0 - value;
            if (midiValue >= 0 && midiValue < 22){
                return "Sub Osc Function: Sin";
            } else if (midiValue >= 22 && midiValue < 43){
                return "Sub Osc Function: Tri";
            } else if (midiValue >= 43 && midiValue < 64){
                return "Sub Osc Function: Inv Tri";
            } else if (midiValue >= 64 && midiValue < 85){
                return "Sub Osc Function: Sqr";
            } else if (midiValue >= 85 && midiValue < 106){
                return "Sub Osc Function: Rnd";
            } else {
                return "Sub Osc Function: Ext";
            }
        };
        // Slider KIJIMI_SPEED_SUB_OSC
        sliderKIJIMI_SPEED_SUB_OSC.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SPEED_SUB_OSC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SPEED_SUB_OSC.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_SPEED_SUB_OSC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SPEED_SUB_OSC);
        sliderAttachmentKIJIMI_SPEED_SUB_OSC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SPEED_SUB_OSC", sliderKIJIMI_SPEED_SUB_OSC));
        sliderKIJIMI_SPEED_SUB_OSC.textFromValueFunction = [](double value) {
            return String::formatted("Sub Osc Speed: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_VCO_SUB_OSC
        sliderKIJIMI_VCO_SUB_OSC.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_VCO_SUB_OSC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO_SUB_OSC.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_VCO_SUB_OSC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO_SUB_OSC);
        sliderAttachmentKIJIMI_VCO_SUB_OSC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO_SUB_OSC", sliderKIJIMI_VCO_SUB_OSC));
        sliderKIJIMI_VCO_SUB_OSC.textFromValueFunction = [](double value) {
            return String::formatted("Sub Osc VCO Amount: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_VCF_SUB_OSC
        sliderKIJIMI_VCF_SUB_OSC.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_VCF_SUB_OSC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_SUB_OSC.setLookAndFeel (&greenSlider);
        sliderKIJIMI_VCF_SUB_OSC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_SUB_OSC);
        sliderAttachmentKIJIMI_VCF_SUB_OSC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_SUB_OSC", sliderKIJIMI_VCF_SUB_OSC));
        sliderKIJIMI_VCF_SUB_OSC.textFromValueFunction = [](double value) {
            return String::formatted("Sub Osc VCF Amount: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_VCA_SUB_OSC
        sliderKIJIMI_VCA_SUB_OSC.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_VCA_SUB_OSC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCA_SUB_OSC.setLookAndFeel (&graySlider);
        sliderKIJIMI_VCA_SUB_OSC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCA_SUB_OSC);
        sliderAttachmentKIJIMI_VCA_SUB_OSC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCA_SUB_OSC", sliderKIJIMI_VCA_SUB_OSC));
        sliderKIJIMI_VCA_SUB_OSC.textFromValueFunction = [](double value) {
            return String::formatted("Sub Osc VCA Amount: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_MIX
        sliderKIJIMI_MIX.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_MIX.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MIX.setLookAndFeel (&blackSlider);
        sliderKIJIMI_MIX.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MIX);
        sliderAttachmentKIJIMI_MIX.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MIX", sliderKIJIMI_MIX));
        sliderKIJIMI_MIX.textFromValueFunction = [](double value) {
            float percentageCh1 = 100.0 * value / 126.0;
	        float percentageCh2 = 100.0 - 100.0 * value / 126.0;
	        return String::formatted("Mix: %.0f%% I - %.0f%% II", percentageCh1, percentageCh2);
        };
        // Slider KIJIMI_BRILL
        sliderKIJIMI_BRILL.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_BRILL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_BRILL.setLookAndFeel (&greenSlider);
        sliderKIJIMI_BRILL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_BRILL);
        sliderAttachmentKIJIMI_BRILL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_BRILL", sliderKIJIMI_BRILL));
        sliderKIJIMI_BRILL.textFromValueFunction = [](double value) {
            return String::formatted("Brilliance: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_RESSO
        sliderKIJIMI_RESSO.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_RESSO.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_RESSO.setLookAndFeel (&redSlider);
        sliderKIJIMI_RESSO.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_RESSO);
        sliderAttachmentKIJIMI_RESSO.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_RESSO", sliderKIJIMI_RESSO));
        sliderKIJIMI_RESSO.textFromValueFunction = [](double value) {
            return String::formatted("Ressonance: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_INITIAL_TOUCH
        sliderKIJIMI_INITIAL_TOUCH.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_INITIAL_TOUCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_INITIAL_TOUCH.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_INITIAL_TOUCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_INITIAL_TOUCH);
        sliderAttachmentKIJIMI_INITIAL_TOUCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_INITIAL_TOUCH", sliderKIJIMI_INITIAL_TOUCH));
        sliderKIJIMI_INITIAL_TOUCH.textFromValueFunction = [](double value) {
            return String::formatted("Initial Pitch Bend: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_SPEED_TOUCH
        sliderKIJIMI_SPEED_TOUCH.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SPEED_TOUCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SPEED_TOUCH.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_SPEED_TOUCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SPEED_TOUCH);
        sliderAttachmentKIJIMI_SPEED_TOUCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SPEED_TOUCH", sliderKIJIMI_SPEED_TOUCH));
        sliderKIJIMI_SPEED_TOUCH.textFromValueFunction = [](double value) {
            return String::formatted("Touch Response Sub Osc Speed: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_VCO_TOUCH
        sliderKIJIMI_VCO_TOUCH.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_VCO_TOUCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO_TOUCH.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_VCO_TOUCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO_TOUCH);
        sliderAttachmentKIJIMI_VCO_TOUCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO_TOUCH", sliderKIJIMI_VCO_TOUCH));
        sliderKIJIMI_VCO_TOUCH.textFromValueFunction = [](double value) {
            return String::formatted("Touch Response Sub Osc VCO Amount: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_VCF_TOUCH
        sliderKIJIMI_VCF_TOUCH.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_VCF_TOUCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_TOUCH.setLookAndFeel (&greenSlider);
        sliderKIJIMI_VCF_TOUCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_TOUCH);
        sliderAttachmentKIJIMI_VCF_TOUCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_TOUCH", sliderKIJIMI_VCF_TOUCH));
        sliderKIJIMI_VCF_TOUCH.textFromValueFunction = [](double value) {
            return String::formatted("Touch Response Sub Osc VCF Amount: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_BR_LOW_KBRD
        sliderKIJIMI_BR_LOW_KBRD.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_BR_LOW_KBRD.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_BR_LOW_KBRD.setLookAndFeel (&greenSlider);
        sliderKIJIMI_BR_LOW_KBRD.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_BR_LOW_KBRD);
        sliderAttachmentKIJIMI_BR_LOW_KBRD.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_BR_LOW_KBRD", sliderKIJIMI_BR_LOW_KBRD));
        sliderKIJIMI_BR_LOW_KBRD.textFromValueFunction = [](double value) {
            return String::formatted("Brilliance Low: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_BR_HIGH_KBRD
        sliderKIJIMI_BR_HIGH_KBRD.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_BR_HIGH_KBRD.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_BR_HIGH_KBRD.setLookAndFeel (&greenSlider);
        sliderKIJIMI_BR_HIGH_KBRD.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_BR_HIGH_KBRD);
        sliderAttachmentKIJIMI_BR_HIGH_KBRD.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_BR_HIGH_KBRD", sliderKIJIMI_BR_HIGH_KBRD));
        sliderKIJIMI_BR_HIGH_KBRD.textFromValueFunction = [](double value) {
            return String::formatted("Brilliance High: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LEV_LOW_KBRD
        sliderKIJIMI_LEV_LOW_KBRD.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_LEV_LOW_KBRD.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LEV_LOW_KBRD.setLookAndFeel (&graySlider);
        sliderKIJIMI_LEV_LOW_KBRD.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LEV_LOW_KBRD);
        sliderAttachmentKIJIMI_LEV_LOW_KBRD.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEV_LOW_KBRD", sliderKIJIMI_LEV_LOW_KBRD));
        sliderKIJIMI_LEV_LOW_KBRD.textFromValueFunction = [](double value) {
            return String::formatted("Level Low: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_LEV_HIGH_KBRD
        sliderKIJIMI_LEV_HIGH_KBRD.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_LEV_HIGH_KBRD.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LEV_HIGH_KBRD.setLookAndFeel (&graySlider);
        sliderKIJIMI_LEV_HIGH_KBRD.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LEV_HIGH_KBRD);
        sliderAttachmentKIJIMI_LEV_HIGH_KBRD.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LEV_HIGH_KBRD", sliderKIJIMI_LEV_HIGH_KBRD));
        sliderKIJIMI_LEV_HIGH_KBRD.textFromValueFunction = [](double value) {
            return String::formatted("Level High: %.1f", 10.0 - 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_GLIDE_MODE_GLIDE
        sliderKIJIMI_GLIDE_MODE_GLIDE.setSliderStyle (Slider::LinearHorizontal);
        sliderKIJIMI_GLIDE_MODE_GLIDE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_GLIDE_MODE_GLIDE.setLookAndFeel (&blackSlider);
        sliderKIJIMI_GLIDE_MODE_GLIDE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_GLIDE_MODE_GLIDE);
        sliderAttachmentKIJIMI_GLIDE_MODE_GLIDE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_GLIDE_MODE_GLIDE", sliderKIJIMI_GLIDE_MODE_GLIDE));
        sliderKIJIMI_GLIDE_MODE_GLIDE.setRange(sliderKIJIMI_GLIDE_MODE_GLIDE.getMinimum(), sliderKIJIMI_GLIDE_MODE_GLIDE.getMaximum(), sliderKIJIMI_GLIDE_MODE_GLIDE.getMaximum()/2);
        sliderKIJIMI_GLIDE_MODE_GLIDE.textFromValueFunction = [](double value) {
            float midiValue = value;
            if (midiValue >= 0 && midiValue < 32){
                return "Glide Mode: Portamento";
            } else if (midiValue >= 32 && midiValue < 85){
                return "Glide Mode: None";
            } else {
                return "Glide Mode: Glissando";
            }
        };
        // Slider KIJIMI_GLIDE_TIME_GLIDE
        sliderKIJIMI_GLIDE_TIME_GLIDE.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_GLIDE_TIME_GLIDE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_GLIDE_TIME_GLIDE.setLookAndFeel (&whiteSlider);
        sliderKIJIMI_GLIDE_TIME_GLIDE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_GLIDE_TIME_GLIDE);
        sliderAttachmentKIJIMI_GLIDE_TIME_GLIDE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_GLIDE_TIME_GLIDE", sliderKIJIMI_GLIDE_TIME_GLIDE));
        sliderKIJIMI_GLIDE_TIME_GLIDE.textFromValueFunction = [](double value) {
            return String::formatted("Glide Time: %.1f", 10.0 * (value / 127.0));
        };
        // Slider KIJIMI_SUSTAIN_MODE
        sliderKIJIMI_SUSTAIN_MODE.setSliderStyle (Slider::LinearHorizontal);
        sliderKIJIMI_SUSTAIN_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SUSTAIN_MODE.setLookAndFeel (&blackSlider);
        sliderKIJIMI_SUSTAIN_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SUSTAIN_MODE);
        sliderAttachmentKIJIMI_SUSTAIN_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SUSTAIN_MODE", sliderKIJIMI_SUSTAIN_MODE));
        sliderKIJIMI_SUSTAIN_MODE.setRange(sliderKIJIMI_SUSTAIN_MODE.getMinimum(), sliderKIJIMI_SUSTAIN_MODE.getMaximum(), sliderKIJIMI_SUSTAIN_MODE.getMaximum());
        sliderKIJIMI_SUSTAIN_MODE.textFromValueFunction = [](double value) {
            if (value <= 64){ return "Sustain Mode: I"; } else { return "Sustain Mode: II";}
        };
        // Slider KIJIMI_SUSTAIN_TIME
        sliderKIJIMI_SUSTAIN_TIME.setSliderStyle (Slider::LinearVertical);
        sliderKIJIMI_SUSTAIN_TIME.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SUSTAIN_TIME.setLookAndFeel (&yellowSlider);
        sliderKIJIMI_SUSTAIN_TIME.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SUSTAIN_TIME);
        sliderAttachmentKIJIMI_SUSTAIN_TIME.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SUSTAIN_TIME", sliderKIJIMI_SUSTAIN_TIME));
        sliderKIJIMI_SUSTAIN_TIME.textFromValueFunction = [](double value) {
            return String::formatted("Sustain Time: %.1f", 10.0 * (value / 127.0));
        };
        // --> End auto-generated code B
    }
    
    void paint (Graphics& g) override
    {
        Image background = ImageCache::getFromMemory (BinaryData::KIJIMI_PANEL_OVERLAY_png, BinaryData::KIJIMI_PANEL_OVERLAY_pngSize);
        g.drawImage (background, getLocalBounds().toFloat());
    }

    void resized() override
    {
        // Position sliders
        // --> Start auto-generated code C
        sliderKIJIMI_SPEED_VCO_1.setBounds (0.000 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_SPEED_VCO_1
        sliderKIJIMI_PWM_VCO_1.setBounds (0.036 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_PWM_VCO_1
        sliderKIJIMI_PW_VCO_1.setBounds (0.071 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_PW_VCO_1
        sliderKIJIMI_SQR_VCO_1.setBounds (0.107 * getWidth(), 0.100 * getHeight(), 0.036 * getWidth(), 0.134 * getHeight()); // Slider KIJIMI_SQR_VCO_1
        sliderKIJIMI_SAW_VCO_1.setBounds (0.143 * getWidth(), 0.100 * getHeight(), 0.036 * getWidth(), 0.134 * getHeight()); // Slider KIJIMI_SAW_VCO_1
        sliderKIJIMI_NOISE_VCO_1.setBounds (0.179 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_NOISE_VCO_1
        sliderKIJIMI_HPF_VCF_1.setBounds (0.236 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_HPF_VCF_1
        sliderKIJIMI_RESh_VCF_1.setBounds (0.272 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_RESh_VCF_1
        sliderKIJIMI_LPF_VCF_1.setBounds (0.308 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_LPF_VCF_1
        sliderKIJIMI_RESl_VCF_1.setBounds (0.343 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_RESl_VCF_1
        sliderKIJIMI_IL_VCF_1.setBounds (0.379 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_IL_VCF_1
        sliderKIJIMI_AL_VCF_1.setBounds (0.415 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_AL_VCF_1
        sliderKIJIMI_A_VCF_1.setBounds (0.451 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_A_VCF_1
        sliderKIJIMI_D_VCF_1.setBounds (0.486 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_D_VCF_1
        sliderKIJIMI_R_VCF_1.setBounds (0.522 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_R_VCF_1
        sliderKIJIMI_VCF_VCA_1.setBounds (0.580 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_VCF_VCA_1
        sliderKIJIMI_SINE__VCA_1.setBounds (0.615 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_SINE__VCA_1
        sliderKIJIMI_A_VCA_1.setBounds (0.651 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_A_VCA_1
        sliderKIJIMI_D_VCA_1.setBounds (0.687 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_D_VCA_1
        sliderKIJIMI_S_VCA_1.setBounds (0.723 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_S_VCA_1
        sliderKIJIMI_R_VCA_1.setBounds (0.758 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_R_VCA_1
        sliderKIJIMI_LEVEL_VCA_1.setBounds (0.794 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_LEVEL_VCA_1
        sliderKIJIMI_INIT_BR_TOUCH_1.setBounds (0.852 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_INIT_BR_TOUCH_1
        sliderKIJIMI_INIT_LEV_TOUCH_1.setBounds (0.888 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_INIT_LEV_TOUCH_1
        sliderKIJIMI_AT_BR_TOUCH_1.setBounds (0.923 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_AT_BR_TOUCH_1
        sliderKIJIMI_AT_LEV_TOUCH_1.setBounds (0.959 * getWidth(), 0.000 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_AT_LEV_TOUCH_1
        sliderKIJIMI_SPEED_VCO_2.setBounds (0.000 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_SPEED_VCO_2
        sliderKIJIMI_PWM_VCO_2.setBounds (0.036 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_PWM_VCO_2
        sliderKIJIMI_PW_VCO_2.setBounds (0.071 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_PW_VCO_2
        sliderKIJIMI_SQR_VCO_2.setBounds (0.107 * getWidth(), 0.434 * getHeight(), 0.036 * getWidth(), 0.134 * getHeight()); // Slider KIJIMI_SQR_VCO_2
        sliderKIJIMI_SAW_VCO_2.setBounds (0.143 * getWidth(), 0.434 * getHeight(), 0.036 * getWidth(), 0.134 * getHeight()); // Slider KIJIMI_SAW_VCO_2
        sliderKIJIMI_NOISE_VCO_2.setBounds (0.179 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_NOISE_VCO_2
        sliderKIJIMI_HPF_VCF_2.setBounds (0.236 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_HPF_VCF_2
        sliderKIJIMI_RESh_VCF_2.setBounds (0.272 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_RESh_VCF_2
        sliderKIJIMI_LPF_VCF_2.setBounds (0.308 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_LPF_VCF_2
        sliderKIJIMI_RESl_VCF_2.setBounds (0.343 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_RESl_VCF_2
        sliderKIJIMI_IL_VCF_2.setBounds (0.379 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_IL_VCF_2
        sliderKIJIMI_AL_VCF_2.setBounds (0.415 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_AL_VCF_2
        sliderKIJIMI_A_VCF_2.setBounds (0.451 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_A_VCF_2
        sliderKIJIMI_D_VCF_2.setBounds (0.486 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_D_VCF_2
        sliderKIJIMI_R_VCF_2.setBounds (0.522 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_R_VCF_2
        sliderKIJIMI_VCF_VCA_2.setBounds (0.580 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_VCF_VCA_2
        sliderKIJIMI_SINE__VCA_2.setBounds (0.615 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_SINE__VCA_2
        sliderKIJIMI_A_VCA_2.setBounds (0.651 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_A_VCA_2
        sliderKIJIMI_D_VCA_2.setBounds (0.687 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_D_VCA_2
        sliderKIJIMI_S_VCA_2.setBounds (0.723 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_S_VCA_2
        sliderKIJIMI_R_VCA_2.setBounds (0.758 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_R_VCA_2
        sliderKIJIMI_LEVEL_VCA_2.setBounds (0.794 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_LEVEL_VCA_2
        sliderKIJIMI_INIT_BR_TOUCH_2.setBounds (0.852 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_INIT_BR_TOUCH_2
        sliderKIJIMI_INIT_LEV_TOUCH_2.setBounds (0.888 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_INIT_LEV_TOUCH_2
        sliderKIJIMI_AT_BR_TOUCH_2.setBounds (0.923 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_AT_BR_TOUCH_2
        sliderKIJIMI_AT_LEV_TOUCH_2.setBounds (0.959 * getWidth(), 0.334 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_AT_LEV_TOUCH_2
        sliderKIJIMI_COARSE_PITCH.setBounds (0.000 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_COARSE_PITCH
        sliderKIJIMI_FINE_PITCH.setBounds (0.036 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_FINE_PITCH
        sliderKIJIMI_DETUNE_CH2_PITCH.setBounds (0.071 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_DETUNE_CH2_PITCH
        sliderKIJIMI_FEET_1_FEET.setBounds (0.129 * getWidth(), 0.668 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_FEET_1_FEET
        sliderKIJIMI_FEET_2_FEET.setBounds (0.165 * getWidth(), 0.668 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_FEET_2_FEET
        sliderKIJIMI_FUNCTION_SUB_OSC.setBounds (0.223 * getWidth(), 0.668 * getHeight(), 0.036 * getWidth(), 0.334 * getHeight()); // Slider KIJIMI_FUNCTION_SUB_OSC
        sliderKIJIMI_SPEED_SUB_OSC.setBounds (0.258 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_SPEED_SUB_OSC
        sliderKIJIMI_VCO_SUB_OSC.setBounds (0.294 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_VCO_SUB_OSC
        sliderKIJIMI_VCF_SUB_OSC.setBounds (0.330 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_VCF_SUB_OSC
        sliderKIJIMI_VCA_SUB_OSC.setBounds (0.366 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_VCA_SUB_OSC
        sliderKIJIMI_MIX.setBounds (0.423 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_MIX
        sliderKIJIMI_BRILL.setBounds (0.459 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_BRILL
        sliderKIJIMI_RESSO.setBounds (0.495 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_RESSO
        sliderKIJIMI_INITIAL_TOUCH.setBounds (0.553 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_INITIAL_TOUCH
        sliderKIJIMI_SPEED_TOUCH.setBounds (0.588 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_SPEED_TOUCH
        sliderKIJIMI_VCO_TOUCH.setBounds (0.624 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_VCO_TOUCH
        sliderKIJIMI_VCF_TOUCH.setBounds (0.660 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_VCF_TOUCH
        sliderKIJIMI_BR_LOW_KBRD.setBounds (0.718 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_BR_LOW_KBRD
        sliderKIJIMI_BR_HIGH_KBRD.setBounds (0.753 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_BR_HIGH_KBRD
        sliderKIJIMI_LEV_LOW_KBRD.setBounds (0.789 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_LEV_LOW_KBRD
        sliderKIJIMI_LEV_HIGH_KBRD.setBounds (0.825 * getWidth(), 0.710 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_LEV_HIGH_KBRD
        sliderKIJIMI_GLIDE_MODE_GLIDE.setBounds (0.883 * getWidth(), 0.851 * getHeight(), 0.061 * getWidth(), 0.167 * getHeight()); // Slider KIJIMI_GLIDE_MODE_GLIDE
        sliderKIJIMI_GLIDE_TIME_GLIDE.setBounds (0.896 * getWidth(), 0.668 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_GLIDE_TIME_GLIDE
        sliderKIJIMI_SUSTAIN_MODE.setBounds (0.954 * getWidth(), 0.851 * getHeight(), 0.046 * getWidth(), 0.167 * getHeight()); // Slider KIJIMI_SUSTAIN_MODE
        sliderKIJIMI_SUSTAIN_TIME.setBounds (0.959 * getWidth(), 0.668 * getHeight(), 0.036 * getWidth(), 0.250 * getHeight()); // Slider KIJIMI_SUSTAIN_TIME
        // --> End auto-generated code C
    }
    
private:
    KijimitimbreSpaceAudioProcessor* processor;
    
    // Look and feel objects
    CustomLookAndFeel yellowSlider;
    CustomLookAndFeel greenSlider;
    CustomLookAndFeel blackSlider;
    CustomLookAndFeel redSlider;
    CustomLookAndFeel whiteSlider;
    CustomLookAndFeel graySlider;
    
    // Slider declarations
    // --> Start auto-generated code A
    Slider sliderKIJIMI_SPEED_VCO_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SPEED_VCO_1;
    Slider sliderKIJIMI_PWM_VCO_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_PWM_VCO_1;
    Slider sliderKIJIMI_PW_VCO_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_PW_VCO_1;
    Slider sliderKIJIMI_SQR_VCO_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SQR_VCO_1;
    Slider sliderKIJIMI_SAW_VCO_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SAW_VCO_1;
    Slider sliderKIJIMI_NOISE_VCO_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_NOISE_VCO_1;
    Slider sliderKIJIMI_HPF_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_HPF_VCF_1;
    Slider sliderKIJIMI_RESh_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_RESh_VCF_1;
    Slider sliderKIJIMI_LPF_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LPF_VCF_1;
    Slider sliderKIJIMI_RESl_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_RESl_VCF_1;
    Slider sliderKIJIMI_IL_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_IL_VCF_1;
    Slider sliderKIJIMI_AL_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AL_VCF_1;
    Slider sliderKIJIMI_A_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_A_VCF_1;
    Slider sliderKIJIMI_D_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_D_VCF_1;
    Slider sliderKIJIMI_R_VCF_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_R_VCF_1;
    Slider sliderKIJIMI_VCF_VCA_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_VCA_1;
    Slider sliderKIJIMI_SINE__VCA_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SINE__VCA_1;
    Slider sliderKIJIMI_A_VCA_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_A_VCA_1;
    Slider sliderKIJIMI_D_VCA_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_D_VCA_1;
    Slider sliderKIJIMI_S_VCA_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_S_VCA_1;
    Slider sliderKIJIMI_R_VCA_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_R_VCA_1;
    Slider sliderKIJIMI_LEVEL_VCA_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LEVEL_VCA_1;
    Slider sliderKIJIMI_INIT_BR_TOUCH_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_INIT_BR_TOUCH_1;
    Slider sliderKIJIMI_INIT_LEV_TOUCH_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_INIT_LEV_TOUCH_1;
    Slider sliderKIJIMI_AT_BR_TOUCH_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_BR_TOUCH_1;
    Slider sliderKIJIMI_AT_LEV_TOUCH_1;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_LEV_TOUCH_1;
    Slider sliderKIJIMI_SPEED_VCO_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SPEED_VCO_2;
    Slider sliderKIJIMI_PWM_VCO_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_PWM_VCO_2;
    Slider sliderKIJIMI_PW_VCO_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_PW_VCO_2;
    Slider sliderKIJIMI_SQR_VCO_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SQR_VCO_2;
    Slider sliderKIJIMI_SAW_VCO_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SAW_VCO_2;
    Slider sliderKIJIMI_NOISE_VCO_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_NOISE_VCO_2;
    Slider sliderKIJIMI_HPF_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_HPF_VCF_2;
    Slider sliderKIJIMI_RESh_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_RESh_VCF_2;
    Slider sliderKIJIMI_LPF_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LPF_VCF_2;
    Slider sliderKIJIMI_RESl_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_RESl_VCF_2;
    Slider sliderKIJIMI_IL_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_IL_VCF_2;
    Slider sliderKIJIMI_AL_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AL_VCF_2;
    Slider sliderKIJIMI_A_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_A_VCF_2;
    Slider sliderKIJIMI_D_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_D_VCF_2;
    Slider sliderKIJIMI_R_VCF_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_R_VCF_2;
    Slider sliderKIJIMI_VCF_VCA_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_VCA_2;
    Slider sliderKIJIMI_SINE__VCA_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SINE__VCA_2;
    Slider sliderKIJIMI_A_VCA_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_A_VCA_2;
    Slider sliderKIJIMI_D_VCA_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_D_VCA_2;
    Slider sliderKIJIMI_S_VCA_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_S_VCA_2;
    Slider sliderKIJIMI_R_VCA_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_R_VCA_2;
    Slider sliderKIJIMI_LEVEL_VCA_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LEVEL_VCA_2;
    Slider sliderKIJIMI_INIT_BR_TOUCH_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_INIT_BR_TOUCH_2;
    Slider sliderKIJIMI_INIT_LEV_TOUCH_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_INIT_LEV_TOUCH_2;
    Slider sliderKIJIMI_AT_BR_TOUCH_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_BR_TOUCH_2;
    Slider sliderKIJIMI_AT_LEV_TOUCH_2;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_AT_LEV_TOUCH_2;
    Slider sliderKIJIMI_COARSE_PITCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_COARSE_PITCH;
    Slider sliderKIJIMI_FINE_PITCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_FINE_PITCH;
    Slider sliderKIJIMI_DETUNE_CH2_PITCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_DETUNE_CH2_PITCH;
    Slider sliderKIJIMI_FEET_1_FEET;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_FEET_1_FEET;
    Slider sliderKIJIMI_FEET_2_FEET;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_FEET_2_FEET;
    Slider sliderKIJIMI_FUNCTION_SUB_OSC;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_FUNCTION_SUB_OSC;
    Slider sliderKIJIMI_SPEED_SUB_OSC;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SPEED_SUB_OSC;
    Slider sliderKIJIMI_VCO_SUB_OSC;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO_SUB_OSC;
    Slider sliderKIJIMI_VCF_SUB_OSC;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_SUB_OSC;
    Slider sliderKIJIMI_VCA_SUB_OSC;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCA_SUB_OSC;
    Slider sliderKIJIMI_MIX;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MIX;
    Slider sliderKIJIMI_BRILL;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_BRILL;
    Slider sliderKIJIMI_RESSO;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_RESSO;
    Slider sliderKIJIMI_INITIAL_TOUCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_INITIAL_TOUCH;
    Slider sliderKIJIMI_SPEED_TOUCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SPEED_TOUCH;
    Slider sliderKIJIMI_VCO_TOUCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCO_TOUCH;
    Slider sliderKIJIMI_VCF_TOUCH;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_VCF_TOUCH;
    Slider sliderKIJIMI_BR_LOW_KBRD;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_BR_LOW_KBRD;
    Slider sliderKIJIMI_BR_HIGH_KBRD;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_BR_HIGH_KBRD;
    Slider sliderKIJIMI_LEV_LOW_KBRD;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LEV_LOW_KBRD;
    Slider sliderKIJIMI_LEV_HIGH_KBRD;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_LEV_HIGH_KBRD;
    Slider sliderKIJIMI_GLIDE_MODE_GLIDE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_GLIDE_MODE_GLIDE;
    Slider sliderKIJIMI_GLIDE_TIME_GLIDE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_GLIDE_TIME_GLIDE;
    Slider sliderKIJIMI_SUSTAIN_MODE;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SUSTAIN_MODE;
    Slider sliderKIJIMI_SUSTAIN_TIME;
    std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_SUSTAIN_TIME;
    // --> End auto-generated code A
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMIControlPanelComponent);
};
