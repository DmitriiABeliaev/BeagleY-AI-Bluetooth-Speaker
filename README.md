# BeagleY-AI Bluetooth Speaker
Developed an embedded Linux application for the BeagleY-AI board that enables it to function as a Bluetooth speaker using the BlueZ stack and bluez_inc library with integrated voice command capabilities. The project supports real-time audio streaming over Bluetooth (A2DP sink) and real-time LCD output using Waveshare’s LCD library and lgpio, while a precompiled VOSK speech-to-text module enables local voice recognition to execute device control commands. Built with a CMake architecture separating hardware abstraction (HAL) and application layers. Includes testing modules and support for cross-compilation and address sanitization. Designed for seamless deployment with minimal configuration on target, emphasizing modularity, reusability, and embedded development best practices.

# Features
The board operates as a Bluetooth speaker, allowing users to pair with it from a mobile device and
play audio from apps such as YouTube and Spotify. The board includes a user interface that displays
metadata for the currently playing audio track, along with onboard controls for play, pause, next,
previous, shuffle, and repeat. Additionally, there are voice command equivalents for all the board’s
physical controls. To use voice control, press the rotary encoder, say commands like “stop,” “play,”
“next,” “previous,” “volume up,” or “volume down,” and press the rotary encoder again to confirm
input. Some features such as metadata required for the UI and commands may not work depending on
the host device and app being used.

# Board Controls
- Volume: rotary encoder turn
- Voice Command Listen: rotary encoder press to start listening, say “stop”, “play”, “next”,
“previous”, “volume up”, or “volume down”, press again to stop listening. The corresponding
command will be run automatically.
- Pause / Play: joystick press
- Shuffle: joystick up
- Repeat: joystick down
- Previous Song: joystick left
- Next Song: joystick right

# Hardware and Software
Software
- olive.c
- 2d graphics library
- https://github.com/tsoding/olive.c
- stb_image
- library for loading various image formats into memory
- https://github.com/nothings/stb
- Binc
- Bluez_inc bluetooth helper library from
- https://github.com/weliem/bluez_inc
- VOSK
- vosk_api.h to use the model + vosk-model-small-en-us-0.15
- https://github.com/alphacep/vosk-api/releases
Hardware
- Headphones / Speaker
- Microphone
- Bluetooth 5.3 USB Adapter

# Building Instructions
- (tested with fresh new VM with Debian 12.10 / For full-instructions and guides follow to set-up folder)
- Need all the host and target set-up guides (Quick-start guide, Networking guide, NFS guide,
Zen Cape Audio Guide)
- Additional cross-compiling configurations:
sudo dpkg --add-architecture arm64
sudo apt-get update
sudo apt-get install build-essential crossbuild-essential-arm64 cmake
- Install build dependencies:
sudo apt update
sudo apt install libgpiod-dev:arm64 libglib2.0-dev:arm64 libasound2-dev:arm64
libjson-c-dev:arm64
- Select following cmake configuration preset: aarch64-linux-gnu
- Need to run (on host) before running application: sudo chmod a+rw /dev/spidev0.*
