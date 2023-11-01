 // *************************************************************************
 //
 // Copyright (c) 2023 Andrei Gramakov. All rights reserved.
 //
 // site:    https://agramakov.me
 // e-mail:  mail@agramakov.me
 //
 // *************************************************************************

#include <windows.h>
#include <stdio.h>
#include "hal/time.hpp"

 void hal_Delay(uint64_t ms)
 {
    printf("%s(%lld)\n", __FUNCTION__, ms);
    Sleep(ms);
 }
