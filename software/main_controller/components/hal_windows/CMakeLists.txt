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
project(hal_windows)

add_library(${PROJECT_NAME} STATIC)

file(GLOB_RECURSE HAL_SRC "${CMAKE_CURRENT_SOURCE_DIR}/src/**.cpp")

target_include_directories(${PROJECT_NAME} PUBLIC "include")
target_sources(${PROJECT_NAME} PUBLIC ${HAL_SRC} )
target_link_libraries(${PROJECT_NAME} PUBLIC hal_interface)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
