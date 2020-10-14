//
//  KIJIMIInterface.h
//  KIJIMITimbreSpace
//
//  Created by Frederic Font Corbera on 22/02/2019.
//  Copyright © 2019 Rita&AuroraAudio. All rights reserved.
//


#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "KIJIMISynthControl.h"
#include "KIJIMIPresetBank.h"
#include "defines.h"

class KIJIMIInterface: public ActionBroadcaster

{
public:
    KIJIMIInterface ()
    {
    }
    
    ~KIJIMIInterface ()
    {
        // De-register action listeners
        removeAllActionListeners();
    }
    
    void loadSynthControlObjects() {
        // Add KIJIMISynthControl objects to the synthControls vector
        // --> Start auto-generated code A
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_AMT", "LFO1 amount", "knob", 5, -1, -1, 5, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_P", "LFO1 to VCO1 polarity", "button2", 88, -1, -1, 103, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_P", "LFO1 to VCO2 polarity", "button2", 89, -1, -1, 104, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_P", "LFO1 to WAVE1 polarity", "button2", 90, -1, -1, 105, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_P", "LFO1 to WAVE2 polarity", "button2", 91, -1, -1, 106, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_P", "LFO1 to SUB polarity", "button2", 92, -1, -1, 107, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_P", "LFO1 to VCF polarity", "button2", 93, -1, -1, 108, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_P", "LFO1 to RESO polarity", "button2", 94, -1, -1, 109, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_P", "LFO1 to VCA polarity", "button2", 95, -1, -1, 110, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_AMT", "LFO2 amount", "knob", 8, -1, -1, 6, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_P", "LFO2 to VCO1 polarity", "button2", 102, -1, -1, 111, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_P", "LFO2 to VCO2 polarity", "button2", 103, -1, -1, 112, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_P", "LFO2 to WAVE1 polarity", "button2", 104, -1, -1, 113, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_P", "LFO2 to WAVE2 polarity", "button2", 105, -1, -1, 114, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_P", "LFO2 to SUB polarity", "button2", 106, -1, -1, 115, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_P", "LFO2 to VCF polarity", "button2", 14, -1, -1, 116, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_P", "LFO2 to RESO polarity", "button2", 108, -1, -1, 117, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_P", "LFO2 to VCA polarity", "button2", 109, -1, -1, 118, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_AMT", "ADSR2 amount", "knob", 40, -1, -1, 7, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2VCO1_P", "ADSR2 to VCO1 polarity", "button2", 110, -1, -1, 119, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2VCO2_P", "ADSR2 to VCO2 polarity", "button2", 15, -1, -1, 120, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2WAVE1_P", "ADSR2 to WAVE1 polarity", "button2", 112, -1, -1, 121, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2WAVE2_P", "ADSR2 to WAVE2 polarity", "button2", 113, -1, -1, 122, "80_16_48_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2VCO1", "VCO2 to VCO1", "knob", 49, -1, -1, 16, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2VCF", "VCO2 to VCF", "knob", 52, -1, -1, 19, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_LFO1RATE", "Velocity to LFO1 rate", "knobC", 41, -1, -1, 8, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_LFO2RATE", "Velocity to LFO2 rate", "knobC", 43, -1, -1, 10, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_WAVE", "Velocity to waveform", "knobC", 45, -1, -1, 12, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_SUB", "Velocity to sub amount", "knobC", 47, -1, -1, 14, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_PITCH", "Velocity to pitchbend", "knobC", 50, -1, -1, 17, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_VCA", "Velocity to VCA", "knobC", 53, -1, -1, 20, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_LFO1RATE", "Aftertouch to LFO1 rate", "knobC", 42, -1, -1, 9, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_LFO2RATE", "Aftertouch to LFO2 rate", "knobC", 44, -1, -1, 11, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_WAVE", "Aftertouch to waveform", "knobC", 46, -1, -1, 13, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_SUB", "Aftertouch to sub amount", "knobC", 48, -1, -1, 15, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_PITCH", "Aftertouch to pitchbend", "knobC", 51, -1, -1, 18, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_VCA", "Aftertouch to VCA", "knobC", 54, -1, -1, 21, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_RATE", "LFO1 rate", "knob", 55, -1, -1, 22, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_A", "LFO1 attack", "knob", 56, -1, -1, 23, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_D", "LFO1 decay", "knob", 57, -1, -1, 24, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_SHAPE", "LFO1 shape", "button0", 114, -1, -1, 53, "115_94_73_52_31_10", 5, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_RATE", "LFO2 rate", "knob", 58, -1, -1, 25, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_A", "LFO2 attack", "knob", 59, -1, -1, 26, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_D", "LFO2 decay", "knob", 60, -1, -1, 27, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_SHAPE", "LFO2 shape", "button0", 116, -1, -1, 54, "115_94_73_52_31_10", 5, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_ENV", "LFO envelope", "button2", 115, -1, -1, 55, "16_48_80_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_FREQ", "VCO1 frequency", "knob", 61, -1, -1, 28, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_WAVE", "VCO1 waveform", "knob", 62, -1, -1, 29, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_VOL13", "VCO1 volume 1/3", "button1", 117, -1, -1, 56, "32_96", 1, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_VOL23", "VCO1 volume 2/3", "button1", 118, -1, -1, 57, "32_96", 1, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SUB_VOL", "Sub volume", "knob", 63, -1, -1, 30, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_NOISE_VOL13", "Noise volume 1/3", "button1", 38, -1, -1, 58, "32_96", 1, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_NOISE_VOL23", "Noise volume 2/3", "button1", 39, -1, -1, 59, "32_96", 1, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_FREQ", "VCO2 frequency", "knob", 65, -1, -1, 31, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2WAVE", "VCO2 waveform", "knob", 66, -1, -1, 32, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_VOL", "VCO2 volume", "knob", 67, -1, -1, 33, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_DETUNE", "VCO2 detune", "knob", 68, -1, -1, 34, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO_SYNC", "VCO sync", "button2", 37, -1, -1, 60, "21_63_105", 2, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO_KOFF", "VCO key off", "button2", 36, -1, -1, 61, "16_48_80_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_FREQ", "VCF Frequency", "knob", 69, -1, -1, 35, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_VEL_C", "VCF Velocity control", "knobC", 70, -1, -1, 36, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_AT_C", "VCF Aftertouch control", "knobC", 71, -1, -1, 37, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_ADSR2_C", "VCF ADSR2 control", "knobC", 72, -1, -1, 38, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_RESO", "VCF Resonance", "knob", 73, -1, -1, 39, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_Q_VEL_C", "VCF Velocity Q control", "knobC", 75, -1, -1, 40, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_Q_AT_C", "VCF Aftertouch Q control", "knobC", 76, -1, -1, 41, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_KEY_C", "VCF Keyboard control", "knob", 77, -1, -1, 42, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_A", "ADSR2 attack", "knob", 78, -1, -1, 43, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_D", "ADSR2 decay", "knob", 79, -1, -1, 44, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_S", "ADSR2 sustain", "knob", 80, -1, -1, 45, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_R", "ADSR2 release", "knob", 81, -1, -1, 46, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_A", "ADSR1 attack", "knob", 82, -1, -1, 47, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_D", "ADSR1 decay", "knob", 83, -1, -1, 48, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_S", "ADSR1 sustain", "knob", 84, -1, -1, 49, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_R", "ADSR1 release", "knob", 85, -1, -1, 50, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_MULT", "ADSR mult", "button2", 35, -1, -1, 62, "-_16_48_80_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_CYCLE", "ADSR cycle", "button2", 34, -1, -1, 63, "16_48_80_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_KT", "ADSR KT", "button2", 33, -1, -1, 64, "16_48_80_112", 3, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_GLIDE_RATE", "Glide rate", "knob", 86, -1, -1, 51, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_GLIDE_MODE", "Glide mode", "button2", 32, -1, -1, 79, "21_63_105", 2, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VOLUME", "Volume", "knob", 87, -1, -1, 52, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_KNOB_BEH", "Knobs behaviour", "select", -1, 13, -1, 66, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_CC_RECEIVE", "CC Receive", "button1", -1, 16, -1, 69, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_MODE", "Aftertouch mode", "select", -1, 21, -1, 74, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MPE_CH", "MPE base channel", "knob", -1, 23, -1, 76, "direct", 7, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MIDI_CH", "MIDI in channel", "knob", -1, 24, -1, 77, "direct", 16, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MIDI_OUT_CH", "MIDI out channel", "knob", -1, 85, -1, 237, "direct", 16, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MAX_VOICES", "Maximum number of voices", "knob", -1, 27, -1, 80, "direct", 8, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_MOD_MODE", "ADSR2 modulation mode", "button2", -1, 83, -1, 234, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_CYCLE_MODE", "Cycle poly/mono", "button2", -1, 42, -1, 95, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_KT_MULTIPLIER", "KT multiplier", "button2", -1, 43, -1, 96, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_MAX_R", "LFO max rate", "knob", -1, 39, -1, 92, "direct", 100, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_MIN_R", "LFO min rate", "knob", -1, 40, -1, 93, "direct", 100, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_MODE", "LFO poly/mono", "button2", -1, 41, -1, 94, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_MOD_MODE", "LFO modulation mode", "button2", -1, 62, -1, 129, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_POLY_RETRIG", "LFO poly mode EG retrig", "button1", -1, 84, -1, 235, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_SUST", "LFO sustain", "button1", -1, 33, -1, 86, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_ENV_DEST", "LFO1 EG destination", "button2", -1, 60, -1, 126, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_ENV_MAX_T", "LFO1 EG max time", "knob", -1, 63, -1, 130, "direct", 20, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_ENV_P", "LFO1 EG amount", "knob", -1, 65, -1, 132, "direct", 19, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_SYNC", "LFO1 sync", "button2", -1, 58, -1, 125, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_ENV_DEST", "LFO2 EG destination", "button2", -1, 61, -1, 128, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_ENV_MAX_T", "LFO2 EG max time", "knob", -1, 64, -1, 131, "direct", 20, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_ENV_P", "LFO2 EG amount", "knob", -1, 66, -1, 133, "direct", 19, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_SYNC", "LFO2 sync", "button2", -1, 59, -1, 127, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_CURVE", "Aftertouch curve", "select", -1, 45, -1, 98, "direct", 4, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_CC74_DEST", "CC74 destination", "select", -1, 12, -1, 65, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MODW_DEST", "Modwheel destination", "select", -1, 15, -1, 68, "direct", 4, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MODW_P", "Modwheel polarity", "button2", -1, 34, -1, 87, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_PBEND_RANGE", "Pitchbend range", "knob", -1, 28, -1, 81, "direct", 99, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MPE_PBEND_RANGE", "MPE Pitchbend range", "knob", -1, 86, -1, 236, "direct", 99, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_CURVE", "Velocity curve", "select", -1, 44, -1, 97, "direct", 4, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_VCA", "ADSR VCA level", "knob", -1, 25, -1, 78, "direct", 10, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MASTER_VOL", "Master volume", "knob", -1, 31, -1, 84, "direct", 12, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO_DETUNE", "VCO detune", "knob", -1, 29, -1, 82, "direct", 30, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_CARDS_VOCIE", "Cards per voice", "select", -1, 14, -1, 67, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LEG_EG_RETRIG", "Legato EG retrig", "button1", -1, 19, -1, 72, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LEG_PRIORITY", "Legato priority", "button2", -1, 20, -1, 73, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MONO_MODE", "Mono mode", "button2", -1, 17, -1, 70, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MONO_POLY", "Mono/poly/unisson", "button2", -1, 22, -1, 75, "direct", 2, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SUSTAIN_MODE", "Sustain mode", "button2", -1, 18, -1, 71, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_AM", "LFO1 to VCO1 amount", "knob", -1, -1, 0, 134, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_AM", "LFO1 to VCO2 amount", "knob", -1, -1, 1, 135, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_AM", "LFO1 to WAVE1 amount", "knob", -1, -1, 2, 136, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_AM", "LFO1 to WAVE2 amount", "knob", -1, -1, 3, 137, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_AM", "LFO1 to SUB amount", "knob", -1, -1, 4, 138, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_AM", "LFO1 to VCF amount", "knob", -1, -1, 5, 139, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_AM", "LFO1 to RESO amount", "knob", -1, -1, 6, 140, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_AM", "LFO1 to VCA amount", "knob", -1, -1, 7, 141, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_AM", "LFO2 to VCO1 amount", "knob", -1, -1, 8, 142, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_AM", "LFO2 to VCO2 amount", "knob", -1, -1, 9, 143, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_AM", "LFO2 to WAVE1 amount", "knob", -1, -1, 10, 144, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_AM", "LFO2 to WAVE2 amount", "knob", -1, -1, 11, 145, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_AM", "LFO2 to SUB amount", "knob", -1, -1, 12, 146, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_AM", "LFO2 to VCF amount", "knob", -1, -1, 13, 147, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_AM", "LFO2 to RESO amount", "knob", -1, -1, 14, 148, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_AM", "LFO2 to VCA amount", "knob", -1, -1, 15, 149, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2VCO1_AM", "ADSR2 to VCO1 amount", "knob", -1, -1, 16, 150, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2VCO2_AM", "ADSR2 to VCO2 amount", "knob", -1, -1, 17, 151, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2WAVE1_AM", "ADSR2 to WAVE1 amount", "knob", -1, -1, 18, 152, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2WAVE2_AM", "ADSR2 to WAVE2 amount", "knob", -1, -1, 19, 153, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_R", "LFO1 to VCO1 rate", "knob", -1, -1, 20, 154, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_R", "LFO1 to VCO2 rate", "knob", -1, -1, 21, 155, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_R", "LFO1 to WAVE1 rate", "knob", -1, -1, 22, 156, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_R", "LFO1 to WAVE2 rate", "knob", -1, -1, 23, 157, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_R", "LFO1 to SUB rate", "knob", -1, -1, 24, 158, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_R", "LFO1 to VCF rate", "knob", -1, -1, 25, 159, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_R", "LFO1 to RESO rate", "knob", -1, -1, 26, 160, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_R", "LFO1 to VCA rate", "knob", -1, -1, 27, 161, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_R", "LFO2 to VCO1 rate", "knob", -1, -1, 28, 162, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_R", "LFO2 to VCO2 rate", "knob", -1, -1, 29, 163, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_R", "LFO2 to WAVE1 rate", "knob", -1, -1, 30, 164, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_R", "LFO2 to WAVE2 rate", "knob", -1, -1, 31, 165, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_R", "LFO2 to SUB rate", "knob", -1, -1, 32, 166, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_R", "LFO2 to VCF rate", "knob", -1, -1, 33, 167, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_R", "LFO2 to RESO rate", "knob", -1, -1, 34, 168, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_R", "LFO2 to VCA rate", "knob", -1, -1, 35, 169, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_A", "LFO1 to VCO1 attack", "knob", -1, -1, 36, 170, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_A", "LFO1 to VCO2 attack", "knob", -1, -1, 37, 171, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_A", "LFO1 to WAVE1 attack", "knob", -1, -1, 38, 172, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_A", "LFO1 to WAVE2 attack", "knob", -1, -1, 39, 173, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_A", "LFO1 to SUB attack", "knob", -1, -1, 40, 174, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_A", "LFO1 to VCF attack", "knob", -1, -1, 41, 175, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_A", "LFO1 to RESO attack", "knob", -1, -1, 42, 176, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_A", "LFO1 to VCA attack", "knob", -1, -1, 43, 177, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_A", "LFO2 to VCO1 attack", "knob", -1, -1, 44, 178, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_A", "LFO2 to VCO2 attack", "knob", -1, -1, 45, 179, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_A", "LFO2 to WAVE1 attack", "knob", -1, -1, 46, 180, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_A", "LFO2 to WAVE2 attack", "knob", -1, -1, 47, 181, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_A", "LFO2 to SUB attack", "knob", -1, -1, 48, 182, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_A", "LFO2 to VCF attack", "knob", -1, -1, 49, 183, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_A", "LFO2 to RESO attack", "knob", -1, -1, 50, 184, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_A", "LFO2 to VCA attack", "knob", -1, -1, 51, 185, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_D", "LFO1 to VCO1 decay", "knob", -1, -1, 52, 186, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_D", "LFO1 to VCO2 decay", "knob", -1, -1, 53, 187, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_D", "LFO1 to WAVE1 decay", "knob", -1, -1, 54, 188, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_D", "LFO1 to WAVE2 decay", "knob", -1, -1, 55, 189, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_D", "LFO1 to SUB decay", "knob", -1, -1, 56, 190, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_D", "LFO1 to VCF decay", "knob", -1, -1, 57, 191, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_D", "LFO1 to RESO decay", "knob", -1, -1, 58, 192, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_D", "LFO1 to VCA decay", "knob", -1, -1, 59, 193, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_D", "LFO2 to VCO1 decay", "knob", -1, -1, 60, 194, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_D", "LFO2 to VCO2 decay", "knob", -1, -1, 61, 195, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_D", "LFO2 to WAVE1 decay", "knob", -1, -1, 62, 196, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_D", "LFO2 to WAVE2 decay", "knob", -1, -1, 63, 197, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_D", "LFO2 to SUB decay", "knob", -1, -1, 64, 198, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_D", "LFO2 to VCF decay", "knob", -1, -1, 65, 199, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_D", "LFO2 to RESO decay", "knob", -1, -1, 66, 200, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_D", "LFO2 to VCA decay", "knob", -1, -1, 67, 201, "direct", 127, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_W", "LFO1 to VCO1 waveform", "select", -1, -1, 68, 202, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_W", "LFO1 to VCO2 waveform", "select", -1, -1, 69, 203, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_W", "LFO1 to WAVE1 waveform", "select", -1, -1, 70, 204, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_W", "LFO1 to WAVE2 waveform", "select", -1, -1, 71, 205, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_W", "LFO1 to SUB waveform", "select", -1, -1, 72, 206, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_W", "LFO1 to VCF waveform", "select", -1, -1, 73, 207, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_W", "LFO1 to RESO waveform", "select", -1, -1, 74, 208, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_W", "LFO1 to VCA waveform", "select", -1, -1, 75, 209, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_W", "LFO2 to VCO1 waveform", "select", -1, -1, 76, 210, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_W", "LFO2 to VCO2 waveform", "select", -1, -1, 77, 211, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_W", "LFO2 to WAVE1 waveform", "select", -1, -1, 78, 212, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_W", "LFO2 to WAVE2 waveform", "select", -1, -1, 79, 213, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_W", "LFO2 to SUB waveform", "select", -1, -1, 80, 214, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_W", "LFO2 to VCF waveform", "select", -1, -1, 81, 215, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_W", "LFO2 to RESO waveform", "select", -1, -1, 82, 216, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_W", "LFO2 to VCA waveform", "select", -1, -1, 83, 217, "direct", 5, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_ENV", "LFO1 to VCO1 envelope", "button1", -1, -1, 84, 218, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_ENV", "LFO1 to VCO2 envelope", "button1", -1, -1, 85, 219, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_ENV", "LFO1 to WAVE1 envelope", "button1", -1, -1, 86, 220, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_ENV", "LFO1 to WAVE2 envelope", "button1", -1, -1, 87, 221, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_ENV", "LFO1 to SUB envelope", "button1", -1, -1, 88, 222, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_ENV", "LFO1 to VCF envelope", "button1", -1, -1, 89, 223, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_ENV", "LFO1 to RESO envelope", "button1", -1, -1, 90, 224, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_ENV", "LFO1 to VCA envelope", "button1", -1, -1, 91, 225, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_ENV", "LFO2 to VCO1 envelope", "button1", -1, -1, 92, 226, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_ENV", "LFO2 to VCO2 envelope", "button1", -1, -1, 93, 227, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_ENV", "LFO2 to WAVE1 envelope", "button1", -1, -1, 94, 228, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_ENV", "LFO2 to WAVE2 envelope", "button1", -1, -1, 95, 229, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_ENV", "LFO2 to SUB envelope", "button1", -1, -1, 96, 230, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_ENV", "LFO2 to VCF envelope", "button1", -1, -1, 97, 231, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_ENV", "LFO2 to RESO envelope", "button1", -1, -1, 98, 232, "direct", 1, false, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_ENV", "LFO2 to VCA envelope", "button1", -1, -1, 99, 233, "direct", 1, false, true));
        // --> End auto-generated code A
        
        #if JUCE_DEBUG
            logMessage(String::formatted("Loaded %i KIJIMI controls", synthControls.size()));
        #endif
    }
    
    std::vector<String> getKIJIMISynthControlIDs (){
        // Returns a vector with all synth control IDs
        std::vector<String> synthControlIDS;
        for (int i=0; i < synthControls.size(); i++){
            synthControlIDS.push_back(synthControls[i].getID());
        }
        return synthControlIDS;
    }
    
    std::vector<String> getKIJIMISynthControlIDsForTimbreSpace (){
        // Returns a vector with all synth control IDs to be included in the timbre space
        std::vector<String> synthControlIDS;
        for (int i=0; i < synthControls.size(); i++){
            if (synthControls[i].shouldBeIncludedInTimbreSpace()){
                synthControlIDS.push_back(synthControls[i].getID());
            }
        }
        return synthControlIDS;
    }
    
    KIJIMISynthControl* getKIJIMISynthControlWithID(const String& synthControlID)
    {
        // Returns a reference to a KIJIMISynthControl with the requested ID
        // Throws an exception if no KIJIMISynthControl exists with such ID
        for (int i=0; i < synthControls.size(); i++){
            if (synthControls[i].getID() == synthControlID){
                return &synthControls[i];
            }
        }
        throw std::invalid_argument("No KIJIMISynthControl with ID \"" + synthControlID.toStdString() + "\"");
    }
    
    KIJIMISynthControl* getKIJIMISynthControlWithCCNumber(int ccNumber)
    {
        // Returns a reference to a KIJIMISynthControl with the requested Control Change number
        // Throws an exception if no KIJIMISynthControl exists with such Control Change number
        for (int i=0; i < synthControls.size(); i++){
            if (synthControls[i].getCCNumber() == ccNumber){
                return &synthControls[i];
            }
        }
        throw std::invalid_argument("No KIJIMISynthControl with CC number \"" + std::to_string(ccNumber) + "\"");
    }
    
    int getCCNumberForParameterID (const String &parameterID)
    {
        // Gets the correspoding MIDI Control Change number for a given parameterID
        // Parameter IDs should have a 1-1 relationship with KIJIMISynthControl IDs
        // Throws an exception if no KIJIMISynthControl exists with parameterID
        return getKIJIMISynthControlWithID(parameterID)->getCCNumber();
    }
    
    int getMIDIOptionIDNumberForParameterID (const String &parameterID)
    {
        // Gets the correspoding MIDI option ID number that needs to be used
        // in a sysex message to set that parameter (tha'd be the equivalent to CC number but for the extended controls)
        return getKIJIMISynthControlWithID(parameterID)->getMIDIOptionID();
    }
    
    int getMIDIExtendedOptionIDNumberForParameterID (const String &parameterID)
    {
        // Gets the correspoding MIDI option ID number that needs to be used
        // in a sysex message to set that parameter (tha'd be the equivalent to CC number but another set of extended controls)
        return getKIJIMISynthControlWithID(parameterID)->getMIDIExtendedOptionID();
    }
    
    const String getParameterIDFromCCNumber (int ccNumber)
    {
        // Gets the Parameter ID that corresponds to a synth control assigned to the given control change number
        // If more than one KIJIMISynthControl objects exist with the same CC number, only the first one in the vector will be returned
        // Parameter IDs should have a 1-1 relationship with KIJIMISynthControl IDs
        // Throws an exception if no KIJIMISynthControl exists with assigned ccNumber
        return getKIJIMISynthControlWithCCNumber(ccNumber)->getID();
    }
    
    const String getSynthControlDisaplayNameFromParameterID (const String& parameterID)
    {
        // Gets the synth control name that corresponds to a synth control assigned to the given parameterID
        // Parameter IDs should have a 1-1 relationship with KIJIMISynthControl IDs
        // Throws an exception if no KIJIMISynthControl exists with assigned parameterID
        return getKIJIMISynthControlWithID(parameterID)->getDisplayName();
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForPresetBytesArray(KIJIMIPresetBytes& presetBytes)
    {
        // Returns a list of pairs of KIJIMISynthControl and the value they should take to load a specific presetBytes
        SynthControlIdValuePairs idValuePairs;
        for (int i=0; i < synthControls.size(); i++){
            KIJIMISynthControl synthControl = synthControls[i];
            idValuePairs.emplace_back(synthControl.getID(), synthControl.getNormValueFromPresetByteArray(presetBytes));
        }
        return idValuePairs;
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForPresetAtIndex(int index)
    {
        // Returns a list of pairs of KIJIMISynthControl and the value they should take to load a specific preset
        KIJIMIPresetBytes& presetBytes = presetBank.getPresetBytesAtIndex(index);
        return getSynthControlIdValuePairsForPresetBytesArray(presetBytes);
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsForInterpolatedPresets(PresetDistancePairsToInterpolate interpolationData)
    {
        // Returns a list of pairs of KIJIMISynthControl and the value they should take to load a new preset which is
        // created after the interpolation of N presets and distances.
        // Interpolation is done by computing a weight for each preset (based on distance) and linearly summing the
        // each synth control vlaue of the preset multiplied by the weight.
        
        // Calculate total distance and pre-fetch preset bytes
        float totalDistance = 0.0;
        std::vector<KIJIMIPresetBytes> presetsBytes;
        for (int i=0;i<interpolationData.size(); i++){
            totalDistance += interpolationData[i].presetDist;
            presetsBytes.push_back(presetBank.getPresetBytesAtIndex(interpolationData[i].presetIdx));
        }
        
        // Interpolate synth control values
        SynthControlIdValuePairs idValuePairs;
        std::vector<String> controlIDs = getKIJIMISynthControlIDsForTimbreSpace();
        for (int i=0; i < controlIDs.size(); i++){
            KIJIMISynthControl* synthControl = getKIJIMISynthControlWithID(controlIDs[i]);
            double newValue = 0.0;
            for (int j=0;j<interpolationData.size(); j++){
                double normValuePreset = (double)synthControl->getNormValueFromPresetByteArray(presetsBytes[j]);
                newValue += normValuePreset * (double)(interpolationData[j].presetDist/totalDistance);
            }
            idValuePairs.emplace_back(synthControl->getID(), newValue);
        }
        return idValuePairs;
    }
    
    timbreSpaceInputDataMatrix generateBankDataForTimbreSpaceEngine()
    {
        // Generates a matrix of floats with normalized values of the relevant parameters to include
        // as input data for the timbre space. Each row in the matrix corresponds to one preset, each
        // column to the normalized value of one parameter.
        timbreSpaceInputDataMatrix data;
        std::vector<String> controlIDs = getKIJIMISynthControlIDsForTimbreSpace();
        for (int i=0; i < presetBank.getNumPresetsInBank(); i++){
            std::vector<float> presetValues;
            KIJIMIPresetBytes& presetBytes = presetBank.getPresetBytesAtIndex(i);
            for (int j=0; j < controlIDs.size(); j++){
                KIJIMISynthControl* synthControl = getKIJIMISynthControlWithID(controlIDs[j]);
                float value = (float)synthControl->getNormValueFromPresetByteArray(presetBytes);
                presetValues.push_back(value);
            }
            data.push_back(presetValues);
        }
        return data;
    }
    
    bool hasPresetsDataLoaded()
    {
        return presetBank.hasDataLoaded();
    }
    
    int getNumLoadedPresets ()
    {
        if (!hasPresetsDataLoaded()){
            return 0;
        } else {
            return presetBank.getNumPresetsInBank();
        }
    }
    
    ValueTree getPresetBankState()
    {
        return presetBank.getState();
    }
    
    void loadPresetBankState(ValueTree state)
    {
        presetBank.loadState(state);
        #if JUCE_DEBUG
            logMessage(String::formatted("Loaded %i presets from ", presetBank.getNumPresetsInBank()) + presetBank.getLoadedFilename());
        #endif
    }
    
    void saveCurrentPresetAtBankIndex(int index, KIJIMIPresetBytes bytes)
    {
        presetBank.setPresetBytesAtIndex(index, bytes);
    }
    
    String getPresetBankLoadedFilename()
    {
        return presetBank.getLoadedFilename();
    }
    
    void loadPresetBankFromFile(const String& filepath)
    {
        try {
            presetBank.loadFromFile(filepath);
            #if JUCE_DEBUG
                logMessage(String::formatted("Loaded %i presets from ", presetBank.getNumPresetsInBank()) + presetBank.getLoadedFilename());
            #endif
        } catch (...) {
            // TODO: would be nice to catch specific exceptions instead of broad catching
            #if JUCE_DEBUG
                logMessage("Could not load bank file " + filepath);
            #endif
        }
    }
    
    SynthControlIdValuePairs getSynthControlIdValuePairsFromPatchFile(const String& filepath)
    {
        // Reads from KIJIMI patch file and prepares SynthControlIdValuePairs to update the current preset
        // This function might throw errors if file has not correct format or other problems happen
        // Calls to this function should be prepared for that

        File path (filepath);
        MemoryBlock fileContents;
        path.loadFileAsData(fileContents);
        
        if (fileContents.getSize() != KIJIMI_PRESET_NUM_BYTES) {
            throw std::invalid_argument("Wrong number of bytes for preset file");
        }
        
        KIJIMIPresetBytes presetBytes = {0};
        for (int i=0; i<KIJIMI_PRESET_NUM_BYTES; i++){  // Go byte by byte
            unsigned char byte = fileContents[i];
            uint8 byte_int = uint8(byte);
            presetBytes[i] = byte_int;
        }
        
        return getSynthControlIdValuePairsForPresetBytesArray(presetBytes);
    }
    
    KIJIMIPresetBytes& getLoadedPresetBytesAtIndex(int index)
    {
        return presetBank.getPresetBytesAtIndex(index);
    }
    
private:
    
    std::vector<KIJIMISynthControl> synthControls;
    KIJIMIPresetBank presetBank;
    
    void logMessage (const String& message)
    {
        // Broadcasts a "LOG:" action with a message that will be received in the editor and printed to the logArea component
        sendActionMessage(ACTION_LOG_PREFIX + message);
    }
    
};
