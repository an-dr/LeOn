// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <stdio.h>
#include <stdbool.h>
#include "hal/interface/time.hpp"
#include "hal/interface/IToy.hpp"
#include "hal/interface/IMovingPlatform.hpp"
#include "taskPlatform.hpp"

using namespace hal;

static const uint32_t TOY_PASSIVE_PERIOD_MS = 3000U;
static const uint32_t TOY_ACTIVE_PERIOD_MS = 400U;
static const uint32_t TOY_FULL_PERIOD_MS = TOY_PASSIVE_PERIOD_MS + TOY_ACTIVE_PERIOD_MS;
static uint32_t toy_last_activation_ms = GetUptime_ms();


static inline bool is_range(uint32_t x, uint32_t a, uint32_t b)
{
    return (x > a) && (x <= b);
}


static void taskOnceToy(IToy &toy)
{
    uint32_t time_diff = GetUptime_ms() - toy_last_activation_ms;
    if (is_range(time_diff, TOY_PASSIVE_PERIOD_MS, TOY_FULL_PERIOD_MS))
    {
        toy.MoveRight(180);
    }

    if (time_diff > TOY_FULL_PERIOD_MS)
    {
        toy.Stop();
        toy_last_activation_ms = GetUptime_ms();
    }
}

int app(IToy &toy, hal::IMovingPlatform &platform, uint32_t period_ms)
{
    while (1)
    {
        taskOncePlatform(platform);
        taskOnceToy(toy);
        platform.taskOnce();
        Delay(period_ms);
    }
}
