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
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SPEED_VCO_1", // parameter ID
                                                            "Ch I: PWM Speed", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_PWM_VCO_1", // parameter ID
                                                            "Ch I: PWM Amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_PW_VCO_1", // parameter ID
                                                            "Ch I: PW", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SQR_VCO_1", // parameter ID
                                                            "Ch I: Square", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SAW_VCO_1", // parameter ID
                                                            "Ch I: Sawtooth", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_NOISE_VCO_1", // parameter ID
                                                            "Ch I: Noise", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_HPF_VCF_1", // parameter ID
                                                            "Ch I: HPF", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_RESh_VCF_1", // parameter ID
                                                            "Ch I: RESh", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LPF_VCF_1", // parameter ID
                                                            "Ch I: LPF", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_RESl_VCF_1", // parameter ID
                                                            "Ch I: RESl", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_IL_VCF_1", // parameter ID
                                                            "Ch I: VCF IL", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AL_VCF_1", // parameter ID
                                                            "Ch I: VCF AL", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_A_VCF_1", // parameter ID
                                                            "Ch I: VCF A", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_D_VCF_1", // parameter ID
                                                            "Ch I: VCF D", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_R_VCF_1", // parameter ID
                                                            "Ch I: VCF R", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_VCA_1", // parameter ID
                                                            "Ch I: VCF Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SINE__VCA_1", // parameter ID
                                                            "Ch I: Sine Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_A_VCA_1", // parameter ID
                                                            "Ch I: VCA A", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_D_VCA_1", // parameter ID
                                                            "Ch I: VCA D", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_S_VCA_1", // parameter ID
                                                            "Ch I: VCA S", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_R_VCA_1", // parameter ID
                                                            "Ch I: VCA R", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LEVEL_VCA_1", // parameter ID
                                                            "Ch I: Channel Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_INIT_BR_TOUCH_1", // parameter ID
                                                            "Ch I: Initial Brilliance", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_INIT_LEV_TOUCH_1", // parameter ID
                                                            "Ch I: Initial Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_BR_TOUCH_1", // parameter ID
                                                            "Ch I: After Brilliance", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_LEV_TOUCH_1", // parameter ID
                                                            "Ch I: After Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SPEED_VCO_2", // parameter ID
                                                            "Ch II: PWM Speed", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_PWM_VCO_2", // parameter ID
                                                            "Ch II: PWM Amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_PW_VCO_2", // parameter ID
                                                            "Ch II: PW", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SQR_VCO_2", // parameter ID
                                                            "Ch II: Square", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SAW_VCO_2", // parameter ID
                                                            "Ch II: Sawtooth", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_NOISE_VCO_2", // parameter ID
                                                            "Ch II: Noise", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_HPF_VCF_2", // parameter ID
                                                            "Ch II: HPF", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_RESh_VCF_2", // parameter ID
                                                            "Ch II: RESh", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LPF_VCF_2", // parameter ID
                                                            "Ch II: LPF", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_RESl_VCF_2", // parameter ID
                                                            "Ch II: RESl", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_IL_VCF_2", // parameter ID
                                                            "Ch II: VCF IL", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AL_VCF_2", // parameter ID
                                                            "Ch II: VCF AL", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_A_VCF_2", // parameter ID
                                                            "Ch II: VCF A", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_D_VCF_2", // parameter ID
                                                            "Ch II: VCF D", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_R_VCF_2", // parameter ID
                                                            "Ch II: VCF R", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_VCA_2", // parameter ID
                                                            "Ch II: VCF Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SINE__VCA_2", // parameter ID
                                                            "Ch II: Sine Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_A_VCA_2", // parameter ID
                                                            "Ch II: VCA A", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_D_VCA_2", // parameter ID
                                                            "Ch II: VCA D", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_S_VCA_2", // parameter ID
                                                            "Ch II: VCA S", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_R_VCA_2", // parameter ID
                                                            "Ch II: VCA R", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LEVEL_VCA_2", // parameter ID
                                                            "Ch II: Channel Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_INIT_BR_TOUCH_2", // parameter ID
                                                            "Ch II: Initial Brilliance", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_INIT_LEV_TOUCH_2", // parameter ID
                                                            "Ch II: Initial Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_BR_TOUCH_2", // parameter ID
                                                            "Ch II: After Brilliance", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_AT_LEV_TOUCH_2", // parameter ID
                                                            "Ch II: After Level", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_COARSE_PITCH", // parameter ID
                                                            "Pitch Coarse", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_FINE_PITCH", // parameter ID
                                                            "Pitch Fine", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_DETUNE_CH2_PITCH", // parameter ID
                                                            "Detune Ch II", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_FEET_1_FEET", // parameter ID
                                                            "Feet I", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_FEET_2_FEET", // parameter ID
                                                            "Feet II", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_FUNCTION_SUB_OSC", // parameter ID
                                                            "Sub Osc Function", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SPEED_SUB_OSC", // parameter ID
                                                            "Sub Osc Speed", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO_SUB_OSC", // parameter ID
                                                            "Sub Osc VCO Amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_SUB_OSC", // parameter ID
                                                            "Sub Osc VCF Amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCA_SUB_OSC", // parameter ID
                                                            "Sub Osc VCA Amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_MIX", // parameter ID
                                                            "Mix", // parameter name
                                                            NormalisableRange < float > (0.0f, 126.0f, 1.0f), // parameter range
                                                            63.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_BRILL", // parameter ID
                                                            "Brilliance", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_RESSO", // parameter ID
                                                            "Ressonance", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_INITIAL_TOUCH", // parameter ID
                                                            "Initial Pitch Bend", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SPEED_TOUCH", // parameter ID
                                                            "Touch Response Sub Osc Speed", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCO_TOUCH", // parameter ID
                                                            "Touch Response Sub Osc VCO Amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_VCF_TOUCH", // parameter ID
                                                            "Touch Response Sub Osc VCF Amount", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_BR_LOW_KBRD", // parameter ID
                                                            "Brilliance Low", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_BR_HIGH_KBRD", // parameter ID
                                                            "Brilliance High", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LEV_LOW_KBRD", // parameter ID
                                                            "Level Low", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_LEV_HIGH_KBRD", // parameter ID
                                                            "Level High", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_GLIDE_MODE_GLIDE", // parameter ID
                                                            "Glide Mode", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_GLIDE_TIME_GLIDE", // parameter ID
                                                            "Glide Time", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SUSTAIN_MODE", // parameter ID
                                                            "Sustain Mode", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                std:: make_unique < AudioParameterFloat > ("KIJIMI_SUSTAIN_TIME", // parameter ID
                                                            "Sustain Time", // parameter name
                                                            NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                            64.0f),
                // --> End auto-generated code A
                std:: make_unique < AudioParameterFloat > (String(SPACE_X_PARAMETER_ID), // parameter ID
                                                           String(SPACE_X_PARAMETER_NAME), // parameter name
                                                           NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                           65.0f),
                std:: make_unique < AudioParameterFloat > (String(SPACE_Y_PARAMETER_ID), // parameter ID
                                                           String(SPACE_Y_PARAMETER_NAME), // parameter name
                                                           NormalisableRange < float > (0.0f, 127.0f, 1.0f), // parameter range
                                                           65.0f)
            })
#endif
{
    // Add listeners to TimbreSpace position parameters
    parameters.addParameterListener (String(SPACE_X_PARAMETER_ID), this);
    parameters.addParameterListener (String(SPACE_Y_PARAMETER_ID), this);
    
    // Add listeners for each audio parameter
    // --> Start auto-generated code B
    parameters.addParameterListener ("KIJIMI_SPEED_VCO_1", this);
    parameters.addParameterListener ("KIJIMI_PWM_VCO_1", this);
    parameters.addParameterListener ("KIJIMI_PW_VCO_1", this);
    parameters.addParameterListener ("KIJIMI_SQR_VCO_1", this);
    parameters.addParameterListener ("KIJIMI_SAW_VCO_1", this);
    parameters.addParameterListener ("KIJIMI_NOISE_VCO_1", this);
    parameters.addParameterListener ("KIJIMI_HPF_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_RESh_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_LPF_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_RESl_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_IL_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_AL_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_A_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_D_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_R_VCF_1", this);
    parameters.addParameterListener ("KIJIMI_VCF_VCA_1", this);
    parameters.addParameterListener ("KIJIMI_SINE__VCA_1", this);
    parameters.addParameterListener ("KIJIMI_A_VCA_1", this);
    parameters.addParameterListener ("KIJIMI_D_VCA_1", this);
    parameters.addParameterListener ("KIJIMI_S_VCA_1", this);
    parameters.addParameterListener ("KIJIMI_R_VCA_1", this);
    parameters.addParameterListener ("KIJIMI_LEVEL_VCA_1", this);
    parameters.addParameterListener ("KIJIMI_INIT_BR_TOUCH_1", this);
    parameters.addParameterListener ("KIJIMI_INIT_LEV_TOUCH_1", this);
    parameters.addParameterListener ("KIJIMI_AT_BR_TOUCH_1", this);
    parameters.addParameterListener ("KIJIMI_AT_LEV_TOUCH_1", this);
    parameters.addParameterListener ("KIJIMI_SPEED_VCO_2", this);
    parameters.addParameterListener ("KIJIMI_PWM_VCO_2", this);
    parameters.addParameterListener ("KIJIMI_PW_VCO_2", this);
    parameters.addParameterListener ("KIJIMI_SQR_VCO_2", this);
    parameters.addParameterListener ("KIJIMI_SAW_VCO_2", this);
    parameters.addParameterListener ("KIJIMI_NOISE_VCO_2", this);
    parameters.addParameterListener ("KIJIMI_HPF_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_RESh_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_LPF_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_RESl_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_IL_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_AL_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_A_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_D_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_R_VCF_2", this);
    parameters.addParameterListener ("KIJIMI_VCF_VCA_2", this);
    parameters.addParameterListener ("KIJIMI_SINE__VCA_2", this);
    parameters.addParameterListener ("KIJIMI_A_VCA_2", this);
    parameters.addParameterListener ("KIJIMI_D_VCA_2", this);
    parameters.addParameterListener ("KIJIMI_S_VCA_2", this);
    parameters.addParameterListener ("KIJIMI_R_VCA_2", this);
    parameters.addParameterListener ("KIJIMI_LEVEL_VCA_2", this);
    parameters.addParameterListener ("KIJIMI_INIT_BR_TOUCH_2", this);
    parameters.addParameterListener ("KIJIMI_INIT_LEV_TOUCH_2", this);
    parameters.addParameterListener ("KIJIMI_AT_BR_TOUCH_2", this);
    parameters.addParameterListener ("KIJIMI_AT_LEV_TOUCH_2", this);
    parameters.addParameterListener ("KIJIMI_COARSE_PITCH", this);
    parameters.addParameterListener ("KIJIMI_FINE_PITCH", this);
    parameters.addParameterListener ("KIJIMI_DETUNE_CH2_PITCH", this);
    parameters.addParameterListener ("KIJIMI_FEET_1_FEET", this);
    parameters.addParameterListener ("KIJIMI_FEET_2_FEET", this);
    parameters.addParameterListener ("KIJIMI_FUNCTION_SUB_OSC", this);
    parameters.addParameterListener ("KIJIMI_SPEED_SUB_OSC", this);
    parameters.addParameterListener ("KIJIMI_VCO_SUB_OSC", this);
    parameters.addParameterListener ("KIJIMI_VCF_SUB_OSC", this);
    parameters.addParameterListener ("KIJIMI_VCA_SUB_OSC", this);
    parameters.addParameterListener ("KIJIMI_MIX", this);
    parameters.addParameterListener ("KIJIMI_BRILL", this);
    parameters.addParameterListener ("KIJIMI_RESSO", this);
    parameters.addParameterListener ("KIJIMI_INITIAL_TOUCH", this);
    parameters.addParameterListener ("KIJIMI_SPEED_TOUCH", this);
    parameters.addParameterListener ("KIJIMI_VCO_TOUCH", this);
    parameters.addParameterListener ("KIJIMI_VCF_TOUCH", this);
    parameters.addParameterListener ("KIJIMI_BR_LOW_KBRD", this);
    parameters.addParameterListener ("KIJIMI_BR_HIGH_KBRD", this);
    parameters.addParameterListener ("KIJIMI_LEV_LOW_KBRD", this);
    parameters.addParameterListener ("KIJIMI_LEV_HIGH_KBRD", this);
    parameters.addParameterListener ("KIJIMI_GLIDE_MODE_GLIDE", this);
    parameters.addParameterListener ("KIJIMI_GLIDE_TIME_GLIDE", this);
    parameters.addParameterListener ("KIJIMI_SUSTAIN_MODE", this);
    parameters.addParameterListener ("KIJIMI_SUSTAIN_TIME", this);
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
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
}

void BabuFrikAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
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
    
    // Add UI scale factor to state
    state.setProperty(STATE_UI_SCALE_FACTOR, uiScaleFactor, nullptr);
    
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
    
    // std::cout << xml->createDocument("") <<std::endl;
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
    if (xmlState->hasAttribute (STATE_MIDI_INPUT_DEVICE_NAME)){
        String midiInputDeviceName = xmlState->getStringAttribute(STATE_MIDI_INPUT_DEVICE_NAME);
        setMidiInputDeviceByName(midiInputDeviceName);
    }
    
    if (xmlState->hasAttribute (STATE_MIDI_OUTPUT_DEVICE_NAME)){
        String midiOutputDeviceName = xmlState->getStringAttribute(STATE_MIDI_OUTPUT_DEVICE_NAME);
        setMidiOutputDeviceByName(midiOutputDeviceName);
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
    
    // Load ui scale factor
    if (xmlState->hasAttribute (STATE_UI_SCALE_FACTOR)){
        float newUIScaleFactor = xmlState->getStringAttribute(STATE_UI_SCALE_FACTOR).getFloatValue();
        setUIScaleFactor(newUIScaleFactor);
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
        
        if ((midiOutput.get() != nullptr) && (!isReceivingFromMidiInput)){
            int ccNumber = kijimiInterface->getCCNumberForParameterID(parameterID);
            int ccValue = (int)newValue;
            MidiMessage msg = MidiMessage::controllerEvent(midiOutputChannel, ccNumber, ccValue);
            midiOutput.get()->sendMessageNow(msg);
            timestampsLastCCSent[ccNumber] = Time::getCurrentTime().toMilliseconds(); // Store timestamp when the message was sent
            
            #if JUCE_DEBUG
                if (LOG_INDIVIDUAL_PARAMETER_CHANGES == 1){
                    logMessage(String::formatted("Sent MIDI CC: %i %i", ccNumber, ccValue));
                }
            #endif
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
    if ((midiInputChannel == -1) || (m.getChannel() == midiInputChannel))
    {
        if (m.isController())
        {
            int ccNumber = m.getControllerNumber();
            int ccValue = m.getControllerValue();
            
            /* There is bug with MIDI implementation of SQR and SAW switches in DDRM.
             The problem is that these controls react to MIDI CC 70 and 71 but send MIDI CC 71
             and 70 (are inverted in MIDI in/out). The code below fixes this issue and should be
             changed once this is fixed in DDRM firmware.
             More details here: https://github.com/ffont/official-ddrm-issue-tracker/issues/39
             
             */
            
            if (ccNumber == 70){
                ccNumber = 71;
            } else if (ccNumber == 71){
                ccNumber = 70;
            }
            
            /* Only process MIDI input message if a certain amount of time has passed since
             last time a MIDI CC message was sent from this app to the same CC number. This
             is to avoid a problem in DDRM which will replicate every MIDI message it receives
             and forward it to its output. If the message came from this app we want to ignore the
             replica sent by DDRM. The amount of time that should pass is defined in
             MIDI_IN_SAME_CC_TIME_THRESHOLD_MS.
             
             To implement that check, everytime we send a MIDI CC message we store a timestamp
             in timestampsLastCCSent array. timestampsLastCCSent has 128 positions and each position
             stores the timestamp for the last time a MIDI message was sent to the corresponding CC
             value (per the position). E.g.: position 1 = MIDI CC #1.
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
                const ScopedValueSetter<bool> scopedInputFlag (isReceivingFromMidiInput, true);
                float newValue = (float)ccValue/127.0;
                const String parameterID = kijimiInterface->getParameterIDFromCCNumber(ccNumber);
                parameters.getParameter(parameterID)->beginChangeGesture();
                parameters.getParameter(parameterID)->setValueNotifyingHost(newValue);
                parameters.getParameter(parameterID)->endChangeGesture();
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
        setParametersFromSynthControlIdValuePairs(idValuePairs);
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
            synthControl->updatePresetByteArray(audioParameter->get() / 127.0, currentPresetBytes);
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
                             "*.p");
    if (fileChooser.browseForFileToSave(true))
    {
        File file (fileChooser.getResult());
        file.deleteFile(); // Delete the file if already exists
        setLastUserDirectoryForFileSaveLoad(file);
        for (int i=0; i<kijimiInterface->getNumLoadedPresets(); i++){
            KIJIMIPresetBytes presetBytes = kijimiInterface->getLoadedPresetBytesAtIndex(i);
            file.appendData(&presetBytes, KIJIMI_PRESET_NUM_BYTES);
        }
    }
}

void BabuFrikAudioProcessor::setParametersFromSynthControlIdValuePairs (SynthControlIdValuePairs idValuePairs)
{
    for (int i=0; i<idValuePairs.size(); i++) {
        String parameterID = idValuePairs[i].first;
        double newValue = idValuePairs[i].second;
        parameters.getParameter(parameterID)->setValueNotifyingHost(newValue);
    }
}

//==============================================================================

// Actions from KIJIMI control panel menu

void BabuFrikAudioProcessor::copyDDRMChannel1ToChannel2 ()
{
    SynthControlIdValuePairs idValuePairs = kijimiInterface->getSynthControlIdValuePairsForCopyingChannelFromToChannelTo(&parameters, 1, 2);
    setParametersFromSynthControlIdValuePairs(idValuePairs);
}

void BabuFrikAudioProcessor::copyDDRMChannel2ToChannel1 ()
{
    SynthControlIdValuePairs idValuePairs = kijimiInterface->getSynthControlIdValuePairsForCopyingChannelFromToChannelTo(&parameters, 2, 1);
    setParametersFromSynthControlIdValuePairs(idValuePairs);
}

void BabuFrikAudioProcessor::swapDDRMChannels ()
{
    SynthControlIdValuePairs idValuePairs1to2 = kijimiInterface->getSynthControlIdValuePairsForCopyingChannelFromToChannelTo(&parameters, 1, 2);
    SynthControlIdValuePairs idValuePairs2to1 = kijimiInterface->getSynthControlIdValuePairsForCopyingChannelFromToChannelTo(&parameters, 2, 1);
    setParametersFromSynthControlIdValuePairs(idValuePairs1to2);
    setParametersFromSynthControlIdValuePairs(idValuePairs2to1);
}

void BabuFrikAudioProcessor::sendControlsToSynth (int channelFilter)
{
    if (midiOutput.get() != nullptr) {
        std::vector<String> parameterIDs;
        if ((channelFilter == 1) || (channelFilter == 2)){
            parameterIDs = kijimiInterface->getKIJIMISynthControlIDsForChannel(channelFilter);
        } else {
            parameterIDs = kijimiInterface->getKIJIMISynthControlIDs();
        }
        for (int i=0; i<parameterIDs.size(); i++){
            String parameterID = parameterIDs[i];
            int ccNumber = kijimiInterface->getCCNumberForParameterID(parameterID);
            AudioParameterFloat* audioParameter = (AudioParameterFloat*)parameters.getParameter(parameterID);
            int ccValue = (int)audioParameter->get();  // Needs 0-127 int number for midi out
            MidiMessage msg = MidiMessage::controllerEvent(midiOutputChannel, ccNumber, ccValue);
            midiOutput.get()->sendMessageNow(msg);
            timestampsLastCCSent[ccNumber] = Time::getCurrentTime().toMilliseconds(); // Store timestamp when the message was sent
            #if JUCE_DEBUG
                if (LOG_INDIVIDUAL_PARAMETER_CHANGES == 1){
                    logMessage(String::formatted("Sent MIDI CC: %i %i", ccNumber, ccValue));
                }
            #endif
        }
    }
}

void BabuFrikAudioProcessor::randomizeControlValues (int channelFilter, float amount)
{
    std::vector<String> parameterIDs;
    if ((channelFilter == 1) || (channelFilter == 2)){
        parameterIDs = kijimiInterface->getKIJIMISynthControlIDsForChannel(channelFilter);
    } else {
        parameterIDs = kijimiInterface->getKIJIMISynthControlIDs();
    }
    Random* random = new Random();
    for (int i=0; i<parameterIDs.size(); i++){
        String parameterID = parameterIDs[i];
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

void BabuFrikAudioProcessor::importFromPatchFile ()
{
    FileChooser fileChooser ("Please select a KIJIMI patch file to load...",
                             getDirectoryForFileSaveLoad(),
                             "*.ddpatch");
    if (fileChooser.browseForFileToOpen())
    {
        File file (fileChooser.getResult());
        setLastUserDirectoryForFileSaveLoad(file);
        String filePath = file.getFullPathName();
        SynthControlIdValuePairs idValuePairs = kijimiInterface->getSynthControlIdValuePairsFromPatchFile(filePath);
        setParametersFromSynthControlIdValuePairs(idValuePairs);
    }
}

void BabuFrikAudioProcessor::importFromVoiceFile (int channelTo)
{
    FileChooser fileChooser ("Please select a KIJIMI voice file to load...",
                             getDirectoryForFileSaveLoad(),
                             "*.ddvoice");
    if (fileChooser.browseForFileToOpen())
    {
        File file (fileChooser.getResult());
        setLastUserDirectoryForFileSaveLoad(file);
        String filePath = file.getFullPathName();
        SynthControlIdValuePairs idValuePairs = kijimiInterface->getSynthControlIdValuePairsForChannelFromVoiceFile(filePath, channelTo);
        setParametersFromSynthControlIdValuePairs(idValuePairs);
    }
}

void BabuFrikAudioProcessor::saveToPatchFile ()
{
    FileChooser fileChooser ("",
                             getDirectoryForFileSaveLoad(),
                             "*.ddpatch");
    if (fileChooser.browseForFileToSave(true))
    {
        File file (fileChooser.getResult());
        setLastUserDirectoryForFileSaveLoad(file);
        std::vector<String> parameterIDs = kijimiInterface->getKIJIMISynthControlIDs();
        KIJIMIPresetBytes currentPresetBytes = {0};  // Initialize to zero
        for (int i=0; i<parameterIDs.size(); i++){
            String parameterID = parameterIDs[i];
            AudioParameterFloat* audioParameter = (AudioParameterFloat*)parameters.getParameter(parameterID);
            KIJIMISynthControl* synthControl = kijimiInterface->getKIJIMISynthControlWithID(parameterID);
            synthControl->updatePresetByteArray(audioParameter->get() / 127.0, currentPresetBytes);
        }
        file.replaceWithData(&currentPresetBytes, KIJIMI_PRESET_NUM_BYTES);
    }
}

void BabuFrikAudioProcessor::saveToVoiceFile (int channelFrom)
{
    FileChooser fileChooser ("",
                             getDirectoryForFileSaveLoad(),
                             "*.ddvoice");
    if (fileChooser.browseForFileToSave(true))
    {
        File file (fileChooser.getResult());
        setLastUserDirectoryForFileSaveLoad(file);
        std::vector<String> parameterIDs = kijimiInterface->getKIJIMISynthControlIDsForChannel(channelFrom);
        KIJIMIVoiceBytes currentVoiceBytes = {0};  // Initialize to zero
        for (int i=0; i<parameterIDs.size(); i++){
            String parameterID = parameterIDs[i];
            AudioParameterFloat* audioParameter = (AudioParameterFloat*)parameters.getParameter(parameterID);
            KIJIMISynthControl* synthControl = kijimiInterface->getKIJIMISynthControlWithID(parameterID);
            synthControl->updateVoiceByteArray(audioParameter->get() / 127.0, currentVoiceBytes);
        }
        file.replaceWithData(&currentVoiceBytes, KIJIMI_VOICE_NUM_BYTES);
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
            kijimiInterface->getSynthControlIdValuePairsForInterpolatedPresets(timbreSpaceEngine->getSelectedPointInterpolationData())
        );
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


//==============================================================================
// This creates new instances of the plugin..
AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new BabuFrikAudioProcessor();
}
