# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\chen\OneDrive\learnCC

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\chen\OneDrive\learnCC\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/learnCC.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/learnCC.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/learnCC.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learnCC.dir/flags.make

CMakeFiles/learnCC.dir/main.cpp.obj: CMakeFiles/learnCC.dir/flags.make
CMakeFiles/learnCC.dir/main.cpp.obj: ../main.cpp
CMakeFiles/learnCC.dir/main.cpp.obj: CMakeFiles/learnCC.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\chen\OneDrive\learnCC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/learnCC.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/learnCC.dir/main.cpp.obj -MF CMakeFiles\learnCC.dir\main.cpp.obj.d -o CMakeFiles\learnCC.dir\main.cpp.obj -c C:\Users\chen\OneDrive\learnCC\main.cpp

CMakeFiles/learnCC.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learnCC.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\chen\OneDrive\learnCC\main.cpp > CMakeFiles\learnCC.dir\main.cpp.i

CMakeFiles/learnCC.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learnCC.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\chen\OneDrive\learnCC\main.cpp -o CMakeFiles\learnCC.dir\main.cpp.s

# Object files for target learnCC
learnCC_OBJECTS = \
"CMakeFiles/learnCC.dir/main.cpp.obj"

# External object files for target learnCC
learnCC_EXTERNAL_OBJECTS =

learnCC.exe: CMakeFiles/learnCC.dir/main.cpp.obj
learnCC.exe: CMakeFiles/learnCC.dir/build.make
learnCC.exe: CMakeFiles/learnCC.dir/linklibs.rsp
learnCC.exe: CMakeFiles/learnCC.dir/objects1.rsp
learnCC.exe: CMakeFiles/learnCC.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\chen\OneDrive\learnCC\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable learnCC.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\learnCC.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learnCC.dir/build: learnCC.exe
.PHONY : CMakeFiles/learnCC.dir/build

CMakeFiles/learnCC.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\learnCC.dir\cmake_clean.cmake
.PHONY : CMakeFiles/learnCC.dir/clean

CMakeFiles/learnCC.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\chen\OneDrive\learnCC C:\Users\chen\OneDrive\learnCC C:\Users\chen\OneDrive\learnCC\cmake-build-debug C:\Users\chen\OneDrive\learnCC\cmake-build-debug C:\Users\chen\OneDrive\learnCC\cmake-build-debug\CMakeFiles\learnCC.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/learnCC.dir/depend

