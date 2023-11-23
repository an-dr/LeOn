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
    class IToy;
    class IMovingPlatform;
}

int app(hal::IToy &toy, hal::IMovingPlatform &platform, uint32_t period_ms = 1U);
