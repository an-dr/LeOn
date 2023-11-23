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
    const int STEPS_PER_REVOLUTION = 2038;
    Stepper StepperR = Stepper(STEPS_PER_REVOLUTION, 8, 10, 9, 11);
    Stepper StepperL = Stepper(STEPS_PER_REVOLUTION, 4, 6, 5, 7);

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

    virtual void SetSpeed(int8_t x, int8_t y, int8_t z, int8_t angX, int8_t angY, int8_t angZ);
    MovingPlatform() = default;
};
