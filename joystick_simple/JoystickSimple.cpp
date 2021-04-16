/*
 * JoystickSimple.cpp
 *
 *  Created on: 16 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "JoystickSimple.h"
#include "Arduino.h"

int pinX = A0;
int pinY = A2;
int pinSW = A3;

String xM = "x:";
String yM = " y:";
String swM = " sw:";

void JoystickSimple::setup() {
	Serial.begin(28800);
	pinMode(pinX, INPUT);
	pinMode(pinY, INPUT);
	pinMode(pinSW, INPUT);
}

void JoystickSimple::loop() {
	int xVoltage = analogRead(pinX);
	int yVoltage = analogRead(pinY);
	int swVoltage = analogRead(pinSW);

	Serial.println(xM + xVoltage + yM + yVoltage + swM + swVoltage);
	delay(1000);
}
