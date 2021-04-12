/*
 * VoltTransformer.cpp
 *
 *  Created on: 11 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "VoltTransformer.h"

float MAX_VOLTAGE = 5.0;
float MAX_PIN_VALUE = 1023.0;

float VoltTransformer::toVold(int pinValue) {
	float voltage = pinValue * MAX_VOLTAGE / MAX_PIN_VALUE;
	return voltage;
}
