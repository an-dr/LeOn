// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include "MovementController.hpp"

MovementController::MovementController() :
    m_angularSpeed(0), m_linearSpeed(0)
{
}

void MovementController::MoveForward(uint8_t Speed)
{
    m_linearSpeed = Speed;
    _ApplySpeed();
}

void MovementController::MoveBack(uint8_t Speed)
{
    m_linearSpeed = -Speed;
    _ApplySpeed();
}

void MovementController::MoveLeft(uint8_t Speed)
{
    m_angularSpeed = -Speed;
    _ApplySpeed();
}

void MovementController::MoveRight(uint8_t Speed)
{
    m_angularSpeed = Speed;
    _ApplySpeed();
}

MovementController *MovementController::GetInstance()
{
    if (m_instance == nullptr) {
        m_instance = new MovementController();
    }
return m_instance;
}

void MovementController::Stop()
{
    m_angularSpeed = 0;
    m_linearSpeed = 0;
    _ApplySpeed();
}

void MovementController::_ApplySpeed()
{
    // hal::SetSpeed(m_linearSpeed, 0, 0, 0, 0, m_angularSpeed);
}

MovementController *MovementController::m_instance = nullptr;
