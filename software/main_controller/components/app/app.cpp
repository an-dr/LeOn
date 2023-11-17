// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <stdio.h>

#include "hal/time.hpp"
#include "MovementClient.hpp"
#include "MotionController.hpp"

using namespace hal;

int app()
{
    printf("Hello\n");
    MotionController *motion = MotionController::GetInstance();
    MovementClient move_client;

    motion->SetMode(MOTION_MODE_1);
    while (1)
    {
        move_client.MoveX(100);
        move_client.RotateZ(100);
        Delay(4000);
        move_client.Stop();
        Delay(1000);
        move_client.RotateZ(-100);
        Delay(3000);
        move_client.Stop();
    }
}