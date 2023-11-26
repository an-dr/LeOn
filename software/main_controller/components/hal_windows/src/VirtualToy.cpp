// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <stdio.h>

#include "hal/windows/VirtualToy.hpp"

void VirtualToy::MoveLeft(uint32_t speed)
{
    if (speed != -m_speed)
    {
        printf("MoveLeft: %d\n", speed);
        m_speed = -speed;
    }
}

void VirtualToy::MoveRight(uint32_t speed)
{
    if (speed != m_speed)
    {
        printf("MoveRight: %d\n", speed);
        m_speed = speed;
    }
}

void VirtualToy::Stop()
{
    if (m_speed != 0)
    {
        printf("Stop\n");
        m_speed = 0;
    }
}
