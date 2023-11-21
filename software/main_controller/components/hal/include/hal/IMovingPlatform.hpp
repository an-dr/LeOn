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

    class IMovingPlatform
    {
    public:
        virtual void SetSpeed(int8_t x, int8_t y, int8_t z,
                              int8_t angX, int8_t angY, int8_t angZ) = 0;
    };

} // namespace hal
