# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

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
CMAKE_COMMAND = /root/CLion-2017.1.3/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /root/CLion-2017.1.3/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Eleven.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Eleven.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Eleven.dir/flags.make

CMakeFiles/Eleven.dir/main.cpp.o: CMakeFiles/Eleven.dir/flags.make
CMakeFiles/Eleven.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Eleven.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Eleven.dir/main.cpp.o -c /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/main.cpp

CMakeFiles/Eleven.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Eleven.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/main.cpp > CMakeFiles/Eleven.dir/main.cpp.i

CMakeFiles/Eleven.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Eleven.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/main.cpp -o CMakeFiles/Eleven.dir/main.cpp.s

CMakeFiles/Eleven.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Eleven.dir/main.cpp.o.requires

CMakeFiles/Eleven.dir/main.cpp.o.provides: CMakeFiles/Eleven.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Eleven.dir/build.make CMakeFiles/Eleven.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Eleven.dir/main.cpp.o.provides

CMakeFiles/Eleven.dir/main.cpp.o.provides.build: CMakeFiles/Eleven.dir/main.cpp.o


CMakeFiles/Eleven.dir/Flower.cpp.o: CMakeFiles/Eleven.dir/flags.make
CMakeFiles/Eleven.dir/Flower.cpp.o: ../Flower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Eleven.dir/Flower.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Eleven.dir/Flower.cpp.o -c /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/Flower.cpp

CMakeFiles/Eleven.dir/Flower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Eleven.dir/Flower.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/Flower.cpp > CMakeFiles/Eleven.dir/Flower.cpp.i

CMakeFiles/Eleven.dir/Flower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Eleven.dir/Flower.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/Flower.cpp -o CMakeFiles/Eleven.dir/Flower.cpp.s

CMakeFiles/Eleven.dir/Flower.cpp.o.requires:

.PHONY : CMakeFiles/Eleven.dir/Flower.cpp.o.requires

CMakeFiles/Eleven.dir/Flower.cpp.o.provides: CMakeFiles/Eleven.dir/Flower.cpp.o.requires
	$(MAKE) -f CMakeFiles/Eleven.dir/build.make CMakeFiles/Eleven.dir/Flower.cpp.o.provides.build
.PHONY : CMakeFiles/Eleven.dir/Flower.cpp.o.provides

CMakeFiles/Eleven.dir/Flower.cpp.o.provides.build: CMakeFiles/Eleven.dir/Flower.cpp.o


# Object files for target Eleven
Eleven_OBJECTS = \
"CMakeFiles/Eleven.dir/main.cpp.o" \
"CMakeFiles/Eleven.dir/Flower.cpp.o"

# External object files for target Eleven
Eleven_EXTERNAL_OBJECTS =

Eleven: CMakeFiles/Eleven.dir/main.cpp.o
Eleven: CMakeFiles/Eleven.dir/Flower.cpp.o
Eleven: CMakeFiles/Eleven.dir/build.make
Eleven: CMakeFiles/Eleven.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Eleven"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Eleven.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Eleven.dir/build: Eleven

.PHONY : CMakeFiles/Eleven.dir/build

CMakeFiles/Eleven.dir/requires: CMakeFiles/Eleven.dir/main.cpp.o.requires
CMakeFiles/Eleven.dir/requires: CMakeFiles/Eleven.dir/Flower.cpp.o.requires

.PHONY : CMakeFiles/Eleven.dir/requires

CMakeFiles/Eleven.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Eleven.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Eleven.dir/clean

CMakeFiles/Eleven.dir/depend:
	cd /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/cmake-build-debug /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/cmake-build-debug /root/CLionProjects/gitrepos/C-/ExercisesTamassia/Eleven/cmake-build-debug/CMakeFiles/Eleven.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Eleven.dir/depend
