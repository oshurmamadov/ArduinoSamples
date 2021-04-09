################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../potentiometer/Potentiometer.cpp 

LINK_OBJ += \
./potentiometer/Potentiometer.cpp.o 

CPP_DEPS += \
./potentiometer/Potentiometer.cpp.d 


# Each subdirectory must supply rules for building sources it contributes
potentiometer/Potentiometer.cpp.o: ../potentiometer/Potentiometer.cpp
	@echo 'Building file: $<'
	@echo 'Starting C++ compile'
	"/Users/parviz.oshurmamadov/eclipse/cpp-2021-03/Eclipse.app/Contents/Eclipse//arduinoPlugin/packages/arduino/tools/avr-gcc/7.3.0-atmel3.6.1-arduino7/bin/avr-g++" -c -g -Os -Wall -Wextra -std=gnu++11 -fpermissive -fno-exceptions -ffunction-sections -fdata-sections -fno-threadsafe-statics -Wno-error=narrowing -MMD -flto -mmcu=atmega328p -DF_CPU=16000000L -DARDUINO=10812 -DARDUINO_AVR_UNO -DARDUINO_ARCH_AVR     -I"/Users/parviz.oshurmamadov/eclipse/cpp-2021-03/Eclipse.app/Contents/Eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.8.3/cores/arduino" -I"/Users/parviz.oshurmamadov/eclipse/cpp-2021-03/Eclipse.app/Contents/Eclipse/arduinoPlugin/packages/arduino/hardware/avr/1.8.3/variants/standard" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -D__IN_ECLIPSE__=1 -x c++ "$<"   -o "$@"
	@echo 'Finished building: $<'
	@echo ' '


