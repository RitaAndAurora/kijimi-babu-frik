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


class KIJIMIBasePanelComponent: public Component

{
public:
    KIJIMIBasePanelComponent ()
    {
    }
    
    ~KIJIMIBasePanelComponent ()
    {
    }
    
    void initialize (BabuFrikAudioProcessor* p)
    {
        // Set processor object
        processor = p;
        
        // Initialize sliders and other objects in component
        initializeSliders();
        
        // Call some init configuration items
        configureControlsForADSR2ModMode();
        configureControlsForLFOModMode();
    }
    
    virtual void initializeSliders () {}
    
    virtual void configureControlsForADSR2ModModeCommon () {}
    virtual void configureControlsForADSR2ModModeIndividual () {}
    virtual void configureControlsForLFOModModeCommon () {}
    virtual void configureControlsForLFOModModeIndividual () {}
    
    void configureControlsForADSR2ModMode(){
        if (processor->getValueForAudioParameter("KIJIMI_ADSR_MOD_MODE") == 0){
            // ADSR mod mode = common
            configureControlsForADSR2ModModeCommon();
        } else {
            // ADSR mod mode = individual
            configureControlsForADSR2ModModeIndividual();
        }
    }
    
    void configureControlsForLFOModMode(){
        if (processor->getValueForAudioParameter("KIJIMI_LFO_MOD_MODE") == 0){
            // ADSR mod mode = common
            configureControlsForLFOModModeCommon();
        } else {
            // ADSR mod mode = individual
            configureControlsForLFOModModeIndividual();
        }
    }
    
    // Plugin processor reference
    BabuFrikAudioProcessor* processor;
    
    // Look and feel objects
    BabuFrikKnobLookAndFeel knobLookAndFeel;
    BabuFrikButton2LookAndFeel button2LookAndFeel;
    BabuFrikButton2AltLookAndFeel button2AltLookAndFeel;
    BabuFrikButton2Alt3ValuesLookAndFeel button2Alt3ValuesLookAndFeel;
    BabuFrikButton2Alt3ValuesOffset1LookAndFeel button2Alt3ValuesLookAndFeelOffset1;
    BabuFrikButton2Alt3ValuesMiddleBothLookAndFeel button2Alt3ValuesLookAndFeelMiddleBoth;
    BabuFrikButton2Alt2ValuesLookAndFeel button2Alt2ValuesLookAndFeel;
    BabuFrikButton2Alt2YellowValuesLookAndFeel button2Alt2YellowValuesLookAndFeel;
    BabuFrikButton2Alt2InvertedValuesLookAndFeel button2Alt2InvertedValuesLookAndFeel;
    BabuFrikButton1LookAndFeel button1LookAndFeel;
    BabuFrikButton1InvertedLookAndFeel button1LookAndFeelInverted;
    BabuFrikButton0LookAndFeel button0LookAndFeel;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMIBasePanelComponent);
};



class KIJIMIControlPanelComponent: public KIJIMIBasePanelComponent

{
public:
    
    KIJIMIControlPanelComponent ()
    {
    }
    
    ~KIJIMIControlPanelComponent ()
    {
    }
    
    void initializeSliders () override
    {
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
        sliderKIJIMI_LFO1_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_AMT);
        sliderAttachmentKIJIMI_LFO1_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_AMT", sliderKIJIMI_LFO1_AMT));
        sliderKIJIMI_LFO1_AMT.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 amount: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_LFO1_AMT.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1VCO1_P
        sliderKIJIMI_LFO1VCO1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO1_P);
        sliderAttachmentKIJIMI_LFO1VCO1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO1_P", sliderKIJIMI_LFO1VCO1_P));
        sliderKIJIMI_LFO1VCO1_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO1 to VCO1 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO1 to VCO1 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO1 to VCO1 polarity: -";}
            else if (value >= 96){ return "LFO1 to VCO1 polarity: +/-";}
        };
        sliderKIJIMI_LFO1VCO1_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO1VCO2_P
        sliderKIJIMI_LFO1VCO2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCO2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCO2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCO2_P);
        sliderAttachmentKIJIMI_LFO1VCO2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCO2_P", sliderKIJIMI_LFO1VCO2_P));
        sliderKIJIMI_LFO1VCO2_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO1 to VCO2 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO1 to VCO2 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO1 to VCO2 polarity: -";}
            else if (value >= 96){ return "LFO1 to VCO2 polarity: +/-";}
        };
        sliderKIJIMI_LFO1VCO2_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO1WAVE1_P
        sliderKIJIMI_LFO1WAVE1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE1_P);
        sliderAttachmentKIJIMI_LFO1WAVE1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE1_P", sliderKIJIMI_LFO1WAVE1_P));
        sliderKIJIMI_LFO1WAVE1_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO1 to WAVE1 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO1 to WAVE1 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO1 to WAVE1 polarity: -";}
            else if (value >= 96){ return "LFO1 to WAVE1 polarity: +/-";}
        };
        sliderKIJIMI_LFO1WAVE1_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO1WAVE2_P
        sliderKIJIMI_LFO1WAVE2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1WAVE2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1WAVE2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1WAVE2_P);
        sliderAttachmentKIJIMI_LFO1WAVE2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1WAVE2_P", sliderKIJIMI_LFO1WAVE2_P));
        sliderKIJIMI_LFO1WAVE2_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO1 to WAVE2 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO1 to WAVE2 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO1 to WAVE2 polarity: -";}
            else if (value >= 96){ return "LFO1 to WAVE2 polarity: +/-";}
        };
        sliderKIJIMI_LFO1WAVE2_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO1SUB_P
        sliderKIJIMI_LFO1SUB_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1SUB_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1SUB_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1SUB_P);
        sliderAttachmentKIJIMI_LFO1SUB_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1SUB_P", sliderKIJIMI_LFO1SUB_P));
        sliderKIJIMI_LFO1SUB_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO1 to SUB polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO1 to SUB polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO1 to SUB polarity: -";}
            else if (value >= 96){ return "LFO1 to SUB polarity: +/-";}
        };
        sliderKIJIMI_LFO1SUB_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO1VCF_P
        sliderKIJIMI_LFO1VCF_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCF_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCF_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCF_P);
        sliderAttachmentKIJIMI_LFO1VCF_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCF_P", sliderKIJIMI_LFO1VCF_P));
        sliderKIJIMI_LFO1VCF_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO1 to VCF polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO1 to VCF polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO1 to VCF polarity: -";}
            else if (value >= 96){ return "LFO1 to VCF polarity: +/-";}
        };
        sliderKIJIMI_LFO1VCF_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO1RESO_P
        sliderKIJIMI_LFO1RESO_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1RESO_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1RESO_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1RESO_P);
        sliderAttachmentKIJIMI_LFO1RESO_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1RESO_P", sliderKIJIMI_LFO1RESO_P));
        sliderKIJIMI_LFO1RESO_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO1 to RESO polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO1 to RESO polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO1 to RESO polarity: -";}
            else if (value >= 96){ return "LFO1 to RESO polarity: +/-";}
        };
        sliderKIJIMI_LFO1RESO_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO1VCA_P
        sliderKIJIMI_LFO1VCA_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1VCA_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1VCA_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1VCA_P);
        sliderAttachmentKIJIMI_LFO1VCA_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1VCA_P", sliderKIJIMI_LFO1VCA_P));
        sliderKIJIMI_LFO1VCA_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO1 to VCA polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO1 to VCA polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO1 to VCA polarity: -";}
            else if (value >= 96){ return "LFO1 to VCA polarity: +/-";}
        };
        sliderKIJIMI_LFO1VCA_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2_AMT
        sliderKIJIMI_LFO2_AMT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_AMT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_AMT);
        sliderAttachmentKIJIMI_LFO2_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_AMT", sliderKIJIMI_LFO2_AMT));
        sliderKIJIMI_LFO2_AMT.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 amount: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_LFO2_AMT.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO2VCO1_P
        sliderKIJIMI_LFO2VCO1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO1_P);
        sliderAttachmentKIJIMI_LFO2VCO1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO1_P", sliderKIJIMI_LFO2VCO1_P));
        sliderKIJIMI_LFO2VCO1_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO2 to VCO1 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO2 to VCO1 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO2 to VCO1 polarity: -";}
            else if (value >= 96){ return "LFO2 to VCO1 polarity: +/-";}
        };
        sliderKIJIMI_LFO2VCO1_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2VCO2_P
        sliderKIJIMI_LFO2VCO2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCO2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCO2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCO2_P);
        sliderAttachmentKIJIMI_LFO2VCO2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCO2_P", sliderKIJIMI_LFO2VCO2_P));
        sliderKIJIMI_LFO2VCO2_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO2 to VCO2 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO2 to VCO2 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO2 to VCO2 polarity: -";}
            else if (value >= 96){ return "LFO2 to VCO2 polarity: +/-";}
        };
        sliderKIJIMI_LFO2VCO2_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2WAVE1_P
        sliderKIJIMI_LFO2WAVE1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE1_P);
        sliderAttachmentKIJIMI_LFO2WAVE1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE1_P", sliderKIJIMI_LFO2WAVE1_P));
        sliderKIJIMI_LFO2WAVE1_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO2 to WAVE1 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO2 to WAVE1 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO2 to WAVE1 polarity: -";}
            else if (value >= 96){ return "LFO2 to WAVE1 polarity: +/-";}
        };
        sliderKIJIMI_LFO2WAVE1_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2WAVE2_P
        sliderKIJIMI_LFO2WAVE2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2WAVE2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2WAVE2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2WAVE2_P);
        sliderAttachmentKIJIMI_LFO2WAVE2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2WAVE2_P", sliderKIJIMI_LFO2WAVE2_P));
        sliderKIJIMI_LFO2WAVE2_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO2 to WAVE2 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO2 to WAVE2 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO2 to WAVE2 polarity: -";}
            else if (value >= 96){ return "LFO2 to WAVE2 polarity: +/-";}
        };
        sliderKIJIMI_LFO2WAVE2_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2SUB_P
        sliderKIJIMI_LFO2SUB_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2SUB_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2SUB_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2SUB_P);
        sliderAttachmentKIJIMI_LFO2SUB_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2SUB_P", sliderKIJIMI_LFO2SUB_P));
        sliderKIJIMI_LFO2SUB_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO2 to SUB polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO2 to SUB polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO2 to SUB polarity: -";}
            else if (value >= 96){ return "LFO2 to SUB polarity: +/-";}
        };
        sliderKIJIMI_LFO2SUB_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2VCF_P
        sliderKIJIMI_LFO2VCF_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCF_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCF_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCF_P);
        sliderAttachmentKIJIMI_LFO2VCF_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCF_P", sliderKIJIMI_LFO2VCF_P));
        sliderKIJIMI_LFO2VCF_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO2 to VCF polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO2 to VCF polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO2 to VCF polarity: -";}
            else if (value >= 96){ return "LFO2 to VCF polarity: +/-";}
        };
        sliderKIJIMI_LFO2VCF_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2RESO_P
        sliderKIJIMI_LFO2RESO_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2RESO_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2RESO_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2RESO_P);
        sliderAttachmentKIJIMI_LFO2RESO_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2RESO_P", sliderKIJIMI_LFO2RESO_P));
        sliderKIJIMI_LFO2RESO_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO2 to RESO polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO2 to RESO polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO2 to RESO polarity: -";}
            else if (value >= 96){ return "LFO2 to RESO polarity: +/-";}
        };
        sliderKIJIMI_LFO2RESO_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_LFO2VCA_P
        sliderKIJIMI_LFO2VCA_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2VCA_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2VCA_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2VCA_P);
        sliderAttachmentKIJIMI_LFO2VCA_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2VCA_P", sliderKIJIMI_LFO2VCA_P));
        sliderKIJIMI_LFO2VCA_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO2 to VCA polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO2 to VCA polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "LFO2 to VCA polarity: -";}
            else if (value >= 96){ return "LFO2 to VCA polarity: +/-";}
        };
        sliderKIJIMI_LFO2VCA_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_ADSR2_AMT
        sliderKIJIMI_ADSR2_AMT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_AMT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_AMT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_AMT);
        sliderAttachmentKIJIMI_ADSR2_AMT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_AMT", sliderKIJIMI_ADSR2_AMT));
        sliderKIJIMI_ADSR2_AMT.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 amount: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR2_AMT.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR2VCO1_P
        sliderKIJIMI_ADSR2VCO1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2VCO1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2VCO1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2VCO1_P);
        sliderAttachmentKIJIMI_ADSR2VCO1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2VCO1_P", sliderKIJIMI_ADSR2VCO1_P));
        sliderKIJIMI_ADSR2VCO1_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "ADSR2 to VCO1 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "ADSR2 to VCO1 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "ADSR2 to VCO1 polarity: -";}
            else if (value >= 96){ return "ADSR2 to VCO1 polarity: +/-";}
        };
        sliderKIJIMI_ADSR2VCO1_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_ADSR2VCO2_P
        sliderKIJIMI_ADSR2VCO2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2VCO2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2VCO2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2VCO2_P);
        sliderAttachmentKIJIMI_ADSR2VCO2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2VCO2_P", sliderKIJIMI_ADSR2VCO2_P));
        sliderKIJIMI_ADSR2VCO2_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "ADSR2 to VCO2 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "ADSR2 to VCO2 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "ADSR2 to VCO2 polarity: -";}
            else if (value >= 96){ return "ADSR2 to VCO2 polarity: +/-";}
        };
        sliderKIJIMI_ADSR2VCO2_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_ADSR2WAVE1_P
        sliderKIJIMI_ADSR2WAVE1_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2WAVE1_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2WAVE1_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2WAVE1_P);
        sliderAttachmentKIJIMI_ADSR2WAVE1_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2WAVE1_P", sliderKIJIMI_ADSR2WAVE1_P));
        sliderKIJIMI_ADSR2WAVE1_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "ADSR2 to WAVE1 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "ADSR2 to WAVE1 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "ADSR2 to WAVE1 polarity: -";}
            else if (value >= 96){ return "ADSR2 to WAVE1 polarity: +/-";}
        };
        sliderKIJIMI_ADSR2WAVE1_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_ADSR2WAVE2_P
        sliderKIJIMI_ADSR2WAVE2_P.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2WAVE2_P.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2WAVE2_P.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2WAVE2_P);
        sliderAttachmentKIJIMI_ADSR2WAVE2_P.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2WAVE2_P", sliderKIJIMI_ADSR2WAVE2_P));
        sliderKIJIMI_ADSR2WAVE2_P.textFromValueFunction = [](double value) {
            if (value < 32){ return "ADSR2 to WAVE2 polarity: off"; } 
            else if ((value >= 32) && (value < 64)){ return "ADSR2 to WAVE2 polarity: +";}
            else if ((value >= 64) && (value < 96)){ return "ADSR2 to WAVE2 polarity: -";}
            else if (value >= 96){ return "ADSR2 to WAVE2 polarity: +/-";}
        };
        sliderKIJIMI_ADSR2WAVE2_P.setLookAndFeel (&button2LookAndFeel);
        // Slider KIJIMI_VCO2VCO1
        sliderKIJIMI_VCO2VCO1.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2VCO1.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2VCO1.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2VCO1);
        sliderAttachmentKIJIMI_VCO2VCO1.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2VCO1", sliderKIJIMI_VCO2VCO1));
        sliderKIJIMI_VCO2VCO1.textFromValueFunction = [](double value) {
            return String::formatted("VCO2 to VCO1: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_VCO2VCO1.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCO2VCF
        sliderKIJIMI_VCO2VCF.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2VCF.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2VCF.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2VCF);
        sliderAttachmentKIJIMI_VCO2VCF.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2VCF", sliderKIJIMI_VCO2VCF));
        sliderKIJIMI_VCO2VCF.textFromValueFunction = [](double value) {
            return String::formatted("VCO2 to VCF: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_VCO2VCF.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VEL_LFO1RATE
        sliderKIJIMI_VEL_LFO1RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_LFO1RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_LFO1RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_LFO1RATE);
        sliderAttachmentKIJIMI_VEL_LFO1RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_LFO1RATE", sliderKIJIMI_VEL_LFO1RATE));
        sliderKIJIMI_VEL_LFO1RATE.textFromValueFunction = [](double value) {
            return String::formatted("Velocity to LFO1 rate: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VEL_LFO1RATE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VEL_LFO2RATE
        sliderKIJIMI_VEL_LFO2RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_LFO2RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_LFO2RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_LFO2RATE);
        sliderAttachmentKIJIMI_VEL_LFO2RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_LFO2RATE", sliderKIJIMI_VEL_LFO2RATE));
        sliderKIJIMI_VEL_LFO2RATE.textFromValueFunction = [](double value) {
            return String::formatted("Velocity to LFO2 rate: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VEL_LFO2RATE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VEL_WAVE
        sliderKIJIMI_VEL_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_WAVE);
        sliderAttachmentKIJIMI_VEL_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_WAVE", sliderKIJIMI_VEL_WAVE));
        sliderKIJIMI_VEL_WAVE.textFromValueFunction = [](double value) {
            return String::formatted("Velocity to waveform: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VEL_WAVE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VEL_SUB
        sliderKIJIMI_VEL_SUB.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_SUB.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_SUB.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_SUB);
        sliderAttachmentKIJIMI_VEL_SUB.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_SUB", sliderKIJIMI_VEL_SUB));
        sliderKIJIMI_VEL_SUB.textFromValueFunction = [](double value) {
            return String::formatted("Velocity to sub amount: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VEL_SUB.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VEL_PITCH
        sliderKIJIMI_VEL_PITCH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_PITCH);
        sliderAttachmentKIJIMI_VEL_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_PITCH", sliderKIJIMI_VEL_PITCH));
        sliderKIJIMI_VEL_PITCH.textFromValueFunction = [](double value) {
            return String::formatted("Velocity to pitchbend: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VEL_PITCH.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VEL_VCA
        sliderKIJIMI_VEL_VCA.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VEL_VCA.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VEL_VCA.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VEL_VCA);
        sliderAttachmentKIJIMI_VEL_VCA.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VEL_VCA", sliderKIJIMI_VEL_VCA));
        sliderKIJIMI_VEL_VCA.textFromValueFunction = [](double value) {
            return String::formatted("Velocity to VCA: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VEL_VCA.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_AT_LFO1RATE
        sliderKIJIMI_AT_LFO1RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_LFO1RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_LFO1RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_LFO1RATE);
        sliderAttachmentKIJIMI_AT_LFO1RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_LFO1RATE", sliderKIJIMI_AT_LFO1RATE));
        sliderKIJIMI_AT_LFO1RATE.textFromValueFunction = [](double value) {
            return String::formatted("Aftertouch to LFO1 rate: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_AT_LFO1RATE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_AT_LFO2RATE
        sliderKIJIMI_AT_LFO2RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_LFO2RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_LFO2RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_LFO2RATE);
        sliderAttachmentKIJIMI_AT_LFO2RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_LFO2RATE", sliderKIJIMI_AT_LFO2RATE));
        sliderKIJIMI_AT_LFO2RATE.textFromValueFunction = [](double value) {
            return String::formatted("Aftertouch to LFO2 rate: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_AT_LFO2RATE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_AT_WAVE
        sliderKIJIMI_AT_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_WAVE);
        sliderAttachmentKIJIMI_AT_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_WAVE", sliderKIJIMI_AT_WAVE));
        sliderKIJIMI_AT_WAVE.textFromValueFunction = [](double value) {
            return String::formatted("Aftertouch to waveform: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_AT_WAVE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_AT_SUB
        sliderKIJIMI_AT_SUB.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_SUB.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_SUB.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_SUB);
        sliderAttachmentKIJIMI_AT_SUB.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_SUB", sliderKIJIMI_AT_SUB));
        sliderKIJIMI_AT_SUB.textFromValueFunction = [](double value) {
            return String::formatted("Aftertouch to sub amount: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_AT_SUB.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_AT_PITCH
        sliderKIJIMI_AT_PITCH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_PITCH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_PITCH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_PITCH);
        sliderAttachmentKIJIMI_AT_PITCH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_PITCH", sliderKIJIMI_AT_PITCH));
        sliderKIJIMI_AT_PITCH.textFromValueFunction = [](double value) {
            return String::formatted("Aftertouch to pitchbend: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_AT_PITCH.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_AT_VCA
        sliderKIJIMI_AT_VCA.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_AT_VCA.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_AT_VCA.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_AT_VCA);
        sliderAttachmentKIJIMI_AT_VCA.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_AT_VCA", sliderKIJIMI_AT_VCA));
        sliderKIJIMI_AT_VCA.textFromValueFunction = [](double value) {
            return String::formatted("Aftertouch to VCA: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_AT_VCA.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1_RATE
        sliderKIJIMI_LFO1_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_RATE);
        sliderAttachmentKIJIMI_LFO1_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_RATE", sliderKIJIMI_LFO1_RATE));
        sliderKIJIMI_LFO1_RATE.textFromValueFunction = [this](double value) {
            if (this->processor->isLFO1SyncedToMidi()){ return StringArray({"1/8", "1/6", "1/4", "1/3", "1/2", "1/1.5", "1/1", "1.5/1", "2/1", "4/1", "6/1", "8/1", "12/1", "16/1", "24/1", "32/1"})[15 - (int)(value/8)]; } 
            else { return String::formatted("LFO1 rate: %.2f", 10.0 * (value / 127.0)); }
        };
        sliderKIJIMI_LFO1_RATE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1_A
        sliderKIJIMI_LFO1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_A);
        sliderAttachmentKIJIMI_LFO1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_A", sliderKIJIMI_LFO1_A));
        sliderKIJIMI_LFO1_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 attack: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_LFO1_A.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1_D
        sliderKIJIMI_LFO1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_D);
        sliderAttachmentKIJIMI_LFO1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_D", sliderKIJIMI_LFO1_D));
        sliderKIJIMI_LFO1_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO1 decay: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_LFO1_D.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO1_SHAPE
        sliderKIJIMI_LFO1_SHAPE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO1_SHAPE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO1_SHAPE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO1_SHAPE);
        sliderAttachmentKIJIMI_LFO1_SHAPE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO1_SHAPE", sliderKIJIMI_LFO1_SHAPE));
        sliderKIJIMI_LFO1_SHAPE.textFromValueFunction = [](double value) {
            if (value < 21){ return "LFO1 shape: random"; } 
            else if ((value >= 21) && (value < 42)){ return "LFO1 shape: square";}
            else if ((value >= 42) && (value < 64)){ return "LFO1 shape: ramp";}
            else if ((value >= 64) && (value < 85)){ return "LFO1 shape: saw";}
            else if ((value >= 85) && (value < 107)){ return "LFO1 shape: triangle";}
            else if (value >= 107){ return "LFO1 shape: sine";}
        };
        sliderKIJIMI_LFO1_SHAPE.setLookAndFeel (&button0LookAndFeel);
        // Slider KIJIMI_LFO2_RATE
        sliderKIJIMI_LFO2_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_RATE);
        sliderAttachmentKIJIMI_LFO2_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_RATE", sliderKIJIMI_LFO2_RATE));
        sliderKIJIMI_LFO2_RATE.textFromValueFunction = [this](double value) {
            if (this->processor->isLFO2SyncedToMidi()){ return StringArray({"1/8", "1/6", "1/4", "1/3", "1/2", "1/1.5", "1/1", "1.5/1", "2/1", "4/1", "6/1", "8/1", "12/1", "16/1", "24/1", "32/1"})[15 - (int)(value/8)]; } 
            else { return String::formatted("LFO2 rate: %.2f", 10.0 * (value / 127.0)); }
        };
        sliderKIJIMI_LFO2_RATE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO2_A
        sliderKIJIMI_LFO2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_A);
        sliderAttachmentKIJIMI_LFO2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_A", sliderKIJIMI_LFO2_A));
        sliderKIJIMI_LFO2_A.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 attack: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_LFO2_A.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO2_D
        sliderKIJIMI_LFO2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_D);
        sliderAttachmentKIJIMI_LFO2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_D", sliderKIJIMI_LFO2_D));
        sliderKIJIMI_LFO2_D.textFromValueFunction = [](double value) {
            return String::formatted("LFO2 decay: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_LFO2_D.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_LFO2_SHAPE
        sliderKIJIMI_LFO2_SHAPE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO2_SHAPE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO2_SHAPE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO2_SHAPE);
        sliderAttachmentKIJIMI_LFO2_SHAPE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO2_SHAPE", sliderKIJIMI_LFO2_SHAPE));
        sliderKIJIMI_LFO2_SHAPE.textFromValueFunction = [](double value) {
            if (value < 21){ return "LFO2 shape: random"; } 
            else if ((value >= 21) && (value < 42)){ return "LFO2 shape: square";}
            else if ((value >= 42) && (value < 64)){ return "LFO2 shape: ramp";}
            else if ((value >= 64) && (value < 85)){ return "LFO2 shape: saw";}
            else if ((value >= 85) && (value < 107)){ return "LFO2 shape: triangle";}
            else if (value >= 107){ return "LFO2 shape: sine";}
        };
        sliderKIJIMI_LFO2_SHAPE.setLookAndFeel (&button0LookAndFeel);
        // Slider KIJIMI_LFO_ENV
        sliderKIJIMI_LFO_ENV.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_LFO_ENV.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_LFO_ENV.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_LFO_ENV);
        sliderAttachmentKIJIMI_LFO_ENV.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_LFO_ENV", sliderKIJIMI_LFO_ENV));
        sliderKIJIMI_LFO_ENV.textFromValueFunction = [](double value) {
            if (value < 32){ return "LFO envelope: off"; } 
            else if ((value >= 32) && (value < 64)){ return "LFO envelope: LFO1";}
            else if ((value >= 64) && (value < 96)){ return "LFO envelope: LFO2";}
            else if (value >= 96){ return "LFO envelope: both";}
        };
        sliderKIJIMI_LFO_ENV.setLookAndFeel (&button2AltLookAndFeel);
        // Slider KIJIMI_VCO1_FREQ
        sliderKIJIMI_VCO1_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_FREQ);
        sliderAttachmentKIJIMI_VCO1_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_FREQ", sliderKIJIMI_VCO1_FREQ));
        sliderKIJIMI_VCO1_FREQ.textFromValueFunction = [](double value) {
            return String::formatted("VCO1 frequency: %.2f", 4.0 * (value / 127.0) - 2);
        };
        sliderKIJIMI_VCO1_FREQ.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCO1_WAVE
        sliderKIJIMI_VCO1_WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_WAVE);
        sliderAttachmentKIJIMI_VCO1_WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_WAVE", sliderKIJIMI_VCO1_WAVE));
        sliderKIJIMI_VCO1_WAVE.textFromValueFunction = [](double value) {
            return String::formatted("VCO1 waveform: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_VCO1_WAVE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCO1_VOL13
        sliderKIJIMI_VCO1_VOL13.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_VOL13.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_VOL13.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_VOL13);
        sliderAttachmentKIJIMI_VCO1_VOL13.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_VOL13", sliderKIJIMI_VCO1_VOL13));
        sliderKIJIMI_VCO1_VOL13.textFromValueFunction = [](double value) {
            if (value < 64){ return "VCO1 volume 1/3: off"; } 
            else { return "VCO1 volume 1/3: on";}
        };
        sliderKIJIMI_VCO1_VOL13.setLookAndFeel (&button1LookAndFeel);
        // Slider KIJIMI_VCO1_VOL23
        sliderKIJIMI_VCO1_VOL23.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO1_VOL23.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO1_VOL23.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO1_VOL23);
        sliderAttachmentKIJIMI_VCO1_VOL23.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO1_VOL23", sliderKIJIMI_VCO1_VOL23));
        sliderKIJIMI_VCO1_VOL23.textFromValueFunction = [](double value) {
            if (value < 64){ return "VCO1 volume 2/3: off"; } 
            else { return "VCO1 volume 2/3: on";}
        };
        sliderKIJIMI_VCO1_VOL23.setLookAndFeel (&button1LookAndFeel);
        // Slider KIJIMI_SUB_VOL
        sliderKIJIMI_SUB_VOL.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_SUB_VOL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_SUB_VOL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_SUB_VOL);
        sliderAttachmentKIJIMI_SUB_VOL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_SUB_VOL", sliderKIJIMI_SUB_VOL));
        sliderKIJIMI_SUB_VOL.textFromValueFunction = [](double value) {
            return String::formatted("Sub volume: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_SUB_VOL.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_NOISE_VOL13
        sliderKIJIMI_NOISE_VOL13.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_NOISE_VOL13.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_NOISE_VOL13.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_NOISE_VOL13);
        sliderAttachmentKIJIMI_NOISE_VOL13.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_NOISE_VOL13", sliderKIJIMI_NOISE_VOL13));
        sliderKIJIMI_NOISE_VOL13.textFromValueFunction = [](double value) {
            if (value < 64){ return "Noise volume 1/3: off"; } 
            else { return "Noise volume 1/3: on";}
        };
        sliderKIJIMI_NOISE_VOL13.setLookAndFeel (&button1LookAndFeel);
        // Slider KIJIMI_NOISE_VOL23
        sliderKIJIMI_NOISE_VOL23.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_NOISE_VOL23.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_NOISE_VOL23.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_NOISE_VOL23);
        sliderAttachmentKIJIMI_NOISE_VOL23.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_NOISE_VOL23", sliderKIJIMI_NOISE_VOL23));
        sliderKIJIMI_NOISE_VOL23.textFromValueFunction = [](double value) {
            if (value < 64){ return "Noise volume 2/3: off"; } 
            else { return "Noise volume 2/3: on";}
        };
        sliderKIJIMI_NOISE_VOL23.setLookAndFeel (&button1LookAndFeel);
        // Slider KIJIMI_VCO2_FREQ
        sliderKIJIMI_VCO2_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_FREQ);
        sliderAttachmentKIJIMI_VCO2_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_FREQ", sliderKIJIMI_VCO2_FREQ));
        sliderKIJIMI_VCO2_FREQ.textFromValueFunction = [](double value) {
            return String::formatted("VCO2 frequency: %.2f", 4.0 * (value / 127.0) - 2);
        };
        sliderKIJIMI_VCO2_FREQ.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCO2WAVE
        sliderKIJIMI_VCO2WAVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2WAVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2WAVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2WAVE);
        sliderAttachmentKIJIMI_VCO2WAVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2WAVE", sliderKIJIMI_VCO2WAVE));
        sliderKIJIMI_VCO2WAVE.textFromValueFunction = [](double value) {
            return String::formatted("VCO2 waveform: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_VCO2WAVE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCO2_VOL
        sliderKIJIMI_VCO2_VOL.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_VOL.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_VOL.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_VOL);
        sliderAttachmentKIJIMI_VCO2_VOL.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_VOL", sliderKIJIMI_VCO2_VOL));
        sliderKIJIMI_VCO2_VOL.textFromValueFunction = [](double value) {
            return String::formatted("VCO2 volume: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_VCO2_VOL.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCO2_DETUNE
        sliderKIJIMI_VCO2_DETUNE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO2_DETUNE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO2_DETUNE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO2_DETUNE);
        sliderAttachmentKIJIMI_VCO2_DETUNE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO2_DETUNE", sliderKIJIMI_VCO2_DETUNE));
        sliderKIJIMI_VCO2_DETUNE.textFromValueFunction = [](double value) {
            return String::formatted("VCO2 detune: %.2f", 2.0 * (value / 127.0) - 1);
        };
        sliderKIJIMI_VCO2_DETUNE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCO_SYNC
        sliderKIJIMI_VCO_SYNC.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO_SYNC.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO_SYNC.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO_SYNC);
        sliderAttachmentKIJIMI_VCO_SYNC.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO_SYNC", sliderKIJIMI_VCO_SYNC));
        sliderKIJIMI_VCO_SYNC.textFromValueFunction = [](double value) {
            if (value < 43){ return "VCO sync: off"; } 
            else if ((value >= 43) && (value < 86)){ return "VCO sync: VCO1 to VCO2";}
            else { return "VCO sync: VCO2 to VCO1";}
        };
        sliderKIJIMI_VCO_SYNC.setLookAndFeel (&button2Alt3ValuesLookAndFeel);
        // Slider KIJIMI_VCO_KOFF
        sliderKIJIMI_VCO_KOFF.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCO_KOFF.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCO_KOFF.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCO_KOFF);
        sliderAttachmentKIJIMI_VCO_KOFF.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCO_KOFF", sliderKIJIMI_VCO_KOFF));
        sliderKIJIMI_VCO_KOFF.textFromValueFunction = [](double value) {
            if (value < 32){ return "VCO key off: off"; } 
            else if ((value >= 32) && (value < 64)){ return "VCO key off: VCO1";}
            else if ((value >= 64) && (value < 96)){ return "VCO key off: VCO2";}
            else if (value >= 96){ return "VCO key off: both";}
        };
        sliderKIJIMI_VCO_KOFF.setLookAndFeel (&button2AltLookAndFeel);
        // Slider KIJIMI_VCF_FREQ
        sliderKIJIMI_VCF_FREQ.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_FREQ.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_FREQ.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_FREQ);
        sliderAttachmentKIJIMI_VCF_FREQ.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_FREQ", sliderKIJIMI_VCF_FREQ));
        sliderKIJIMI_VCF_FREQ.textFromValueFunction = [](double value) {
            return String::formatted("VCF Frequency: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_VCF_FREQ.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCF_VEL_C
        sliderKIJIMI_VCF_VEL_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_VEL_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_VEL_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_VEL_C);
        sliderAttachmentKIJIMI_VCF_VEL_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_VEL_C", sliderKIJIMI_VCF_VEL_C));
        sliderKIJIMI_VCF_VEL_C.textFromValueFunction = [](double value) {
            return String::formatted("VCF Velocity control: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VCF_VEL_C.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCF_AT_C
        sliderKIJIMI_VCF_AT_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_AT_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_AT_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_AT_C);
        sliderAttachmentKIJIMI_VCF_AT_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_AT_C", sliderKIJIMI_VCF_AT_C));
        sliderKIJIMI_VCF_AT_C.textFromValueFunction = [](double value) {
            return String::formatted("VCF Aftertouch control: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VCF_AT_C.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCF_ADSR2_C
        sliderKIJIMI_VCF_ADSR2_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_ADSR2_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_ADSR2_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_ADSR2_C);
        sliderAttachmentKIJIMI_VCF_ADSR2_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_ADSR2_C", sliderKIJIMI_VCF_ADSR2_C));
        sliderKIJIMI_VCF_ADSR2_C.textFromValueFunction = [](double value) {
            return String::formatted("VCF ADSR2 control: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VCF_ADSR2_C.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCF_RESO
        sliderKIJIMI_VCF_RESO.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_RESO.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_RESO.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_RESO);
        sliderAttachmentKIJIMI_VCF_RESO.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_RESO", sliderKIJIMI_VCF_RESO));
        sliderKIJIMI_VCF_RESO.textFromValueFunction = [](double value) {
            return String::formatted("VCF Resonance: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_VCF_RESO.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCF_Q_VEL_C
        sliderKIJIMI_VCF_Q_VEL_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_Q_VEL_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_Q_VEL_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_Q_VEL_C);
        sliderAttachmentKIJIMI_VCF_Q_VEL_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_Q_VEL_C", sliderKIJIMI_VCF_Q_VEL_C));
        sliderKIJIMI_VCF_Q_VEL_C.textFromValueFunction = [](double value) {
            return String::formatted("VCF Velocity Q control: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VCF_Q_VEL_C.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCF_Q_AT_C
        sliderKIJIMI_VCF_Q_AT_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_Q_AT_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_Q_AT_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_Q_AT_C);
        sliderAttachmentKIJIMI_VCF_Q_AT_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_Q_AT_C", sliderKIJIMI_VCF_Q_AT_C));
        sliderKIJIMI_VCF_Q_AT_C.textFromValueFunction = [](double value) {
            return String::formatted("VCF Aftertouch Q control: %.2f", 10.0 * (value / 127.0) - 5);
        };
        sliderKIJIMI_VCF_Q_AT_C.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_VCF_KEY_C
        sliderKIJIMI_VCF_KEY_C.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VCF_KEY_C.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VCF_KEY_C.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VCF_KEY_C);
        sliderAttachmentKIJIMI_VCF_KEY_C.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VCF_KEY_C", sliderKIJIMI_VCF_KEY_C));
        sliderKIJIMI_VCF_KEY_C.textFromValueFunction = [](double value) {
            return String::formatted("VCF Keyboard control: %.2f", 2.0 * (value / 127.0));
        };
        sliderKIJIMI_VCF_KEY_C.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR2_A
        sliderKIJIMI_ADSR2_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_A);
        sliderAttachmentKIJIMI_ADSR2_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_A", sliderKIJIMI_ADSR2_A));
        sliderKIJIMI_ADSR2_A.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 attack: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR2_A.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR2_D
        sliderKIJIMI_ADSR2_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_D);
        sliderAttachmentKIJIMI_ADSR2_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_D", sliderKIJIMI_ADSR2_D));
        sliderKIJIMI_ADSR2_D.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 decay: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR2_D.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR2_S
        sliderKIJIMI_ADSR2_S.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_S.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_S.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_S);
        sliderAttachmentKIJIMI_ADSR2_S.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_S", sliderKIJIMI_ADSR2_S));
        sliderKIJIMI_ADSR2_S.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 sustain: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR2_S.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR2_R
        sliderKIJIMI_ADSR2_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR2_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR2_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR2_R);
        sliderAttachmentKIJIMI_ADSR2_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR2_R", sliderKIJIMI_ADSR2_R));
        sliderKIJIMI_ADSR2_R.textFromValueFunction = [](double value) {
            return String::formatted("ADSR2 release: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR2_R.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR1_A
        sliderKIJIMI_ADSR1_A.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_A.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_A.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_A);
        sliderAttachmentKIJIMI_ADSR1_A.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_A", sliderKIJIMI_ADSR1_A));
        sliderKIJIMI_ADSR1_A.textFromValueFunction = [](double value) {
            return String::formatted("ADSR1 attack: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR1_A.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR1_D
        sliderKIJIMI_ADSR1_D.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_D.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_D.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_D);
        sliderAttachmentKIJIMI_ADSR1_D.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_D", sliderKIJIMI_ADSR1_D));
        sliderKIJIMI_ADSR1_D.textFromValueFunction = [](double value) {
            return String::formatted("ADSR1 decay: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR1_D.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR1_S
        sliderKIJIMI_ADSR1_S.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_S.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_S.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_S);
        sliderAttachmentKIJIMI_ADSR1_S.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_S", sliderKIJIMI_ADSR1_S));
        sliderKIJIMI_ADSR1_S.textFromValueFunction = [](double value) {
            return String::formatted("ADSR1 sustain: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR1_S.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR1_R
        sliderKIJIMI_ADSR1_R.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR1_R.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR1_R.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR1_R);
        sliderAttachmentKIJIMI_ADSR1_R.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR1_R", sliderKIJIMI_ADSR1_R));
        sliderKIJIMI_ADSR1_R.textFromValueFunction = [](double value) {
            return String::formatted("ADSR1 release: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_ADSR1_R.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_ADSR_MULT
        sliderKIJIMI_ADSR_MULT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_MULT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_MULT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_MULT);
        sliderAttachmentKIJIMI_ADSR_MULT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_MULT", sliderKIJIMI_ADSR_MULT));
        sliderKIJIMI_ADSR_MULT.textFromValueFunction = [](double value) {
            if (value < 32){ return "ADSR mult: x1"; } 
            else if ((value >= 32) && (value < 64)){ return "ADSR mult: x2";}
            else if ((value >= 64) && (value < 96)){ return "ADSR mult: x3";}
            else if (value >= 96){ return "ADSR mult: x4";}
        };
        sliderKIJIMI_ADSR_MULT.setLookAndFeel (&button2AltLookAndFeel);
        // Slider KIJIMI_ADSR_CYCLE
        sliderKIJIMI_ADSR_CYCLE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_CYCLE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_CYCLE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_CYCLE);
        sliderAttachmentKIJIMI_ADSR_CYCLE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_CYCLE", sliderKIJIMI_ADSR_CYCLE));
        sliderKIJIMI_ADSR_CYCLE.textFromValueFunction = [](double value) {
            if (value < 32){ return "ADSR cycle: off"; } 
            else if ((value >= 32) && (value < 64)){ return "ADSR cycle: ADSR1";}
            else if ((value >= 64) && (value < 96)){ return "ADSR cycle: ADSR2";}
            else if (value >= 96){ return "ADSR cycle: both";}
        };
        sliderKIJIMI_ADSR_CYCLE.setLookAndFeel (&button2AltLookAndFeel);
        // Slider KIJIMI_ADSR_KT
        sliderKIJIMI_ADSR_KT.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_ADSR_KT.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_ADSR_KT.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_ADSR_KT);
        sliderAttachmentKIJIMI_ADSR_KT.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_ADSR_KT", sliderKIJIMI_ADSR_KT));
        sliderKIJIMI_ADSR_KT.textFromValueFunction = [](double value) {
            if (value < 32){ return "ADSR KT: off"; } 
            else if ((value >= 32) && (value < 64)){ return "ADSR KT: ADSR1";}
            else if ((value >= 64) && (value < 96)){ return "ADSR KT: ADSR2";}
            else if (value >= 96){ return "ADSR KT: both";}
        };
        sliderKIJIMI_ADSR_KT.setLookAndFeel (&button2AltLookAndFeel);
        // Slider KIJIMI_GLIDE_RATE
        sliderKIJIMI_GLIDE_RATE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_GLIDE_RATE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_GLIDE_RATE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_GLIDE_RATE);
        sliderAttachmentKIJIMI_GLIDE_RATE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_GLIDE_RATE", sliderKIJIMI_GLIDE_RATE));
        sliderKIJIMI_GLIDE_RATE.textFromValueFunction = [](double value) {
            return String::formatted("Glide rate: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_GLIDE_RATE.setLookAndFeel (&knobLookAndFeel);
        // Slider KIJIMI_GLIDE_MODE
        sliderKIJIMI_GLIDE_MODE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_GLIDE_MODE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_GLIDE_MODE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_GLIDE_MODE);
        sliderAttachmentKIJIMI_GLIDE_MODE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_GLIDE_MODE", sliderKIJIMI_GLIDE_MODE));
        sliderKIJIMI_GLIDE_MODE.textFromValueFunction = [](double value) {
            if (value < 43){ return "Glide mode: off"; } 
            else if ((value >= 43) && (value < 86)){ return "Glide mode: portamento";}
            else { return "Glide mode: glissando";}
        };
        sliderKIJIMI_GLIDE_MODE.setLookAndFeel (&button2Alt3ValuesLookAndFeel);
        // Slider KIJIMI_VOLUME
        sliderKIJIMI_VOLUME.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_VOLUME.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_VOLUME.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_VOLUME);
        sliderAttachmentKIJIMI_VOLUME.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_VOLUME", sliderKIJIMI_VOLUME));
        sliderKIJIMI_VOLUME.textFromValueFunction = [](double value) {
            return String::formatted("Volume: %.2f", 10.0 * (value / 127.0));
        };
        sliderKIJIMI_VOLUME.setLookAndFeel (&knobLookAndFeel);
        // ComboBox KIJIMI_KNOB_BEH
        sliderKIJIMI_KNOB_BEH.addItemList (StringArray ({"PICK UP", "MERGE", "INSTANT"}), 1);
        addAndMakeVisible (&sliderKIJIMI_KNOB_BEH);
        sliderAttachmentKIJIMI_KNOB_BEH.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_KNOB_BEH", sliderKIJIMI_KNOB_BEH));
        // ComboBox KIJIMI_KNOB_CC_BEH
        sliderKIJIMI_KNOB_CC_BEH.addItemList (StringArray ({"PICK UP", "MERGE", "INSTANT"}), 1);
        addAndMakeVisible (&sliderKIJIMI_KNOB_CC_BEH);
        sliderAttachmentKIJIMI_KNOB_CC_BEH.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_KNOB_CC_BEH", sliderKIJIMI_KNOB_CC_BEH));
        // Slider KIJIMI_CC_RECEIVE
        sliderKIJIMI_CC_RECEIVE.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_CC_RECEIVE.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_CC_RECEIVE.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_CC_RECEIVE);
        sliderAttachmentKIJIMI_CC_RECEIVE.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_CC_RECEIVE", sliderKIJIMI_CC_RECEIVE));
        sliderKIJIMI_CC_RECEIVE.textFromValueFunction = [](double value) {
            if (value == 0){ return "CC Receive: off"; } 
            else { return "CC Receive: on";}
        };
        sliderKIJIMI_CC_RECEIVE.setLookAndFeel (&button1LookAndFeel);
        // ComboBox KIJIMI_AT_MODE
        sliderKIJIMI_AT_MODE.addItemList (StringArray ({"CHAN P", "POLY AT", "MPE"}), 1);
        addAndMakeVisible (&sliderKIJIMI_AT_MODE);
        sliderAttachmentKIJIMI_AT_MODE.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_AT_MODE", sliderKIJIMI_AT_MODE));
        // Slider KIJIMI_MPE_CH
        sliderKIJIMI_MPE_CH.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MPE_CH.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MPE_CH.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MPE_CH);
        sliderAttachmentKIJIMI_MPE_CH.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MPE_CH", sliderKIJIMI_MPE_CH));
        sliderKIJIMI_MPE_CH.textFromValueFunction = [](double value) {
            return "MPE base channel: " + String (value);
        };
        sliderKIJIMI_MPE_CH.setLookAndFeel (&knobLookAndFeel);
        // ComboBox KIJIMI_MIDI_CH
        sliderKIJIMI_MIDI_CH.addItemList (StringArray ({"ALL", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16"}), 1);
        addAndMakeVisible (&sliderKIJIMI_MIDI_CH);
        sliderAttachmentKIJIMI_MIDI_CH.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_MIDI_CH", sliderKIJIMI_MIDI_CH));
        // ComboBox KIJIMI_MIDI_OUT_CH
        sliderKIJIMI_MIDI_OUT_CH.addItemList (StringArray ({"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16"}), 1);
        addAndMakeVisible (&sliderKIJIMI_MIDI_OUT_CH);
        sliderAttachmentKIJIMI_MIDI_OUT_CH.reset(new AudioProcessorValueTreeState::ComboBoxAttachment (processor->parameters, "KIJIMI_MIDI_OUT_CH", sliderKIJIMI_MIDI_OUT_CH));
        // Slider KIJIMI_MAX_VOICES
        sliderKIJIMI_MAX_VOICES.setSliderStyle (Slider::Rotary);
        sliderKIJIMI_MAX_VOICES.setTextBoxStyle (Slider::NoTextBox, false, 90, 0);
        sliderKIJIMI_MAX_VOICES.setPopupDisplayEnabled (true, true, this, -1);
        addAndMakeVisible (&sliderKIJIMI_MAX_VOICES);
        sliderAttachmentKIJIMI_MAX_VOICES.reset(new AudioProcessorValueTreeState::SliderAttachment (processor->parameters, "KIJIMI_MAX_VOICES", sliderKIJIMI_MAX_VOICES));
        sliderKIJIMI_MAX_VOICES.textFromValueFunction = [](double value) {
            return "Maximum number of voices: " + String (value);
        };
        sliderKIJIMI_MAX_VOICES.setLookAndFeel (&knobLookAndFeel);
        // --> End auto-generated code B
    }
    
    void configureControlsForADSR2ModModeCommon () override
    {
        sliderKIJIMI_ADSR2_AMT.setEnabled(true);
    }
    
    void configureControlsForADSR2ModModeIndividual () override
    {
        sliderKIJIMI_ADSR2_AMT.setEnabled(false);
    }
    
    void configureControlsForLFOModModeCommon () override
    {
        sliderKIJIMI_LFO1_AMT.setEnabled(true);
        sliderKIJIMI_LFO1_RATE.setEnabled(true);
        sliderKIJIMI_LFO1_A.setEnabled(true);
        sliderKIJIMI_LFO1_D.setEnabled(true);
        sliderKIJIMI_LFO1_SHAPE.setEnabled(true);
        sliderKIJIMI_LFO2_AMT.setEnabled(true);
        sliderKIJIMI_LFO2_RATE.setEnabled(true);
        sliderKIJIMI_LFO2_A.setEnabled(true);
        sliderKIJIMI_LFO2_D.setEnabled(true);
        sliderKIJIMI_LFO2_SHAPE.setEnabled(true);
        sliderKIJIMI_LFO_ENV.setEnabled(true);
    }
    
    void configureControlsForLFOModModeIndividual () override
    {
        sliderKIJIMI_LFO1_AMT.setEnabled(false);
        sliderKIJIMI_LFO1_RATE.setEnabled(false);
        sliderKIJIMI_LFO1_A.setEnabled(false);
        sliderKIJIMI_LFO1_D.setEnabled(false);
        sliderKIJIMI_LFO1_SHAPE.setEnabled(false);
        sliderKIJIMI_LFO2_AMT.setEnabled(false);
        sliderKIJIMI_LFO2_RATE.setEnabled(false);
        sliderKIJIMI_LFO2_A.setEnabled(false);
        sliderKIJIMI_LFO2_D.setEnabled(false);
        sliderKIJIMI_LFO2_SHAPE.setEnabled(false);
        sliderKIJIMI_LFO_ENV.setEnabled(false);
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
        sliderKIJIMI_KNOB_BEH.setBounds (0.645 * getWidth(), 0.881 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_KNOB_BEH
        sliderKIJIMI_KNOB_CC_BEH.setBounds (0.703 * getWidth(), 0.881 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_KNOB_CC_BEH
        sliderKIJIMI_CC_RECEIVE.setBounds (0.942 * getWidth(), 0.651 * getHeight(), 0.031 * getWidth(), 0.110 * getHeight()); // Slider KIJIMI_CC_RECEIVE
        sliderKIJIMI_AT_MODE.setBounds (0.762 * getWidth(), 0.881 * getHeight(), 0.051 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_AT_MODE
        sliderKIJIMI_MPE_CH.setBounds (0.832 * getWidth(), 0.844 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_MPE_CH
        sliderKIJIMI_MIDI_CH.setBounds (0.934 * getWidth(), 0.839 * getHeight(), 0.048 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_MIDI_CH
        sliderKIJIMI_MIDI_OUT_CH.setBounds (0.934 * getWidth(), 0.885 * getHeight(), 0.048 * getWidth(), 0.037 * getHeight()); // Slider KIJIMI_MIDI_OUT_CH
        sliderKIJIMI_MAX_VOICES.setBounds (0.881 * getWidth(), 0.844 * getHeight(), 0.033 * getWidth(), 0.083 * getHeight()); // Slider KIJIMI_MAX_VOICES
        // --> End auto-generated code C
        
        ledsLFO1.setBounds(getWidth() * 515/1365, getHeight() * 335/545, getWidth() * 11.5/1365, getHeight() * 108.85/545);
        ledsLFO2.setBounds(getWidth() * 610/1365, getHeight() * 335/545, getWidth() * 11.5/1365, getHeight() * 108.85/545);
    }
    
private:
    
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
    ComboBox sliderKIJIMI_KNOB_BEH;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_KNOB_BEH;
    ComboBox sliderKIJIMI_KNOB_CC_BEH;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_KNOB_CC_BEH;
    CycleButtonSlider2StepsInt sliderKIJIMI_CC_RECEIVE;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_CC_RECEIVE;
    ComboBox sliderKIJIMI_AT_MODE;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_AT_MODE;
    Slider sliderKIJIMI_MPE_CH;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MPE_CH;
    ComboBox sliderKIJIMI_MIDI_CH;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_MIDI_CH;
    ComboBox sliderKIJIMI_MIDI_OUT_CH;
            std::unique_ptr<AudioProcessorValueTreeState::ComboBoxAttachment> sliderAttachmentKIJIMI_MIDI_OUT_CH;
    Slider sliderKIJIMI_MAX_VOICES;
            std::unique_ptr<AudioProcessorValueTreeState::SliderAttachment> sliderAttachmentKIJIMI_MAX_VOICES;
    // --> End auto-generated code A
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMIControlPanelComponent);
};
