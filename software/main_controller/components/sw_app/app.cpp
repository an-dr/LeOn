// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <stdio.h>


#include "hal/interface/time.hpp"
#include "hal/interface/IToy.hpp"
#include "hal/interface/IMovingPlatform.hpp"

using namespace hal;

int app(IToy &toy, IMovingPlatform &platform, uint32_t period_ms)
{

    platform.SetSpeed(0, 0, 0, 0, 0, 10);

    uint32_t last_time = GetUptime_ms();
    while (1)
    {
        platform.taskOnce();

        uint32_t now = GetUptime_ms();

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
        Delay(period_ms);
    }
}
