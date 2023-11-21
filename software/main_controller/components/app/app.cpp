// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <stdio.h>

#include "hal/time.hpp"
#include "hal/IToy.hpp"
#include "hal/IMovingPlatform.hpp"

using namespace hal;

int app(IToy &toy, IMovingPlatform &platform)
{
    printf("Start in: %lld ms\n", GetUptime_ms());

    platform.SetSpeed(0, 0, 0, 0, 0, 127);

    uint64_t last_time = GetUptime_ms();
    while (1)
    {
        uint64_t now = GetUptime_ms();
        if ((now - last_time > 3000) &&
            (now - last_time <= 3400))
        {
            toy.MoveRight(127);
        }

        if (now - last_time > 3400)
        {
            toy.Stop();
            last_time = now;
        }
    }
}
