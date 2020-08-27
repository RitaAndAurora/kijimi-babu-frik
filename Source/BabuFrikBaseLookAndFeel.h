/*
  ==============================================================================

    BabuFrikBaseLookAndFeel.h
    Created: 26 Jul 2019 9:00:21am
    Author:  Frederic Font Corbera

  ==============================================================================
*/

#pragma once


class BabuFrikBaseLookAndFeel: public LookAndFeel_V4
{
public:
    BabuFrikBaseLookAndFeel()
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
    
    ~BabuFrikBaseLookAndFeel()
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


class BabuFrikKnobLookAndFeel: public BabuFrikBaseLookAndFeel
{
public:
    
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


class BabuFrikButton2LookAndFeel: public BabuFrikBaseLookAndFeel
{
public:
    
    void drawRotarySlider (Graphics& g, int x, int y, int width, int height, float sliderPos,
                               float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override
    {
        // Button with 2 LEDs
        
        // Outer rectagle
        juce::Rectangle<int> rectArea (x, y, width, height);
        g.setColour (Colour (0xff555555));
        g.drawRect (rectArea, 1.0);
        
        // Upper rectangle
        g.setColour (Colour (0xff555555));
        g.fillRect (x, y, width, height * 0.385);
        
        // LEDs
        Colour redLEDColour = Colour (0xff700000);
        Colour greenLEDColour = Colour (0xff105200);
        
        if ((sliderPos > 0.25) && (sliderPos <= 0.5)){
            greenLEDColour = Colour (0xff2CFF00);
        }
        else if ((sliderPos > 0.5) && (sliderPos <= 0.75)){
            redLEDColour = Colour (0xffff0000);
        }
        else if ((sliderPos > 0.75) && (sliderPos <= 1.0)){
            redLEDColour = Colour (0xffff0000);
            greenLEDColour = Colour (0xff2CFF00);
        }
        else {
            // Value <= 25%, do nothing
        }
            
        g.setColour(redLEDColour);
        g.fillEllipse(x + width * 0.15, y + 0.11 * height, 0.18 * height, 0.18 * height);
        
        g.setColour(greenLEDColour);
        g.fillEllipse(x + width - (width * 0.15 + 0.18 * height), y + 0.11 * height, 0.18 * height, 0.18 * height);
    }
};

class BabuFrikButton2AltLookAndFeel: public BabuFrikBaseLookAndFeel
{
public:
    
    void drawRotarySlider (Graphics& g, int x, int y, int width, int height, float sliderPos,
                               float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override
    {
        // Button with 2 LEDs (with red and green "ordering" inverted)
        
        // Outer rectagle
        juce::Rectangle<int> rectArea (x, y, width, height);
        g.setColour (Colour (0xff555555));
        g.drawRect (rectArea, 1.0);
        
        // Upper rectangle
        g.setColour (Colour (0xff555555));
        g.fillRect (x, y, width, height * 0.385);
        
        // LEDs
        Colour redLEDColour = Colour (0xff700000);
        Colour greenLEDColour = Colour (0xff105200);
        
        if ((sliderPos > 0.25) && (sliderPos <= 0.5)){
            redLEDColour = Colour (0xffff0000);
        }
        else if ((sliderPos > 0.5) && (sliderPos <= 0.75)){
            greenLEDColour = Colour (0xff2CFF00);
        }
        else if ((sliderPos > 0.75) && (sliderPos <= 1.0)){
            redLEDColour = Colour (0xffff0000);
            greenLEDColour = Colour (0xff2CFF00);
        }
        else {
            // Value <= 25%, do nothing
        }
            
        g.setColour(redLEDColour);
        g.fillEllipse(x + width * 0.15, y + 0.11 * height, 0.18 * height, 0.18 * height);
        
        g.setColour(greenLEDColour);
        g.fillEllipse(x + width - (width * 0.15 + 0.18 * height), y + 0.11 * height, 0.18 * height, 0.18 * height);
    }
};

class BabuFrikButton2Alt3ValuesLookAndFeel: public BabuFrikBaseLookAndFeel
{
public:
    
    void drawRotarySlider (Graphics& g, int x, int y, int width, int height, float sliderPos,
                               float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override
    {
        // Button with 2 LEDs (with red and green "ordering" inverted)
        
        // Outer rectagle
        juce::Rectangle<int> rectArea (x, y, width, height);
        g.setColour (Colour (0xff555555));
        g.drawRect (rectArea, 1.0);
        
        // Upper rectangle
        g.setColour (Colour (0xff555555));
        g.fillRect (x, y, width, height * 0.385);
        
        // LEDs
        Colour redLEDColour = Colour (0xff700000);
        Colour greenLEDColour = Colour (0xff105200);
        
        if ((sliderPos > 0.0) && (sliderPos <= 0.33)){
            // Nothing (no led on)
        }
        else if ((sliderPos > 0.33) && (sliderPos <= 0.66)){
            redLEDColour = Colour (0xffff0000);
        }
        else if ((sliderPos > 0.66) && (sliderPos <= 1.0)){
            greenLEDColour = Colour (0xff2CFF00);
        }
            
        g.setColour(redLEDColour);
        g.fillEllipse(x + width * 0.15, y + 0.11 * height, 0.18 * height, 0.18 * height);
        
        g.setColour(greenLEDColour);
        g.fillEllipse(x + width - (width * 0.15 + 0.18 * height), y + 0.11 * height, 0.18 * height, 0.18 * height);
    }
};

class BabuFrikButton1LookAndFeel: public BabuFrikBaseLookAndFeel
{
public:
    
    void drawRotarySlider (Graphics& g, int x, int y, int width, int height, float sliderPos,
                               float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override
    {
        // Button with 1 LED
        
        // Outer rectagle
        juce::Rectangle<int> rectArea (x, y, width, height);
        g.setColour (Colour (0xff555555));
        g.drawRect (rectArea, 1.0);
        
        // Upper rectangle
        g.setColour (Colour (0xff555555));
        g.fillRect (x, y, width, height * 0.385);
        
        // LEDs
        Colour redLEDColour = Colour (0xff700000);
        if (sliderPos >= 0.5){
            redLEDColour = Colour (0xffff0000);
        }
            
        g.setColour(redLEDColour);
        g.fillEllipse(x + width/2 - (0.18 * height)/2, y + 0.11 * height, 0.18 * height, 0.18 * height);
    }
};

class BabuFrikButton0LookAndFeel: public BabuFrikBaseLookAndFeel
{
public:
    
    void drawRotarySlider (Graphics& g, int x, int y, int width, int height, float sliderPos,
                               float rotaryStartAngle, float rotaryEndAngle, Slider& slider) override
    {
        // Button with NO LEDs
        
        // Outer rectagle
        juce::Rectangle<int> rectArea (x, y, width, height);
        g.setColour (Colour (0xff555555));
        g.drawRect (rectArea, 1.0);
        
        // Upper rectangle
        g.setColour (Colour (0xff555555));
        g.fillRect (x, y, width, height * 0.385);
    }
};
