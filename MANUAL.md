# Babu Frik - User Manual

* [Overview](#overview)
  * [1. Installation](#1-installation)
     * [1.1 Compatibility notes](#11-compatibility-notes)
     * [1.2 Release notes](#12-release-notes)
  * [2. Using J.F. Sebastian](#2-using-jf-sebastian)
     * [2.1 Loading J.F. Sebastian as an audio plugin](#21-loading-jf-sebastian-as-an-audio-plugin)
     * [2.2 MIDI configuration](#22-midi-configuration)
        * [2.2.1 MIDI input](#221-midi-input)
        * [2.2.2 MIDI output](#222-midi-output)
     * [2.3 Bank file loader](#23-bank-file-loader)
        * [2.3.1 Loading a bank file](#231-loading-a-bank-file)
        * [2.3.2 Saving the current preset to a specific bank location](#232-saving-the-current-preset-to-a-specific-bank-location)
        * [2.3.3 Saving the bank file](#233-saving-the-bank-file)
     * [2.4 The Timbre Space](#24-the-timbre-space)
     * [2.5 CS80-like Tone Selector](#25-cs80-like-tone-selector)
     * [2.6 DDRM panel](#26-ddrm-panel)
     * [2.7 DDRM panel lower buttons](#27-ddrm-panel-lower-buttons)
     * [2.8 UI size](#28-ui-size)
  * [3. Known bugs and limitations](#3-known-bugs-and-limitations)
  * [4. Licensing](#4-licensing)
  * [5. Credits and acknowledgements](#5-credits-and-acknowledgements)


## Overview

Named after a famous *droidsmith* who's said to be able to reprogram any droid and even make them speak Sith, Babu Frik is a software app that allows you to control and explore the sonic possibilities of the KIJIMI synthesiser by Black Corporation. It works both as a **stand-alone** app and as an **audio plug-in** with automatable parameters.

With Babu Frik you can import KIJIMI banks (from files or from KIJIMI itself), edit patches and export them. When you import a bank, a Timbre Space will be created which will allow you to navigate all the patches in a colourful space and create new ones. Just click anywhere on the Timbre Space and play the synth. Click on another point to get a new patch. Close points in the space will result in similar sounding patches.

Babu Frik includes all the controls you'll find the main panel of KIJIMI, but also includes extra panels which will allow you to control all the extra KIJIMI menu-hidden options, including the 16 individual LFOs.

Here is a screenshot of Babu Frik with the different parts of the interface highlighted. The sections below describe each one of them.

<p align="center">
<img src="docs/screenshot_highlighted.png"  width="700px" />
</p>

## 1. Installation

Installation of Babu Frik should be straight-forward as we provide installer packages which should place all the files in the corresponding locations. Here are the steps to follow:

 1. Go to the [Babu Frik download page](https://github.com/RitaAndAurora/kijimi-babu-frik/releases) and get the **macOS** or **windows** installer (depending on your platform).
 2. Run the installer and click `next`/`continue` buttons until installation finishes. We recommend you to use the default installation options. The installer will copy files in the following locations:

 *macOS*
 
  * Stand-alone app: `/Applications/`
  * VST3: `/Library/Audio/Plug-Ins/VST3/`
  * AU: `/Library/Audio/Plug-Ins/Components/`

 *windows*
 
  * Stand-alone app: `c:\Program Files (x86)\JFSebastian\`
  * VST2: `c:\Program Files (x86)\Common Files\VST2\`
  * VST3: `c:\Program Files (x86)\Common Files\VST3\`

 3. Run the stand-aloone app from the directory it has been installed or either open your favorite DAW. Babu Frik should appear in the list of available plugins. If that is not the case you might need to trigger a *re-scanning* of the plugins folder by the DAW. If after doing that Babu Frik still does not appear, make sure your DAW is looking for plugins in the default locations listed above.


### 1.1 Compatibility notes

 * Babu Frik should be compatibale with all major DAWs supporting either Audio Units (**AU**) or **VST3** plugins. 
 * Note that Babu Frik is **64-bit** so it might not work with old versions of DAWs. 
 * We did not compile an **AAX** version of the plugin because AAX requires a lot of bureaucracy on our side to get the plugin signed and hopfully the other formats will cover most setups.
 * We have successfully tested Babu Frik  in the setups listed below. Other setups should work as well but we have not tested them.
   * macOS (10.15) / Stand-alone
   * macOS (10.15) / Bitwig Studio 2/3
   * macOS (10.15) / Logic Pro X
   * macOS (10.15) / Live 10
   * windows 10 / Stand-alone
   * windows 10 / Bitwig Studio 3

### 1.2 Release notes

**Version 1.0**

 * Initial release of Babu Frik. Here we will put the release notes of future releases to get a list of changes.


## 2. Using J.F. Sebastian

### 2.1 Loading J.F. Sebastian as an audio plugin

J.F. Sebastian can run as a **stand-alone application** or as an **audio plugin** inside your DAW. When running as an audio plugin it works as an **audio effect** but effectively acts as a *bypass effect* for all the audio received in the input (i.e. it passes the input audio to the output and leaves it unaffected). The typical setup is to create a *MIDI/external instrument* track in your DAW which routes MIDI to the DDRM and receives the audio signal from DDRM. In that track J.F. Sebastian can be placed as an effect.

The good side of loading J.F. Sebastian as a plugin is that it allows the DAW to control DDRM's parameters, enabling **parameter automation** and any other sort of **modulation capabilities** offered by the DAW.


### 2.2 MIDI configuration

J.F. Sebastian communicates with DDRM over MIDI. When loaded as an audio plugin it acts as an intermediary between the DAW and DDRM, exposing DDRM sliders as audio parameters of the plugin and then modifying them accordingly using MIDI *control change* messages.

The MIDI configuration section includes dropdowns for configuring the MIDI **input/output devices** as well the **MIDI channels** to communicate with DDRM. Note that when loaded as a plugin, J.F. Sebastian's MIDI configuration is **completely independent from the DAW MIDI configuration** of the channel where J.F. Sebastian is loaded. Therefore in bypasses the MIDI in/out of the channel and only sends/receives from its own devices and channels.

#### 2.2.1 MIDI input

MIDI input is used to receive MIDI data from the DDRM which allows to update the slider values when sliders are moved in the real hardware unit. **MIDI input configuration is optional** as J.F. Sebastian can operate without it.

To configure MIDI input please select the device from the dropdown menu to which DDRM is sending messages. If your DDRM is connected over USB, you should see a device named **Deckard's Dream**. You also need to select the MIDI channel where DDRM sends the messages.

#### 2.2.2 MIDI output

MIDI output is used to send MIDI data to the DDRM and control its sliders *remotely*. **MIDI output configuration is mandatory** as otherwise J.F. Sebastian has no way to communicate with the DDRM.

To configure MIDI output please select the device from the dropdown menu that will send messages to DDRM. If your DDRM is connected over USB, you should see a device named **Deckard's Dream**. You also need to select the MIDI channel where DDRM is listening.

Note that J.F. Sebastian only sends MIDI *control change* messages to the DDRM and does not handle any other kind of MIDI data. To send *note on/off* messages to the DDRM you need to configure the routing independently of J.F. Sebastian.

Note also that for J.F. Sebastian to work, **DDRM needs to have "CC receive" option enabled**. You'll find that option in the MIDI settings menu of DDRM.


#### 2.2.3 Automatic scanning of MIDI devices

J.F. Sebastian will continuously check if new MIDI devices are connected or disconnected from your computer to updated the options of the lists of available devices for MIDI input and output. This allows to connect MIDI devices while J.F. Sebastian is already runnning and have them avialalbe in the menus. However, it has been reported that in some situations this feature causes devices to disconnect and not work properly with J.F. Sebastian. For this reason, as of version 1.1 we introduced a new feature that will allow to **enable or disable the automatic scanning of MIDI devices**.

To enable or disable automatic scanning of midi devices click on the `Settings...` button on the lower-right corner of J.F. Sebastian, and choose the `MIDI device scan` option. An option named `Auto-scan MIDI devices` will appear ticked (&#10003;) if automatic scanning is enabled. Click on that option to toggle it. Additionally, only when `Auto-scan MIDI devices` is disabled, an extra option named `Scan devices now` will appear enabled. Click on that to trigger a *one-time* update of the currently available MIDI devices.


### 2.3 Bank file loader

#### 2.3.1 Loading a bank file

Use the `Load bank file...` button to load a DDRM bank file (file extension *.p*). Bank files contain up to 128 presets. Once loaded, you can use the left and right arrow buttons to navigate among the existing presets. You can also type the preset number you want to go to by clicking on the preset number. By default, J.F. Sebastian loads the official **factory presets** provided by Black Corporation.

When a bank file is loaded, a new Timbre Space is built based on all the presets contained in the bank (more info in [Section 2.4](#24-the-timbre-space)).

When navigating the different presets of a bank, you'll see how both the sliders on the screen and the sound of the DDRM change according to the selected preset. You'll also see how the selected point in the Timbre Space moves at each preset change. This indicates the point in the Timbre Space that corresponds to the selected preset (more info in [Section 2.4](#24-the-timbre-space)).

Finally, note that if any parameter changes its value after loading a specific preset, the symbol * appears next to the preset number to indicate that the sliders are no longer *in sync* with the stored values of that preset.

#### 2.3.2 Saving the current preset to a specific bank location

Use the `Save to bank location...` button to save the current preset (the slider values shown in the DDRM panel in J.F. Sebastian) to another location in the bank. When pressing the button a dialog will appear asking you to introduce the bank location to which the preset should be saved. This operation will overwrite any existing preset information in that location.


#### 2.3.3 Saving the bank file

With J.F. Sebastian it is possible to export all the presets into a new bank file and save it to disk. You can do that by pressing the `Save bank file...` button and specifying the location where the bank file should be saved. If not specified, the file extension *.p* will be automatically added to the filename.

The bank files generated by J.F. Sebastian can be copied to the DDRM drive and DDRM will be able to read them. Note that when loading presets from J.F. Sebastian all non-MIDI-controllable parameters are ignored. However, when loading the bank file directly in DDRM any extra patch settings that might be stored in the file will be loaded as well. Check the [limitations](#3-known-bugs-and-limitations) section of this manual for more information about this issue.



### 2.4 The Timbre Space

The Timbre Space is an innovative feature of J.F. Sebastian that allows to **explore the sonic possibilities of DDRM in completely new ways**. Every time a bank file is loaded, J.F. Sebastian creates a new Timbre Space which projects all the presents of that bank file into a *colorful* 2-dimensional space. **Simply click anywhere in the Timbre Space to generate new presets for DDRM**. Here you can see a [video of the Timbre Space in action](https://youtu.be/cHdO393UwKI?t=44).

The Timbre Space uses **machine learning** to analyze the distribution of parameters values in a given bank file and to create a 2-dimensional representation of it in which presets are organized according to *some notion of similarity*. Here are some examples of spaces created using different DDRM bank files:

<p align="center">
<img src="docs/tsA.png" width="500px" />
<img src="docs/tsB.png" width="500px" />
<img src="docs/tsC.png" width="500px" />
<img src="docs/tsD.png" width="500px" />
</p>

The Timbre Space contains a triangle mesh in which each triangle edge corresponds to the position of one of the bank's presets after its projection into the 2-dimensional space. Clicking on any point in the space will create a new preset based on the 3 presets of the enclosing triangle. **Close points in the Timbre Space are expected to produce similar sounding presets**.

<p align="center">
<img src="docs/ts_highlighted.png" width="300px" />
</p>

When selecting a point in the space, the preset numbers in which the new preset is based are displayed on screen (see picture above). If any of DDRM controls is changed after a specific point of the Timbre Space is loaded, the preset numbers on screen will disappear to indicate that the slider values are no longer *in sync* with the values of the selected Timbre Space position.

The selected position in the Timbre Space is also exposed by J.F. Sebastian as two **audio parameters** named **Space X** and **Space Y**. These parameters can also be automated. 


### 2.5 CS80-like Tone Selector

<p align="center">
<img src="docs/tone_selector.png" width="600px" />
</p>


J.F. Sebastian incorporates a tone selector similar to the one that the original CS80 incorporated. The upper row of the tone selector will affect DDRM's channel I parameters, while the lower row will affect channel II. Only one button per row at a time can be selected. Simply click on the buttons of the upper row and lower row to configure slider positions for channel I and II respectively. Here you can see a [video of the Tone Selector in action](https://youtu.be/cHdO393UwKI?t=128).

When a button is selected it will be highlighted. However, if any parameter is changed after the button is selected, it will become *unselected* again to indicate that the slider values are no longer *in sync* with the expected values for channel I or channel II button.

Note that `Funky 4` button in the lower row does not work. Maybe there's some dust accumulated which should be cleaned...


### 2.6 DDRM panel

<p align="center">
<img src="docs/ddrm_panel.png" width="700px" />
</p>

J.F. Sebastian has a *virtual* representation of DDRM's hardware controls in the form of nice rounded sliders. The controls are laid down in the same way as in the hardware unit. Control names are not directly visible on screen, but are shown in a popup when hovering  over the controls with the mouse.

If MIDI output is properly configured, moving the sliders in J.F. Sebastian will control the corresponding sliders in the DDRM hardware unit. Similarly, if MIDI input is properly configured, moving the sliders in the hardware unit will cause the sliders in J.F. Sebastian interface to move.

All sliders and buttons are exposed as **audio parameters** to the DAW, meaning that their movement can be **recorded**, **automated** and **modulated** if the DAW has such capabilities. Here is a [video example of parameter modulation and automation](https://youtu.be/cHdO393UwKI?t=170) usig J.F. Sebastian and [Bitwig Studio](https://www.bitwig.com) (a great DAW you shoudl check out!). **Warning**: it is possible to record/automate the position in the timbre space using the parameters `Space X` and `Space Y`; when doing that take into account that these will make all other audio parameters to change therefore it is not advised to record/automate timbre space position plus other parameters at the same time.

Double-clicking the sliders will set them to the center position.

Note that the panel incorporates two extra controls in the lower-right side - `Sustain time` and `Sustain mode` - which are not in the hardware unit. These are additional MIDI-controllable parameters that are only included as hardware controls in the DDRM expander. 


### 2.7 DDRM panel lower buttons

J.F. Sebastian incorporates a number of features to **edit and manage the slider values** which can be accessed using the buttons below the DDRM sliders. Here is an explanation of what these do:

 * `Import...`: use this button to load a DDRM preset from either a *patch* (preset) file or a *voice* (channel) file. These file types store individual presets and voices respectively (instead of the whole contents of a bank file). *patch* and *voice* files are compatible with [Spektroaudio's DDRM editor](http://spektroaudio.com/deckards-dream-editor) and with [Ando's DDRM editor](https://drive.google.com/file/d/1xMHwV3TBTWAK5WPEw8NV0F6aiztP5ZnF/view?fbclid=IwAR2PQ81T-RIw0eQ8rtDKhi9R42i6s5xhgJjm-TmtUaHYMLSERUbs9Iirk3c) as well. Clicking the button will display a menu with the following options:
   *  `From patch file`: will open a dialog to select the *patch* file you want to load. Patch files have extension *.ddpatch*. Patch files contain parameter settings for both channels of DDRM plus the performance controls section.
   *  `From voice file to channel I/II`: will open a dialog to select the *voice* file you want to load in the chosen channel (I or II). Patch files have extension *.ddvoice*. Voice files contain parameter settings for a single DDRM channel controls.

 * `Save...`: use this button to store the current DDRM preset into a *patch* file or a *voice* file (see menu option above more more information). Clicking the button will display a menu with the following options:
   *  `To patch file`: will open a dialog in which the filename of the *patch* file to save can be specified. The *patch* file will store both channel settings and the performance controls of the current preset.
   *  `Channel I/II to voice file`: will open a dialog in which the filename of the *voice* file to save can be specified. The *voice* file will store the settings of the selected channel of the current preset.

 * `Copy...`: use this button to copy control settings from DDRM channels. Clicking the button will display a menu with the following options:
   *  `From channel I to channel II`: copy the slider settings from channel I to channel II.
   *  `From channel II to channel I`: copy the slider settings from channel II to channel I.
   *  `Swap channels`: swap slider settings of both channels.

 * `Randomize...`: use this button to add some randomization to the slider values of the current preset. Clicking the button will display a menu with the following options:  
   *  `Patch [5%-100%]`: randmozies all control sliders of both channels plus the performance section with the specified amount (from 5% to 100%) around the current slider values. 100% randomization means a completely new random value for each control.
   *  `Channel I/II [5%-100%]`: : randmozies all control sliders of the selected channel (I or II) with the specified amount (from 5% to 100%) around the current slider values. 100% randomization means a completely new random value for each control.

* `Send to synth...`: use this button to synchronize the DDRM with the slider values of J.F. Sebastian. Note that when navigating presets, using the Timbre Space, the tone selector, or when moving sliders in J.F. Sebastian, DDRM is also updated accordingly and there is no need to *manually* send values to the synth. however, in some occasions it might be useful to re-send all control values to DDRM to make sure it is in sync.  Clicking the button will display a menu with the following options:
   *  `Patch`: send values corresponding to the full preset (both channels and performance section).
   *  `Channel I/II`: send only the values of the selected channel.


### 2.8 UI size

As of version 1.1, J.F. Sebastian incorporates an option to adjust the size of the UI to match smaller screens. You can adjust the size clicking in the `Settings...` button in the lower-right corner of J.F. Sebastian and selecting the `Zoom` sub-menu. Available options are 70%, 80%, 90% and 100% of the original size. The zoom preference is stored togeether with other J.F. Sebastian properties to the preference is remembered in different runs of the app both running as stand-alone or as a plugin.


## 3. Known bugs and limitations

What follows is a list of known Babu Firk bugs and limitations of the software. Please, for **bug reports** and **feature requests** visit [https://github.com/RitaAndAurora/kijimi-babu-frik/issues](https://github.com/RitaAndAurora/kijimi-babu-frik/issues).

  * Communication with DDRM is **limited to the speed at which MIDI messages can be transmitted**. Automation and modulation of parameters is therefore subject to that. We did some testing and the message throughput seems to be quite good, specially using MIDI over USB, but still that could be a limitation for very fast modulations.

 * When using Babu Frik in stand-alone mode, it could happen that a **warning is displayed about potential audio feedback loops**. This can be fixed by clicking on the `Settings...` button that will appear next to the warning and unticking the *Mute audio input* checkbox. Babu Frik will remember this choice so the warning is not displayed again. This is a bug that will be addressed in future updates of Babu Frik as Babu Frik uses no audio and the warning should never appear.

 * In setups including multiple monitors with different resultions, some being standard resolution monitor (e.g. FullHD) and others being high dpi monitors (e.g. 4k), it can happen that **Babu Frik is scaled incorrectly in one of the two monitors**. There is no definitive solution for that so far, but I would recommend trying to open Babu Frik in one monitor or in the other and see if that makes any difference. In any case you'll be able to use the scale and scrolling facilities of Babu Frik to reach all controls.

 * Some users reported **issues using J.F. Sebastian as a plugin in Reaper and under Windows**. Babu Frik works in a very similar way to J.F. Sebastian, therefore I expect these issues to happen as well. This is because MIDI devices are "locked" by the Reaper process and J.F. Sebastian can't talk directly to DDRM. This can be fixed by configuring J.F. Sebastian/Babu Frik to `Run as > Separate process` as in the screenshot below. Many thanks to David Berndsen for the tip (and the screenshot)!

<p align="center">
<img src="docs/jf_settings_reaper_windows.png" width="800px" />
</p>


## 4. Licensing

Babu Frik is released under the **GPLv3** open source software license (see [LICENSE](https://github.com/ritaandaurora/ddrm-jfsebastian/blob/master/LICENSE) file) with the code being available at  [https://github.com/ritaandaurora/kijimi-babu-frik](https://github.com/ritaandaurora/kijimi-babu-frik). Babu Frik uses the following open source software libraries: 

 * [tapkee](http://tapkee.lisitsyn.me), available under BSD 3-clause license 
 * [delaunator-cpp](https://github.com/delfrrr/delaunator-cpp), available underMIT license
 * [juce](https://juce.com), available under GPLv3 license 


## 5. Credits and acknowledgements

Babu Frik has been ideated and developed by [Rita & Aurora](https://ritaandaurora.github.io), a sort of fancy branding name I've given to my audio-developer [self](https://ffont.github.io). Nevertheless, Babu Frik would have not been possible without the generous contributions of [**BLACK CORPORATION**](http://black-corporation.com) and the **KICKSTARTER BACKERS**. Infinite thanks to all of you:

#### Absolutely awesome backers
 - FREQNOIR
 - MONTY BRANDENBERG
 - ROB BEKHUIS
 - RODRIGUE DUCOURANT
 - RON DEACON
 - STEPHEN DRAKE

#### Gold backers
- Anasia
- Antonio Martinez
- Derek Matthew Duke
- Eric Harder
- Jeremy Curtis
- Kevin T. Looney
- Neil Huxley
- Robert Kukuchka
- Rupert Williams
- STEGA
- triangle
- Unkar Plutt


#### Silver backers
- Christer Janson
- Claudiu D.
- Cléo
- Jake Boswell
- Jon Daou
- Kevin Meyer
- Reggie Barnes


#### Bronze backers
- Alex Taam
- Dan Formless (Forward Movement)
- David Forman
- Janne Isotalo
- Morgan Ross
- Pyramid
- René M Thalund


## 6. Support Babu Frik development

If you want to support the development of Babu Frik and similar tools you can consider [making a donation](https://ritaandaurora.github.io/kijimi-babu-frik/donate). That will make me very happy :)

<br>
<br>
<p align="center">
<img src="docs/Rita&AuroraAudioLogo-square.png" width="250" />
</p>
