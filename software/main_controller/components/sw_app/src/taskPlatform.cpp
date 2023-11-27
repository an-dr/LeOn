// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************


#include <stdint.h>
#include <stdio.h>
#include "hal/interface/time.hpp"
#include "hal/interface/IMovingPlatform.hpp"
#include "taskPlatform.hpp"

using namespace hal;


typedef enum
{
    PLATFORM_PHASE_BEGIN,
    PLATFORM_PHASE_ROTATE,
    PLATFORM_PHASE_PAUSE1,
    PLATFORM_PHASE_FORWARD,
    PLATFORM_PHASE_END
} PlatformPhases_t;

static const uint32_t PLATFORM_PHASE_BEGIN_MS = 0;
static const uint32_t PLATFORM_PHASE_ROTATE_MS = PLATFORM_PHASE_BEGIN_MS + 500U;
static const uint32_t PLATFORM_PHASE_PAUSE1_MS = PLATFORM_PHASE_ROTATE_MS + 2000U;
static const uint32_t PLATFORM_PHASE_FORWARD_MS = PLATFORM_PHASE_PAUSE1_MS + 500U;
static const uint32_t PLATFORM_PHASE_END_MS = PLATFORM_PHASE_FORWARD_MS + 2000U;
static uint32_t platform_current_phase = PLATFORM_PHASE_BEGIN;
static uint32_t platform_last_activation_ms = GetUptime_ms();

static inline bool is_range(uint32_t x, uint32_t a, uint32_t b)
{
    return (x > a) && (x <= b);
}

static inline bool change_state(uint32_t &output, uint32_t state)
{
    if (output != state)
    {
        output = state;
        printf("New State: %d", state);
        return true;
    }
    return false;
}

void taskOncePlatform(IMovingPlatform &platform)
{
    uint32_t time_diff = GetUptime_ms() - platform_last_activation_ms;

    if (is_range(time_diff, PLATFORM_PHASE_BEGIN_MS, PLATFORM_PHASE_ROTATE_MS) &&
        change_state(platform_current_phase, PLATFORM_PHASE_BEGIN_MS))
    {
        platform.SetSpeed(0, 0, 0, 0, 0, 0);
    }

    if (is_range(time_diff, PLATFORM_PHASE_ROTATE_MS, PLATFORM_PHASE_PAUSE1_MS) &&
        change_state(platform_current_phase, PLATFORM_PHASE_ROTATE))
    {
        platform.SetSpeed(0, 0, 0, 0, 0, 10);
    }

    if (is_range(time_diff, PLATFORM_PHASE_PAUSE1_MS, PLATFORM_PHASE_FORWARD_MS) &&
        change_state(platform_current_phase, PLATFORM_PHASE_PAUSE1))
    {
        platform.SetSpeed(0, 0, 0, 0, 0, 0);
    }

    if (is_range(time_diff, PLATFORM_PHASE_FORWARD_MS, PLATFORM_PHASE_END_MS) &&
        change_state(platform_current_phase, PLATFORM_PHASE_FORWARD))
    {
        platform.SetSpeed(-15, 0, 0, 0, 0, 0);
    }

    if (time_diff > PLATFORM_PHASE_END_MS)
    {
        platform_last_activation_ms = GetUptime_ms();
    }
}
/* defines */

/* code */
