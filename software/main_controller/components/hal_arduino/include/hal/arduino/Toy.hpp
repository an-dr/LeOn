// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once

#include "hal/interface/IToy.hpp"

class DcMotor;

class Toy : public hal::IToy
{
private:
    DcMotor * m_motor;

public:
    virtual void MoveLeft(uint32_t speed);
    virtual void MoveRight(uint32_t speed);
    virtual void Stop();
    virtual void InitArduino(const int pin_a, const int pin_b);
};
