// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once
#include <stdint.h>

// Forward declarations
namespace hal
{
    class IMovingPlatform;
    class IToy;
}

int app(hal::IToy &toy, hal::IMovingPlatform &platform, uint32_t period_ms = 1U);

extern uint32_t now;
