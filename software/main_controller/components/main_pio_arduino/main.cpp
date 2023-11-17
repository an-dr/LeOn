// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <Arduino.h>
#include <LibPrintf.h>
#include "app.hpp"

void setup() {
    Serial.begin(115200); // for printf
}

void loop() {
    app();
}
