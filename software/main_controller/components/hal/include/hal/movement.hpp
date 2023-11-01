 // *************************************************************************
 //
 // Copyright (c) 2023 Andrei Gramakov. All rights reserved.
 //
 // site:    https://agramakov.me
 // e-mail:  mail@agramakov.me
 //
 // *************************************************************************

#include <stdint.h>

void hal_SetSpeed(int8_t x, int8_t y, int8_t z, int8_t angX, int8_t angY, int8_t angZ);
void hal_MoveX(int8_t Speed);
void hal_MoveY(int8_t Speed);
void hal_MoveZ(int8_t Speed);
void hal_RotateX(int8_t Speed);
void hal_RotateY(int8_t Speed);
void hal_RotateZ(int8_t Speed);

