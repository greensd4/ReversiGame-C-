# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/elon/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/elon/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elon/Desktop/Git/ReversiGame/server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/server.dir/flags.make

CMakeFiles/server.dir/ClientManager.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/ClientManager.cpp.o: ../ClientManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/server.dir/ClientManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ClientManager.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/ClientManager.cpp

CMakeFiles/server.dir/ClientManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ClientManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/ClientManager.cpp > CMakeFiles/server.dir/ClientManager.cpp.i

CMakeFiles/server.dir/ClientManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ClientManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/ClientManager.cpp -o CMakeFiles/server.dir/ClientManager.cpp.s

CMakeFiles/server.dir/ClientManager.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/ClientManager.cpp.o.requires

CMakeFiles/server.dir/ClientManager.cpp.o.provides: CMakeFiles/server.dir/ClientManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/ClientManager.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/ClientManager.cpp.o.provides

CMakeFiles/server.dir/ClientManager.cpp.o.provides.build: CMakeFiles/server.dir/ClientManager.cpp.o


CMakeFiles/server.dir/Command.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/Command.cpp.o: ../Command.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/server.dir/Command.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/Command.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/Command.cpp

CMakeFiles/server.dir/Command.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/Command.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/Command.cpp > CMakeFiles/server.dir/Command.cpp.i

CMakeFiles/server.dir/Command.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/Command.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/Command.cpp -o CMakeFiles/server.dir/Command.cpp.s

CMakeFiles/server.dir/Command.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/Command.cpp.o.requires

CMakeFiles/server.dir/Command.cpp.o.provides: CMakeFiles/server.dir/Command.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/Command.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/Command.cpp.o.provides

CMakeFiles/server.dir/Command.cpp.o.provides.build: CMakeFiles/server.dir/Command.cpp.o


CMakeFiles/server.dir/CommandManager.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/CommandManager.cpp.o: ../CommandManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/server.dir/CommandManager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/CommandManager.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/CommandManager.cpp

CMakeFiles/server.dir/CommandManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/CommandManager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/CommandManager.cpp > CMakeFiles/server.dir/CommandManager.cpp.i

CMakeFiles/server.dir/CommandManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/CommandManager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/CommandManager.cpp -o CMakeFiles/server.dir/CommandManager.cpp.s

CMakeFiles/server.dir/CommandManager.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/CommandManager.cpp.o.requires

CMakeFiles/server.dir/CommandManager.cpp.o.provides: CMakeFiles/server.dir/CommandManager.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/CommandManager.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/CommandManager.cpp.o.provides

CMakeFiles/server.dir/CommandManager.cpp.o.provides.build: CMakeFiles/server.dir/CommandManager.cpp.o


CMakeFiles/server.dir/GameInfo.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/GameInfo.cpp.o: ../GameInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/server.dir/GameInfo.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/GameInfo.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/GameInfo.cpp

CMakeFiles/server.dir/GameInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/GameInfo.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/GameInfo.cpp > CMakeFiles/server.dir/GameInfo.cpp.i

CMakeFiles/server.dir/GameInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/GameInfo.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/GameInfo.cpp -o CMakeFiles/server.dir/GameInfo.cpp.s

CMakeFiles/server.dir/GameInfo.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/GameInfo.cpp.o.requires

CMakeFiles/server.dir/GameInfo.cpp.o.provides: CMakeFiles/server.dir/GameInfo.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/GameInfo.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/GameInfo.cpp.o.provides

CMakeFiles/server.dir/GameInfo.cpp.o.provides.build: CMakeFiles/server.dir/GameInfo.cpp.o


CMakeFiles/server.dir/GamesList.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/GamesList.cpp.o: ../GamesList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/server.dir/GamesList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/GamesList.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/GamesList.cpp

CMakeFiles/server.dir/GamesList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/GamesList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/GamesList.cpp > CMakeFiles/server.dir/GamesList.cpp.i

CMakeFiles/server.dir/GamesList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/GamesList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/GamesList.cpp -o CMakeFiles/server.dir/GamesList.cpp.s

CMakeFiles/server.dir/GamesList.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/GamesList.cpp.o.requires

CMakeFiles/server.dir/GamesList.cpp.o.provides: CMakeFiles/server.dir/GamesList.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/GamesList.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/GamesList.cpp.o.provides

CMakeFiles/server.dir/GamesList.cpp.o.provides.build: CMakeFiles/server.dir/GamesList.cpp.o


CMakeFiles/server.dir/GamesListCommand.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/GamesListCommand.cpp.o: ../GamesListCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/server.dir/GamesListCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/GamesListCommand.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/GamesListCommand.cpp

CMakeFiles/server.dir/GamesListCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/GamesListCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/GamesListCommand.cpp > CMakeFiles/server.dir/GamesListCommand.cpp.i

CMakeFiles/server.dir/GamesListCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/GamesListCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/GamesListCommand.cpp -o CMakeFiles/server.dir/GamesListCommand.cpp.s

CMakeFiles/server.dir/GamesListCommand.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/GamesListCommand.cpp.o.requires

CMakeFiles/server.dir/GamesListCommand.cpp.o.provides: CMakeFiles/server.dir/GamesListCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/GamesListCommand.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/GamesListCommand.cpp.o.provides

CMakeFiles/server.dir/GamesListCommand.cpp.o.provides.build: CMakeFiles/server.dir/GamesListCommand.cpp.o


CMakeFiles/server.dir/JoinCommand.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/JoinCommand.cpp.o: ../JoinCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/server.dir/JoinCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/JoinCommand.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/JoinCommand.cpp

CMakeFiles/server.dir/JoinCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/JoinCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/JoinCommand.cpp > CMakeFiles/server.dir/JoinCommand.cpp.i

CMakeFiles/server.dir/JoinCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/JoinCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/JoinCommand.cpp -o CMakeFiles/server.dir/JoinCommand.cpp.s

CMakeFiles/server.dir/JoinCommand.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/JoinCommand.cpp.o.requires

CMakeFiles/server.dir/JoinCommand.cpp.o.provides: CMakeFiles/server.dir/JoinCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/JoinCommand.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/JoinCommand.cpp.o.provides

CMakeFiles/server.dir/JoinCommand.cpp.o.provides.build: CMakeFiles/server.dir/JoinCommand.cpp.o


CMakeFiles/server.dir/main.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/server.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/main.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/main.cpp

CMakeFiles/server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/main.cpp > CMakeFiles/server.dir/main.cpp.i

CMakeFiles/server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/main.cpp -o CMakeFiles/server.dir/main.cpp.s

CMakeFiles/server.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/main.cpp.o.requires

CMakeFiles/server.dir/main.cpp.o.provides: CMakeFiles/server.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/main.cpp.o.provides

CMakeFiles/server.dir/main.cpp.o.provides.build: CMakeFiles/server.dir/main.cpp.o


CMakeFiles/server.dir/Server.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/Server.cpp.o: ../Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/server.dir/Server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/Server.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/Server.cpp

CMakeFiles/server.dir/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/Server.cpp > CMakeFiles/server.dir/Server.cpp.i

CMakeFiles/server.dir/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/Server.cpp -o CMakeFiles/server.dir/Server.cpp.s

CMakeFiles/server.dir/Server.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/Server.cpp.o.requires

CMakeFiles/server.dir/Server.cpp.o.provides: CMakeFiles/server.dir/Server.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/Server.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/Server.cpp.o.provides

CMakeFiles/server.dir/Server.cpp.o.provides.build: CMakeFiles/server.dir/Server.cpp.o


CMakeFiles/server.dir/StartCommand.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/StartCommand.cpp.o: ../StartCommand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/server.dir/StartCommand.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/StartCommand.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/StartCommand.cpp

CMakeFiles/server.dir/StartCommand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/StartCommand.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/StartCommand.cpp > CMakeFiles/server.dir/StartCommand.cpp.i

CMakeFiles/server.dir/StartCommand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/StartCommand.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/StartCommand.cpp -o CMakeFiles/server.dir/StartCommand.cpp.s

CMakeFiles/server.dir/StartCommand.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/StartCommand.cpp.o.requires

CMakeFiles/server.dir/StartCommand.cpp.o.provides: CMakeFiles/server.dir/StartCommand.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/StartCommand.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/StartCommand.cpp.o.provides

CMakeFiles/server.dir/StartCommand.cpp.o.provides.build: CMakeFiles/server.dir/StartCommand.cpp.o


CMakeFiles/server.dir/ThreadPool.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/ThreadPool.cpp.o: ../ThreadPool.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/server.dir/ThreadPool.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/ThreadPool.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/ThreadPool.cpp

CMakeFiles/server.dir/ThreadPool.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/ThreadPool.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/ThreadPool.cpp > CMakeFiles/server.dir/ThreadPool.cpp.i

CMakeFiles/server.dir/ThreadPool.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/ThreadPool.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/ThreadPool.cpp -o CMakeFiles/server.dir/ThreadPool.cpp.s

CMakeFiles/server.dir/ThreadPool.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/ThreadPool.cpp.o.requires

CMakeFiles/server.dir/ThreadPool.cpp.o.provides: CMakeFiles/server.dir/ThreadPool.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/ThreadPool.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/ThreadPool.cpp.o.provides

CMakeFiles/server.dir/ThreadPool.cpp.o.provides.build: CMakeFiles/server.dir/ThreadPool.cpp.o


CMakeFiles/server.dir/Task.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/Task.cpp.o: ../Task.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/server.dir/Task.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/Task.cpp.o -c /home/elon/Desktop/Git/ReversiGame/server/Task.cpp

CMakeFiles/server.dir/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/server/Task.cpp > CMakeFiles/server.dir/Task.cpp.i

CMakeFiles/server.dir/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/server/Task.cpp -o CMakeFiles/server.dir/Task.cpp.s

CMakeFiles/server.dir/Task.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/Task.cpp.o.requires

CMakeFiles/server.dir/Task.cpp.o.provides: CMakeFiles/server.dir/Task.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/Task.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/Task.cpp.o.provides

CMakeFiles/server.dir/Task.cpp.o.provides.build: CMakeFiles/server.dir/Task.cpp.o


# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/ClientManager.cpp.o" \
"CMakeFiles/server.dir/Command.cpp.o" \
"CMakeFiles/server.dir/CommandManager.cpp.o" \
"CMakeFiles/server.dir/GameInfo.cpp.o" \
"CMakeFiles/server.dir/GamesList.cpp.o" \
"CMakeFiles/server.dir/GamesListCommand.cpp.o" \
"CMakeFiles/server.dir/JoinCommand.cpp.o" \
"CMakeFiles/server.dir/main.cpp.o" \
"CMakeFiles/server.dir/Server.cpp.o" \
"CMakeFiles/server.dir/StartCommand.cpp.o" \
"CMakeFiles/server.dir/ThreadPool.cpp.o" \
"CMakeFiles/server.dir/Task.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

server: CMakeFiles/server.dir/ClientManager.cpp.o
server: CMakeFiles/server.dir/Command.cpp.o
server: CMakeFiles/server.dir/CommandManager.cpp.o
server: CMakeFiles/server.dir/GameInfo.cpp.o
server: CMakeFiles/server.dir/GamesList.cpp.o
server: CMakeFiles/server.dir/GamesListCommand.cpp.o
server: CMakeFiles/server.dir/JoinCommand.cpp.o
server: CMakeFiles/server.dir/main.cpp.o
server: CMakeFiles/server.dir/Server.cpp.o
server: CMakeFiles/server.dir/StartCommand.cpp.o
server: CMakeFiles/server.dir/ThreadPool.cpp.o
server: CMakeFiles/server.dir/Task.cpp.o
server: CMakeFiles/server.dir/build.make
server: CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/server.dir/build: server

.PHONY : CMakeFiles/server.dir/build

CMakeFiles/server.dir/requires: CMakeFiles/server.dir/ClientManager.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/Command.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/CommandManager.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/GameInfo.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/GamesList.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/GamesListCommand.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/JoinCommand.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/main.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/Server.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/StartCommand.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/ThreadPool.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/Task.cpp.o.requires

.PHONY : CMakeFiles/server.dir/requires

CMakeFiles/server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/server.dir/clean

CMakeFiles/server.dir/depend:
	cd /home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elon/Desktop/Git/ReversiGame/server /home/elon/Desktop/Git/ReversiGame/server /home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug /home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug /home/elon/Desktop/Git/ReversiGame/server/cmake-build-debug/CMakeFiles/server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/server.dir/depend
