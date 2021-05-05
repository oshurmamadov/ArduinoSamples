/*
 * IRMapper.h
 *
 *  Created on: 4 May 2021
 *      Author: parviz.oshurmamadov
 */

#ifndef UTILS_IRMAPPER_H_
#define UTILS_IRMAPPER_H_
#include "Arduino.h"

class IRMapper {
public:
	String map(byte cmd);
};

#endif /* UTILS_IRMAPPER_H_ */
