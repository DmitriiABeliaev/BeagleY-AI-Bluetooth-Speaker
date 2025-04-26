# BeagleY-AI Bluetooth Speaker

Developed an embedded Linux application for the BeagleY-AI board that enables it to function as a Bluetooth speaker using the BlueZ stack and bluez_inc library with integrated voice command capabilities. The project supports real-time audio streaming over Bluetooth (A2DP sink) and real-time LCD output using Waveshare’s LCD library and lgpio, while a precompiled VOSK speech-to-text module enables local voice recognition to execute device control commands. Built with a CMake architecture separating hardware abstraction (HAL) and application layers. Includes testing modules and support for cross-compilation and address sanitization. Designed for seamless deployment with minimal configuration on target, emphasizing modularity, reusability, and embedded development best practices.

## Building and Running on Target
Full instructions are in the set-up folder with required guides
