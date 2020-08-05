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

class CycleButtonSlider6Steps: public CycleButtonSliderNSteps
{
    int getNSteps() override { return 6; };
};
