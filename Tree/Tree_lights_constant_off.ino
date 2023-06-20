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
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  
  FastLED.setBrightness(15);                            

  // Begin serial communication 
  Serial.begin(9600);                                
}

void loop() {
  // Turn all LEDs off
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = 0x000000;
    }
   FastLED.show();
}
