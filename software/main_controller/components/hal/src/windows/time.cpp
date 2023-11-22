// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <chrono>
#include <windows.h>
#include <stdio.h>
#include "hal/time.hpp"

void hal::Delay(uint32_t ms)
{
    printf("%s(%u)\n", __FUNCTION__, ms);
    Sleep(ms);
}

uint32_t hal::GetUptime_ms(){
    return std::chrono::milliseconds(GetTickCount()).count();
}
