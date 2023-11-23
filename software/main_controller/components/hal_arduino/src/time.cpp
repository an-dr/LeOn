// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <stdio.h>
#include <Arduino.h>
#include "hal/interface/time.hpp"

void hal::Delay(uint32_t ms)
{
    delay(ms);
}

uint32_t hal::GetUptime_ms()
{
    return millis();
}
