cmake_minimum_required(VERSION 3.28)
project(BlackJackBrainRot)

set(CMAKE_CXX_STANDARD 17)

add_executable(BlackJackBrainRot main.cpp
        Card.cpp
        Card.h
        main.h)
