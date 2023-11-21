// *************************************************************************
//
// Copyright (c) 2023 Andrei Gramakov. All rights reserved.
//
// site:    https://agramakov.me
// e-mail:  mail@agramakov.me
//
// *************************************************************************

#pragma once

// Forward declarations
namespace hal
{
    class IToy;
    class IMovingPlatform;
}

int app(hal::IToy &toy, hal::IMovingPlatform &platform);
