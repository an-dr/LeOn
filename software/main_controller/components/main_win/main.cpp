// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include "app.hpp"
#include "hal/windows/VirtualPlatform.hpp"
#include "hal/windows/VirtualToy.hpp"

int main(int argc, char *argv[])
{
    VirtualToy toy;
    VirtualPlatform platform;

    platform.InitWindows("Hello from platform.InitWindows");
    app(toy, platform, 1);
}
