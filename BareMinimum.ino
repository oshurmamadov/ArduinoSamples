
#include "voltage_reader/VoltageReader.h"
#include "potentiometer/Potentiometer.h"
#include "rgb_simple/RgbSimple.h"
#include "photoresistor/Photoresistor.h"
#include "push_buttons/PushButton.h"
#include "servo/ServoSimple.h"
#include "joystick_simple/JoystickSimple.h"
#include "stepper_motor/StepperMotor.h"
#include "dc_motor/DCMotor.h"
#include "parallel_shift_register/PSR.h"
#include "lcd_display/LcdDisplay.h"
#include "dht_sensor/DhtSensor.h"

VoltageReader voltageReader;
Potentiometer potentiometer;
RgbSimple rgbSimple;
Photoresistor photoresistor;
PushButton pushButton;
ServoSimple servoSimple;
JoystickSimple joystickSimple;
StepperMotor stepperMotor;
DCMotor dcMotor;
PSR psr;
LcdDisplay lcdDisplay;
DhtSensor dhtSensor;

void setup() {
	dhtSensor.setup();
}

void loop() {
	dhtSensor.loop();
}
