//Include relevant libraries
#include "FastLED.h"        // For sending colour information to the LEDs

// Number of LEDs in the display
#define NUM_LEDS 300

// Define pin for communication with LEDs
#define DATA_PIN 4

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() {
  // Settings of FastLED library
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  
  FastLED.setBrightness(15);                            

  // Begin serial communication with baud rate of 9600
  Serial.begin(9600);                                   
}

void loop() {
  // Set all LEDs to green
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = 0x00ff00;
    }
   FastLED.show();
}
