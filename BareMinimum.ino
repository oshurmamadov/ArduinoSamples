
#include "voltage_reader/VoltageReader.h"
#include "potentiometer/Potentiometer.h"
#include "rgb_simple/RgbSimple.h"
#include "photoresistor/Photoresistor.h"
#include "push_buttons/PushButton.h"
#include "servo/ServoSimple.h"

VoltageReader voltageReader;
Potentiometer potentiometer;
RgbSimple rgbSimple;
Photoresistor photoresistor;
PushButton pushButton;
ServoSimple servoSimple;

void setup() {
	servoSimple.setup();
}

void loop() {
	servoSimple.loop();
}
