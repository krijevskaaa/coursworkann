cmake_minimum_required(VERSION 3.22)
project(courseann)

set(CMAKE_CXX_STANDARD 20)

add_executable(courseann main.cpp Animal.cpp Animal.h Beast.cpp Beast.h Bird.cpp Bird.h Snake.cpp Snake.h Zoo.cpp Zoo.h FeedingMethod.h)
