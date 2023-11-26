// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <Arduino.h>
#include <LibPrintf.h>
#include "app.hpp"
#include "hal/arduino/Toy.hpp"
#include "hal/arduino/MovingPlatform.hpp"
#include "hal/interface/time.hpp"
#include "pin.hpp"

const int STEPS_PER_REVOLUTION = 2038;

MovingPlatform platform;
Toy toy;

void setup()
{
    Serial.begin(9600); // for printf
    Serial.print("Start ");
    Serial.println(millis());

    toy.InitArduino(pin::DC_MOTOR_PINA, pin::DC_MOTOR_PINB);
    platform.InitArduino(STEPS_PER_REVOLUTION,
                         pin::STEP_MOTOR_L_PINA, pin::STEP_MOTOR_L_PINB,
                         pin::STEP_MOTOR_L_PINC, pin::STEP_MOTOR_L_PIND,
                         pin::STEP_MOTOR_R_PINA, pin::STEP_MOTOR_R_PINB,
                         pin::STEP_MOTOR_R_PINC, pin::STEP_MOTOR_R_PIND);

    platform.SetSpeed(0, 0, 0, 0, 0, 10);
}

void loop()
{

    // printf("%d\n", millis());
    app(toy, platform);
}
