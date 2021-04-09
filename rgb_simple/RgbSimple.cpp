/*
 * VoltageReader.cpp
 *
 *  Created on: 4 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "RgbSimple.h"
#include "Arduino.h"

String red = "red";
String green = "green";
String blue = "blue";
String message = "Wahle deine farbe aus, bitte !";

void RgbSimple::setup() {
	pinMode(redPin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(bluePin, OUTPUT);
	Serial.begin(28800);

}

void RgbSimple::loop() {
	Serial.println(message);

	while(Serial.available() == 0) {}

	String selection = Serial.readString();
	if (selection == red) {
		digitalWrite(redPin, HIGH);
		digitalWrite(greenPin, LOW);
		digitalWrite(bluePin, LOW);
	} else if(selection == green) {
		digitalWrite(redPin, LOW);
		digitalWrite(greenPin, HIGH);
		digitalWrite(bluePin, LOW);
	} else if (selection == blue) {
		digitalWrite(redPin, LOW);
		digitalWrite(greenPin, LOW);
		digitalWrite(bluePin, HIGH);
	} else {
		digitalWrite(redPin, LOW);
		digitalWrite(greenPin, LOW);
		digitalWrite(bluePin, LOW);
	}
}

void RgbSimple::turnPinOn(int pin) {
	digitalWrite(redPin, HIGH);
}
