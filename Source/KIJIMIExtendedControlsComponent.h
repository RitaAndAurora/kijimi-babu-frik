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
        // --> End auto-generated code C
    }
    
private:
    
    // Timbre Space component
    TimbreSpaceComponent timbreSpace;
    
    // Slider declarations
    // --> Start auto-generated code A
    // --> End auto-generated code A
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMIExtendedControlsPanelComponent);
};
