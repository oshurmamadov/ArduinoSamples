/*
 * IRRemote.cpp
 *
 *  Created on: 4 May 2021
 *      Author: parviz.oshurmamadov
 */

#include "IRremote.h"
#include "Arduino.h"
#include "MyIRRemote.h"

int controlPin = 11;
IRrecv IR(controlPin);
decode_results cmd;

void MyIRRemote::setup() {
	Serial.begin(28800);
	IR.enableIRIn();
}

void MyIRRemote::loop() {
	while(IR.decode(&cmd) == 0) {}
	Serial.println(cmd.value, HEX);

	delay(1500);

	IR.resume();
}
