# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/250/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/250/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/timus/CLionProjects/pertemuann7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/timus/CLionProjects/pertemuann7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pertemuann7.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pertemuann7.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pertemuann7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pertemuann7.dir/flags.make

CMakeFiles/pertemuann7.dir/main.c.o: CMakeFiles/pertemuann7.dir/flags.make
CMakeFiles/pertemuann7.dir/main.c.o: /home/timus/CLionProjects/pertemuann7/main.c
CMakeFiles/pertemuann7.dir/main.c.o: CMakeFiles/pertemuann7.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/timus/CLionProjects/pertemuann7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pertemuann7.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/pertemuann7.dir/main.c.o -MF CMakeFiles/pertemuann7.dir/main.c.o.d -o CMakeFiles/pertemuann7.dir/main.c.o -c /home/timus/CLionProjects/pertemuann7/main.c

CMakeFiles/pertemuann7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pertemuann7.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/timus/CLionProjects/pertemuann7/main.c > CMakeFiles/pertemuann7.dir/main.c.i

CMakeFiles/pertemuann7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pertemuann7.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/timus/CLionProjects/pertemuann7/main.c -o CMakeFiles/pertemuann7.dir/main.c.s

# Object files for target pertemuann7
pertemuann7_OBJECTS = \
"CMakeFiles/pertemuann7.dir/main.c.o"

# External object files for target pertemuann7
pertemuann7_EXTERNAL_OBJECTS =

pertemuann7: CMakeFiles/pertemuann7.dir/main.c.o
pertemuann7: CMakeFiles/pertemuann7.dir/build.make
pertemuann7: CMakeFiles/pertemuann7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/timus/CLionProjects/pertemuann7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable pertemuann7"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pertemuann7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pertemuann7.dir/build: pertemuann7
.PHONY : CMakeFiles/pertemuann7.dir/build

CMakeFiles/pertemuann7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pertemuann7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pertemuann7.dir/clean

CMakeFiles/pertemuann7.dir/depend:
	cd /home/timus/CLionProjects/pertemuann7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/timus/CLionProjects/pertemuann7 /home/timus/CLionProjects/pertemuann7 /home/timus/CLionProjects/pertemuann7/cmake-build-debug /home/timus/CLionProjects/pertemuann7/cmake-build-debug /home/timus/CLionProjects/pertemuann7/cmake-build-debug/CMakeFiles/pertemuann7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pertemuann7.dir/depend
