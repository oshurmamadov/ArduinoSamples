/*
 * Photoresistor.cpp
 *
 *  Created on: 11 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "Photoresistor.h"
#include "Arduino.h"
#include "../utils/VoltTransformer.h"

int BIT_RATE = 28800;
int photoresistorReadPin = A5;
int redPin = 4;
int greenPin = 2;
VoltTransformer transformer;

void Photoresistor::setup() {
	Serial.begin(BIT_RATE);
	pinMode(photoresistorReadPin, INPUT);
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
}

void Photoresistor::loop() {
	int photoresistorVolt = analogRead(photoresistorReadPin);
	float voltage = transformer.toVold(photoresistorVolt);
	Serial.println(voltage);

	if (voltage <= 0.8) {
		digitalWrite(redPin, HIGH);
		digitalWrite(greenPin, LOW);
	} else {
		digitalWrite(redPin, LOW);
		digitalWrite(greenPin, HIGH);
	}
	delay(500);
}
