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

class MovementClient
{
private:
    /* data */
public:
    MovementClient() = default;

    void MoveX(int8_t Speed);
    void MoveY(int8_t Speed);
    void MoveZ(int8_t Speed);

    void RotateX(int8_t Speed);
    void RotateY(int8_t Speed);
    void RotateZ(int8_t Speed);

    void Stop();
};
