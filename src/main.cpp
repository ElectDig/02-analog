/*
 *     main.cpp - Project 03-analog
 *     Electronica Digital - Austral - 2023 - EAM
 *
 *          Shows converted value and voltage of a
 *          potentiometer connected to A/D converter
 *
 *          Output from 0 to 3.3 volt is printed to serial monitor
 */

#include <Arduino.h>

/*
 *     Definitions
 */

/*
 *  Definitions in platformio.ini
 *  ANAIN       Input to A/D converter
 *  DIVISOR     Divisor that depends of the number of bits of converter
 *  SERIAL_BAUD Baud rate of serial monitor
 */

//  Other definitions

#define LOOP_DELAY 250
#define POTE_VOLTAGE 3.3

void
setup(void)
{
    Serial.begin(SERIAL_BAUD);
}

void
loop(void)
{
    int sensorValue;
    float voltage;

    sensorValue = analogRead(ANAIN);
    voltage = sensorValue * POTE_VOLTAGE / DIVISOR;
    Serial.printf( "Digital value = %4d,  Voltage = %.1f\n", sensorValue, voltage );
    delay(LOOP_DELAY);
}
