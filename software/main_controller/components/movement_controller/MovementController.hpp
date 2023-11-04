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

class MovementController
{
protected:

    static const uint8_t DEFAULT_SPEED = 128U;
    static MovementController * m_instance;

    MovementController();
    void _ApplySpeed();

public:

    int32_t m_linearSpeed;
    int32_t m_angularSpeed;

    // Remove for singleton safety
    MovementController(MovementController &other) = delete;
    void operator=(const MovementController &) = delete;

    static MovementController *GetInstance();
    void MoveForward(uint8_t Speed = DEFAULT_SPEED);
    void MoveBack(uint8_t Speed = DEFAULT_SPEED);
    void MoveLeft(uint8_t Speed = DEFAULT_SPEED);
    void MoveRight(uint8_t Speed = DEFAULT_SPEED);
    void Stop();
};

