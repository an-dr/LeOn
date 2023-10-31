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
project(hal)


file(GLOB_RECURSE SRCS_CPP "src/**.cpp")
set(SRCS
   ${SRCS_CPP}
)

set(INCS
   "include"
)

add_library(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${INCS})
target_sources(${PROJECT_NAME} PUBLIC ${SRCS} )

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
