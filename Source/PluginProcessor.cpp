/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin processor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "KIJIMIInterface.h"

//==============================================================================
BabuFrikAudioProcessor::BabuFrikAudioProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  AudioChannelSet::stereo(), true)
                      #endif
                       .withOutput ("Output", AudioChannelSet::stereo(), true)
                     #endif
                       ),
        parameters (*this, nullptr, Identifier (STATE_AUDIO_PARAMETERS_IDENTIFIER),
            {
                // Add all audio parameters to plugin
                // --> Start auto-generated code A
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_AMT", // parameter ID
                                                            "LFO1 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO1_P", // parameter ID
                                                            "LFO1 to VCO1 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO2_P", // parameter ID
                                                            "LFO1 to VCO2 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE1_P", // parameter ID
                                                            "LFO1 to WAVE1 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE2_P", // parameter ID
                                                            "LFO1 to WAVE2 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1SUB_P", // parameter ID
                                                            "LFO1 to SUB polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCF_P", // parameter ID
                                                            "LFO1 to VCF polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1RESO_P", // parameter ID
                                                            "LFO1 to RESO polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCA_P", // parameter ID
                                                            "LFO1 to VCA polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_AMT", // parameter ID
                                                            "LFO2 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO1_P", // parameter ID
                                                            "LFO2 to VCO1 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO2_P", // parameter ID
                                                            "LFO2 to VCO2 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE1_P", // parameter ID
                                                            "LFO2 to WAVE1 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE2_P", // parameter ID
                                                            "LFO2 to WAVE2 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2SUB_P", // parameter ID
                                                            "LFO2 to SUB polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCF_P", // parameter ID
                                                            "LFO2 to VCF polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2RESO_P", // parameter ID
                                                            "LFO2 to RESO polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCA_P", // parameter ID
                                                            "LFO2 to VCA polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2_AMT", // parameter ID
                                                            "ADSR2 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2VCO1_P", // parameter ID
                                                            "ADSR2 to VCO1 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2VCO2_P", // parameter ID
                                                            "ADSR2 to VCO2 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2WAVE1_P", // parameter ID
                                                            "ADSR2 to WAVE1 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2WAVE2_P", // parameter ID
                                                            "ADSR2 to WAVE2 polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO2VCO1", // parameter ID
                                                            "VCO2 to VCO1", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO2VCF", // parameter ID
                                                            "VCO2 to VCF", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VEL_LFO1RATE", // parameter ID
                                                            "Velocity to LFO1 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VEL_LFO2RATE", // parameter ID
                                                            "Velocity to LFO2 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VEL_WAVE", // parameter ID
                                                            "Velocity to waveform", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VEL_SUB", // parameter ID
                                                            "Velocity to sub amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VEL_PITCH", // parameter ID
                                                            "Velocity to pitchbend", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VEL_VCA", // parameter ID
                                                            "Velocity to VCA", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_LFO1RATE", // parameter ID
                                                            "Aftertouch to LFO1 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_LFO2RATE", // parameter ID
                                                            "Aftertouch to LFO2 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_WAVE", // parameter ID
                                                            "Aftertouch to waveform", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_SUB", // parameter ID
                                                            "Aftertouch to sub amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_PITCH", // parameter ID
                                                            "Aftertouch to pitchbend", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_VCA", // parameter ID
                                                            "Aftertouch to VCA", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_RATE", // parameter ID
                                                            "LFO1 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_A", // parameter ID
                                                            "LFO1 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_D", // parameter ID
                                                            "LFO1 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_SHAPE", // parameter ID
                                                            "LFO1 shape", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_RATE", // parameter ID
                                                            "LFO2 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_A", // parameter ID
                                                            "LFO2 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_D", // parameter ID
                                                            "LFO2 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_SHAPE", // parameter ID
                                                            "LFO2 shape", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO_ENV", // parameter ID
                                                            "LFO envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO1_FREQ", // parameter ID
                                                            "VCO1 frequency", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO1_WAVE", // parameter ID
                                                            "VCO1 waveform", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO1_VOL13", // parameter ID
                                                            "VCO1 volume 1/3", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO1_VOL23", // parameter ID
                                                            "VCO1 volume 2/3", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SUB_VOL", // parameter ID
                                                            "Sub volume", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_NOISE_VOL13", // parameter ID
                                                            "Noise volume 1/3", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_NOISE_VOL23", // parameter ID
                                                            "Noise volume 2/3", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO2_FREQ", // parameter ID
                                                            "VCO2 frequency", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO2WAVE", // parameter ID
                                                            "VCO2 waveform", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO2_VOL", // parameter ID
                                                            "VCO2 volume", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO2_DETUNE", // parameter ID
                                                            "VCO2 detune", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO_SYNC", // parameter ID
                                                            "VCO sync", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO_KOFF", // parameter ID
                                                            "VCO key off", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_FREQ", // parameter ID
                                                            "VCF Frequency", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_VEL_C", // parameter ID
                                                            "VCF Velocity control", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_AT_C", // parameter ID
                                                            "VCF Aftertouch control", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_ADSR2_C", // parameter ID
                                                            "VCF ADSR2 control", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_RESO", // parameter ID
                                                            "VCF Resonance", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_Q_VEL_C", // parameter ID
                                                            "VCF Velocity Q control", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_Q_AT_C", // parameter ID
                                                            "VCF Aftertouch Q control", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_KEY_C", // parameter ID
                                                            "VCF Keyboard control", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2_A", // parameter ID
                                                            "ADSR2 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2_D", // parameter ID
                                                            "ADSR2 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2_S", // parameter ID
                                                            "ADSR2 sustain", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2_R", // parameter ID
                                                            "ADSR2 release", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR1_A", // parameter ID
                                                            "ADSR1 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR1_D", // parameter ID
                                                            "ADSR1 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR1_S", // parameter ID
                                                            "ADSR1 sustain", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR1_R", // parameter ID
                                                            "ADSR1 release", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR_MULT", // parameter ID
                                                            "ADSR mult", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR_CYCLE", // parameter ID
                                                            "ADSR cycle", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR_KT", // parameter ID
                                                            "ADSR KT", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_GLIDE_RATE", // parameter ID
                                                            "Glide rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_GLIDE_MODE", // parameter ID
                                                            "Glide mode", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VOLUME", // parameter ID
                                                            "Volume", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_KNOB_BEH", // parameter ID
                                                            "Knobs behaviour", // parameter name
                                                            StringArray ({"pick up", "merge", "instant"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_CC_RECEIVE", // parameter ID
                                                            "CC Receive", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_AT_MODE", // parameter ID
                                                            "Aftertouch mode", // parameter name
                                                            StringArray ({"channel pressure", "poly aftertouch", "MPE"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MPE_CH", // parameter ID
                                                            "MPE base channel", // parameter name
                                                            NormalisableRange < float > (0.0f, 7.0f, 1.0f), // parameter range
                                                            4.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MIDI_CH", // parameter ID
                                                            "MIDI in channel", // parameter name
                                                            NormalisableRange < float > (0.0f, 16.0f, 1.0f), // parameter range
                                                            8.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MIDI_OUT_CH", // parameter ID
                                                            "MIDI out channel", // parameter name
                                                            NormalisableRange < float > (0.0f, 15.0f, 1.0f), // parameter range
                                                            8.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MAX_VOICES", // parameter ID
                                                            "Maximum number of voices", // parameter name
                                                            NormalisableRange < float > (1.0f, 8.0f, 1.0f), // parameter range
                                                            4.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR_MOD_MODE", // parameter ID
                                                            "ADSR2 modulation mode", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_CYCLE_MODE", // parameter ID
                                                            "Cycle poly/mono", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_KT_MULTIPLIER", // parameter ID
                                                            "KT multiplier", // parameter name
                                                            NormalisableRange < float > (0.0f, 2.0f, 1.0f), // parameter range
                                                            1.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO_MODE", // parameter ID
                                                            "LFO poly/mono", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO_MOD_MODE", // parameter ID
                                                            "LFO modulation mode", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO_POLY_RETRIG", // parameter ID
                                                            "LFO poly mode EG retrig", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_ENV_DEST", // parameter ID
                                                            "LFO1 EG destination", // parameter name
                                                            NormalisableRange < float > (0.0f, 2.0f, 1.0f), // parameter range
                                                            1.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_ENV_MAX_T", // parameter ID
                                                            "LFO1 EG max time", // parameter name
                                                            NormalisableRange < float > (1.0f, 20.0f, 1.0f), // parameter range
                                                            10.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_ENV_P", // parameter ID
                                                            "LFO1 EG amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 19.0f, 1.0f), // parameter range
                                                            10.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_SYNC", // parameter ID
                                                            "LFO1 sync", // parameter name
                                                            NormalisableRange < float > (0.0f, 2.0f, 1.0f), // parameter range
                                                            1.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_MAX_R", // parameter ID
                                                            "LFO1 max rate", // parameter name
                                                            NormalisableRange < float > (2.0f, 100.0f, 1.0f), // parameter range
                                                            49.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_MIN_R", // parameter ID
                                                            "LFO1 min rate", // parameter name
                                                            NormalisableRange < float > (1.0f, 100.0f, 1.0f), // parameter range
                                                            50.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1_SUST", // parameter ID
                                                            "LFO1 sustain", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_ENV_DEST", // parameter ID
                                                            "LFO2 EG destination", // parameter name
                                                            NormalisableRange < float > (0.0f, 2.0f, 1.0f), // parameter range
                                                            1.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_ENV_MAX_T", // parameter ID
                                                            "LFO2 EG max time", // parameter name
                                                            NormalisableRange < float > (1.0f, 20.0f, 1.0f), // parameter range
                                                            10.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_ENV_P", // parameter ID
                                                            "LFO2 EG amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 19.0f, 1.0f), // parameter range
                                                            10.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_SYNC", // parameter ID
                                                            "LFO2 sync", // parameter name
                                                            NormalisableRange < float > (0.0f, 2.0f, 1.0f), // parameter range
                                                            1.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_MAX_R", // parameter ID
                                                            "LFO2 max rate", // parameter name
                                                            NormalisableRange < float > (2.0f, 100.0f, 1.0f), // parameter range
                                                            49.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_MIN_R", // parameter ID
                                                            "LFO2 min rate", // parameter name
                                                            NormalisableRange < float > (1.0f, 100.0f, 1.0f), // parameter range
                                                            50.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2_SUST", // parameter ID
                                                            "LFO2 sustain", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_AT_CURVE", // parameter ID
                                                            "Aftertouch curve", // parameter name
                                                            StringArray ({"linear", "log", "exp", "S-type", "N-type"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_CC74_DEST", // parameter ID
                                                            "CC74 destination", // parameter name
                                                            StringArray ({"off", "LFO1 rate", "LFO2 rate", "sub osc", "VCF freq", "VCF reso"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_MODW_DEST", // parameter ID
                                                            "Modwheel destination", // parameter name
                                                            StringArray ({"LFO1 rate", "LFO2 rate", "LFO1 amt", "LFO2 amt", "VCF freq"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MODW_P", // parameter ID
                                                            "Modwheel polarity", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_PBEND_RANGE", // parameter ID
                                                            "Pitchbend range", // parameter name
                                                            NormalisableRange < float > (1.0f, 99.0f, 1.0f), // parameter range
                                                            49.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MPE_PBEND_RANGE", // parameter ID
                                                            "MPE Pitchbend range", // parameter name
                                                            NormalisableRange < float > (1.0f, 99.0f, 1.0f), // parameter range
                                                            49.0f),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_VEL_CURVE", // parameter ID
                                                            "Velocity curve", // parameter name
                                                            StringArray ({"linear", "log", "exp", "S-type", "N-type"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR_VCA", // parameter ID
                                                            "ADSR VCA level", // parameter name
                                                            NormalisableRange < float > (0.0f, 10.0f, 1.0f), // parameter range
                                                            5.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MASTER_VOL", // parameter ID
                                                            "Master volume", // parameter name
                                                            NormalisableRange < float > (0.0f, 12.0f, 1.0f), // parameter range
                                                            6.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO_DETUNE", // parameter ID
                                                            "VCO detune", // parameter name
                                                            NormalisableRange < float > (0.0f, 30.0f, 1.0f), // parameter range
                                                            15.0f),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_CARDS_VOCIE", // parameter ID
                                                            "Cards per voice", // parameter name
                                                            StringArray ({"1", "2", "4"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LEG_EG_RETRIG", // parameter ID
                                                            "Legato EG retrig", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LEG_PRIORITY", // parameter ID
                                                            "Legato priority", // parameter name
                                                            NormalisableRange < float > (0.0f, 2.0f, 1.0f), // parameter range
                                                            1.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MONO_MODE", // parameter ID
                                                            "Mono mode", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MONO_POLY", // parameter ID
                                                            "Mono/poly/unisson", // parameter name
                                                            NormalisableRange < float > (0.0f, 2.0f, 1.0f), // parameter range
                                                            1.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SUSTAIN_MODE", // parameter ID
                                                            "Sustain mode", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO1_AM", // parameter ID
                                                            "LFO1 to VCO1 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO2_AM", // parameter ID
                                                            "LFO1 to VCO2 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE1_AM", // parameter ID
                                                            "LFO1 to WAVE1 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE2_AM", // parameter ID
                                                            "LFO1 to WAVE2 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1SUB_AM", // parameter ID
                                                            "LFO1 to SUB amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCF_AM", // parameter ID
                                                            "LFO1 to VCF amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1RESO_AM", // parameter ID
                                                            "LFO1 to RESO amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCA_AM", // parameter ID
                                                            "LFO1 to VCA amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO1_AM", // parameter ID
                                                            "LFO2 to VCO1 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO2_AM", // parameter ID
                                                            "LFO2 to VCO2 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE1_AM", // parameter ID
                                                            "LFO2 to WAVE1 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE2_AM", // parameter ID
                                                            "LFO2 to WAVE2 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2SUB_AM", // parameter ID
                                                            "LFO2 to SUB amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCF_AM", // parameter ID
                                                            "LFO2 to VCF amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2RESO_AM", // parameter ID
                                                            "LFO2 to RESO amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCA_AM", // parameter ID
                                                            "LFO2 to VCA amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2VCO1_AM", // parameter ID
                                                            "ADSR2 to VCO1 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2VCO2_AM", // parameter ID
                                                            "ADSR2 to VCO2 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2WAVE1_AM", // parameter ID
                                                            "ADSR2 to WAVE1 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_ADSR2WAVE2_AM", // parameter ID
                                                            "ADSR2 to WAVE2 amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO1_R", // parameter ID
                                                            "LFO1 to VCO1 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO2_R", // parameter ID
                                                            "LFO1 to VCO2 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE1_R", // parameter ID
                                                            "LFO1 to WAVE1 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE2_R", // parameter ID
                                                            "LFO1 to WAVE2 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1SUB_R", // parameter ID
                                                            "LFO1 to SUB rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCF_R", // parameter ID
                                                            "LFO1 to VCF rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1RESO_R", // parameter ID
                                                            "LFO1 to RESO rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCA_R", // parameter ID
                                                            "LFO1 to VCA rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO1_R", // parameter ID
                                                            "LFO2 to VCO1 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO2_R", // parameter ID
                                                            "LFO2 to VCO2 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE1_R", // parameter ID
                                                            "LFO2 to WAVE1 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE2_R", // parameter ID
                                                            "LFO2 to WAVE2 rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2SUB_R", // parameter ID
                                                            "LFO2 to SUB rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCF_R", // parameter ID
                                                            "LFO2 to VCF rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2RESO_R", // parameter ID
                                                            "LFO2 to RESO rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCA_R", // parameter ID
                                                            "LFO2 to VCA rate", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO1_A", // parameter ID
                                                            "LFO1 to VCO1 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO2_A", // parameter ID
                                                            "LFO1 to VCO2 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE1_A", // parameter ID
                                                            "LFO1 to WAVE1 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE2_A", // parameter ID
                                                            "LFO1 to WAVE2 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1SUB_A", // parameter ID
                                                            "LFO1 to SUB attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCF_A", // parameter ID
                                                            "LFO1 to VCF attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1RESO_A", // parameter ID
                                                            "LFO1 to RESO attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCA_A", // parameter ID
                                                            "LFO1 to VCA attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO1_A", // parameter ID
                                                            "LFO2 to VCO1 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO2_A", // parameter ID
                                                            "LFO2 to VCO2 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE1_A", // parameter ID
                                                            "LFO2 to WAVE1 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE2_A", // parameter ID
                                                            "LFO2 to WAVE2 attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2SUB_A", // parameter ID
                                                            "LFO2 to SUB attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCF_A", // parameter ID
                                                            "LFO2 to VCF attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2RESO_A", // parameter ID
                                                            "LFO2 to RESO attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCA_A", // parameter ID
                                                            "LFO2 to VCA attack", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO1_D", // parameter ID
                                                            "LFO1 to VCO1 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO2_D", // parameter ID
                                                            "LFO1 to VCO2 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE1_D", // parameter ID
                                                            "LFO1 to WAVE1 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE2_D", // parameter ID
                                                            "LFO1 to WAVE2 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1SUB_D", // parameter ID
                                                            "LFO1 to SUB decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCF_D", // parameter ID
                                                            "LFO1 to VCF decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1RESO_D", // parameter ID
                                                            "LFO1 to RESO decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCA_D", // parameter ID
                                                            "LFO1 to VCA decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO1_D", // parameter ID
                                                            "LFO2 to VCO1 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO2_D", // parameter ID
                                                            "LFO2 to VCO2 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE1_D", // parameter ID
                                                            "LFO2 to WAVE1 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE2_D", // parameter ID
                                                            "LFO2 to WAVE2 decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2SUB_D", // parameter ID
                                                            "LFO2 to SUB decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCF_D", // parameter ID
                                                            "LFO2 to VCF decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2RESO_D", // parameter ID
                                                            "LFO2 to RESO decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCA_D", // parameter ID
                                                            "LFO2 to VCA decay", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO1VCO1_W", // parameter ID
                                                            "LFO1 to VCO1 waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO1VCO2_W", // parameter ID
                                                            "LFO1 to VCO2 waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO1WAVE1_W", // parameter ID
                                                            "LFO1 to WAVE1 waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO1WAVE2_W", // parameter ID
                                                            "LFO1 to WAVE2 waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO1SUB_W", // parameter ID
                                                            "LFO1 to SUB waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO1VCF_W", // parameter ID
                                                            "LFO1 to VCF waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO1RESO_W", // parameter ID
                                                            "LFO1 to RESO waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO1VCA_W", // parameter ID
                                                            "LFO1 to VCA waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO2VCO1_W", // parameter ID
                                                            "LFO2 to VCO1 waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO2VCO2_W", // parameter ID
                                                            "LFO2 to VCO2 waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO2WAVE1_W", // parameter ID
                                                            "LFO2 to WAVE1 waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO2WAVE2_W", // parameter ID
                                                            "LFO2 to WAVE2 waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO2SUB_W", // parameter ID
                                                            "LFO2 to SUB waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO2VCF_W", // parameter ID
                                                            "LFO2 to VCF waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO2RESO_W", // parameter ID
                                                            "LFO2 to RESO waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterChoice > ("KIJIMI_LFO2VCA_W", // parameter ID
                                                            "LFO2 to VCA waveform", // parameter name
                                                            StringArray ({"sine", "triangle", "saw", "ramp", "square", "rand"}), // parameter choices
                                                            0),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO1_ENV", // parameter ID
                                                            "LFO1 to VCO1 envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCO2_ENV", // parameter ID
                                                            "LFO1 to VCO2 envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE1_ENV", // parameter ID
                                                            "LFO1 to WAVE1 envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1WAVE2_ENV", // parameter ID
                                                            "LFO1 to WAVE2 envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1SUB_ENV", // parameter ID
                                                            "LFO1 to SUB envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCF_ENV", // parameter ID
                                                            "LFO1 to VCF envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1RESO_ENV", // parameter ID
                                                            "LFO1 to RESO envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO1VCA_ENV", // parameter ID
                                                            "LFO1 to VCA envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO1_ENV", // parameter ID
                                                            "LFO2 to VCO1 envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCO2_ENV", // parameter ID
                                                            "LFO2 to VCO2 envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE1_ENV", // parameter ID
                                                            "LFO2 to WAVE1 envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2WAVE2_ENV", // parameter ID
                                                            "LFO2 to WAVE2 envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2SUB_ENV", // parameter ID
                                                            "LFO2 to SUB envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCF_ENV", // parameter ID
                                                            "LFO2 to VCF envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2RESO_ENV", // parameter ID
                                                            "LFO2 to RESO envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LFO2VCA_ENV", // parameter ID
                                                            "LFO2 to VCA envelope", // parameter name
                                                            NormalisableRange < float > (0.0f, 1.0f, 1.0f), // parameter range
                                                            0.0f),
                // --> End auto-generated code A
                std:: make_unique < AudioParameterFloat > (String(SPACE_X_PARAMETER_ID), // parameter ID
                                                           String(SPACE_X_PARAMETER_NAME), // parameter name
                                                           NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                           65.0f),
                std:: make_unique < AudioParameterFloat > (String(SPACE_Y_PARAMETER_ID), // parameter ID
                                                           String(SPACE_Y_PARAMETER_NAME), // parameter name
                                                           NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                           65.0f)
            }),
        delayedRequestLoadControlsSysexThread (*this)
#endif
{
    // Add listeners to TimbreSpace position parameters
    parameters.addParameterListener (String(SPACE_X_PARAMETER_ID), this);
    parameters.addParameterListener (String(SPACE_Y_PARAMETER_ID), this);
    
    // Add listeners for each audio parameter
    // --> Start auto-generated code B
    parameters.addParameterListener ("KIJIMI_LFO1_AMT", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO1_P", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO2_P", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE1_P", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE2_P", this);
    parameters.addParameterListener ("KIJIMI_LFO1SUB_P", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCF_P", this);
    parameters.addParameterListener ("KIJIMI_LFO1RESO_P", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCA_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2_AMT", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO1_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO2_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE1_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE2_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2SUB_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCF_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2RESO_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCA_P", this);
    parameters.addParameterListener ("KIJIMI_ADSR2_AMT", this);
    parameters.addParameterListener ("KIJIMI_ADSR2VCO1_P", this);
    parameters.addParameterListener ("KIJIMI_ADSR2VCO2_P", this);
    parameters.addParameterListener ("KIJIMI_ADSR2WAVE1_P", this);
    parameters.addParameterListener ("KIJIMI_ADSR2WAVE2_P", this);
    parameters.addParameterListener ("KIJIMI_VCO2VCO1", this);
    parameters.addParameterListener ("KIJIMI_VCO2VCF", this);
    parameters.addParameterListener ("KIJIMI_VEL_LFO1RATE", this);
    parameters.addParameterListener ("KIJIMI_VEL_LFO2RATE", this);
    parameters.addParameterListener ("KIJIMI_VEL_WAVE", this);
    parameters.addParameterListener ("KIJIMI_VEL_SUB", this);
    parameters.addParameterListener ("KIJIMI_VEL_PITCH", this);
    parameters.addParameterListener ("KIJIMI_VEL_VCA", this);
    parameters.addParameterListener ("KIJIMI_AT_LFO1RATE", this);
    parameters.addParameterListener ("KIJIMI_AT_LFO2RATE", this);
    parameters.addParameterListener ("KIJIMI_AT_WAVE", this);
    parameters.addParameterListener ("KIJIMI_AT_SUB", this);
    parameters.addParameterListener ("KIJIMI_AT_PITCH", this);
    parameters.addParameterListener ("KIJIMI_AT_VCA", this);
    parameters.addParameterListener ("KIJIMI_LFO1_RATE", this);
    parameters.addParameterListener ("KIJIMI_LFO1_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1_SHAPE", this);
    parameters.addParameterListener ("KIJIMI_LFO2_RATE", this);
    parameters.addParameterListener ("KIJIMI_LFO2_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2_SHAPE", this);
    parameters.addParameterListener ("KIJIMI_LFO_ENV", this);
    parameters.addParameterListener ("KIJIMI_VCO1_FREQ", this);
    parameters.addParameterListener ("KIJIMI_VCO1_WAVE", this);
    parameters.addParameterListener ("KIJIMI_VCO1_VOL13", this);
    parameters.addParameterListener ("KIJIMI_VCO1_VOL23", this);
    parameters.addParameterListener ("KIJIMI_SUB_VOL", this);
    parameters.addParameterListener ("KIJIMI_NOISE_VOL13", this);
    parameters.addParameterListener ("KIJIMI_NOISE_VOL23", this);
    parameters.addParameterListener ("KIJIMI_VCO2_FREQ", this);
    parameters.addParameterListener ("KIJIMI_VCO2WAVE", this);
    parameters.addParameterListener ("KIJIMI_VCO2_VOL", this);
    parameters.addParameterListener ("KIJIMI_VCO2_DETUNE", this);
    parameters.addParameterListener ("KIJIMI_VCO_SYNC", this);
    parameters.addParameterListener ("KIJIMI_VCO_KOFF", this);
    parameters.addParameterListener ("KIJIMI_VCF_FREQ", this);
    parameters.addParameterListener ("KIJIMI_VCF_VEL_C", this);
    parameters.addParameterListener ("KIJIMI_VCF_AT_C", this);
    parameters.addParameterListener ("KIJIMI_VCF_ADSR2_C", this);
    parameters.addParameterListener ("KIJIMI_VCF_RESO", this);
    parameters.addParameterListener ("KIJIMI_VCF_Q_VEL_C", this);
    parameters.addParameterListener ("KIJIMI_VCF_Q_AT_C", this);
    parameters.addParameterListener ("KIJIMI_VCF_KEY_C", this);
    parameters.addParameterListener ("KIJIMI_ADSR2_A", this);
    parameters.addParameterListener ("KIJIMI_ADSR2_D", this);
    parameters.addParameterListener ("KIJIMI_ADSR2_S", this);
    parameters.addParameterListener ("KIJIMI_ADSR2_R", this);
    parameters.addParameterListener ("KIJIMI_ADSR1_A", this);
    parameters.addParameterListener ("KIJIMI_ADSR1_D", this);
    parameters.addParameterListener ("KIJIMI_ADSR1_S", this);
    parameters.addParameterListener ("KIJIMI_ADSR1_R", this);
    parameters.addParameterListener ("KIJIMI_ADSR_MULT", this);
    parameters.addParameterListener ("KIJIMI_ADSR_CYCLE", this);
    parameters.addParameterListener ("KIJIMI_ADSR_KT", this);
    parameters.addParameterListener ("KIJIMI_GLIDE_RATE", this);
    parameters.addParameterListener ("KIJIMI_GLIDE_MODE", this);
    parameters.addParameterListener ("KIJIMI_VOLUME", this);
    parameters.addParameterListener ("KIJIMI_KNOB_BEH", this);
    parameters.addParameterListener ("KIJIMI_CC_RECEIVE", this);
    parameters.addParameterListener ("KIJIMI_AT_MODE", this);
    parameters.addParameterListener ("KIJIMI_MPE_CH", this);
    parameters.addParameterListener ("KIJIMI_MIDI_CH", this);
    parameters.addParameterListener ("KIJIMI_MIDI_OUT_CH", this);
    parameters.addParameterListener ("KIJIMI_MAX_VOICES", this);
    parameters.addParameterListener ("KIJIMI_ADSR_MOD_MODE", this);
    parameters.addParameterListener ("KIJIMI_CYCLE_MODE", this);
    parameters.addParameterListener ("KIJIMI_KT_MULTIPLIER", this);
    parameters.addParameterListener ("KIJIMI_LFO_MODE", this);
    parameters.addParameterListener ("KIJIMI_LFO_MOD_MODE", this);
    parameters.addParameterListener ("KIJIMI_LFO_POLY_RETRIG", this);
    parameters.addParameterListener ("KIJIMI_LFO1_ENV_DEST", this);
    parameters.addParameterListener ("KIJIMI_LFO1_ENV_MAX_T", this);
    parameters.addParameterListener ("KIJIMI_LFO1_ENV_P", this);
    parameters.addParameterListener ("KIJIMI_LFO1_SYNC", this);
    parameters.addParameterListener ("KIJIMI_LFO1_MAX_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1_MIN_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1_SUST", this);
    parameters.addParameterListener ("KIJIMI_LFO2_ENV_DEST", this);
    parameters.addParameterListener ("KIJIMI_LFO2_ENV_MAX_T", this);
    parameters.addParameterListener ("KIJIMI_LFO2_ENV_P", this);
    parameters.addParameterListener ("KIJIMI_LFO2_SYNC", this);
    parameters.addParameterListener ("KIJIMI_LFO2_MAX_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2_MIN_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2_SUST", this);
    parameters.addParameterListener ("KIJIMI_AT_CURVE", this);
    parameters.addParameterListener ("KIJIMI_CC74_DEST", this);
    parameters.addParameterListener ("KIJIMI_MODW_DEST", this);
    parameters.addParameterListener ("KIJIMI_MODW_P", this);
    parameters.addParameterListener ("KIJIMI_PBEND_RANGE", this);
    parameters.addParameterListener ("KIJIMI_MPE_PBEND_RANGE", this);
    parameters.addParameterListener ("KIJIMI_VEL_CURVE", this);
    parameters.addParameterListener ("KIJIMI_ADSR_VCA", this);
    parameters.addParameterListener ("KIJIMI_MASTER_VOL", this);
    parameters.addParameterListener ("KIJIMI_VCO_DETUNE", this);
    parameters.addParameterListener ("KIJIMI_CARDS_VOCIE", this);
    parameters.addParameterListener ("KIJIMI_LEG_EG_RETRIG", this);
    parameters.addParameterListener ("KIJIMI_LEG_PRIORITY", this);
    parameters.addParameterListener ("KIJIMI_MONO_MODE", this);
    parameters.addParameterListener ("KIJIMI_MONO_POLY", this);
    parameters.addParameterListener ("KIJIMI_SUSTAIN_MODE", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO1_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO2_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE1_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE2_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO1SUB_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCF_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO1RESO_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCA_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO1_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO2_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE1_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE2_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO2SUB_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCF_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO2RESO_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCA_AM", this);
    parameters.addParameterListener ("KIJIMI_ADSR2VCO1_AM", this);
    parameters.addParameterListener ("KIJIMI_ADSR2VCO2_AM", this);
    parameters.addParameterListener ("KIJIMI_ADSR2WAVE1_AM", this);
    parameters.addParameterListener ("KIJIMI_ADSR2WAVE2_AM", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO1_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO2_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE1_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE2_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1SUB_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCF_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1RESO_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCA_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO1_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO2_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE1_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE2_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2SUB_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCF_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2RESO_R", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCA_R", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO1_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO2_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE1_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE2_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1SUB_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCF_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1RESO_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCA_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO1_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO2_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE1_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE2_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2SUB_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCF_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2RESO_A", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCA_A", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO1_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO2_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE1_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE2_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1SUB_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCF_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1RESO_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCA_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO1_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO2_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE1_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE2_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2SUB_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCF_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2RESO_D", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCA_D", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO1_W", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO2_W", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE1_W", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE2_W", this);
    parameters.addParameterListener ("KIJIMI_LFO1SUB_W", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCF_W", this);
    parameters.addParameterListener ("KIJIMI_LFO1RESO_W", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCA_W", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO1_W", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO2_W", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE1_W", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE2_W", this);
    parameters.addParameterListener ("KIJIMI_LFO2SUB_W", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCF_W", this);
    parameters.addParameterListener ("KIJIMI_LFO2RESO_W", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCA_W", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO1_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCO2_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE1_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO1WAVE2_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO1SUB_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCF_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO1RESO_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO1VCA_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO1_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCO2_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE1_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO2WAVE2_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO2SUB_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCF_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO2RESO_ENV", this);
    parameters.addParameterListener ("KIJIMI_LFO2VCA_ENV", this);
    // --> End auto-generated code B

    // Configure MIDI input/output
    // No need to configure here as it will be configured when calling "setMidiInputDevice/setMidiOutputDevice"
    midiOutput = MidiOutput::openDevice(-1);  // Will return nullptr
    midiInput = MidiInput::openDevice(-1, this);  // Will return nullptr
    midiOutputChannel = 1;
    midiInputChannel = 1;
    timestampsLastCCSent = {0};  // Init this array to all 0s
    
    // KIJIMI Interface
    currentPreset = -1;
    currentPresetOutOfSyncWithSliders = true;
    kijimiInterface = new KIJIMIInterface();
    
    // Timbre Space Engine
    timbreSpaceEngine = new TimbreSpaceEngine();
    
    // Register processor as action listener for several objects
    timbreSpaceEngine->addActionListener(this);  // Receive log messages from timbre space engine
    kijimiInterface->addActionListener(this);  // Receive log messages from kijimi interface
    
    // Initialize SynthControlObjects
    kijimiInterface->loadSynthControlObjects();
    
    // Other
    lastUsedDirectoryForFileIO = File::getSpecialLocation (File::userHomeDirectory);
    
    // Trigger load default state in processor
    setDefaultState();    
}

BabuFrikAudioProcessor::~BabuFrikAudioProcessor()
{
    if (midiInput.get() != nullptr){
        midiInput.get()->stop();
    }
    
    midiInput.reset();
    midiOutput.reset();

    // De-register action listeners
    timbreSpaceEngine->removeActionListener(this);
    kijimiInterface->removeActionListener(this);
    
    // Delete objects that we store with pointers
    delete timbreSpaceEngine;
    delete kijimiInterface;
}

//==============================================================================
const String BabuFrikAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool BabuFrikAudioProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool BabuFrikAudioProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool BabuFrikAudioProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double BabuFrikAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int BabuFrikAudioProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int BabuFrikAudioProcessor::getCurrentProgram()
{
    return 0;
}

void BabuFrikAudioProcessor::setCurrentProgram (int index)
{
}

const String BabuFrikAudioProcessor::getProgramName (int index)
{
    return {};
}

void BabuFrikAudioProcessor::changeProgramName (int index, const String& newName)
{
}

//==============================================================================
void BabuFrikAudioProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    loadControlsStateFromSynth();  // Trigger loading state from synth now that all midi devices and the saved state will have been loaded
}

void BabuFrikAudioProcessor::releaseResources()
{
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool BabuFrikAudioProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    if (layouts.getMainOutputChannelSet() != AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void BabuFrikAudioProcessor::processBlock (AudioBuffer<float>& buffer, MidiBuffer& midiMessages)
{
    // Do nothing with AUDIO and MIDI buffers as MIDI is sent and received using MidiInput
    // and MidiOutput objects and this plugin does not process any audio.
}

//==============================================================================
bool BabuFrikAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

AudioProcessorEditor* BabuFrikAudioProcessor::createEditor()
{
    BabuFrikAudioProcessorEditor* editor = new BabuFrikAudioProcessorEditor (*this);
    // Hack https://forum.juce.com/t/styling-the-standalone-plugin-window/21872/2 to get native window
    if(wrapperType == wrapperType_Standalone)
    {
        if(TopLevelWindow::getNumTopLevelWindows() == 1)
        {
            TopLevelWindow* w = TopLevelWindow::getTopLevelWindow(0);
            w->setUsingNativeTitleBar(true);
        }
    }
    return editor;
}

//==============================================================================
void BabuFrikAudioProcessor::getStateInformation (MemoryBlock& destData)
{
    #if JUCE_DEBUG
        logMessage("Saving state...");
    #endif
    
    // Create main ValueTree object to host all state
    ValueTree state = ValueTree(STATE_MAIN_STATE_IDENTIFIER);
    
    // Add MIDI settings to state
    if (midiInput.get() != nullptr) {
        state.setProperty(STATE_MIDI_INPUT_DEVICE_NAME, midiInput.get()->getName(), nullptr);
    } else {
        state.setProperty(STATE_MIDI_INPUT_DEVICE_NAME, "-", nullptr);
    }
    if (midiOutput.get() != nullptr) {
        state.setProperty(STATE_MIDI_OUTPUT_DEVICE_NAME, midiOutput.get()->getName(), nullptr);
    } else {
        state.setProperty(STATE_MIDI_OUTPUT_DEVICE_NAME, "-", nullptr);
    }
    state.setProperty(STATE_MIDI_INPUT_CHANNEL, midiInputChannel, nullptr);
    state.setProperty(STATE_MIDI_OUTPUT_CHANNEL, midiOutputChannel, nullptr);
    state.setProperty(STATE_MIDI_AUTOSCAN_ENABLED, midiDevicesAutoScanEnabled, nullptr);
    
    // Add sync with synth
    state.setProperty(STATE_TOGGLE_AUTO_SYNC_WITH_SYNTH, automaticSyncWithSynthEnabled, nullptr);
    
    // Add UI scale factor to state
    state.setProperty(STATE_UI_SCALE_FACTOR, uiScaleFactor, nullptr);
    
    // Add panels visibility
    state.setProperty(STATE_MAIN_PANEL_VISIBLE, showMainControlsPanel, nullptr);
    state.setProperty(STATE_EXTRA_PANEL_VISIBLE, showExtraControlsPanel, nullptr);
    state.setProperty(STATE_LFOS_PANEL_VISIBLE, showLfosPanel, nullptr);
    
    // Add audio parameters to state
    ValueTree audioParametersState = parameters.copyState();
    state.appendChild(audioParametersState, nullptr);

    // Add bank file contents to state
    ValueTree presetBankState = kijimiInterface->getPresetBankState();
    state.appendChild(presetBankState, nullptr);
    
    // Add timbre space data to state
    ValueTree timbreSpaceState = timbreSpaceEngine->getState();
    state.appendChild(timbreSpaceState, nullptr);

    // Add selected preset IDX and sync status to state
    state.setProperty(STATE_CURRENT_PRESET_IDX, currentPreset, nullptr);
    state.setProperty(STATE_CURRENT_PRESET_OUT_OF_SYNC, currentPresetOutOfSyncWithSliders, nullptr);
    
    // Copy state to memory block
    std::unique_ptr<XmlElement> xml (state.createXml());
    copyXmlToBinary (*xml, destData);
    
    // Print state (for debugging purposes)
    #if JUCE_DEBUG
        std::cout << xml->createDocument("") <<std::endl;
    #endif
}

void BabuFrikAudioProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    #if JUCE_DEBUG
        logMessage(String::formatted("Loading state of %d bytes...", sizeInBytes));
    #endif
    
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
    std::unique_ptr<XmlElement> xmlState (getXmlFromBinary (data, sizeInBytes));
    if (xmlState.get() != nullptr){
        setStateFromXml(xmlState.get());
    }
}

void BabuFrikAudioProcessor::setDefaultState ()
{
    if (!needsToLoadDefaultState){
        return;
    }
    
    #if JUCE_DEBUG
        logMessage("Loading default state...");
    #endif
    
    std::unique_ptr<XmlElement> defaultXmlState (XmlDocument::parse (BinaryData::default_state_xml));
    if (defaultXmlState.get() != nullptr){
        setStateFromXml(defaultXmlState.get());
    }
}

void BabuFrikAudioProcessor::setStateFromXml (XmlElement* xmlState)
{
    // Prevent possible loading of default state
    needsToLoadDefaultState = false;
    
    // Load MIDI config
    if (xmlState->hasAttribute (STATE_MIDI_OUTPUT_DEVICE_NAME)){
        String midiOutputDeviceName = xmlState->getStringAttribute(STATE_MIDI_OUTPUT_DEVICE_NAME);
        setMidiOutputDeviceByName(midiOutputDeviceName);
    }
    
    if (xmlState->hasAttribute (STATE_MIDI_INPUT_DEVICE_NAME)){
        String midiInputDeviceName = xmlState->getStringAttribute(STATE_MIDI_INPUT_DEVICE_NAME);
        setMidiInputDeviceByName(midiInputDeviceName);
    }
    
    if (xmlState->hasAttribute (STATE_MIDI_INPUT_CHANNEL)){
        int channel = xmlState->getStringAttribute(STATE_MIDI_INPUT_CHANNEL).getIntValue();
        setMidiInputChannel(channel);
    }
    
    if (xmlState->hasAttribute (STATE_MIDI_OUTPUT_CHANNEL)){
        int channel = xmlState->getStringAttribute(STATE_MIDI_OUTPUT_CHANNEL).getIntValue();
        setMidiOutputChannel(channel);
    }
    
    if (xmlState->hasAttribute (STATE_MIDI_AUTOSCAN_ENABLED)){
        bool savedMidiAutoScanEnabled = xmlState->getBoolAttribute(STATE_MIDI_AUTOSCAN_ENABLED);
        setMidiDevicesAutoScan(savedMidiAutoScanEnabled);
    }
    
    // Load sync with synth
    if (xmlState->hasAttribute (STATE_TOGGLE_AUTO_SYNC_WITH_SYNTH)){
        automaticSyncWithSynthEnabled = xmlState->getBoolAttribute(STATE_TOGGLE_AUTO_SYNC_WITH_SYNTH);
    }
    
    // Load ui scale factor
    if (xmlState->hasAttribute (STATE_UI_SCALE_FACTOR)){
        float newUIScaleFactor = xmlState->getStringAttribute(STATE_UI_SCALE_FACTOR).getFloatValue();
        setUIScaleFactor(newUIScaleFactor);
    }
    
    // Load panels visibility state
    if (xmlState->hasAttribute (STATE_MAIN_PANEL_VISIBLE)){
        showMainControlsPanel = xmlState->getBoolAttribute(STATE_MAIN_PANEL_VISIBLE);
    }
    
    if (xmlState->hasAttribute (STATE_EXTRA_PANEL_VISIBLE)){
        showExtraControlsPanel = xmlState->getBoolAttribute(STATE_EXTRA_PANEL_VISIBLE);
    }
    
    if (xmlState->hasAttribute (STATE_LFOS_PANEL_VISIBLE)){
        showLfosPanel = xmlState->getBoolAttribute(STATE_LFOS_PANEL_VISIBLE);
    }
    
    // Preset loader
    if (xmlState->getChildByName (STATE_PRESET_BANK_IDENTIFIER) != nullptr){
        kijimiInterface->loadPresetBankState(ValueTree::fromXml (*xmlState->getChildByName (STATE_PRESET_BANK_IDENTIFIER)));
        sendActionMessage(ACTION_BANK_FILE_LOADED);
    }
    
    // Current preset IDX
    if (xmlState->hasAttribute (STATE_CURRENT_PRESET_IDX)){
        currentPreset = xmlState->getStringAttribute(STATE_CURRENT_PRESET_IDX).getIntValue();
        sendActionMessage(ACTION_SET_CURRENT_PRESET_NAME);
    }
    
    if (xmlState->hasAttribute (STATE_CURRENT_PRESET_OUT_OF_SYNC)){
        currentPresetOutOfSyncWithSliders = xmlState->getStringAttribute(STATE_CURRENT_PRESET_OUT_OF_SYNC) == "1";
        if (currentPresetOutOfSyncWithSliders){
            sendActionMessage(ACTION_SET_CURRENT_PRESET_NAME_OUT_OF_SYNC);
        } else {
            sendActionMessage(ACTION_SET_CURRENT_PRESET_NAME_IN_SYNC);
        }
    }
    
    // Timbre space
    if (xmlState->getChildByName (STATE_TIMBRE_SPACE_IDENTIFIER) != nullptr){
        timbreSpaceEngine->setIsLoadingSolutionInTimbreSpaceComponent();
        timbreSpaceEngine->loadState(ValueTree::fromXml (*xmlState->getChildByName (STATE_TIMBRE_SPACE_IDENTIFIER)));
        timbreSpaceEngine->loadSolutionDataInTimbreSpaceComponent();
        timbreSpaceEngine->loadSelectedPointDataInTimbreSpaceComponentAndRepaint();
        timbreSpaceEngine->setTimbreSpaceComponentSlidersSyncStatus();
    } else {
        // If no data for timbre space stored in state, try to compute it now using data in the preset bank
        computeTimbreSpace();
    }
    
    // Audio parameters (for control panel and X,Y position in space)
    if (xmlState->getChildByName (STATE_AUDIO_PARAMETERS_IDENTIFIER) != nullptr){
        const ScopedValueSetter<bool> scopedInputFlag (isLoadingFromState, true);
        parameters.replaceState (ValueTree::fromXml (*xmlState->getChildByName (STATE_AUDIO_PARAMETERS_IDENTIFIER)));
    }
    
    // Trigger some actions to make sure editor is in sync
    sendActionMessage(ACTION_UPDATE_ENABLED_DISABLED_CONTROLS);
    sendActionMessage(ACTION_LFO_LEDS_SHOULD_UPDATE);
}

void BabuFrikAudioProcessor::sendLCDRefreshMessageToKijimi ()
{
    uint8 sysexdata2[] = { 0x02, 0x21};
    MidiMessage msg2 = MidiMessage::createSysExMessage(sysexdata2, 2);
    midiOutput.get()->sendMessageNow(msg2);
}

void BabuFrikAudioProcessor::sendControlToSynth (const String& parameterID, int value)
{
    int ccNumber = kijimiInterface->getCCNumberForParameterID(parameterID);
    if (ccNumber > -1){
        // Parameter can be controlled using MIDI CC
        int ccValue = value;
        MidiMessage msg = MidiMessage::controllerEvent(midiOutputChannel, ccNumber, ccValue);
        midiOutput.get()->sendMessageNow(msg);
        timestampsLastCCSent[ccNumber] = Time::getCurrentTime().toMilliseconds(); // Store timestamp when the message was sent
        
        #if JUCE_DEBUG
            if (LOG_INDIVIDUAL_PARAMETER_CHANGES == 1){
                logMessage(String::formatted("Sent MIDI CC: %i %i", ccNumber, ccValue));
            }
        #endif
    } else {
        int midiOptionID = kijimiInterface->getMIDIOptionIDNumberForParameterID(parameterID);
        int midiExtendedOptionID = kijimiInterface->getMIDIExtendedOptionIDNumberForParameterID(parameterID);
        if ((midiOptionID > -1) || (midiExtendedOptionID > -1)){
            
            // The parameter will be set using sysex. Make sure that 0xF7 value is not used so that KIJIMI does not think that the
            // sysex message finishes before time
            if (value == 0xF7){
                value = 0xF6;
            }

            if (midiOptionID > -1){
                // Paramter is controlled using SYSEX message and the option ID range
                uint8 sysexdata[] = { 0x02, 0x06, (uint8)midiOptionID, (uint8)value};  // 0xF0 ... and 0xF7 are added by JUCE
                MidiMessage msg = MidiMessage::createSysExMessage(sysexdata, 4);
                midiOutput.get()->sendMessageNow(msg);
                timestampsLastCCSent[midiOptionID + 200] = Time::getCurrentTime().toMilliseconds(); // Store timestamp when the message was sent
                #if JUCE_DEBUG
                    if (LOG_INDIVIDUAL_PARAMETER_CHANGES == 1){
                        logMessage(String::formatted("Sent SYSEX for optionID: %i %i", midiOptionID, value));
                    }
                #endif
                
                // Send LCD update command
                // TODO: this should be optimized and only send it if needed or at the end of a number of messages sent sequentially
                sendLCDRefreshMessageToKijimi();
                
            } else {
                // Paramter is controlled using SYSEX message and the extended option ID range (this is only used for LFOs panel)
                uint8 sysexdata[] = { 0x02, 0x18, (uint8)midiExtendedOptionID, (uint8)value};  // 0xF0 ... and 0xF7 are added by JUCE
                MidiMessage msg = MidiMessage::createSysExMessage(sysexdata, 4);
                midiOutput.get()->sendMessageNow(msg);
                timestampsLastCCSent[midiExtendedOptionID + 300] = Time::getCurrentTime().toMilliseconds(); // Store timestamp when the message was sent
                #if JUCE_DEBUG
                    if (LOG_INDIVIDUAL_PARAMETER_CHANGES == 1){
                        logMessage(String::formatted("Sent SYSEX for extended optionID: %i %i", midiExtendedOptionID, value));
                    }
                #endif
            }
        }
    }
}

void BabuFrikAudioProcessor::parameterChanged (const String& parameterID, float newValue)
{
    
    if (isLoadingFromState){
        // Don't take any action if changing parameters after loading from state. The state itself will store changes in objects due to the values
        // of the parameters. Also we don't want to automatically send MIDI messages when loading from the state.
        return;
    }
    
    if (parameterID.startsWith(String(KIJIMI_PARAMETER_ID_PREFIX))) {
        // KIJIMI parameter, send MIDI message to hardware (unless parameter change is received from MIDI input meaning the changed already happened in hardware
        #if JUCE_DEBUG
            if (LOG_INDIVIDUAL_PARAMETER_CHANGES == 1){
                logMessage("KIJIMI parameter " + parameterID + String::formatted(" changed: %f", newValue));
            }
        #endif
        
        if ((midiOutput.get() != nullptr) && (!isReceivingFromMidiInput) && (!isChangingFromGettingKijimiState) && (!isChangingFromTimbreSpace) && (!isChangingFromPresetLoader) && (!isChangingFromLoadingAPatchFile)){
            sendControlToSynth(parameterID, (int)newValue);
        }
        
        if ((parameterID == "KIJIMI_LFO1_SHAPE") || (parameterID == "KIJIMI_LFO2_SHAPE")){
            sendActionMessage(ACTION_LFO_LEDS_SHOULD_UPDATE);  // Update LED strips in main panel
        }
        
        if ((parameterID == "KIJIMI_LFO_MOD_MODE") || (parameterID == "KIJIMI_ADSR_MOD_MODE")){
            sendActionMessage(ACTION_UPDATE_ENABLED_DISABLED_CONTROLS);  // Trigger action to enable or disable some controls depending on MOD mode
        }
        
        if (!isChangingFromTimbreSpace){
            timbreSpaceEngine->setSelectedPointOutOfSync();
        }
        
        if (!isChangingFromPresetLoader){
            currentPresetOutOfSyncWithSliders = true;
            sendActionMessage(ACTION_SET_CURRENT_PRESET_NAME_OUT_OF_SYNC);
        }
        
    }  else if ((parameterID == SPACE_X_PARAMETER_ID) || (parameterID == SPACE_Y_PARAMETER_ID)) { // SPACE X or SPACE Y
        // Don't change these parameters if loading from timbre space as it would trigger selection of new point
        if (!isChangingFromTimbreSpace){
            // Set timbre space X,Y parameters (only when being changed from automation)
            // Parameters here arrive with the non-normalized range so we need to scale them
            #if JUCE_DEBUG
                logMessage("Parameter " + parameterID + String::formatted(" changed: %f", newValue));
            #endif
            
            if ((parameterID == String(SPACE_X_PARAMETER_ID)) || (parameterID == String(SPACE_Y_PARAMETER_ID))) {
                if (parameterID == String(SPACE_X_PARAMETER_ID)) {
                    timbreSpaceEngine->selectPointInSpace(newValue / 127.0f, -1.0);  // This will in its turn tell the processor to load new preset
                } else if (parameterID == String(SPACE_Y_PARAMETER_ID)) {
                    timbreSpaceEngine->selectPointInSpace(-1.0,  1.0f - (newValue / 127.0f));  // This will in its turn tell the processor to load new preset
                }
            }
        }
    } else {
        #if JUCE_DEBUG
            logMessage("Parameter " + parameterID + String::formatted(" changed: %f", newValue));
        #endif
    }
}

void BabuFrikAudioProcessor::updateSpacePointAudioParametersFromMouseEvent(float x, float y)
{
    // x,y come in range [0.0, 1.0]
    const ScopedValueSetter<bool> scopedInputFlag (isChangingFromTimbreSpace, true);
    parameters.getParameter(SPACE_X_PARAMETER_ID)->beginChangeGesture();
    parameters.getParameter(SPACE_Y_PARAMETER_ID)->beginChangeGesture();
    parameters.getParameter(SPACE_X_PARAMETER_ID)->setValueNotifyingHost(x); // parameter needs to be set in normalized range
    parameters.getParameter(SPACE_Y_PARAMETER_ID)->setValueNotifyingHost(1.0 - y); // parameter needs to be set in normalized range
    parameters.getParameter(SPACE_X_PARAMETER_ID)->endChangeGesture();
    parameters.getParameter(SPACE_Y_PARAMETER_ID)->endChangeGesture();
    
    timbreSpaceEngine->selectPointInSpace(x, y);  // This will in its turn tell the processor to load new preset
}

void BabuFrikAudioProcessor::setMidiDevicesAutoScan (bool enabled)
{
    if (midiDevicesAutoScanEnabled != enabled){
        midiDevicesAutoScanEnabled = enabled;
        if (midiDevicesAutoScanEnabled){
            // If it was just enabled, send action message that will enable timer in MIDISettingsComponent
            sendActionMessage(ACTION_MIDI_ENABLE_AUTO_SCAN);
        } else {
            // If it was just disabled, send action message that will disable timer in MIDISettingsComponent
            sendActionMessage(ACTION_MIDI_DISABLE_AUTO_SCAN);
        }
    };
}

void BabuFrikAudioProcessor::triggerMidiDevicesScan ()
{
    sendActionMessage(ACTION_MIDI_TRIGGER_DEVICE_SCAN);
}

void BabuFrikAudioProcessor::handleIncomingMidiMessage(MidiInput* source, const MidiMessage& m)
{
    
    if (m.isSysEx()){
        // If message is sysex, check the size and code to know what it is about
        if (m.getSysExDataSize() == 258){
            // State information sysex message
            // Create a KIJIMIPresetBytes object using the received data and load it to controls
            const uint8 *buf = m.getSysExData();
            if (((int)buf[0] == 0x02) && ((int)buf[1] == 0x14)){ // Check message code is for KIJIMI and for current state data
                KIJIMIPresetBytes currentPresetBytes = {0};
                for (int i=0; i<KIJIMI_PRESET_NUM_BYTES; i++){  // Go byte by byte
                    if (i == 0){  // Fake sysex start byte
                        currentPresetBytes[i] = 0;
                    } else if (i == 1){  // Fake KIJIMI device ID
                        currentPresetBytes[i] = 0;
                    } else if (i == 2){  // Fake state patch command
                        currentPresetBytes[i] = 0;
                    } else if (i == 3){  // Fake bank number
                        currentPresetBytes[i] = 0;
                    } else if (i == 4){  // Fake patch number
                        currentPresetBytes[i] = 0;
                    } else if (i == 261) {  // Fake sysex end byte
                        currentPresetBytes[i] = 0;
                    } else {
                        // For other values of i, retrieve corresponding byte from m.getSysExData()
                        // Note that message data is of length 258 and kijimi preset data is of length 262. This is because
                        // sysex data skips sysex start/end bytes and bank/patch bytes, therefore we apply an offset of -3 bytes
                        currentPresetBytes[i] = buf[i - 3];
                    }
                }
                const ScopedValueSetter<bool> scopedInputFlag (isChangingFromGettingKijimiState, true);
                SynthControlIdValuePairs idValuePairs = kijimiInterface->getSynthControlIdValuePairsForPresetBytesArray(currentPresetBytes);
                setParametersFromSynthControlIdValuePairs(idValuePairs, false);  // the "isChangingFromGettingKijimiState" will prevent from sending MIDI messages for the controls which is what we want here because we want to update parameters internally but not re-send them to KIJIMI
            }
        } else if (m.getSysExDataSize() == 2){
            const uint8 *buf = m.getSysExData();
            if (((int)buf[0] == 0x02) && (((int)buf[1] == 0x41) || ((int)buf[1] == 0x42) || ((int)buf[1] == 0x43) || ((int)buf[1] == 0x16))){
                // This is the sequence that corresponds to "a new preset was loaded", "random patch loaded", "panel mode loaded" or "new menu option set"
                if (automaticSyncWithSynthEnabled){  // Only request state if Babu Frik is set to sync automatically
                    delayedRequestLoadControlsSysexThread.run(); // Ask KIJIMI to send current state data, but wait a couple of milliseconds to allow KIJIMI to finish sending other sysex messages that sometimes sends right after sending one of these three. Sending a sysex message to KIJIMI while KIJIMI is sending another can freeze KIJIMI
                }
            }
                
        } else if (m.getSysExDataSize() == 5){
            const uint8 *buf = m.getSysExData();
            if (((int)buf[0] == 0x02) && ((int)buf[1] == 0x22)){
                // Updated setting for individual LFOs/ADSR2
                int lfoOrAdsrNumber = (int)buf[2];
                int correspondingCCNumberInCommonMode = (int)buf[3];
                int value = (int)buf[4];
                
                String parameterIDPrefix = StringArray({
                    "KIJIMI_LFO1VCO1_",
                    "KIJIMI_LFO1VCO2_",
                    "KIJIMI_LFO1WAVE1_",
                    "KIJIMI_LFO1WAVE2_",
                    "KIJIMI_LFO1SUB_",
                    "KIJIMI_LFO1VCF_",
                    "KIJIMI_LFO1RESO_",
                    "KIJIMI_LFO1VCA_",
                    "KIJIMI_LFO2VCO1_",
                    "KIJIMI_LFO2VCO2_",
                    "KIJIMI_LFO2WAVE1_",
                    "KIJIMI_LFO2WAVE2_",
                    "KIJIMI_LFO2SUB_",
                    "KIJIMI_LFO2VCF_",
                    "KIJIMI_LFO2RESO_",
                    "KIJIMI_LFO2VCA_",
                    "KIJIMI_ADSR2VCO1_",
                    "KIJIMI_ADSR2VCO2_",
                    "KIJIMI_ADSR2WAVE1_",
                    "KIJIMI_ADSR2WAVE2_"
                })[lfoOrAdsrNumber];
                
                std::map<int,String> commonModeCCNumberToIndividualModeParameterIDSuffix;
                commonModeCCNumberToIndividualModeParameterIDSuffix[5] = "AM"; // LFO1 AMT
                commonModeCCNumberToIndividualModeParameterIDSuffix[55] = "R"; // LFO1 RATE
                commonModeCCNumberToIndividualModeParameterIDSuffix[56] = "A"; // LFO1 A
                commonModeCCNumberToIndividualModeParameterIDSuffix[57] = "D"; // LFO1 D
                commonModeCCNumberToIndividualModeParameterIDSuffix[114] = "W"; // LFO1 SHAPE
                commonModeCCNumberToIndividualModeParameterIDSuffix[115] = "ENV"; // LFO1/2 ENV
                commonModeCCNumberToIndividualModeParameterIDSuffix[8] = "AM"; // LFO2 AMT
                commonModeCCNumberToIndividualModeParameterIDSuffix[58] = "R"; // LFO2 RATE
                commonModeCCNumberToIndividualModeParameterIDSuffix[59] = "A"; // LFO2 A
                commonModeCCNumberToIndividualModeParameterIDSuffix[60] = "D"; // LFO2 D
                commonModeCCNumberToIndividualModeParameterIDSuffix[116] = "W"; // LFO2 SHAPE
                commonModeCCNumberToIndividualModeParameterIDSuffix[40] = "AM"; // ADSR2 AMT
                const String parameterIDSuffix = commonModeCCNumberToIndividualModeParameterIDSuffix[correspondingCCNumberInCommonMode];
                
                const String parameterID = parameterIDPrefix + parameterIDSuffix;
                if (parameterIDSuffix == "W"){
                    value = 127.0 - value;  // LFO waveforms go in backwards direction
                } else if (parameterIDSuffix == "ENV"){
                    if (value == 1.0){
                        value = 127.0; // Adapt range of button value
                    }
                }
                
                #if JUCE_DEBUG
                    if (LOG_MIDI_IN == 1){
                        logMessage("Received MIDI SYSEX for parameter from " + source->getName() + ":" + parameterID + " " + (String)value);
                    }
                #endif
                
                if (kijimiInterface->getKIJIMISynthControlWithID(parameterID)->shouldHandleMidiInput()) {  // Only update parameters that accept MIDI input
                    const ScopedValueSetter<bool> scopedInputFlag (isReceivingFromMidiInput, true);
                    float newValue = (float)value/127.0;
                    parameters.getParameter(parameterID)->beginChangeGesture();
                    parameters.getParameter(parameterID)->setValueNotifyingHost(newValue);
                    parameters.getParameter(parameterID)->endChangeGesture();
                }
            }
        }
    } else {
        // If not SysEx, process message only if midi input channel is matched
        if ((midiInputChannel == -1) || (m.getChannel() == midiInputChannel))
        {
            if (m.isController())
            {
                int ccNumber = m.getControllerNumber();
                int ccValue = m.getControllerValue();
                
                /* Only process MIDI input message if a certain amount of time has passed since
                 last time a MIDI CC message was sent from this app to the same CC number. This
                 is to avoid a problem in KIJIMI which will replicate every MIDI message it receives
                 and forward it to its output. If the message came from this app we want to ignore the
                 replica sent by DDRM. The amount of time that should pass is defined in
                 MIDI_IN_SAME_CC_TIME_THRESHOLD_MS.
                 
                 To implement that check, everytime we send a MIDI CC message we store a timestamp
                 in timestampsLastCCSent array. timestampsLastCCSent has 128 positions and each position
                 stores the timestamp for the last time a MIDI message was sent to the corresponding CC
                 value (per the position). E.g.: position 1 = MIDI CC #1.
                 
                 NOTE: for KIJIMI, there are controls which are controlled using SYSEX messages and therefore the
                 number is not limited to 128 control change numbers. To account for that we simply make timestampsLastCCSent
                 much larger to have space for all parameters.
                 */
                
                int64 currentTime = Time::getCurrentTime().toMilliseconds();
                int64 lastMessageSentToSameCCTime = timestampsLastCCSent[ccNumber];
                if ((currentTime - lastMessageSentToSameCCTime) > MIDI_IN_SAME_CC_TIME_THRESHOLD_MS){
                    #if JUCE_DEBUG
                        if (LOG_MIDI_IN == 1){
                            logMessage("Received MIDI CC from " + source->getName() + String::formatted(": %i %i", ccNumber, ccValue));
                        }
                    #endif
                    
                    // Set parameter value from MIDI message
                    const String parameterID = kijimiInterface->getParameterIDFromCCNumber(ccNumber);
                    if (kijimiInterface->getKIJIMISynthControlWithID(parameterID)->shouldHandleMidiInput()) {  // Only update parameters that accept MIDI input
                        const ScopedValueSetter<bool> scopedInputFlag (isReceivingFromMidiInput, true);
                        float newValue = (float)ccValue/127.0;
                        parameters.getParameter(parameterID)->beginChangeGesture();
                        parameters.getParameter(parameterID)->setValueNotifyingHost(newValue);
                        parameters.getParameter(parameterID)->endChangeGesture();
                    }
                }
            }
        }
    }
}

//==============================================================================

void BabuFrikAudioProcessor::setMidiInputDevice (const String& deviceIdentifier)
{
    if (midiInput.get() != nullptr){
        midiInput.get()->stop();
    }
    if (deviceIdentifier == "-"){
        // If identifier is "-", disable midi input
        midiInput.reset();
    } else {
        midiInput.reset();
        midiInput = MidiInput::openDevice(deviceIdentifier, this);
    }
    sendActionMessage(ACTION_UPDATED_MIDI_DEVICE_SETTINGS);
    if (midiInput.get() != nullptr){
        midiInput.get()->start();
        loadControlsStateFromSynth();  // Trigger loading synth current state (note that this also requires MIDI output to have been configured, so MIDI input output should ideally be configured before MIDI input when, eg, loading from state
    }
}

void BabuFrikAudioProcessor::setMidiOutputDevice (const String& deviceIdentifier)
{
    if (deviceIdentifier == "-"){
        // If identifier is "-", disable midi output
        midiOutput.reset();
    } else {
        midiOutput.reset();
        midiOutput = MidiOutput::openDevice(deviceIdentifier);
    }
    sendActionMessage(ACTION_UPDATED_MIDI_DEVICE_SETTINGS);
}


void BabuFrikAudioProcessor::setMidiInputDeviceByName (const String& deviceName)
{
    String deviceIdentifier = "-";
    auto midiInputs = MidiInput::getAvailableDevices();
    for (int i=0; i<midiInputs.size(); i++){
        if (midiInputs[i].name == deviceName){
            deviceIdentifier = midiInputs[i].identifier;
        }
    }
    setMidiInputDevice(deviceIdentifier);
}


void BabuFrikAudioProcessor::setMidiOutputDeviceByName (const String& deviceName)
{
    String deviceIdentifier = "-";
    auto midiOutputs = MidiOutput::getAvailableDevices();
    for (int i=0; i<midiOutputs.size(); i++){
        if (midiOutputs[i].name == deviceName){
            deviceIdentifier = midiOutputs[i].identifier;
        }
    }
    setMidiOutputDevice(deviceIdentifier);
}


void BabuFrikAudioProcessor::setMidiInputChannel (int channel)
{
    if (channel < 1){
        channel = 1;
    } else if (channel > 16){
        channel = 16;
    }
    midiInputChannel = channel;
    sendActionMessage(ACTION_UPDATED_MIDI_DEVICE_SETTINGS);
}


void BabuFrikAudioProcessor::setMidiOutputChannel (int channel)
{
    if (channel < 1){
        channel = 1;
    } else if (channel > 16){
        channel = 16;
    }
    midiOutputChannel = channel;
    sendActionMessage(ACTION_UPDATED_MIDI_DEVICE_SETTINGS);
}

//==============================================================================


void BabuFrikAudioProcessor::loadBankFile (File* bankFile)
{
    String filePath = bankFile->getFullPathName();
    #if JUCE_DEBUG
        logMessage("Loading bank file: " + filePath);
    #endif
    currentPreset = -1;
    currentPresetOutOfSyncWithSliders = true;
    kijimiInterface->loadPresetBankFromFile(filePath);
    sendActionMessage(ACTION_BANK_FILE_LOADED);
    loadPresetAtIndex(0);
}

void BabuFrikAudioProcessor::computeTimbreSpace ()
{
    if (!kijimiInterface->hasPresetsDataLoaded()){
        return;
    }
    
    timbreSpaceEngine->setIsLoadingSolutionInTimbreSpaceComponent();
    timbreSpaceEngine->computeMapPoints(kijimiInterface->generateBankDataForTimbreSpaceEngine());
    timbreSpaceEngine->computeTriangulation();
    timbreSpaceEngine->loadSolutionDataInTimbreSpaceComponent();
}


void BabuFrikAudioProcessor::nextPreset()
{
    if (!kijimiInterface->hasPresetsDataLoaded()){
        return;
    }
    
    loadPresetAtIndex(currentPreset + 1);
}

void BabuFrikAudioProcessor::previousPreset()
{
    if (!kijimiInterface->hasPresetsDataLoaded()){
        return;
    }
    
    if (currentPreset < 0){
        // If no selected preset, do nothing
    } else if (currentPreset - 1 < 0) {
        // Don't let set currentPreset to -1 using the "previous" button
        loadPresetAtIndex(0);
    } else {
        loadPresetAtIndex(currentPreset - 1);
    }
}

void BabuFrikAudioProcessor::loadPresetAtIndex (int index)
{
    if (!kijimiInterface->hasPresetsDataLoaded()){
        return;
    }
    
    const ScopedValueSetter<bool> scopedInputFlag (isChangingFromPresetLoader, true);
    if (index < -1){
        index = -1;
    } else if (index > kijimiInterface->getNumLoadedPresets() - 1) {
        index = kijimiInterface->getNumLoadedPresets() - 1;
    }
    currentPreset = index;
    if (currentPreset > -1){
        SynthControlIdValuePairs idValuePairs = kijimiInterface->getSynthControlIdValuePairsForPresetAtIndex(index);
        setParametersFromSynthControlIdValuePairs(idValuePairs, true);  // the "isChangingFromPresetLoader" will prevent from sending MIDI messages for the controls...
        sendControlsToSynth(true); // ...and now we send them all (we do this to avoid issues in which controls did not change internally in Babu Frik but did change in KIJIMI and state was not synced. In these cases, "parameterChanged" is not called for all controls)
        timbreSpaceEngine->setTimbreSpaceComponentXYToPresetNumber(index);
        
    }
    currentPresetOutOfSyncWithSliders = false;
    sendActionMessage(ACTION_SET_CURRENT_PRESET_NAME);
    sendActionMessage(ACTION_SET_CURRENT_PRESET_NAME_IN_SYNC);
}

void BabuFrikAudioProcessor::savePresetToBankLocation (int bankLocation)
{
    if (kijimiInterface->hasPresetsDataLoaded()){
        
        if (bankLocation < 0){
            bankLocation = 0;
        } else if (bankLocation > kijimiInterface->getNumLoadedPresets() - 1) {
            bankLocation = kijimiInterface->getNumLoadedPresets() - 1;
        }
        
        std::vector<String> parameterIDs = kijimiInterface->getKIJIMISynthControlIDs();
        KIJIMIPresetBytes currentPresetBytes = {0};  // Initialize to zero
        for (int i=0; i<parameterIDs.size(); i++){
            String parameterID = parameterIDs[i];
            AudioParameterFloat* audioParameter = (AudioParameterFloat*)parameters.getParameter(parameterID);
            KIJIMISynthControl* synthControl = kijimiInterface->getKIJIMISynthControlWithID(parameterID);
            synthControl->updatePresetByteArray((int)audioParameter->get(), currentPresetBytes);
        }
        kijimiInterface->saveCurrentPresetAtBankIndex(bankLocation, currentPresetBytes);
        currentPreset = bankLocation;
        sendActionMessage(ACTION_SET_CURRENT_PRESET_NAME_IN_SYNC);
        sendActionMessage(ACTION_CURRENT_PRESENT_SAVED_TO_BANK);
    }
}

void BabuFrikAudioProcessor::saveBankFile ()
{
    FileChooser fileChooser ("",
                             getDirectoryForFileSaveLoad(),
                             "*.syx");
    if (fileChooser.browseForFileToSave(true))
    {
        File file (fileChooser.getResult());
        file.deleteFile(); // Delete the file if already exists
        setLastUserDirectoryForFileSaveLoad(file);
        for (int i=0; i<kijimiInterface->getNumLoadedPresets(); i++){
            KIJIMIPresetBytes presetBytes = kijimiInterface->getLoadedPresetBytesAtIndex(i);
            presetBytes[0] = 0xF0;  // syex start
            presetBytes[1] = 0x02; // kijmi ID
            presetBytes[2] = 0x00;  // transfer patch command
            presetBytes[3] = 0x00;  // bank number
            presetBytes[4] = i;  // preset number
            presetBytes[261] = 0xF7; // sysex end
            file.appendData(&presetBytes, KIJIMI_PRESET_NUM_BYTES);
        }
    }
}

void BabuFrikAudioProcessor::setParametersFromSynthControlIdValuePairs (SynthControlIdValuePairs idValuePairs, bool skipGlobal)
{
    for (int i=0; i<idValuePairs.size(); i++) {
        String parameterID = idValuePairs[i].first;
        if (!skipGlobal || !kijimiInterface->isGlobalParameter(parameterID)){
            double newValue = idValuePairs[i].second;
            float normedValue = parameters.getParameter(parameterID)->convertTo0to1(newValue);  // .setValueNotifyingHost requires range 0-1
            parameters.getParameter(parameterID)->setValueNotifyingHost(normedValue);
        }
    }
}

//==============================================================================

// Actions from KIJIMI control panel menu

float BabuFrikAudioProcessor::getValueForAudioParameter(const String& parameterID)
{
    String audioParameterTypeName = kijimiInterface->getAudioParameterTypeForParameterID(parameterID);
    if (audioParameterTypeName == "float"){
        AudioParameterFloat* audioParameter = (AudioParameterFloat*)parameters.getParameter(parameterID);
        return audioParameter->get();
    } else if (audioParameterTypeName == "choice"){
        AudioParameterChoice* audioParameter = (AudioParameterChoice*)parameters.getParameter(parameterID);
        return (float)audioParameter->getIndex();
    }
    return 0;
}

void BabuFrikAudioProcessor::sendControlsToSynth (bool skipGlobal)
{
    if (midiOutput.get() != nullptr) {
        std::vector<String> parameterIDs;
        if (isChangingFromTimbreSpace){
            parameterIDs = kijimiInterface->getKIJIMISynthControlIDsForTimbreSpace();  // Get only the parameter IDs that actually changed
        } else {
            parameterIDs = kijimiInterface->getKIJIMISynthControlIDs();  // Get all parameter IDs to set them all
        }
        
        for (int i=0; i<parameterIDs.size(); i++){
            String parameterID = parameterIDs[i];
            if (!skipGlobal || !kijimiInterface->isGlobalParameter(parameterID)){
                // If parameter has no MIDI CC, it means it is set using SYSEX, do some sleep to avoid sending messages to fast
                if (kijimiInterface->getCCNumberForParameterID(parameterID) == -1){
                    Time::waitForMillisecondCounter(Time::getMillisecondCounter() + 1);
                }
                if ((parameterID == "KIJIMI_ADSR_MOD_MODE") || (parameterID == "KIJIMI_LFO_MOD_MODE")){
                    Time::waitForMillisecondCounter(Time::getMillisecondCounter() + 4);  // For specific parameters, give it even some more sleep time
                }
                
                int value = (int)getValueForAudioParameter(parameterID);
                sendControlToSynth(parameterID, value);
                
                // Do some extra waiting if prameterID is a specific one to give more time to KIJIMI to process it
                // NOTE: note sure if this is esoterism or if it does actually work, but manual testing seemed to show this works
                if ((parameterID == "KIJIMI_ADSR_MOD_MODE") || (parameterID == "KIJIMI_LFO_MOD_MODE")){
                    Time::waitForMillisecondCounter(Time::getMillisecondCounter() + 5);
                }
            }
        }
    }
}

void BabuFrikAudioProcessor::randomizeControlValues (float amount)
{
    std::vector<String> parameterIDs;
    parameterIDs = kijimiInterface->getKIJIMISynthControlIDs();
    Random* random = new Random();
    for (int i=0; i<parameterIDs.size(); i++){
        String parameterID = parameterIDs[i];
        if (!kijimiInterface->isGlobalParameter(parameterID)){
            AudioParameterFloat* audioParameter = (AudioParameterFloat*)parameters.getParameter(parameterID);
            float newValue;
            if (amount < 1.0){
                float randomValue = (random->nextFloat() - 0.5 ) * 2.0 * amount;
                float parameterValue = audioParameter->get() / 127.0;  // Normalize to range 0-1
                newValue = (float)jlimit(0.0, 1.0, (double)(parameterValue + randomValue));
            } else {
                newValue = random->nextFloat();
            }
            audioParameter->setValueNotifyingHost(newValue); // parameter needs to be set in normalized range
        }
    }
    delete random;
}

void BabuFrikAudioProcessor::importFromPatchFile ()
{
    FileChooser fileChooser ("Please select a KIJIMI patch file to load...",
                             getDirectoryForFileSaveLoad(),
                             "*.kpatch");
    if (fileChooser.browseForFileToOpen())
    {
        File file (fileChooser.getResult());
        setLastUserDirectoryForFileSaveLoad(file);
        String filePath = file.getFullPathName();
        SynthControlIdValuePairs idValuePairs = kijimiInterface->getSynthControlIdValuePairsFromPatchFile(filePath);
        const ScopedValueSetter<bool> scopedInputFlag (isChangingFromLoadingAPatchFile, true);
        setParametersFromSynthControlIdValuePairs(idValuePairs, true); // the "isChangingFromLoadingAPatchFile" will prevent from sending MIDI messages for the controls...
        sendControlsToSynth(true); // ...and now we send them all (we do this to avoid issues in which controls did not change internally in Babu Frik but did change in KIJIMI and state was not synced. In these cases, "parameterChanged" is not called for all controls)
    }
}

void BabuFrikAudioProcessor::saveToPatchFile ()
{
    FileChooser fileChooser ("",
                             getDirectoryForFileSaveLoad(),
                             "*.kpatch");
    if (fileChooser.browseForFileToSave(true))
    {
        File file (fileChooser.getResult());
        setLastUserDirectoryForFileSaveLoad(file);
        KIJIMIPresetBytes currentPresetBytes = {0};  // Initialize to zero
        currentPresetBytes[0] = 0xF0;  // syex start
        currentPresetBytes[1] = 0x02; // kijmi ID
        currentPresetBytes[2] = 0x00;  // transfer patch command
        currentPresetBytes[3] = 0x00;  // bank number
        currentPresetBytes[4] = 0x00;  // preset number
        currentPresetBytes[261] = 0xF7; // sysex end
        std::vector<String> parameterIDs = kijimiInterface->getKIJIMISynthControlIDs();
        for (int i=0; i<parameterIDs.size(); i++){
            String parameterID = parameterIDs[i];
            int value = (int)getValueForAudioParameter(parameterID);
            KIJIMISynthControl* synthControl = kijimiInterface->getKIJIMISynthControlWithID(parameterID);
            synthControl->updatePresetByteArray(value, currentPresetBytes);
        }
        file.replaceWithData(&currentPresetBytes, KIJIMI_PRESET_NUM_BYTES);
    }
}

void BabuFrikAudioProcessor::loadControlsStateFromSynth ()
{
    if (midiOutput.get() != nullptr) {
        // Send MIDI sysex message with the code "get current state" that KIJIMI will understand
        uint8 sysexdata[] = { 0x02, 0x14 };  // 0xF0 ... and 0xF7 are added by JUCE
        MidiMessage msg = MidiMessage::createSysExMessage(sysexdata, 2);
        midiOutput.get()->sendMessageNow(msg);
    }
}

//==============================================================================


void BabuFrikAudioProcessor::logMessage (const String& message)
{
    /*
     This function should be called in any part of the code where we want to log a message.
     Can be called directly or by sending an action prefixed with ACTION_LOG_PREFIX (and registering
     the sending object in processor's listener).
     */
    
    int64 timestamp = Time::getCurrentTime().toMilliseconds();
    String messageToLog = (String)timestamp + "  -  " + message + newLine;
    
    if (LOG_IN_CONSOLE == 1){
        std::cout << messageToLog;
    }

    if (LOG_IN_UI == 1){
        // Broadcasts a "LOG:" action to editor with a message that will be received in the editor and printed to the logArea component
        sendActionMessage(ACTION_LOG_PREFIX + messageToLog);
    }
}

//==============================================================================

void BabuFrikAudioProcessor::actionListenerCallback (const String &message)
{
    if (message.startsWith(String(ACTION_LOAD_INTERPOLATED_PRESET))){
        const ScopedValueSetter<bool> scopedInputFlag (isChangingFromTimbreSpace, true);
        setParametersFromSynthControlIdValuePairs(
            kijimiInterface->getSynthControlIdValuePairsForInterpolatedPresets(timbreSpaceEngine->getSelectedPointInterpolationData()), true
        ); // the "isChangingFromTimbreSpace" will prevent from sending MIDI messages for the controls...
        sendControlsToSynth(true); // ...and now we send them all (we do this to avoid issues in which controls did not change internally in Babu Frik but did change in KIJIMI and state was not synced. In these cases, "parameterChanged" is not called for all controls)
        
    } else if (message.startsWith(String(ACTION_LOG_PREFIX))){
        #if JUCE_DEBUG
            logMessage(message.substring(String(ACTION_LOG_PREFIX).length()));
        #endif
    }
}

//==============================================================================

File BabuFrikAudioProcessor::getDirectoryForFileSaveLoad ()
{
    return lastUsedDirectoryForFileIO;
}

void BabuFrikAudioProcessor::setLastUserDirectoryForFileSaveLoad (File file)
{
    lastUsedDirectoryForFileIO = file.getParentDirectory();
}

void BabuFrikAudioProcessor::setUIScaleFactor(float newUIScaleFactor){
    uiScaleFactor = newUIScaleFactor;
    sendActionMessage(ACTION_UPDATE_UI_SCALE_FACTOR);
}

void BabuFrikAudioProcessor::showOrHideKIJIMIPanel(String panelName, bool doShow){
    if (panelName == "main"){
        if (doShow){
            sendActionMessage(ACTION_TOGGLE_SHOW_MAIN_PANEL);
        } else {
            sendActionMessage(ACTION_TOGGLE_HIDE_MAIN_PANEL);
        }
    } else if (panelName == "extra") {
        if (doShow){
            sendActionMessage(ACTION_TOGGLE_SHOW_EXTRA_PANEL);
        } else {
            sendActionMessage(ACTION_TOGGLE_HIDE_EXTRA_PANEL);
        }
    } else if (panelName == "lfos") {
        if (doShow){
            sendActionMessage(ACTION_TOGGLE_SHOW_LFO_PANEL);
        } else {
            sendActionMessage(ACTION_TOGGLE_HIDE_LFO_PANEL);
        }
    }
}

void BabuFrikAudioProcessor::toggleAutomaticSyncWithSynth(){
    automaticSyncWithSynthEnabled = !automaticSyncWithSynthEnabled;
}


//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new BabuFrikAudioProcessor();
}
