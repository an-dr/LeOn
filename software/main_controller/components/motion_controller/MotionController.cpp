// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <stdio.h>
#include "MotionController.hpp"
// #include "hal/motion.hpp"
#include "hal/time.hpp"

// default constructor
MotionController::MotionController() : m_last_time(0)
{
}

// void MotionController::SetMode(hal::motion_mode_t mode)
// {
//     SetMotionMode(mode);
// }

MotionController *MotionController::GetInstance()
{
    if (m_instance == nullptr)
    {
        m_instance = new MotionController();
    }
    return m_instance;
}

void MotionController::MotionTaskOnce(void *arg)
{
    uint64_t now = hal::GetUptime_ms();
    if ((now - m_instance->m_last_time > 3000) &&
        (now - m_instance->m_last_time <= 3400))
    {
        printf("dc.direction\n");
        // dc.direction(1, 180);
    }

    if (now - m_instance->m_last_time > 3400)
    {
        printf("dc.stop\n");
        // dc.stop();
        m_instance->m_last_time = hal::GetUptime_ms();
    }
}

// init the pointer
MotionController *MotionController::m_instance = nullptr;
