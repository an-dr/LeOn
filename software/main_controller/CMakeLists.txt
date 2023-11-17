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
project(main_controller)

add_executable(${PROJECT_NAME})

# Add Components
# --------------

# Hardware
add_subdirectory(components/hal)
# Software
add_subdirectory(components/movement_interface)
add_subdirectory(components/movement_controller)
add_subdirectory(components/movement_client)

add_subdirectory(components/motion_controller)
# Main
add_subdirectory(components/app)
add_subdirectory(components/main_win)

# Assemble
# --------
target_link_libraries(${PROJECT_NAME} PRIVATE main_win)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
