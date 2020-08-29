# Babu Frik, a Droidsmith for KIJIMI

WIP software editor for Black Corportation's KIJIMI. You should not be seeing this page :)

## Build instructions

OcotpushOS is implemented as a JUCE audio plug-in and can be edited and built using standard JUCE workflows. It uses the [Trakction Engine](https://github.com/Tracktion/tracktion_engine) to do all the hard audio processing tasks. The plugin runs on the [ELK Audio Os](https://elk.audio) platform (with a Raspberry Pi and the ELK development board, with 8 audio inputs and 8 audio outptus). Ableton Push2 is connected to the Raspberry Pi via USB, and Octopush connects to it to use it as the hardware interface.


### Repository checkout

You need to checkout the code including submodules. This will download source code for all required 3rd party libraries (JUCE, etc.)

```
git clone https://github.com/ffont/octopush.git && cd octopush && git submodule update --init
```

### Building Projucer

For development, you'll want to build Projucer so you can edit `OctopushOS.jucer` file. Even though you can use pre-built Projucer downloaded from JUCE website, here we provide a script to build a GPL-enabled version of Projucer. `cd` into the cloned repository and run the following:

```
cd scripts
./build_release_projucer_gpl
```

This builds the audio plugin in several formats as well as astandalone executable. which will be placed in `OctopushOS/3rdParty/juce/extras/Projucer/Builds/MacOSX/build/Release/Projucer` (MacOSX) or `OctopushOS/3rdParty/juce/extras/Projucer/Builds/LinuxMakefile/build/Release/Projucer` (Linux) depending on the platform you're running it from. Plugin version will be palced next to the executables.

If building from Linux, the following dependencies need to be installed:
```
# JUCE dependencies
apt-get install clang git ladspa-sdk freeglut3-dev g++ libasound2-dev libcurl4-openssl-dev libfreetype6-dev libjack-jackd2-dev libx11-dev libxcomposite-dev libxcursor-dev libxinerama-dev libxrandr-dev mesa-common-dev webkit2gtk-4.0 juce-tools

# push2-display-with-juce dependencies
apt-get install libusb-1.0-0-dev
```
This list of dependencies was taken from [this forum thread](https://forum.juce.com/t/list-of-juce-dependencies-under-linux/15121/31). It could be the case that some of these are actually not needed, I have not tested them individually.


**NOTE**: OctopushOS is configured to be built in different plugin formats including legacy VST2. To do that you'll need to place the legacy VST2 framework files. VST2 builds require to have the VST2 sdk properly installed in a folder specified i the projucer file. I enable VST2 target because I need to build Octopush as a plugin for linux when running in Raspberry Pi, and the version I use of JUCE does not support VST3 plugin builds for linux. If you don't want to build VST2, just untick the VST2 option from the jucer file using Projucer.


### Development build

To build OctopushOS during development you can use project files for Xcode (MacOSX) or the Makefile (Linux). You'll find these in the `OctopushOS/Builds/` folder. Alternatively you can use the provided utility script. `cd` into the cloned repository and run the following:

```
cd scripts
./build_debug_octopushOS
```

The generated executable (for the santadalone version) will be placed in `OctopushOS/Builds/MacOSX/build/Debug/OctopushOS` (MacOSX) or `OctopushOS/Builds/LinuxMakefile/build/Debug/OctopushOS` (Linux) depending on the platform you're running it from. Plugin version will be palced next to the executables.


### 4.4 Release build

A utility script is provided to build OctopushOS in release mode. `cd` into the cloned repository and run the following:

```
cd scripts
./build_release_octopushOS
```

The generated executable (for the santadalone version) will be placed in `OctopushOS/Builds/MacOSX/build/Release/OctopushOS` (MacOSX) or `OctopushOS/Builds/LinuxMakefile/build/Release/OctopushOS ` (Linux) depending on the platform you're running it from. Plugin version will be palced next to the executables.
