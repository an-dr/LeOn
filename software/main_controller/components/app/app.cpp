// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <stdio.h>
#include <Arduino.h>


#include "hal/time.hpp"
#include "hal/IToy.hpp"
#include "hal/IMovingPlatform.hpp"

using namespace hal;

int app(IToy &toy, IMovingPlatform &platform)
{
    // printf("Start in: %ld ms\n", GetUptime_ms());

    platform.SetSpeed(0, 0, 0, 0, 0, 10);

    uint32_t last_time = GetUptime_ms();
    while (1)
    {
        // printf("Uptime: %ld ms\n", GetUptime_ms());
        platform.taskOnce();

        uint32_t now = GetUptime_ms();
        // print now

        if ((now - last_time > 3000) &&
            (now - last_time <= 3400))
        {
            toy.MoveRight(180);
        }

        if (now - last_time > 3400)
        {
            toy.Stop();
            last_time = GetUptime_ms();
        }
        Delay(1);
    }
}
