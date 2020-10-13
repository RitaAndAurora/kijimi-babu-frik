/*
  ==============================================================================

    CustomClasses.h
    Created: 4 Aug 2020 3:23:35pm
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once


#include "../JuceLibraryCode/JuceHeader.h"


class CycleButtonSliderNSteps: public Slider
{
    virtual int getNSteps() {
        return 4;
    };
    
    void mouseDown (const MouseEvent&) override {
        int nSteps = getNSteps();
        double currentValue = round(getValue());
        double stepSize = (getMaximum() + 1) / nSteps;
        double newValue = 0;
        for (int i=0; i < nSteps; i++){
            if ((currentValue >= stepSize * i) && (currentValue < stepSize * (i + 1))){
                if (i < nSteps - 1){
                    newValue = round(stepSize / 2 + stepSize * (i + 1));
                } else {
                    newValue = round(stepSize / 2);
                }
            }
        }
        setValue (newValue, sendNotificationSync);
    }

    void mouseUp (const MouseEvent&) override {
        // Do nothing
    }
    
    void mouseDrag (const MouseEvent&) override {
        // Do nothing
    }
    
    void mouseDoubleClick (const MouseEvent&) override {
        // Do nothing
    }
    
    void mouseWheelMove (const MouseEvent&, const MouseWheelDetails&) override {
        // Do nothing
    }
};

class CycleButtonSlider4Steps: public CycleButtonSliderNSteps
{
    int getNSteps() override { return 4; };
};

class CycleButtonSlider3Steps: public CycleButtonSliderNSteps
{
    int getNSteps() override { return 3; };
};

class CycleButtonSlider2Steps: public CycleButtonSliderNSteps
{
    int getNSteps() override { return 2; };
};

class CycleButtonSlider6StepsInverted: public CycleButtonSliderNSteps
{
    int getNSteps() override { return 6; };
    
    void mouseDown (const MouseEvent&) override {
        int nSteps = getNSteps();
        double currentValue = round(getValue());
        double stepSize = (getMaximum() + 1) / nSteps;
        double newValue = 0;
        for (int i=0; i < nSteps; i++){
            if ((currentValue >= stepSize * i) && (currentValue < stepSize * (i + 1))){
                if (i > 0){
                    newValue = round(stepSize / 2 + stepSize * (i - 1));
                } else {
                    newValue = round(stepSize * nSteps - stepSize / 2);
                }
            }
        }
        setValue (newValue, sendNotificationSync);
    }
};

class CycleButtonSliderNStepsInt: public Slider
{
    virtual int getNSteps() {
        return 4;
    };
    
    void mouseDown (const MouseEvent&) override {
        int nSteps = getNSteps();
        double currentValue = round(getValue());
        double newValue = currentValue + 1.0;
        if (newValue >= (double)nSteps){
            newValue = 0.0;
        }
        setValue (newValue, sendNotificationSync);
    }

    void mouseUp (const MouseEvent&) override {
        // Do nothing
    }
    
    void mouseDrag (const MouseEvent&) override {
        // Do nothing
    }
    
    void mouseDoubleClick (const MouseEvent&) override {
        // Do nothing
    }
    
    void mouseWheelMove (const MouseEvent&, const MouseWheelDetails&) override {
        // Do nothing
    }
};

class CycleButtonSlider2StepsInt: public CycleButtonSliderNStepsInt
{
    int getNSteps() override { return 2; };
};

class CycleButtonSlider3StepsInt: public CycleButtonSliderNStepsInt
{
    int getNSteps() override { return 3; };
};

class CycleButtonSlider4StepsInt: public CycleButtonSliderNStepsInt
{
    int getNSteps() override { return 4; };
};


class KijimiLEDStripComponent: public Component,
                               public ActionListener
{
public:
    
    KijimiLEDStripComponent ()
    {
    }
    
    ~KijimiLEDStripComponent ()
    {
        processor->removeActionListener(this);  // Stop receivng messages from processor
    }
    
    void initialize (BabuFrikAudioProcessor* p, const String& _parameterUpdateID)
    {
        parameterUpdateID = _parameterUpdateID;
        
        // Set processor object
        processor = p;
        
        // Set up listeners
        processor->addActionListener(this);  // Receive messages from processor
        
        // Update selected led
        updatetSelectedLED();
    }

    
    void resized () override
    {
    }
    
    void paint (Graphics& g) override
    {
        Colour redOFFLEDColour = Colour (0xff700000);
        Colour redONLEDColour = Colour (0xffff0000);
        
        float buttonRadius = getWidth();
        
        for (int i=0; i<6; i++){
            if (i==selectedLed){
                g.setColour(redONLEDColour);
            } else {
                g.setColour(redOFFLEDColour);
            }
            g.fillEllipse(0,  getHeight()/6 * i, buttonRadius, buttonRadius);
        }
    }
    
    void updatetSelectedLED(){
        if (parameterUpdateID != ""){
            AudioParameterFloat* shapeParam = (AudioParameterFloat*)processor->parameters.getParameter(parameterUpdateID);
            float shapeVal = shapeParam->get();
            if (shapeVal < 21){
                selectedLed = 5;
            } else if ((shapeVal >= 21) && (shapeVal < 42)){
                selectedLed = 4;
            } else if ((shapeVal >= 42) && (shapeVal < 64)){
                selectedLed = 3;
            } else if ((shapeVal >= 64) && (shapeVal < 85)){
                selectedLed = 2;
            } else if ((shapeVal >= 85) && (shapeVal < 107)){
                selectedLed = 1;
            } else {
                selectedLed = 0;
            }
            repaint();
        }
    }
    
    void actionListenerCallback (const String &message) override
    {
        if (message.startsWith(String(ACTION_LFO_LEDS_SHOULD_UPDATE))){
            updatetSelectedLED();
        }
    }
    
    
private:
    BabuFrikAudioProcessor* processor;
    String parameterUpdateID = "";
    int selectedLed = 0;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KijimiLEDStripComponent);
};

