
#include "BinaryCounter.h"
#include "voltage_reader/VoltageReader.h"
#include "potentiometer/Potentiometer.h"
#include "rgb_simple/RgbSimple.h"

BinaryCounter binaryCounter;
VoltageReader voltageReader;
Potentiometer potentiometer;
RgbSimple rgbSimple;

void setup() {
	rgbSimple.setup();
}

void loop() {
	rgbSimple.loop();
}
