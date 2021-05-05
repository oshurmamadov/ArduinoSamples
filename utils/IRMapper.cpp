/*
 * IRMapper.cpp
 *
 *  Created on: 4 May 2021
 *      Author: parviz.oshurmamadov
 */

#include "IRMapper.h"

String IRMapper::map(byte cmd) {
	if (cmd == 0xFF6897) {
		return "zero";
	} else {
		return "unknown";
	}
}
