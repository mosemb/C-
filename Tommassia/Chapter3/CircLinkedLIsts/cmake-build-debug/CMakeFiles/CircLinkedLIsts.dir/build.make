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
CMAKE_SOURCE_DIR = /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CircLinkedLIsts.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CircLinkedLIsts.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CircLinkedLIsts.dir/flags.make

CMakeFiles/CircLinkedLIsts.dir/main.cpp.o: CMakeFiles/CircLinkedLIsts.dir/flags.make
CMakeFiles/CircLinkedLIsts.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CircLinkedLIsts.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CircLinkedLIsts.dir/main.cpp.o -c /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/main.cpp

CMakeFiles/CircLinkedLIsts.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CircLinkedLIsts.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/main.cpp > CMakeFiles/CircLinkedLIsts.dir/main.cpp.i

CMakeFiles/CircLinkedLIsts.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CircLinkedLIsts.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/main.cpp -o CMakeFiles/CircLinkedLIsts.dir/main.cpp.s

CMakeFiles/CircLinkedLIsts.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/CircLinkedLIsts.dir/main.cpp.o.requires

CMakeFiles/CircLinkedLIsts.dir/main.cpp.o.provides: CMakeFiles/CircLinkedLIsts.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/CircLinkedLIsts.dir/build.make CMakeFiles/CircLinkedLIsts.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/CircLinkedLIsts.dir/main.cpp.o.provides

CMakeFiles/CircLinkedLIsts.dir/main.cpp.o.provides.build: CMakeFiles/CircLinkedLIsts.dir/main.cpp.o


CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o: CMakeFiles/CircLinkedLIsts.dir/flags.make
CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o: ../CNode.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o -c /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/CNode.cpp

CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/CNode.cpp > CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.i

CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/CNode.cpp -o CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.s

CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o.requires:

.PHONY : CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o.requires

CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o.provides: CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o.requires
	$(MAKE) -f CMakeFiles/CircLinkedLIsts.dir/build.make CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o.provides.build
.PHONY : CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o.provides

CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o.provides.build: CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o


CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o: CMakeFiles/CircLinkedLIsts.dir/flags.make
CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o: ../ClinkedList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o -c /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/ClinkedList.cpp

CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/ClinkedList.cpp > CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.i

CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/ClinkedList.cpp -o CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.s

CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o.requires:

.PHONY : CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o.requires

CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o.provides: CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o.requires
	$(MAKE) -f CMakeFiles/CircLinkedLIsts.dir/build.make CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o.provides.build
.PHONY : CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o.provides

CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o.provides.build: CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o


# Object files for target CircLinkedLIsts
CircLinkedLIsts_OBJECTS = \
"CMakeFiles/CircLinkedLIsts.dir/main.cpp.o" \
"CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o" \
"CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o"

# External object files for target CircLinkedLIsts
CircLinkedLIsts_EXTERNAL_OBJECTS =

CircLinkedLIsts: CMakeFiles/CircLinkedLIsts.dir/main.cpp.o
CircLinkedLIsts: CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o
CircLinkedLIsts: CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o
CircLinkedLIsts: CMakeFiles/CircLinkedLIsts.dir/build.make
CircLinkedLIsts: CMakeFiles/CircLinkedLIsts.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable CircLinkedLIsts"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CircLinkedLIsts.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CircLinkedLIsts.dir/build: CircLinkedLIsts

.PHONY : CMakeFiles/CircLinkedLIsts.dir/build

CMakeFiles/CircLinkedLIsts.dir/requires: CMakeFiles/CircLinkedLIsts.dir/main.cpp.o.requires
CMakeFiles/CircLinkedLIsts.dir/requires: CMakeFiles/CircLinkedLIsts.dir/CNode.cpp.o.requires
CMakeFiles/CircLinkedLIsts.dir/requires: CMakeFiles/CircLinkedLIsts.dir/ClinkedList.cpp.o.requires

.PHONY : CMakeFiles/CircLinkedLIsts.dir/requires

CMakeFiles/CircLinkedLIsts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CircLinkedLIsts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CircLinkedLIsts.dir/clean

CMakeFiles/CircLinkedLIsts.dir/depend:
	cd /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug /root/CLionProjects/gitrepos/C-/Tommassia/Chapter3/CircLinkedLIsts/cmake-build-debug/CMakeFiles/CircLinkedLIsts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CircLinkedLIsts.dir/depend

