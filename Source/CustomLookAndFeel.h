/*
  ==============================================================================

    CustomLookAndFeel.h
    Created: 26 Jul 2019 9:00:21am
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once


class CustomLookAndFeel: public LookAndFeel_V4
{
public:
    CustomLookAndFeel()
    {
        // Init fonts
        tsHudFont = Typeface::createSystemTypefaceFor(BinaryData::MODENINE_TTF, BinaryData::MODENINE_TTFSize);
        defaultFont = Typeface::createSystemTypefaceFor(Font(defaultFontSize));
        
        // Specify custom colors
        setColour (ResizableWindow::backgroundColourId, Colour (0xff2f2f2f));
        setColour (PopupMenu::backgroundColourId, Colour (0xff2f2f2f));
        setColour (PopupMenu::highlightedBackgroundColourId, Colour (0xff5f5f5f));
        setColour (ComboBox::backgroundColourId, Colour (0xff2f2f2f));
        setColour (TextButton::buttonColourId, Colour (0xff2f2f2f));
        setColour (BubbleComponent::backgroundColourId, Colour (0xff2f2f2f));
        setColour (AlertWindow::backgroundColourId, Colour (0xff010101));
        setColour (AlertWindow::outlineColourId, Colour (0xff5f5f5f));
    }
    
    ~CustomLookAndFeel()
    {
    }
    
    Font getTextButtonFont (TextButton&, int buttonHeight) override
    {
        Font font = Font(defaultFont);
        font.setHeight(defaultFontSize);
        return font;
    }
    
    Font getLabelFont (Label&) override
    {
        Font font = Font(defaultFont);
        font.setHeight(defaultFontSize);
        return font;
    }
    
    Font getSliderPopupFont (Slider&) override
    {
        Font font = Font(defaultFont);
        font.setHeight(defaultFontSize);
        return font;
    }
    
    Font getAlertWindowMessageFont () override
    {
        Font font = Font(defaultFont);
        font.setHeight(defaultFontSize);
        return font;
    }
    
    Font getAlertWindowTitleFont () override
    {
        Font font = Font(defaultFont);
        font.setHeight(defaultFontSize * 1.2);
        font.setBold(true);
        return font;
    }
    
    // Defaults
    float defaultFontSize = 14.0;
    
    // Make fonts public so it can be accessed from outside if needed
    Typeface::Ptr tsHudFont;
    Typeface::Ptr defaultFont;
    
    // Custom knob drawing
    void drawRotarySlider (Graphics& g, int x, int y, int width, int height, float sliderPos,
                               float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override
    {
        const float radius = jmin (width / 2, height / 2) - 2.0f;
        const float centreX = x + width * 0.5f;
        const float centreY = y + height * 0.5f;
        const float angle = rotaryStartAngle + sliderPos * (rotaryEndAngle - rotaryStartAngle);

        // bg arc
        Path backgroundArc;
        backgroundArc.addCentredArc (centreX,
                                     centreY,
                                     radius,
                                     radius,
                                     0.0f,
                                     rotaryStartAngle,
                                     rotaryEndAngle,
                                     true);
        g.setColour (Colour (0xff555555));
        g.strokePath (backgroundArc, PathStrokeType (2.0, PathStrokeType::curved, PathStrokeType::square));
        
        // fg arc
        Path foregroundArc;
        foregroundArc.addCentredArc (centreX,
                                     centreY,
                                     radius,
                                     radius,
                                     0.0f,
                                     rotaryStartAngle,
                                     angle,
                                     true);
        g.setColour (Colour (0xffffffff));
        g.strokePath (foregroundArc, PathStrokeType (2.0, PathStrokeType::curved, PathStrokeType::square));
    }
};
