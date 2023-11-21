// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once

#include <Arduino.h>

class DcMotor
{
    int m_pin_a;
    int m_pin_b;

public:
    DcMotor() = default;
    DcMotor(int pin_a, int pin_b);
    void DcMotor::Move(bool clockwise, uint32_t speed);
    void DcMotor::Stop();
};
