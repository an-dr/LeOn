// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <stdio.h>
#include "hal/motion.hpp"


void hal::SetMotionMode(motion_mode_t mode)
{
    printf("SetMotionMode: %d\n", mode);
}
