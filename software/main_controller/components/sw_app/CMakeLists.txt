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
 project(app)

 find_library(${PROJECT_NAME} hal_interface movement_interface)

 add_library(${PROJECT_NAME} STATIC)
 target_include_directories(${PROJECT_NAME} PUBLIC "src")
 target_sources(${PROJECT_NAME} PUBLIC
                "${CMAKE_CURRENT_SOURCE_DIR}/src/app.cpp"
                "${CMAKE_CURRENT_SOURCE_DIR}/src/taskPlatform.cpp"
                )
 target_link_libraries(${PROJECT_NAME} PUBLIC hal_interface)

 install(TARGETS ${PROJECT_NAME} DESTINATION bin)
