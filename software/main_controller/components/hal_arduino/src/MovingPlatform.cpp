// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include "hal/arduino/MovingPlatform.hpp"
#include <stdlib.h>
#include <stdio.h>

void MovingPlatform::taskOnce()
{
    m_motor_l->step(m_left_direction ? 1 : -1);
    m_motor_r->step( - (m_right_direction ? 1 : -1)); // invert because of connection
}

void MovingPlatform::InitArduino(int steps_per_revolution,
                                 int pin_left_1, int pin_left_2, int pin_left_3, int pin_left_4,
                                 int pin_right_1, int pin_right_2, int pin_right_3, int pin_right_4)
{
    m_motor_l = new Stepper(steps_per_revolution,
                            pin_left_1, pin_left_2, pin_left_3, pin_left_4);
    m_motor_r = new Stepper(steps_per_revolution,
                            pin_right_1, pin_right_2, pin_right_3, pin_right_4);
}

void MovingPlatform::SetSpeed(int8_t x, int8_t y, int8_t z, int8_t angX, int8_t angY, int8_t angZ)
{
    // Not supported by the hardware.
    m_y = 0;
    m_z = 0;
    m_angX = 0;
    m_angY = 0;

    bool new_x = false;
    if (m_x != x)
    {
        new_x = true;
    }

    bool new_angZ = false;
    if (m_angZ != angZ)
    {
        new_angZ = true;
    }

    if (new_x || new_angZ)
    {
        // Get motors speed and direction as signer numbers
        int8_t base_speed = x;
        int32_t left_speed_n_dir = 0;
        int32_t right_speed_n_dir = 0;
        if (angZ >= 0)
        {
            left_speed_n_dir = base_speed + angZ;
            right_speed_n_dir = base_speed - angZ;
        }
        else
        {
            left_speed_n_dir = base_speed - angZ;
            right_speed_n_dir = base_speed + angZ;
        }

        // Split speed and direction
        m_left_direction = left_speed_n_dir >= 0;
        m_right_direction = right_speed_n_dir >= 0;

        // Get absolute values
        m_left_speed = abs(left_speed_n_dir);
        m_right_speed = abs(right_speed_n_dir);

        printf("Speed: %d, %d\n", m_left_speed, m_right_speed);
        printf("Direction: %d, %d\n", m_left_direction, m_right_direction);
        m_motor_l->setSpeed(m_left_speed);
        m_motor_r->setSpeed(m_right_speed);
    }
}
