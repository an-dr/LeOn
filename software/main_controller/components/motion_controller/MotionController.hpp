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

class MotionController
{
private:
    uint64_t m_last_time;

protected:
    static MotionController *m_instance;
    MotionController();

public:
    // Remove for singleton safety
    MotionController(MotionController &other) = delete;
    void operator=(const MotionController &) = delete;

    static MotionController *GetInstance();
    void MotionTaskOnce(void *arg);
    // void SetMode(hal::motion_mode_t mode);
};
