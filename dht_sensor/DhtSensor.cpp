/*
 * DhtSensor.cpp
 *
 *  Created on: 26 Apr 2021
 *      Author: parviz.oshurmamadov
 */

#include "DhtSensor.h"
#include "Arduino.h"
#include "DHT.h"

#define DHT11_TYPE DHT11

int sensorPin = 2;
DHT dht(sensorPin, DHT11_TYPE);

String mHumidity = "Humidity: ";

void DhtSensor::setup() {
	Serial.begin(28800);
	dht.begin();
}

void DhtSensor::loop() {
	float humidity = dht.readHumidity();
	float temperature = dht.readTemperature();

	Serial.println(mHumidity + humidity + " __ Temperature: " + temperature);
	delay(2000);
}
