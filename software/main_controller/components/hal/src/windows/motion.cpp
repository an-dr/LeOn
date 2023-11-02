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

/* defines */

/* code */
void hal_SetMotionMode(motion_mode_t mode)
{
    printf("hal_SetMotionMode: %d\n", mode);
}
