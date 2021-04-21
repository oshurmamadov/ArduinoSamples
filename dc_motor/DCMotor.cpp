/*
 * DCMotor.cpp
 *
 *  Created on: 19 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "DCMotor.h"
#include "Arduino.h"

int speedPin = 11;
int leftDirectionPin = 4;
int rightDirection = 2;
int motorSpeed = 150; // between 0 and 255

void DCMotor::setup() {
	pinMode(speedPin, OUTPUT);
	pinMode(leftDirectionPin, OUTPUT);
	pinMode(rightDirection, OUTPUT);
}

void DCMotor::loop() {
	digitalWrite(leftDirectionPin, HIGH);
	digitalWrite(rightDirection, LOW);
	analogWrite(speedPin, motorSpeed);
}
