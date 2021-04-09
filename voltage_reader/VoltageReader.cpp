/*
 * VoltageReader.cpp
 *
 *  Created on: 4 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "VoltageReader.h"
#include "Arduino.h"

void VoltageReader::setup() {
	pinMode(readPin, INPUT);
	Serial.begin(9600);

}

void VoltageReader::loop() {
	v2 = analogRead(readPin);
	float toVolt = (v2 * maxVolt) /maxVoltRepresentation;
	Serial.println(toVolt);
	delay(delayTime);
}
