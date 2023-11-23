// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include "hal/arduino/Toy.hpp"
#include "hal_ll/DcMotor.hpp"

void Toy::MoveLeft(uint32_t speed)
{
    m_motor->Move(true, speed);
}

void Toy::MoveRight(uint32_t speed)
{
    m_motor->Move(false, speed);
}

void Toy::Stop()
{
    m_motor->Stop();
}

Toy::Toy(const int pinA, const int pinB):
    m_motor(new DcMotor(pinA, pinB)){
}
