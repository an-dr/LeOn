// Copyright (c) 2021 Andrei Gramakov. All rights reserved.

#include "app.hpp"
#include "hal/windows/VirtualPlatform.hpp"
#include "hal/windows/VirtualToy.hpp"

int main(int argc, char *argv[])
{
    VirtualToy toy;
    VirtualPlatform platform;
    app(toy, platform);
}
