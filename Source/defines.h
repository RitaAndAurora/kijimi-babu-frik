//
//  defines.h
//
//  Created by Frederic Font Corbera on 22/02/2019.
//  Copyright © 2019 Rita&AuroraAudio. All rights reserved.
//

#pragma once

#define MORE_INFO_URL "https://ritaandaurora.github.io/kijimi-babu-frik/"  // Change to app website when available
#define DONATE_URL "https://ritaandaurora.github.io/kijimi-babu-frik/"
#define SOURCE_CODE_URL "https://github.com/RitaAndAurora/kijimi-babu-frik"
#define USER_MANUAL_URL "https://github.com/RitaAndAurora/kijimi-babu-frik/blob/master/MANUAL.md"

#define BYTE_INIT_VALUE_TO_BE_IGNORED 127  // When kijimi receives a value to be set for a parameter and it is out of range, it ignores it. Bytes bust be
    // 0-127 in sysex data, and we checked (looking at the preset description file) that for all parameters that Babu Frik does not contemplate and also for
    // all global parameters that are not to be stored in a patch, setting them to 127 will make KIJIMI ignore them. Therefor, we should always inititalize
    // the sequence of bytes to send to KIJIMI or even save to disk using this IGNORE value

#define REQUIRED_FW_FIRST 1
#define REQUIRED_FW_SECOND 4
#define REQUIRED_FW_THIRD 5

#define SYSEX_KIJIMI_ID 0x02
#define SYSEX_BC_ID_0 0x00
#define SYSEX_BC_ID_1 0x48
#define SYSEX_BC_ID_2 0x06
#define SYSEX_TRANSFER_PATCH_COMMAND 0x00
#define SYSEX_SET_OPTION 0x06
#define SYSEX_GET_PRESET_COMMAND 0x13
#define SYSEX_GET_STATE_COMMAND 0x14
#define SYSEX_FW_VERSION_COMMAND 0x15
#define SYSEX_SET_OPTION_EXTENDED 0x18
#define SYSEX_LCD_REFRESH_COMMAND 0x21
#define SYSEX_UPDATE_INDIVIDUAL_LFO_ADSR 0x22
#define SYSEX_SET_CURRENT_STATE 0x23

#define USE_SET_CURRENT_STATE_COMMAND_TO_SEND_ALL_CONTROLS_TO_KIJIMI 1

#define ACTION_LOG_PREFIX "LOG:"
#define LOG_IN_UI 0
#if JUCE_DEBUG
    #define LOG_IN_CONSOLE 1
    #define LOG_INDIVIDUAL_PARAMETER_CHANGES 0
#else
    #define LOG_IN_CONSOLE 0
    #define LOG_INDIVIDUAL_PARAMETER_CHANGES 0
#endif

#define LOG_MIDI_IN 0

#define REFRESH_MIDI_DEVICES_TIMER_INTERVAL_MS 1000  // Set to 0 to disable the timer
#define MIDI_IN_SAME_CC_TIME_THRESHOLD_MS 25

#define MIN_TIME_BETWEEN_NEXT_PREV_RAND_PATCH_BUTTON_PRESSED 250  // Don't allow next/previous buttons to be pressed faster than once every 250 ms

// KIJIMI number of bytes per preset:
// 0 = sysex start
// 1 = Kijimi device ID
// 2 = Transfer patch command
// 3 = Bank number
// 4 = Preset number
// 5-260 = controls data
// 261 = sysex end
// NOTE that this format uses the old SYSEX format which did not include black corporation 3 extra sysex ID bytes
// This is so that the internal data structure is compatible with old kijimi firmwares and the .sys preset files
// are not changed. BabuFrik will add the newly required BC sysex bytes when sending sysex to kijimi, but .sys files
// in disk will be backwards compatible
#define KIJIMI_PRESET_NUM_BYTES 262

#define EMPTY_PRESET_SUM_THRESHOLD 5.0
#define EMPTY_PRESET_SUM_UPPER_THRESHOLD 59.0

#define ACTION_LOAD_TS_SOLUTION "ACTION_LOAD_TS_SOLUTION:"
#define ACTION_SET_IS_COMPUTING_TS_SOLUTION "ACTION_SET_IS_COMPUTING_TS_SOLUTION:"
#define ACTION_LOAD_SELECTED_POINT_DATA "ACTION_LOAD_SELECTED_POINT_DATA:"
#define ACTION_REPAINT "ACTION_REPAINT:"
#define ACTION_LOAD_INTERPOLATED_PRESET "ACTION_LOAD_INTERPOLATED_PRESET:"
#define ACTION_SET_TS_SLIDERS_OUT_OF_SYNC "ACTION_SET_TS_SLIDERS_OUT_OF_SYNC:"
#define ACTION_SET_TS_SLIDERS_IN_SYNC "ACTION_SET_TS_SLIDERS_IN_SYNC:"
#define ACTION_SET_TS_XY_TO_PRESET_NUMBER "ACTION_SET_TS_XY_TO_PRESET_NUMBER:"
#define ACTION_SET_CURRENT_PRESET_NAME "ACTION_SET_CURRENT_PRESET_NAME:"
#define ACTION_SET_CURRENT_PRESET_NAME_OUT_OF_SYNC "ACTION_SET_CURRENT_PRESET_NAME_OUT_OF_SYNC:"
#define ACTION_SET_CURRENT_PRESET_NAME_IN_SYNC "ACTION_SET_CURRENT_PRESET_NAME_IN_SYNC:"
#define ACTION_CURRENT_PRESENT_SAVED_TO_BANK "ACTION_CURRENT_PRESENT_SAVED_TO_BANK"
#define ACTION_BANK_FILE_LOADED "ACTION_BANK_FILE_LOADED:"
#define ACTION_UPDATED_MIDI_DEVICE_SETTINGS "ACTION_UPDATED_MIDI_DEVICE_SETTINGS:"
#define ACTION_REFRESH_MIDI_DEVICE_LISTS "ACTION_REFRESH_MIDI_DEVICE_LISTS:"
#define ACTION_UPDATE_UI_SCALE_FACTOR "ACTION_UPDATE_UI_SCALE_FACTOR:"
#define ACTION_MIDI_ENABLE_AUTO_SCAN "ACTION_MIDI_ENABLE_AUTO_SCAN"
#define ACTION_MIDI_DISABLE_AUTO_SCAN "ACTION_MIDI_DISABLE_AUTO_SCAN"
#define ACTION_MIDI_TRIGGER_DEVICE_SCAN "ACTION_MIDI_TRIGGER_DEVICE_SCAN"
#define ACTION_LFO_LEDS_SHOULD_UPDATE "ACTION_LFO_LEDS_SHOULD_UPDATE:"
#define ACTION_TOGGLE_SHOW_MAIN_PANEL "ACTION_TOGGLE_SHOW_MAIN_PANEL"
#define ACTION_TOGGLE_HIDE_MAIN_PANEL "ACTION_TOGGLE_HIDE_MAIN_PANEL"
#define ACTION_TOGGLE_SHOW_EXTRA_PANEL "ACTION_TOGGLE_SHOW_EXTRA_PANEL"
#define ACTION_TOGGLE_HIDE_EXTRA_PANEL "ACTION_TOGGLE_HIDE_EXTRA_PANEL"
#define ACTION_TOGGLE_SHOW_LFO_PANEL "ACTION_TOGGLE_SHOW_LFO_PANEL"
#define ACTION_TOGGLE_HIDE_LFO_PANEL "ACTION_TOGGLE_HIDE_LFO_PANEL"
#define ACTION_UPDATE_ENABLED_DISABLED_CONTROLS "ACTION_UPDATE_ENABLED_DISABLED_CONTROLS"
#define ACTION_FIRMWARE_UPDATE_REQUIRED "ACTION_FIRMWARE_UPDATE_REQUIRED"
#define ACTION_RECEIVING_PRESETS_PROGRESS "ACTION_RECEIVING_PRESETS_PROGRESS:"
#define ACTION_ALL_PRESETS_RECEIVED "ACTION_ALL_PRESETS_RECEIVED"
#define ACTION_CC_REVEICE_IS_TURNED_OFF "ACTION_CC_REVEICE_IS_TURNED_OFF"

#define PRESET_NAME_DEFAULT_TEXT "-"
#define PRESET_NAME_MODIFIED_TEXT "*"
#define PRESET_NAME_PREFIX "#"

#define KIJIMI_PARAMETER_ID_PREFIX "KIJIMI_"
#define SPACE_X_PARAMETER_ID "space_x"
#define SPACE_X_PARAMETER_NAME "Space X"
#define SPACE_Y_PARAMETER_ID "space_y"
#define SPACE_Y_PARAMETER_NAME "Space Y"
#define MIN_MILLISECONDS_BETWEEN_TIMBRE_SPACE_UPDATES 150
#define MIN_MILLISECONDS_BETWEEN_TIMBRE_SPACE_UPDATES_MIDI_DIN5 250
#define MIN_MILLISECONDS_FOR_MOUSE_DRAG_UPDATE 0  // Leave this to 0, then we limit the messages sent via timbre space with the define above

#define STATE_MAIN_STATE_IDENTIFIER "KIJIMIState"

#define STATE_AUDIO_PARAMETERS_IDENTIFIER "KIJIMIAudioParameters"

#define STATE_UI_SCALE_FACTOR "UISacleFactor"
#define STATE_NEVER_SHOW_SCROLLBARS "NeverShowScrollbars"

#define STATE_PRESET_BANK_IDENTIFIER "KIJIMIPresetBank"
#define STATE_PRESET_IDENTIFIER "KIJIMIPreset"
#define STATE_PRESET_BYTES_IDENTIFIER "bytes"
#define STATE_PRESET_IDX_IDENTIFIER "id"
#define STATE_BANK_FILENAME_IDENTIFIER "filename"
#define STATE_CURRENT_PRESET_IDX "currentPresetIdx"
#define STATE_CURRENT_PRESET_OUT_OF_SYNC "currentPresetOutOfSyncWithSliders"

#define STATE_TIMBRE_SPACE_IDENTIFIER "TimbreSpace"
#define STATE_TIMBRE_SPACE_SELECTED_POINT_X_IDENTIFIER "selectedPointX"
#define STATE_TIMBRE_SPACE_SELECTED_POINT_Y_IDENTIFIER "selectedPointY"
#define STATE_TIMBRE_SPACE_SELECTED_TRIANGLE_IDX_IDENTIFIER "selectedTriangleIdx"
#define STATE_TIMBRE_SPACE_SELECTED_PRESET_IDX_IDENTIFIER "selectedPresetIdx"
#define STATE_TIMBRE_SPACE_OUT_OF_SYNC "synthSlidersOutOfSync"

#define STATE_MIDI_OUTPUT_DEVICE_NAME "midiOutputDeviceName"
#define STATE_MIDI_INPUT_DEVICE_NAME "midiInputDeviceName"
#define STATE_MIDI_INPUT_CHANNEL "midiInputChannel"
#define STATE_MIDI_OUTPUT_CHANNEL "midiOutputChannel"
#define STATE_MIDI_AUTOSCAN_ENABLED "midiDevicesAutoScanEnabled"

#define STATE_TOGGLE_AUTO_SYNC_WITH_SYNTH "autoSyncWithSynth"

#define STATE_MAIN_PANEL_VISIBLE "mainPanelIsVisible"
#define STATE_EXTRA_PANEL_VISIBLE "extraPanelIsVisible"
#define STATE_LFOS_PANEL_VISIBLE "lfosPanelIsVisible"

#define STATE_RANDOMIZATION_AMOUNT "randomizationAmount"
#define STATE_RANDOMIZATION_MAIN_PANEL_ENABLED "randomizationMainPanel"
#define STATE_RANDOMIZATION_EXTRA_PANEL_ENABLED "randomizationExtraPanel"
#define STATE_RANDOMIZATION_LFOS_PANEL_ENABLED "randomizationLfoPanel"

#define TIMBRE_SPACE_SOLUTION_IDENTIFIER "TimbreSpaceSolution"
#define TIMBRE_SPACE_SOLUTION_POINTS_IDENTIFIER "solutionPoints"
#define TIMBRE_SPACE_SOLUTION_POINT_IDENTIFIER "solutionPoint"
#define TIMBRE_SPACE_SOLUTION_TRIANGLES_IDENTIFIER "solutionTriangles"
#define TIMBRE_SPACE_SOLUTION_TRIANGLE_IDENTIFIER "solutionTriangle"

#define MENU_OPTION_ID_IMPORT_FROM_PATCH_FILE 1

#define MENU_OPTION_ID_SAVE_PATCH_TO_PATCH_FILE 4

#define MENU_OPTION_ID_SEND_PATCH_TO_SYNTH 7
#define MENU_OPTION_ID_LOAD_PATCH_FROM_SYNTH 8
#define MENU_OPTION_TOGGLE_AUTO_SYNC_WITH_SYNTH 50

#define MENU_OPTION_ID_RANDOMIZE 102
#define MENU_OPTION_ID_RANDOMIZE_PATCH_5_ID 13
#define MENU_OPTION_ID_RANDOMIZE_PATCH_10_ID 14
#define MENU_OPTION_ID_RANDOMIZE_PATCH_25_ID 15
#define MENU_OPTION_ID_RANDOMIZE_PATCH_50_ID 101
#define MENU_OPTION_ID_RANDOMIZE_PATCH_100_ID 17

#define MENU_OPTION_ID_ZOOM_50 28
#define MENU_OPTION_ID_ZOOM_75 29
#define MENU_OPTION_ID_ZOOM_100 30
#define MENU_OPTION_ID_ZOOM_60 31
#define MENU_OPTION_ID_ZOOM_70 32
#define MENU_OPTION_ID_ZOOM_80 33
#define MENU_OPTION_ID_ZOOM_90 34

#define MENU_OPTION_MIDI_SET_AUTOSCAN_ON 35
#define MENU_OPTION_MIDI_SET_AUTOSCAN_OFF 36
#define MENU_OPTION_MIDI_SCAN_NOW 37

#define MENU_OPTION_SHOW_MAIN_PANEL 120
#define MENU_OPTION_HIDE_MAIN_PANEL 121
#define MENU_OPTION_SHOW_EXTRA_PANEL 122
#define MENU_OPTION_HIDE_EXTRA_PANEL 123
#define MENU_OPTION_SHOW_LFO_PANEL 124
#define MENU_OPTION_HIDE_LFO_PANEL 125

#define MENU_OPTION_ID_RANDOMIZE_MAIN_PANEL 150
#define MENU_OPTION_ID_RANDOMIZE_EXTRA_CONTROLS 151
#define MENU_OPTION_ID_RANDOMIZE_LFOS_PANEL 152

#define MENU_OPTION_TOGGLE_NEVER_SHOW_SCROLLBARS 160

#define MENU_OPTION_ID_LOAD_BANK_FROM_FILE 200
#define MENU_OPTION_ID_LOAD_BANK_FROM_KIJIMI 201

#define MENU_OPTION_ID_SAVE_BANK_TO_FILE 250
#define MENU_OPTION_ID_SEND_BANK_TO_KIJIMI 251

#define DIMENSIONALITY_REDUCTION_METHOD_PCA "pca"
#define DIMENSIONALITY_REDUCTION_METHOD_TSNE "tsne"
#define DIMENSIONALITY_REDUCTION_METHOD_MDS "mds"
#define DIMENSIONALITY_REDUCTION_METHOD_DEFAULT DIMENSIONALITY_REDUCTION_METHOD_MDS


struct RandomizationConfigStruct {
    int amount = 50;
    bool mainPanel = true;
    bool extraPanel = false;
    bool lfosPanel = false;
};

typedef std::array<uint8, KIJIMI_PRESET_NUM_BYTES> KIJIMIPresetBytes;  // byte positions here correspond to those listed in preset description file
typedef std::pair<String, double> SynthControlIdValuePair;
typedef std::vector<SynthControlIdValuePair> SynthControlIdValuePairs;

typedef std::vector<std::vector<float>> timbreSpaceInputDataMatrix;

struct PresetDistanceStruct {
    int presetIdx;
    float presetDist;
    double presetWeight;  // Number that will be multiplied to the preset value to do the interpolation
};
typedef std::vector<PresetDistanceStruct> PresetDistancePairsToInterpolate;

typedef std::array<int64, 1000> TimestampsLastCCSent; // Use 129 positions instead of 128 to not crash if using 1-indexed MIDI CC numbers (see docs in BabuFrikAudioProcessor::handleIncomingMidiMessage). Also for KIJIMI, there are controls which are controlled using SYSEX messages and therefore the number is not limited to 128 control change numbers. To account for that we simply make timestampsLastCCSent much larger to have space for all parameters.
