// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <Arduino.h>
#include <stdio.h>
#include "DcMotor.hpp"

void DcMotor::Init(int pin_a, int pin_b)
{
    m_pin_a = pin_a;
    m_pin_b = pin_b;
    pinMode(m_pin_a, OUTPUT);
    pinMode(m_pin_b, OUTPUT);
};



void DcMotor::Move(bool clockwise, uint32_t speed)
{
    if (clockwise)
    {
        analogWrite(m_pin_a, speed);
        analogWrite(m_pin_b, 0);
    }
    else
    {
        analogWrite(m_pin_a, 0);
        analogWrite(m_pin_b, speed);
    }
}

void DcMotor::Stop()
{
    analogWrite(m_pin_a, 0);
    analogWrite(m_pin_b, 0);
}
