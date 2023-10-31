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
// includes

class MotorController
{
public:
    static const uint8_t m_DefaultSpeed = 128U;

    MotorController();
    void MoveForward(uint8_t Speed = m_DefaultSpeed);
    void MoveBack(uint8_t Speed = m_DefaultSpeed);
    void MoveLeft(uint8_t Speed = m_DefaultSpeed);
    void MoveRight(uint8_t Speed = m_DefaultSpeed);
    void Stop();

private:
};
