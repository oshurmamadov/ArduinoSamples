/*
 * ServoSimple.cpp
 *
 *  Created on: 14 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "ServoSimple.h"
#include "Arduino.h"
#include "Servo.h"
#include "../utils/VoltTransformer.h"

int photoresistorPin = A2;
int servoControlPin = 2;
int positionDown = 0;
int positionMiddle = 90;
int positionUp = 180;
int currentPosition = 0;

Servo servo;
VoltTransformer voltTransformer;

void ServoSimple::setup() {
	Serial.begin(28800);
	pinMode(photoresistorPin, INPUT);
	servo.attach(servoControlPin);
}

void ServoSimple::loop() {
	int photoresistorVolt = analogRead(photoresistorPin);
	float voltage = voltTransformer.toVold(photoresistorVolt);
	Serial.println(voltage);

	if (voltage <= 1.0 && currentPosition != positionUp) {
		// sunny
		servo.write(positionUp);
		currentPosition = positionUp;
	} else if (voltage >= 4 && currentPosition != positionDown) {
		// dark
		servo.write(positionDown);
		currentPosition = positionDown;
		Serial.println(currentPosition);
	} else if (voltage > 1 && voltage < 4 && currentPosition != positionMiddle) {
		// cloudy
		servo.write(positionMiddle);
		currentPosition = positionMiddle;
		Serial.println(currentPosition);

	}
	delay(2000);
}
