// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once

#include "hal/motion.hpp"

class MotionController
{
protected:
    static MotionController *m_instance;
    MotionController() = default;

public:
    // Remove for singleton safety
    MotionController(MotionController &other) = delete;
    void operator=(const MotionController &) = delete;

    static MotionController *GetInstance();
    void SetMode(motion_mode_t mode);
};
