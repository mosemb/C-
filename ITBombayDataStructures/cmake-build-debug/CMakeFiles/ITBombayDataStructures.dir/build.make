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
CMAKE_SOURCE_DIR = /root/CLionProjects/gitrepos/C-/ITBombayDataStructures

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CLionProjects/gitrepos/C-/ITBombayDataStructures/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ITBombayDataStructures.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ITBombayDataStructures.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ITBombayDataStructures.dir/flags.make

CMakeFiles/ITBombayDataStructures.dir/main.cpp.o: CMakeFiles/ITBombayDataStructures.dir/flags.make
CMakeFiles/ITBombayDataStructures.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/ITBombayDataStructures/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ITBombayDataStructures.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ITBombayDataStructures.dir/main.cpp.o -c /root/CLionProjects/gitrepos/C-/ITBombayDataStructures/main.cpp

CMakeFiles/ITBombayDataStructures.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ITBombayDataStructures.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/ITBombayDataStructures/main.cpp > CMakeFiles/ITBombayDataStructures.dir/main.cpp.i

CMakeFiles/ITBombayDataStructures.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ITBombayDataStructures.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/ITBombayDataStructures/main.cpp -o CMakeFiles/ITBombayDataStructures.dir/main.cpp.s

CMakeFiles/ITBombayDataStructures.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ITBombayDataStructures.dir/main.cpp.o.requires

CMakeFiles/ITBombayDataStructures.dir/main.cpp.o.provides: CMakeFiles/ITBombayDataStructures.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ITBombayDataStructures.dir/build.make CMakeFiles/ITBombayDataStructures.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ITBombayDataStructures.dir/main.cpp.o.provides

CMakeFiles/ITBombayDataStructures.dir/main.cpp.o.provides.build: CMakeFiles/ITBombayDataStructures.dir/main.cpp.o


# Object files for target ITBombayDataStructures
ITBombayDataStructures_OBJECTS = \
"CMakeFiles/ITBombayDataStructures.dir/main.cpp.o"

# External object files for target ITBombayDataStructures
ITBombayDataStructures_EXTERNAL_OBJECTS =

ITBombayDataStructures: CMakeFiles/ITBombayDataStructures.dir/main.cpp.o
ITBombayDataStructures: CMakeFiles/ITBombayDataStructures.dir/build.make
ITBombayDataStructures: CMakeFiles/ITBombayDataStructures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/gitrepos/C-/ITBombayDataStructures/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ITBombayDataStructures"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ITBombayDataStructures.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ITBombayDataStructures.dir/build: ITBombayDataStructures

.PHONY : CMakeFiles/ITBombayDataStructures.dir/build

CMakeFiles/ITBombayDataStructures.dir/requires: CMakeFiles/ITBombayDataStructures.dir/main.cpp.o.requires

.PHONY : CMakeFiles/ITBombayDataStructures.dir/requires

CMakeFiles/ITBombayDataStructures.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ITBombayDataStructures.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ITBombayDataStructures.dir/clean

CMakeFiles/ITBombayDataStructures.dir/depend:
	cd /root/CLionProjects/gitrepos/C-/ITBombayDataStructures/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/gitrepos/C-/ITBombayDataStructures /root/CLionProjects/gitrepos/C-/ITBombayDataStructures /root/CLionProjects/gitrepos/C-/ITBombayDataStructures/cmake-build-debug /root/CLionProjects/gitrepos/C-/ITBombayDataStructures/cmake-build-debug /root/CLionProjects/gitrepos/C-/ITBombayDataStructures/cmake-build-debug/CMakeFiles/ITBombayDataStructures.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ITBombayDataStructures.dir/depend

