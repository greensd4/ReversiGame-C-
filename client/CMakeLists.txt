cmake_minimum_required(VERSION 3.8)
project(client)

set(CMAKE_CXX_STANDARD 98)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
include_directories(src/)
set(SOURCE_FILES
        src/AIPlayer.cpp
        src/AIPlayer.h
        src/Board.cpp
        src/Board.h
        src/HumanPlayer.cpp
        src/HumanPlayer.h
        src/Game.cpp
        src/Game.h
        src/Player.cpp
        src/Sign.cpp
        src/Sign.h
        src/Player.h
        src/Point.cpp
        src/Point.h
        src/RegularRules.cpp
        src/RegularRules.h
        src/Rules.cpp
        src/Rules.h
        src/GameMenu.cpp
        src/GameMenu.h
        src/Display.h
        src/ConsoleDisplay.cpp
        src/ConsoleDisplay.h src/Client.cpp src/Client.h src/NetworkPlayer.cpp src/NetworkPlayer.h)

set(TEST_FILES
        tests/main_test.cpp
        tests/BoardTest.cpp
        tests/AITest.cpp
        tests/GameTest.cpp
        tests/RulesTest.cpp src/Client.cpp src/Client.h src/NetworkPlayer.cpp src/NetworkPlayer.h)

add_executable(ReversiGame ${SOURCE_FILES} main.cpp src/NetworkReadPlayer.cpp src/NetworkReadPlayer.h)
add_executable(ReversiTest ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(ReversiTest gtest gtest_main)