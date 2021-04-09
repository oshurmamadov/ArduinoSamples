/*
 * VoltageReader.cpp
 *
 *  Created on: 4 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "Potentiometer.h"
#include "Arduino.h"

bool isMessagePrinted = false;
String warningMessage = "Fuck off dude. LED can't be burned";

void Potentiometer::setup() {
	pinMode(readPin, INPUT);
	pinMode(ledPin, OUTPUT);
	Serial.begin(28800);
}

void Potentiometer::loop() {
	vOut = analogRead(readPin);
	float toVolt = (vOut * maxVolt) / maxVoltRepresentation;
	//Serial.println(toVolt);


	float ledVolt = (toVolt * maxLEDVoltRepresentation) / maxVolt;

	float alternative = vOut * maxLEDVoltRepresentation / maxVoltRepresentation;

	if (toVolt <= 4.0) {
		analogWrite(ledPin, ledVolt);
		isMessagePrinted = false;
	} else {
		if (isMessagePrinted == false) {
			Serial.println(warningMessage);
			isMessagePrinted = true;
		}
	}

	delay(delayTime);
}
