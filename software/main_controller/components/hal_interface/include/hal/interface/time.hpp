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

namespace hal
{
    void Delay(uint32_t ms);
    uint32_t GetUptime_ms();
} // namespace hal
