// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include "MotionController.hpp"
#include "hal/motion.hpp"

void MotionController::SetMode(motion_mode_t mode)
{
    hal_SetMotionMode(mode);
}

MotionController *MotionController::GetInstance()
{
    if (m_instance == nullptr) {
        m_instance = new MotionController();
    }
    return m_instance;
}

 // init the pointer
MotionController *MotionController::m_instance = nullptr;

