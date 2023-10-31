// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <stdio.h>

#include "MotorController.hpp"
#include "hal/time.hpp"


int main(int argc, char *argv[])
{
    MotorController motor_controller;
    while(1){
        motor_controller.MoveForward();
        motor_controller.MoveLeft(100);
        Delay(4000);
        motor_controller.Stop();
        Delay(1000);
        motor_controller.MoveRight();
        Delay(3000);
        motor_controller.Stop();
    }
}
