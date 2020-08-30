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
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_AMT", "LFO1 amount", "knob", 5, 5, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_P", "LFO1 to VCO1 polarity", "button2", 88, 103, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_P", "LFO1 to VCO2 polarity", "button2", 89, 104, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_P", "LFO1 to WAVE1 polarity", "button2", 90, 105, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_P", "LFO1 to WAVE2 polarity", "button2", 91, 106, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_P", "LFO1 to SUB polarity", "button2", 92, 107, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_P", "LFO1 to VCF polarity", "button2", 93, 108, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_P", "LFO1 to RESO polarity", "button2", 94, 109, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_P", "LFO1 to VCA polarity", "button2", 95, 110, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_AMT", "LFO2 amount", "knob", 8, 6, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_P", "LFO2 to VCO1 polarity", "button2", 102, 111, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_P", "LFO2 to VCO2 polarity", "button2", 103, 112, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_P", "LFO2 to WAVE1 polarity", "button2", 104, 113, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_P", "LFO2 to WAVE2 polarity", "button2", 105, 114, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_P", "LFO2 to SUB polarity", "button2", 106, 115, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_P", "LFO2 to VCF polarity", "button2", 14, 116, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_P", "LFO2 to RESO polarity", "button2", 108, 117, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_P", "LFO2 to VCA polarity", "button2", 109, 118, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_AMT", "ADSR2 amount", "knob", 40, 7, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2VCO1_P", "ADSR2 to VCO1 polarity", "button2", 110, 119, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2VCO2_P", "ADSR2 to VCO2 polarity", "button2", 15, 120, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2WAVE1_P", "ADSR2 to WAVE1 polarity", "button2", 112, 121, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2WAVE2_P", "ADSR2 to WAVE2 polarity", "button2", 113, 122, "80_16_48_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2VCO1", "VCO2 to VCO1", "knob", 49, 16, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2VCF", "VCO2 to VCF", "knob", 52, 19, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_LFO1RATE", "Velocity to LFO1 rate", "knobC", 41, 8, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_LFO2RATE", "Velocity to LFO2 rate", "knobC", 43, 10, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_WAVE", "Velocity to waveform", "knobC", 45, 12, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_SUB", "Velocity to sub amount", "knobC", 47, 14, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_PITCH", "Velocity to pitchbend", "knobC", 50, 17, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VEL_VCA", "Velocity to VCA", "knobC", 53, 20, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_LFO1RATE", "Aftertouch to LFO1 rate", "knobC", 42, 9, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_LFO2RATE", "Aftertouch to LFO2 rate", "knobC", 44, 11, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_WAVE", "Aftertouch to waveform", "knobC", 46, 13, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_SUB", "Aftertouch to sub amount", "knobC", 48, 15, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_PITCH", "Aftertouch to pitchbend", "knobC", 51, 18, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_AT_VCA", "Aftertouch to VCA", "knobC", 54, 21, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_RATE", "LFO1 rate", "knob", 55, 22, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_A", "LFO1 attack", "knob", 56, 23, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_D", "LFO1 decay", "knob", 57, 24, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_SHAPE", "LFO1 shape", "button0", 114, 53, "115_94_73_52_31_10", 5, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_RATE", "LFO2 rate", "knob", 58, 25, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_A", "LFO2 attack", "knob", 59, 26, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_D", "LFO2 decay", "knob", 60, 27, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_SHAPE", "LFO2 shape", "button0", 116, 54, "115_94_73_52_31_10", 5, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_ENV", "LFO envelope", "button2", 115, 55, "16_48_80_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_FREQ", "VCO1 frequency", "knob", 61, 28, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_WAVE", "VCO1 waveform", "knob", 62, 29, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_VOL13", "VCO1 volume 1/3", "button1", 117, 56, "32_96", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO1_VOL23", "VCO1 volume 2/3", "button1", 118, 57, "32_96", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SUB_VOL", "Sub volume", "knob", 63, 30, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_NOISE_VOL13", "Noise volume 1/3", "button1", 38, 58, "32_96", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_NOISE_VOL23", "Noise volume 2/3", "button1", 39, 59, "32_96", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_FREQ", "VCO2 frequency", "knob", 65, 31, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2WAVE", "VCO2 waveform", "knob", 66, 32, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_VOL", "VCO2 volume", "knob", 67, 33, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO2_DETUNE", "VCO2 detune", "knob", 68, 34, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO_SYNC", "VCO sync", "button2", 37, 60, "21_63_105", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO_KOFF", "VCO key off", "button2", 36, 61, "16_48_80_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_FREQ", "VCF Frequency", "knob", 69, 35, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_VEL_C", "VCF Velocity control", "knobC", 70, 36, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_AT_C", "VCF Aftertouch control", "knobC", 71, 37, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_ADSR2_C", "VCF ADSR2 control", "knobC", 72, 38, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_RESO", "VCF Resonance", "knob", 73, 39, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_Q_VEL_C", "VCF Velocity Q control", "knobC", 75, 40, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_Q_AT_C", "VCF Aftertouch Q control", "knobC", 76, 41, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCF_KEY_C", "VCF Keyboard control", "knob", 77, 42, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_A", "ADSR2 attack", "knob", 78, 43, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_D", "ADSR2 decay", "knob", 79, 44, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_S", "ADSR2 sustain", "knob", 80, 45, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2_R", "ADSR2 release", "knob", 81, 46, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_A", "ADSR1 attack", "knob", 82, 47, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_D", "ADSR1 decay", "knob", 83, 48, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_S", "ADSR1 sustain", "knob", 84, 49, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR1_R", "ADSR1 release", "knob", 85, 50, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_MULT", "ADSR mult", "button2", 35, 62, "-_16_48_80_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_CYCLE", "ADSR cycle", "button2", 34, 63, "16_48_80_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_KT", "ADSR KT", "button2", 33, 64, "16_48_80_112", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_GLIDE_RATE", "Glide rate", "knob", 86, 51, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_GLIDE_MODE", "Glide mode", "button2", 32, 79, "21_63_105", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VOLUME", "Volume", "knob", 87, 52, "direct", 127, true, true));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_CC_RECEIVE", "CC Receive", "button1", -1, 69, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MPE_CH", "MPE base channel", "knob", -1, 76, "None", 7, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MIDI_CH", "MIDI channel", "knob", -1, 77, "None", 16, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MAX_VOICES", "Maximum number of voices", "knob", -1, 80, "None", 8, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_MOD_MODE", "ADSR2 modulation mode", "button2", -1, 234, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_CYCLE_MODE", "Cycle poly/mono", "button2", -1, 95, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_KT_MULTIPLIER", "KT multiplier", "button2", -1, 96, "None", 3, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_MAX_R", "LFO max rate", "knob", -1, 92, "None", 100, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_MIN_R", "LFO min rate", "knob", -1, 93, "None", 100, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_MODE", "LFO poly/mono", "button2", -1, 94, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_MOD_MODE", "LFO modulation mode", "button2", -1, 129, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_POLY_RETRIG", "LFO Poly mode EG retrig", "button2", -1, 235, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO_SUST", "LFO sustain", "button2", -1, 86, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_ENV_DEST", "LFO1 envelope destination", "button2", -1, 126, "None", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_ENV_MAX_T", "LFO1 envelope max time", "button2", -1, 130, "None", 20, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_ENV_P", "LFO1 envelope polarity", "button2", -1, 132, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1_SYNC", "LFO1 sync", "button2", -1, 125, "None", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_ENV_DEST", "LFO2 envelope destination", "button2", -1, 128, "None", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_ENV_MAX_T", "LFO2 envelope max time", "button2", -1, 131, "None", 20, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_ENV_P", "LFO2 envelope polarity", "button2", -1, 133, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2_SYNC", "LFO2 sync", "button2", -1, 127, "None", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MODW_P", "Modwheel polarity", "button2", -1, 87, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR_VCA", "ADSR VCA level 0-100%", "knob", -1, 78, "None", 10, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MASTER_VOL", "Master volume (12 levels)", "knob", -1, 84, "None", 12, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_VCO_DETUNE", "VCO detune 0-3Hz", "knob", -1, 82, "None", 30, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_CARDS_VOCIE", "Cards per voice", "knob", -1, 67, "None", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LEG_EG_RETRIG", "Legato EG retrig", "button2", -1, 72, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LEG_PRIORITY", "Legato priority", "button2", -1, 73, "None", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MONO_MODE", "Mono mode", "button2", -1, 70, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_MONO_POLY", "Mono/poly/unisson", "button2", -1, 75, "None", 2, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_SUSTAIN_MODE", "Sustain mode", "button2", -1, 71, "None", 1, true, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_AM", "LFO1 to VCO1 amount", "knob", -1, 134, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_AM", "LFO1 to VCO2 amount", "knob", -1, 135, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_AM", "LFO1 to WAVE1 amount", "knob", -1, 136, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_AM", "LFO1 to WAVE2 amount", "knob", -1, 137, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_AM", "LFO1 to SUB amount", "knob", -1, 138, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_AM", "LFO1 to VCF amount", "knob", -1, 139, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_AM", "LFO1 to RESO amount", "knob", -1, 140, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_AM", "LFO1 to VCA amount", "knob", -1, 141, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_AM", "LFO2 to VCO1 amount", "knob", -1, 142, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_AM", "LFO2 to VCO2 amount", "knob", -1, 143, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_AM", "LFO2 to WAVE1 amount", "knob", -1, 144, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_AM", "LFO2 to WAVE2 amount", "knob", -1, 145, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_AM", "LFO2 to SUB amount", "knob", -1, 146, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_AM", "LFO2 to VCF amount", "knob", -1, 147, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_AM", "LFO2 to RESO amount", "knob", -1, 148, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_AM", "LFO2 to VCA amount", "knob", -1, 149, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2VCO1_AM", "ADSR2 to VCO1 amount", "knob", -1, 150, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2VCO2_AM", "ADSR2 to VCO2 amount", "knob", -1, 151, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2WAVE1_AM", "ADSR2 to WAVE1 amount", "knob", -1, 152, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_ADSR2WAVE2_AM", "ADSR2 to WAVE2 amount", "knob", -1, 153, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_R", "LFO1 to VCO1 rate", "knob", -1, 154, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_R", "LFO1 to VCO2 rate", "knob", -1, 155, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_R", "LFO1 to WAVE1 rate", "knob", -1, 156, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_R", "LFO1 to WAVE2 rate", "knob", -1, 157, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_R", "LFO1 to SUB rate", "knob", -1, 158, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_R", "LFO1 to VCF rate", "knob", -1, 159, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_R", "LFO1 to RESO rate", "knob", -1, 160, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_R", "LFO1 to VCA rate", "knob", -1, 161, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_R", "LFO2 to VCO1 rate", "knob", -1, 162, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_R", "LFO2 to VCO2 rate", "knob", -1, 163, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_R", "LFO2 to WAVE1 rate", "knob", -1, 164, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_R", "LFO2 to WAVE2 rate", "knob", -1, 165, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_R", "LFO2 to SUB rate", "knob", -1, 166, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_R", "LFO2 to VCF rate", "knob", -1, 167, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_R", "LFO2 to RESO rate", "knob", -1, 168, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_R", "LFO2 to VCA rate", "knob", -1, 169, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_A", "LFO1 to VCO1 attack", "knob", -1, 170, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_A", "LFO1 to VCO2 attack", "knob", -1, 171, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_A", "LFO1 to WAVE1 attack", "knob", -1, 172, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_A", "LFO1 to WAVE2 attack", "knob", -1, 173, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_A", "LFO1 to SUB attack", "knob", -1, 174, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_A", "LFO1 to VCF attack", "knob", -1, 175, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_A", "LFO1 to RESO attack", "knob", -1, 176, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_A", "LFO1 to VCA attack", "knob", -1, 177, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_A", "LFO2 to VCO1 attack", "knob", -1, 178, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_A", "LFO2 to VCO2 attack", "knob", -1, 179, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_A", "LFO2 to WAVE1 attack", "knob", -1, 180, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_A", "LFO2 to WAVE2 attack", "knob", -1, 181, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_A", "LFO2 to SUB attack", "knob", -1, 182, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_A", "LFO2 to VCF attack", "knob", -1, 183, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_A", "LFO2 to RESO attack", "knob", -1, 184, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_A", "LFO2 to VCA attack", "knob", -1, 185, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_D", "LFO1 to VCO1 decay", "knob", -1, 186, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_D", "LFO1 to VCO2 decay", "knob", -1, 187, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_D", "LFO1 to WAVE1 decay", "knob", -1, 188, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_D", "LFO1 to WAVE2 decay", "knob", -1, 189, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_D", "LFO1 to SUB decay", "knob", -1, 190, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_D", "LFO1 to VCF decay", "knob", -1, 191, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_D", "LFO1 to RESO decay", "knob", -1, 192, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_D", "LFO1 to VCA decay", "knob", -1, 193, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_D", "LFO2 to VCO1 decay", "knob", -1, 194, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_D", "LFO2 to VCO2 decay", "knob", -1, 195, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_D", "LFO2 to WAVE1 decay", "knob", -1, 196, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_D", "LFO2 to WAVE2 decay", "knob", -1, 197, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_D", "LFO2 to SUB decay", "knob", -1, 198, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_D", "LFO2 to VCF decay", "knob", -1, 199, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_D", "LFO2 to RESO decay", "knob", -1, 200, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_D", "LFO2 to VCA decay", "knob", -1, 201, "None", 127, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO1_ENV", "LFO1 to VCO1 envelope", "button1", -1, 218, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCO2_ENV", "LFO1 to VCO2 envelope", "button1", -1, 219, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE1_ENV", "LFO1 to WAVE1 envelope", "button1", -1, 220, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1WAVE2_ENV", "LFO1 to WAVE2 envelope", "button1", -1, 221, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1SUB_ENV", "LFO1 to SUB envelope", "button1", -1, 222, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCF_ENV", "LFO1 to VCF envelope", "button1", -1, 223, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1RESO_ENV", "LFO1 to RESO envelope", "button1", -1, 224, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO1VCA_ENV", "LFO1 to VCA envelope", "button1", -1, 225, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO1_ENV", "LFO2 to VCO1 envelope", "button1", -1, 226, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCO2_ENV", "LFO2 to VCO2 envelope", "button1", -1, 227, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE1_ENV", "LFO2 to WAVE1 envelope", "button1", -1, 228, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2WAVE2_ENV", "LFO2 to WAVE2 envelope", "button1", -1, 229, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2SUB_ENV", "LFO2 to SUB envelope", "button1", -1, 230, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCF_ENV", "LFO2 to VCF envelope", "button1", -1, 231, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2RESO_ENV", "LFO2 to RESO envelope", "button1", -1, 232, "None", 1, false, false));
        synthControls.push_back(KIJIMISynthControl("KIJIMI_LFO2VCA_ENV", "LFO2 to VCA envelope", "button1", -1, 233, "None", 1, false, false));
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
