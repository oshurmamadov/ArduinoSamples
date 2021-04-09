/*
 * BinaryCounter.cpp
 *
 *  Created on: 3 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "Arduino.h"
#include "BinaryCounter.h"

void BinaryCounter::setup() {
	pinMode(pin2, OUTPUT);
	pinMode(pin3, OUTPUT);
	pinMode(pin4, OUTPUT);
	pinMode(pin5, OUTPUT);
};

void BinaryCounter::loop() {
	countTo16();
}

void BinaryCounter::countTo16() {
	int delayMls = 1000;
	for (int i = 0; i <= 15; i++) {
		String result = String(i, BIN);
		if (result.length() == 2) {
			result = "00" + result;
		}
		if(result.length() == 3) {
			result = "0" + result;
		}
		// pint 2
		if (result.charAt(0) == '0') {
			digitalWrite(pin2, LOW);
		} else {
			digitalWrite(pin2, HIGH);
		}

		// pint 3
		if (result.charAt(1) == '0') {
			digitalWrite(pin3, LOW);
		} else {
			digitalWrite(pin3, HIGH);
		}

		// pint 4
		if (result.charAt(2) == '0') {
			digitalWrite(pin4, LOW);
		} else {
			digitalWrite(pin4, HIGH);
		}

		// pint 5
		if (result.charAt(3) == '0') {
			digitalWrite(pin5, LOW);
		} else {
			digitalWrite(pin5, HIGH);
		}

		delay(delayMls);
	  }
}

