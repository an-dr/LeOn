// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <stdio.h>
#include "hal/movement.hpp"

void hal::SetSpeed(int8_t x, int8_t y, int8_t z, int8_t angX, int8_t angY, int8_t angZ)
{
    printf("%s(%d,%d,%d %d,%d,%d)\n", __FUNCTION__, x,y,z,angX,angY,angZ);
}

void hal::MoveX(int8_t Speed)
{
    printf("%s(%d)\n", __FUNCTION__, Speed);
}
void hal::MoveY(int8_t Speed)
{
    printf("%s(%d)\n", __FUNCTION__, Speed);
}
void hal::MoveZ(int8_t Speed)
{
    printf("%s(%d)\n", __FUNCTION__, Speed);
}
void hal::RotateX(int8_t Speed)
{
    printf("%s(%d)\n", __FUNCTION__, Speed);
}
void hal::RotateY(int8_t Speed)
{
    printf("%s(%d)\n", __FUNCTION__, Speed);
}
void hal::RotateZ(int8_t Speed)
{
    printf("%s(%d)\n", __FUNCTION__, Speed);
}
