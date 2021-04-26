/*
 * LcdDisplay.cpp
 *
 *  Created on: 23 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "LcdDisplay.h"
#include "Arduino.h"
#include "LiquidCrystal.h"

int rs = 7;
int e = 8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;
int counter = 0;

LiquidCrystal lcd(rs, e, d4, d5, d6, d7);

void LcdDisplay::setup() {
	lcd.begin(16, 2);
}

void LcdDisplay::loop() {
	lcd.setCursor(0, 0);
	lcd.print("Hello World!");
	lcd.setCursor(0, 1);
	lcd.print(counter);
	delay(1000);
	lcd.clear();
	counter++;
}
