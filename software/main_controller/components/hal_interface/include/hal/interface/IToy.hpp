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
    // [] define API for HAL
    class IToy
    {
    public:
        virtual void MoveLeft(uint32_t speed) = 0;
        virtual void MoveRight(uint32_t speed) = 0;
        virtual void Stop() = 0;
    };

}
