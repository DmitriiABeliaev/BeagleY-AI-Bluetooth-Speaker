#ifndef _MICROPHONE_H_
#define _MICROPHONE_H_

/*
Explanation of each function provided by this module:
1. microphone_init:
    Sets up the audio input device and prepares it for listening
    Configures any required libraries (TO BE DETERMINED LATER)

2. microphone_cleanup:
    Cleans up any allocated resources related to the microphone
    Stops any active audio processing threads

3. microphone_enable_audio_listening:
    Starts a separate thread that continuously listens for audio input
    Captures audio and converts it into text

4. microphone_disable_audio_listening:
    Stops the background thread that listens for audio input
    Prevents unnecessary processing when audio input is not needed

5. microphone_get_audio_input:
    Returns the latest recorded audio input as a string (MIGHT NOT NEED THIS ONE)

6. microphone_get_keyword_from_audio_input:
    Processes the transcribed audio input string to detect specific keywords
    Returns the first meaningful keyword detected (e.g., "stop", "next", "volume up")
*/

// Enum to provide what the user has commanded
enum keyword {
    KEYWORD_NONE,
    STOP,
    NEXT,
    PREVIOUS,
    VOLUME_UP,
    VOLUME_DOWN,
    PLAY
};

void microphone_init(void);
void microphone_enable_audio_listening(void);
void microphone_disable_audio_listening(void);
const char* microphone_get_audio_input(void);
enum keyword microphone_get_keyword_from_audio_input(void);
void microphone_reset_audio_input(void);
void microphone_cleanup(void);

#endif // _MICROPHONE_H_
