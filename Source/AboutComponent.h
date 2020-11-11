/*
  ==============================================================================

    AboutComponent.h
    Created: 2 Jul 2019 5:44:21pm
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "defines.h"

class AboutComponent: public Component
{
public:
    
    AboutComponent ()
    {
        text.setMultiLine (true);
        text.setReturnKeyStartsNewLine (true);
        text.setReadOnly (true);
        text.setScrollbarsShown (true);
        text.setCaretVisible (false);
        text.setColour (TextEditor::backgroundColourId, Colour (0xff2f2f2f));
        text.setColour (TextEditor::outlineColourId, Colour (0x1c000000));
        text.setText(""
         "About\n-----\n\n"
         "Named after a famous droidsmith who's said to be able to reprogram any droid and even make them speak Sith, Babu Frik is a software app that allows you to control and explore the sonic possibilities of the KIJIMI synthesiser by Black Corporation. It works both as a stand-alone app and as an audio plug-in with automatable parameters.\n\n"
         "With Babu Frik you can import KIJIMI banks (from files or from KIJIMI itself), edit patches and export them. When you import a bank, a Timbre Space will be created which will allow you to navigate all the patches in a colourful space and create new ones. Just click anywhere on the Timbre Space and play the synth. Click on another point to get a new patch. Close points in the space will result in similar sounding patches.\n\n"
         "Babu Frik includes all the controls you'll find the main panel of KIJIMI, but also includes extra panels which will allow you to control all the extra KIJIMI menu-hidden options, including the 16 individual LFOs.\n\n"
         "Communication between Babu Frik  and KIJIMI happens over MIDI (with both control change and sysex messages). Make sure you have properly configured MIDI IN/OUT settings of both Babu Frik and KIJIMI.\n\n"
         "Please check out " + String(MORE_INFO_URL) + " for more information about Babu Frik and how to use it.\n\n"
         "\nCredits, licenses, acknowledgements\n-------------------------------\n\n"
         "Babu Frik has been ideated and developed by Rita & Aurora, a sort of fancy branding name I've given to my audio-developer self. Nevertheless, Babu Frik would have not been possible without the generous contributions of the KICKSTARTER BACKERS and BLACK CORPORATION. Infinite thanks to all of you! Here is the backers list:\n"
         "\n  - Absolutely awesome backers\n"
         "  FREQNOIR\n"
         "  MONTY BRANDENBERG\n"
         "  ROB BEKHUIS \n"
         "  RODRIGUE DUCOURANT\n"
         "  RON DEACON\n"
         "  STEPHEN DRAKE\n"
         "\n  - Gold backers\n"
         "  Anasia\n"
         "  Antonio Martinez\n"
         "  Derek Matthew Duke\n"
         "  DSL-man\n"
         "  Eric Harder\n"
         "  Jeremy Curtis\n"
         "  Kevin T. Looney\n"
         "  Neil Huxley\n"
         "  Robert Kukuchka\n"
         "  Rupert Williams\n"
         "  STEGA\n"
         "  triangle\n"
         "  Unkar Plutt\n"
         "\n  - Silver backers\n"
         "  Christer Janson\n"
         "  Claudiu D.\n"
         "  Cléo\n"
         "  Jake Boswell\n"
         "  Jon Daou\n"
         "  Kevin Meyer\n"
         "  Reggie Barnes\n"
         "\n  - Bronze backers\n"
         "  Alex Taam\n"
         "  Dan Formless (Forward Movement)\n"
         "  David Forman\n"
         "  Janne Isotalo\n"
         "  Morgan Ross\n"
         "  Pyramid\n"
         "  René M Thalund\n"
         "\nBabu Frik uses the following open source software libraries: tapkee (BSD 3-clause), delaunator-cpp (MIT) and juce (GPLv3); and is released under GPLv3 software license.  Source code is available at " + String(SOURCE_CODE_URL) + ".\n\n");
        
        addAndMakeVisible(text);
    }
    
    void resized () override
    {
        text.setBounds (0, 0, getWidth(), getHeight());
    }
    
private:
    TextEditor text;
            
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AboutComponent);
};
