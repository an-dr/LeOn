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
 project(main_win)

 find_library(${PROJECT_NAME} app hal_interface hal_windows)

 add_library(${PROJECT_NAME} STATIC)
 target_include_directories(${PROJECT_NAME} PUBLIC ".")
 target_sources(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp )
 target_link_libraries(${PROJECT_NAME} PUBLIC app hal_interface hal_windows)

 install(TARGETS ${PROJECT_NAME} DESTINATION bin)
