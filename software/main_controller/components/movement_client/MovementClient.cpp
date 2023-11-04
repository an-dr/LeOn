// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include "MovementClient.hpp"
#include "movement_interface/movement_interface.hpp"

void MovementClient::MoveX(int8_t Speed)
{
    mi_MoveX(Speed);
}
void MovementClient::MoveY(int8_t Speed)
{
    mi_MoveY(Speed);
}
void MovementClient::RotateX(int8_t Speed)
{
    mi_RotateX(Speed);
}
void MovementClient::RotateY(int8_t Speed)
{
    mi_RotateY(Speed);
}
void MovementClient::RotateZ(int8_t Speed)
{
    mi_RotateZ(Speed);
}
void MovementClient::Stop()
{
    mi_Stop();
}
