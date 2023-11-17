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
project(movement_interface)

message(STATUS "HAL_PLATFORM: $ENV{HAL_PLATFORM}")
if("$ENV{HAL_PLATFORM}" STREQUAL "windows")
    include("${CMAKE_CURRENT_SOURCE_DIR}/src/windows/mi_src.cmake")
    include("${CMAKE_CURRENT_SOURCE_DIR}/src/windows/mi_libs.cmake")
elseif("$ENV{HAL_PLATFORM}" STREQUAL "arduino")
    message(FATAL_ERROR "Use PlatformIO to build for Arduino!")
else()
    message(FATAL_ERROR "HAL_PLATFORM environment variable is not specified!")
endif()

set(INCS
   "include"
)

add_library(${PROJECT_NAME} STATIC)

target_include_directories(${PROJECT_NAME} PUBLIC ${INCS})
target_sources(${PROJECT_NAME} PUBLIC ${MI_SRC} )
target_link_libraries(${PROJECT_NAME} ${MI_LIBS})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
