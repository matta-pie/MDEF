// config.cpp
#include "Config.h"

// WiFi Configuration definitions
const char* WiFiConfig::SSID = "Iaac-Wifi";
const char* WiFiConfig::PASSWORD = "******";

// OpenAI Configuration definitions
const char* OpenAIConfig::API_KEY = "******";
const char* OpenAIConfig::MODEL = "gpt-4o-mini";
const int OpenAIConfig::MAX_CALLS = 3;
const int OpenAIConfig::MAX_TOKENS = 2000;
const char* OpenAIConfig::BASE_PROMPT = "You are an automata with a goal and a list of actions that you can execute to achieve that goal. \\n"
                                      "On each iteration you will receive some imput data, you analyze it and return the action that is most probable to make you achieve your goal. \\n"
                                      "Return the action in plain text, without any additional symbols or explanation. \\n";

const char* OpenAIConfig::GOAL = "Goal: shine light whenever you see a pair of scissors. \\n";

// Hardware Configuration definitions
const int PinConfig::ONBOARD_LED = 48;
const int PinConfig::PHOTO_TRANSISTOR = 3;
const int PinConfig::BUZZER = 43;
const int PinConfig::TEMP_SENSOR_SDA = 8;
const int PinConfig::TEMP_SENSOR_SCL = 9;
const int PinConfig::NEOPIXEL = 38;