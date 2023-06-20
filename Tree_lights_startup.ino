//Include relevant libraries
#include "FastLED.h"        // For sending colour information to the LEDs

// Number of LEDs in the display
#define NUM_LEDS 300

// Define pin for communication with LEDs
#define DATA_PIN 4

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  // Settings for FastLED library
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // Initialize communication with LEDs
  FastLED.setBrightness(15);                            // Set brightness level of LEDs to 15

  // Begin serial communication with baud rate of 9600
  Serial.begin(9600);                                   

  // Gradient for all LEDs from off to fully green
  for (int i = 0; i < 255; i++) {
    for (int j = 0; j < NUM_LEDS; j++) {
      leds[j] = CRGB(0, i, 0);
    }
    FastLED.show();
    delay(10);
  }
}

void loop() {
  
}
