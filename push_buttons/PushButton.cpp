/*
 * PushButton.cpp
 *
 *  Created on: 12 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "PushButton.h"
#include "Arduino.h"

int readPin = 4;
int ledPin = 8;
int oldState = 0;
int isLedTurnedOn = false;

void PushButton:: setup() {
	pinMode(readPin, INPUT);
	pinMode(ledPin, OUTPUT);
	Serial.begin(28800);
}

void PushButton:: loop() {
	int newState = digitalRead(readPin);

	Serial.println(newState);
	delay(300);

	if (newState == 1) {
		if (isLedTurnedOn == false) {
			digitalWrite(ledPin, HIGH);
			isLedTurnedOn = true;
		} else {
			digitalWrite(ledPin, LOW);
			isLedTurnedOn = false;
		}
	}
}
