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
CMAKE_SOURCE_DIR = /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LinkedList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkedList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkedList.dir/flags.make

CMakeFiles/LinkedList.dir/main.cpp.o: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinkedList.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkedList.dir/main.cpp.o -c /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/main.cpp

CMakeFiles/LinkedList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkedList.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/main.cpp > CMakeFiles/LinkedList.dir/main.cpp.i

CMakeFiles/LinkedList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkedList.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/main.cpp -o CMakeFiles/LinkedList.dir/main.cpp.s

CMakeFiles/LinkedList.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/LinkedList.dir/main.cpp.o.requires

CMakeFiles/LinkedList.dir/main.cpp.o.provides: CMakeFiles/LinkedList.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/LinkedList.dir/build.make CMakeFiles/LinkedList.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/LinkedList.dir/main.cpp.o.provides

CMakeFiles/LinkedList.dir/main.cpp.o.provides.build: CMakeFiles/LinkedList.dir/main.cpp.o


CMakeFiles/LinkedList.dir/Node.cpp.o: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/Node.cpp.o: ../Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LinkedList.dir/Node.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkedList.dir/Node.cpp.o -c /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/Node.cpp

CMakeFiles/LinkedList.dir/Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkedList.dir/Node.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/Node.cpp > CMakeFiles/LinkedList.dir/Node.cpp.i

CMakeFiles/LinkedList.dir/Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkedList.dir/Node.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/Node.cpp -o CMakeFiles/LinkedList.dir/Node.cpp.s

CMakeFiles/LinkedList.dir/Node.cpp.o.requires:

.PHONY : CMakeFiles/LinkedList.dir/Node.cpp.o.requires

CMakeFiles/LinkedList.dir/Node.cpp.o.provides: CMakeFiles/LinkedList.dir/Node.cpp.o.requires
	$(MAKE) -f CMakeFiles/LinkedList.dir/build.make CMakeFiles/LinkedList.dir/Node.cpp.o.provides.build
.PHONY : CMakeFiles/LinkedList.dir/Node.cpp.o.provides

CMakeFiles/LinkedList.dir/Node.cpp.o.provides.build: CMakeFiles/LinkedList.dir/Node.cpp.o


CMakeFiles/LinkedList.dir/Link.cpp.o: CMakeFiles/LinkedList.dir/flags.make
CMakeFiles/LinkedList.dir/Link.cpp.o: ../Link.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LinkedList.dir/Link.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkedList.dir/Link.cpp.o -c /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/Link.cpp

CMakeFiles/LinkedList.dir/Link.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkedList.dir/Link.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/Link.cpp > CMakeFiles/LinkedList.dir/Link.cpp.i

CMakeFiles/LinkedList.dir/Link.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkedList.dir/Link.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/Link.cpp -o CMakeFiles/LinkedList.dir/Link.cpp.s

CMakeFiles/LinkedList.dir/Link.cpp.o.requires:

.PHONY : CMakeFiles/LinkedList.dir/Link.cpp.o.requires

CMakeFiles/LinkedList.dir/Link.cpp.o.provides: CMakeFiles/LinkedList.dir/Link.cpp.o.requires
	$(MAKE) -f CMakeFiles/LinkedList.dir/build.make CMakeFiles/LinkedList.dir/Link.cpp.o.provides.build
.PHONY : CMakeFiles/LinkedList.dir/Link.cpp.o.provides

CMakeFiles/LinkedList.dir/Link.cpp.o.provides.build: CMakeFiles/LinkedList.dir/Link.cpp.o


# Object files for target LinkedList
LinkedList_OBJECTS = \
"CMakeFiles/LinkedList.dir/main.cpp.o" \
"CMakeFiles/LinkedList.dir/Node.cpp.o" \
"CMakeFiles/LinkedList.dir/Link.cpp.o"

# External object files for target LinkedList
LinkedList_EXTERNAL_OBJECTS =

LinkedList: CMakeFiles/LinkedList.dir/main.cpp.o
LinkedList: CMakeFiles/LinkedList.dir/Node.cpp.o
LinkedList: CMakeFiles/LinkedList.dir/Link.cpp.o
LinkedList: CMakeFiles/LinkedList.dir/build.make
LinkedList: CMakeFiles/LinkedList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable LinkedList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkedList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkedList.dir/build: LinkedList

.PHONY : CMakeFiles/LinkedList.dir/build

CMakeFiles/LinkedList.dir/requires: CMakeFiles/LinkedList.dir/main.cpp.o.requires
CMakeFiles/LinkedList.dir/requires: CMakeFiles/LinkedList.dir/Node.cpp.o.requires
CMakeFiles/LinkedList.dir/requires: CMakeFiles/LinkedList.dir/Link.cpp.o.requires

.PHONY : CMakeFiles/LinkedList.dir/requires

CMakeFiles/LinkedList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinkedList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinkedList.dir/clean

CMakeFiles/LinkedList.dir/depend:
	cd /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug /root/CLionProjects/gitrepos/C-/MyCodeSchool/LinkedList/cmake-build-debug/CMakeFiles/LinkedList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkedList.dir/depend

