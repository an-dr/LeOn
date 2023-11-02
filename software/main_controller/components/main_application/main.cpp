// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include <stdio.h>

#include "hal/time.hpp"
#include "hal/motion.hpp"
#include "movement_interface/movement_interface.hpp"


int main(int argc, char *argv[])
{
    printf("Hello\n");
    hal_SetMotionMode(MOTION_MODE_1);
    while(1){
        mi_MoveX(100);
        mi_RotateZ(100);
        hal_Delay(4000);
        mi_Stop();
        hal_Delay(1000);
        mi_RotateZ(-100);
        hal_Delay(3000);
        mi_Stop();
    }
}
