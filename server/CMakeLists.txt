cmake_minimum_required(VERSION 3.8)
project(server)

set(CMAKE_CXX_FLAGS -pthread)

set(SOURCE_FILES
        ClientManager.cpp
        ClientManager.h
        Command.cpp
        Command.h
        CommandManager.cpp
        CommandManager.h
        GameInfo.cpp
        GameInfo.h
        GamesList.cpp
        GamesList.h
        GamesListCommand.cpp
        GamesListCommand.h
        JoinCommand.cpp
        JoinCommand.h
        main.cpp
        Server.cpp
        Server.h
        StartCommand.cpp
        StartCommand.h ThreadPool.cpp ThreadPool.h Task.cpp Task.h)

add_executable(server ${SOURCE_FILES})