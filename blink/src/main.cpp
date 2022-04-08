#include "Arduino.h"

/**
 * Initialize necesary variables
 * 
 * Set LED_BUILTIN to output
 */
void setup()
{
    // set up the LED_BUILTIN pin for output
    pinMode(LED_BUILTIN, OUTPUT);
}

/**
 * Blink the LED at 50% duty at 1 Hz
 *
 * Turn the LED on
 * Wait 500 ms
 * Turn the LED off
 * Wait 500 ms
 */
void loop()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}
