// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <stdio.h>
#include "hal/windows/VirtualPlatform.hpp"

void VirtualPlatform::taskOnce()
{
    printf("%s()\n", __FUNCTION__);
}

void VirtualPlatform::SetSpeed(int8_t x, int8_t y, int8_t z, int8_t angX, int8_t angY, int8_t angZ)
{
    printf("SetSpeed: %d %d %d | %d %d %d\n", x, y, z, angX, angY, angZ);

}
void VirtualPlatform::InitWindows(std::string hello)
{
    printf("Init message: %s\n", hello.c_str());
}
