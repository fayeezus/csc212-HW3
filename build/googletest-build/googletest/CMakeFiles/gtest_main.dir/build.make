# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.13.4/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.13.4/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fayeezus/csc212-HW3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fayeezus/csc212-HW3/build

# Include any dependencies generated for this target.
include googletest-build/googletest/CMakeFiles/gtest_main.dir/depend.make

# Include the progress variables for this target.
include googletest-build/googletest/CMakeFiles/gtest_main.dir/progress.make

# Include the compile flags for this target's objects.
include googletest-build/googletest/CMakeFiles/gtest_main.dir/flags.make

googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: googletest-build/googletest/CMakeFiles/gtest_main.dir/flags.make
googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o: googletest-src/googletest/src/gtest_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/fayeezus/csc212-HW3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"
	cd /Users/fayeezus/csc212-HW3/build/googletest-build/googletest && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.o -c /Users/fayeezus/csc212-HW3/build/googletest-src/googletest/src/gtest_main.cc

googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gtest_main.dir/src/gtest_main.cc.i"
	cd /Users/fayeezus/csc212-HW3/build/googletest-build/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fayeezus/csc212-HW3/build/googletest-src/googletest/src/gtest_main.cc > CMakeFiles/gtest_main.dir/src/gtest_main.cc.i

googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gtest_main.dir/src/gtest_main.cc.s"
	cd /Users/fayeezus/csc212-HW3/build/googletest-build/googletest && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fayeezus/csc212-HW3/build/googletest-src/googletest/src/gtest_main.cc -o CMakeFiles/gtest_main.dir/src/gtest_main.cc.s

# Object files for target gtest_main
gtest_main_OBJECTS = \
"CMakeFiles/gtest_main.dir/src/gtest_main.cc.o"

# External object files for target gtest_main
gtest_main_EXTERNAL_OBJECTS =

lib/libgtest_main.a: googletest-build/googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
lib/libgtest_main.a: googletest-build/googletest/CMakeFiles/gtest_main.dir/build.make
lib/libgtest_main.a: googletest-build/googletest/CMakeFiles/gtest_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/fayeezus/csc212-HW3/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libgtest_main.a"
	cd /Users/fayeezus/csc212-HW3/build/googletest-build/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean_target.cmake
	cd /Users/fayeezus/csc212-HW3/build/googletest-build/googletest && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gtest_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
googletest-build/googletest/CMakeFiles/gtest_main.dir/build: lib/libgtest_main.a

.PHONY : googletest-build/googletest/CMakeFiles/gtest_main.dir/build

googletest-build/googletest/CMakeFiles/gtest_main.dir/clean:
	cd /Users/fayeezus/csc212-HW3/build/googletest-build/googletest && $(CMAKE_COMMAND) -P CMakeFiles/gtest_main.dir/cmake_clean.cmake
.PHONY : googletest-build/googletest/CMakeFiles/gtest_main.dir/clean

googletest-build/googletest/CMakeFiles/gtest_main.dir/depend:
	cd /Users/fayeezus/csc212-HW3/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fayeezus/csc212-HW3 /Users/fayeezus/csc212-HW3/build/googletest-src/googletest /Users/fayeezus/csc212-HW3/build /Users/fayeezus/csc212-HW3/build/googletest-build/googletest /Users/fayeezus/csc212-HW3/build/googletest-build/googletest/CMakeFiles/gtest_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : googletest-build/googletest/CMakeFiles/gtest_main.dir/depend

