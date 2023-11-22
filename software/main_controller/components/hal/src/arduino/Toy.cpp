// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include "hal/arduino/pin.hpp"
#include "hal/arduino/Toy.hpp"
#include "DcMotor.hpp"

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

Toy::Toy():
    m_motor(new DcMotor(pin::DC_MOTOR_PINA, pin::DC_MOTOR_PINB)){
}
