// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#include <stdint.h>

namespace hal
{

    void SetSpeed(int8_t x, int8_t y, int8_t z, int8_t angX, int8_t angY, int8_t angZ);
    void MoveX(int8_t Speed);
    void MoveY(int8_t Speed);
    void MoveZ(int8_t Speed);
    void RotateX(int8_t Speed);
    void RotateY(int8_t Speed);
    void RotateZ(int8_t Speed);

} // namespace hal
