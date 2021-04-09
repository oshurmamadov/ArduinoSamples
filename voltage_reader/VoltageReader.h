/*
 * VoltageReader.h
 *
 *  Created on: 4 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#import "Arduino.h"
#ifndef VOLTAGE_READER_VOLTAGEREADER_H_
#define VOLTAGE_READER_VOLTAGEREADER_H_

class VoltageReader {
	int readPin = A3;
	int v2 = 0;
	int delayTime = 500;
	float maxVolt = 5.;
	float maxVoltRepresentation = 1023.;
public:
	void setup();
	void loop();

};

#endif /* VOLTAGE_READER_VOLTAGEREADER_H_ */
