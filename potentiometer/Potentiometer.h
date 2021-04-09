/*
 * VoltageReader.h
 *
 *  Created on: 4 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#import "Arduino.h"
#ifndef POTENTIOMETER_H_
#define POTENTIOMETER_H_

class Potentiometer {
	int readPin = A3;
	int ledPin = 11;
	int vOut = 0;
	int delayTime = 50;
	float maxVolt = 5.;
	float saveVoltage = 4.0;
	float maxVoltRepresentation = 1023.;
	float maxLEDVoltRepresentation = 255.;
public:
	void setup();
	void loop();

};

#endif /* POTENTIOMETER_H_ */
