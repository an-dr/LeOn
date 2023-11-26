// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once

#include <string>
#include "hal/interface/IMovingPlatform.hpp"

class VirtualPlatform : public hal::IMovingPlatform
{
private:
    int m_param;
public:
    virtual void taskOnce();
    virtual void SetSpeed(int8_t x, int8_t y, int8_t z, int8_t angX, int8_t angY, int8_t angZ);
    virtual void InitWindows(std::string hello);
    VirtualPlatform() = default;

};
