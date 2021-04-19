/*
 * StepperMotor.cpp
 *
 *  Created on: 18 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "StepperMotor.h"
#include "Arduino.h"
#include "Stepper.h"
#include "../utils/VoltTransformer.h"

int stepsPerRevolution = 2048;
int speed = 5;

Stepper stepper(stepsPerRevolution, 8, 10, 9, 11);

void StepperMotor::setup() {
	stepper.setSpeed(speed);
	pinMode(A5, OUTPUT);
	Serial.begin(28800);
}

void StepperMotor::loop() {
	VoltTransformer transformer;
	float value = transformer.toVold(analogRead(A5));
	Serial.println(value);
	stepper.step(stepsPerRevolution);
}
