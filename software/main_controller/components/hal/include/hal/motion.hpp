// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once

typedef enum motion_mode_enum {
    MOTION_DISABLE = 0,
    MOTION_MODE_1,
    MOTION_MODE_2
} motion_mode_t;

/**
 * @brief Enables the motion with the specified mode.
 *
 * @param mode The mode of motion to enable.
 */
void hal_SetMotionMode(motion_mode_t mode);
