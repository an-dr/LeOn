// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <Arduino.h>
#include <LibPrintf.h>
#include "app.hpp"
#include "hal/arduino/Toy.hpp"
#include "hal/arduino/MovingPlatform.hpp"
#include "hal/time.hpp"

MovingPlatform platform;
Toy toy;

void setup() {
    Serial.begin(9600); // for printf
    Serial.print("Start ");
    Serial.println(millis());
    platform.SetSpeed(0, 0, 0, 0, 0, 10);

}

void loop() {

    // printf("%d\n", millis());
    app(toy, platform);
}
