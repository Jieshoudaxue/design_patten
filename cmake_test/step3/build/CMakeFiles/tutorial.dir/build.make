# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /bin/cmake

# The command to remove a file.
RM = /bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/caoyi/study/cmake/step3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/caoyi/study/cmake/step3/build

# Include any dependencies generated for this target.
include CMakeFiles/tutorial.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tutorial.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tutorial.dir/flags.make

CMakeFiles/tutorial.dir/main.cpp.o: CMakeFiles/tutorial.dir/flags.make
CMakeFiles/tutorial.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/caoyi/study/cmake/step3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tutorial.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tutorial.dir/main.cpp.o -c /home/caoyi/study/cmake/step3/main.cpp

CMakeFiles/tutorial.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tutorial.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/caoyi/study/cmake/step3/main.cpp > CMakeFiles/tutorial.dir/main.cpp.i

CMakeFiles/tutorial.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tutorial.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/caoyi/study/cmake/step3/main.cpp -o CMakeFiles/tutorial.dir/main.cpp.s

# Object files for target tutorial
tutorial_OBJECTS = \
"CMakeFiles/tutorial.dir/main.cpp.o"

# External object files for target tutorial
tutorial_EXTERNAL_OBJECTS =

tutorial: CMakeFiles/tutorial.dir/main.cpp.o
tutorial: CMakeFiles/tutorial.dir/build.make
tutorial: mathfunctions/libmathfunctions.a
tutorial: CMakeFiles/tutorial.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/caoyi/study/cmake/step3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tutorial"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tutorial.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tutorial.dir/build: tutorial

.PHONY : CMakeFiles/tutorial.dir/build

CMakeFiles/tutorial.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tutorial.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tutorial.dir/clean

CMakeFiles/tutorial.dir/depend:
	cd /home/caoyi/study/cmake/step3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/caoyi/study/cmake/step3 /home/caoyi/study/cmake/step3 /home/caoyi/study/cmake/step3/build /home/caoyi/study/cmake/step3/build /home/caoyi/study/cmake/step3/build/CMakeFiles/tutorial.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tutorial.dir/depend

