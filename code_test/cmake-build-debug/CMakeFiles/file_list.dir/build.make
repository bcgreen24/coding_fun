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
CMAKE_COMMAND = /home/bcgreen/clion-2020.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/bcgreen/clion-2020.2.1/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bcgreen/src/code_test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bcgreen/src/code_test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/file_list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/file_list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/file_list.dir/flags.make

CMakeFiles/file_list.dir/file_list.cpp.o: CMakeFiles/file_list.dir/flags.make
CMakeFiles/file_list.dir/file_list.cpp.o: ../file_list.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bcgreen/src/code_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/file_list.dir/file_list.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/file_list.dir/file_list.cpp.o -c /home/bcgreen/src/code_test/file_list.cpp

CMakeFiles/file_list.dir/file_list.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/file_list.dir/file_list.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bcgreen/src/code_test/file_list.cpp > CMakeFiles/file_list.dir/file_list.cpp.i

CMakeFiles/file_list.dir/file_list.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/file_list.dir/file_list.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bcgreen/src/code_test/file_list.cpp -o CMakeFiles/file_list.dir/file_list.cpp.s

# Object files for target file_list
file_list_OBJECTS = \
"CMakeFiles/file_list.dir/file_list.cpp.o"

# External object files for target file_list
file_list_EXTERNAL_OBJECTS =

file_list: CMakeFiles/file_list.dir/file_list.cpp.o
file_list: CMakeFiles/file_list.dir/build.make
file_list: CMakeFiles/file_list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bcgreen/src/code_test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable file_list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/file_list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/file_list.dir/build: file_list

.PHONY : CMakeFiles/file_list.dir/build

CMakeFiles/file_list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/file_list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/file_list.dir/clean

CMakeFiles/file_list.dir/depend:
	cd /home/bcgreen/src/code_test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bcgreen/src/code_test /home/bcgreen/src/code_test /home/bcgreen/src/code_test/cmake-build-debug /home/bcgreen/src/code_test/cmake-build-debug /home/bcgreen/src/code_test/cmake-build-debug/CMakeFiles/file_list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/file_list.dir/depend

