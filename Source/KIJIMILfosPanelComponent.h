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
        // --> End auto-generated code B
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
        // --> End auto-generated code C
    }
    
private:
    
    // Slider declarations
    // --> Start auto-generated code A
    // --> End auto-generated code A
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (KIJIMILfosPanelComponent);
};
