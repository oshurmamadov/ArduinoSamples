/*
 * PSR.cpp
 *
 *  Created on: 21 Apr 2021
 *      Author: parviz.oshurmamadov
 *      CHIP: 74HC595
 */

#include "PSR.h"
#include "Arduino.h"

int latchPin = 11;
int dataPin = 12;
int clockPin = 9;

byte LEDs = 0b10000000;

void PSR::setup() {
	pinMode(latchPin, OUTPUT);
	pinMode(dataPin, OUTPUT);
	pinMode(clockPin, OUTPUT);
}

void PSR::loop() {
	digitalWrite(latchPin, LOW);
	shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
	digitalWrite(latchPin, HIGH);
}
