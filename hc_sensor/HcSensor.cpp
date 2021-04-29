/*
 * HcSensor.cpp
 *
 *  Created on: 27 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "HcSensor.h"
#include "Arduino.h"


int triggerPin = 12;
int echoPin = 11;
float soundSpeed = 338; // in 10C temperature
String mMessage = "Distance in cm: ";

void HcSensor::setup() {
	Serial.begin(28800);
	pinMode(triggerPin, OUTPUT);
	pinMode(echoPin, INPUT);
}

void HcSensor::loop() {
	digitalWrite(triggerPin, LOW);
	delayMicroseconds(10);
	digitalWrite(triggerPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(triggerPin, LOW);

	int pingTime = pulseIn(echoPin, HIGH);
	delay(2000);

	float distance = soundSpeed * (pingTime/2.0/10000.);

	Serial.println(mMessage + distance);
}
