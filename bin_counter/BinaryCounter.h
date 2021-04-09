/*
 * BinaryCounter.h
 *
 *  Created on: 3 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#ifndef BINARYCOUNTER_H_
#define BINARYCOUNTER_H_

class BinaryCounter {
private:
	int pin2 = 2;
	int pin3 = 3;
	int pin4 = 4;
	int pin5 = 5;
	void countTo16();
public:
	void setup();
	void loop();
};

#endif /* BINARYCOUNTER_H_ */
