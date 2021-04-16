
#include "voltage_reader/VoltageReader.h"
#include "potentiometer/Potentiometer.h"
#include "rgb_simple/RgbSimple.h"
#include "photoresistor/Photoresistor.h"
#include "push_buttons/PushButton.h"
#include "servo/ServoSimple.h"
#include "joystick_simple/JoystickSimple.h"

VoltageReader voltageReader;
Potentiometer potentiometer;
RgbSimple rgbSimple;
Photoresistor photoresistor;
PushButton pushButton;
ServoSimple servoSimple;
JoystickSimple joystickSimple;

void setup() {
	joystickSimple.setup();
}

void loop() {
	joystickSimple.loop();
}
