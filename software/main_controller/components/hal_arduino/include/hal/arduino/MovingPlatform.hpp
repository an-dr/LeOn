// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once

#include <Stepper.h>
#include "hal/interface/IMovingPlatform.hpp"

class MovingPlatform : public hal::IMovingPlatform
{
private:
    Stepper *m_motor_l;
    Stepper *m_motor_r;

    // Move to the parent
    int8_t m_x;
    int8_t m_y;
    int8_t m_z;
    int8_t m_angX;
    int8_t m_angY;
    int8_t m_angZ;

    // Can be local
    bool m_left_direction;
    int32_t m_left_speed;
    bool m_right_direction;
    int32_t m_right_speed;

public:
    virtual void taskOnce();
    virtual void InitArduino(int steps_per_revolution,
                             int pin_left_1, int pin_left_2, int pin_left_3, int pin_left_4,
                             int pin_right_1, int pin_right_2, int pin_right_3, int pin_right_4);
    virtual void SetSpeed(int8_t x, int8_t y, int8_t z, int8_t angX, int8_t angY, int8_t angZ);
    MovingPlatform() = default;
};
