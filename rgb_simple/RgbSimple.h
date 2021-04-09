/*
 * VoltageReader.h
 *
 *  Created on: 4 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#import "Arduino.h"
#ifndef RGB_SIMPLE_H_
#define RGB_SIMPLE_H_

class RgbSimple {
	int redPin = 4;
	int greenPin = 3;
	int bluePin = 2;
public:
	void setup();
	void loop();
	void turnPinOn(int pin);

};

#endif /* RGB_SIMPLE_H_ */
