// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include "MotorController.hpp"
#include "hal/movement.hpp"

MotorController::MotorController() : m_angularSpeed(0), m_linearSpeed(0)
{
}

void MotorController::MoveForward(uint8_t Speed)
{
    m_linearSpeed = Speed;
    _ApplySpeed();
}

void MotorController::MoveBack(uint8_t Speed)
{
    m_linearSpeed = -Speed;
    _ApplySpeed();
}

void MotorController::MoveLeft(uint8_t Speed)
{
    m_angularSpeed = -Speed;
    _ApplySpeed();
}

void MotorController::MoveRight(uint8_t Speed)
{
    m_angularSpeed = Speed;
    _ApplySpeed();
}

void MotorController::Stop()
{
    m_angularSpeed = 0;
    m_linearSpeed = 0;
    _ApplySpeed();
}

void MotorController::_ApplySpeed()
{
    SetSpeed(m_linearSpeed, 0, 0, 0, 0, m_angularSpeed);
}
