# *************************************************************************
#
# Copyright (c) 2023 Andrei Gramakov. All rights reserved.
#
# This file is licensed under the terms of the MIT license.
# For a copy, see: https://opensource.org/licenses/MIT
#
# site:    https://agramakov.me
# e-mail:  mail@agramakov.me
#
# *************************************************************************

cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 14)
project(app_main)

add_executable(${PROJECT_NAME})

add_subdirectory(components/hal)
add_subdirectory(components/movement_controller)
add_subdirectory(components/movement_interface)
add_subdirectory(components/main_application)

target_link_libraries(${PROJECT_NAME} PRIVATE main_application)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
