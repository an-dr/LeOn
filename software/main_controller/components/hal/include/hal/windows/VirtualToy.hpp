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
#include "hal/IToy.hpp"

class VirtualToy : public hal::IToy
{
private:
    int64_t m_speed;
public:
    virtual void MoveLeft(uint32_t speed);
    virtual void MoveRight(uint32_t speed);
    virtual void Stop();
    VirtualToy() = default;
};
