// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <stdio.h>
#include "movement_interface/movement_interface.hpp"
#include "MovementController.hpp"
/* defines */

/* code */

void mi_MoveX(int8_t Speed)
{
    if (Speed > 0) {
        move_controller.MoveForward(Speed);
    } else if (Speed < 0) {
        move_controller.MoveBack(-Speed);
    } else {
        move_controller.MoveForward(0);
    }
}

void mi_MoveY(int8_t Speed)
{
    printf("%s - Not Supported\n", __func__);
}

void mi_MoveZ(int8_t Speed)
{
    printf("%s - Not Supported\n", __func__);
}

void mi_RotateX(int8_t Speed)
{
    printf("%s - Not Supported\n", __func__);
}

void mi_RotateY(int8_t Speed)
{
    printf("%s - Not Supported\n", __func__);

}

void mi_RotateZ(int8_t Speed)
{
    if (Speed > 0) {
        move_controller.MoveRight(Speed);
    } else if (Speed < 0) {
        move_controller.MoveLeft(-Speed);
    } else {
        move_controller.MoveRight(0);
    }
}

void mi_Stop()
{
    move_controller.Stop();
}
