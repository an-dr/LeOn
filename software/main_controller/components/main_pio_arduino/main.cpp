// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <Arduino.h>
#include <LibPrintf.h>
#include "app.hpp"
#include "hal/arduino/Toy.hpp"
#include "hal/arduino/MovingPlatform.hpp"

MovingPlatform platform;
Toy toy;

void setup() {
    Serial.begin(115200); // for printf
}

void loop() {
    app(toy, platform);
}
