# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = G:\projects\cplus\LIBRARY\cmake_multiple_bound

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = G:\projects\cplus\LIBRARY\cmake_multiple_bound\build

# Include any dependencies generated for this target.
include CMakeFiles/cProject.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cProject.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cProject.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cProject.dir/flags.make

CMakeFiles/cProject.dir/main.cpp.obj: CMakeFiles/cProject.dir/flags.make
CMakeFiles/cProject.dir/main.cpp.obj: CMakeFiles/cProject.dir/includes_CXX.rsp
CMakeFiles/cProject.dir/main.cpp.obj: G:/projects/cplus/LIBRARY/cmake_multiple_bound/main.cpp
CMakeFiles/cProject.dir/main.cpp.obj: CMakeFiles/cProject.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=G:\projects\cplus\LIBRARY\cmake_multiple_bound\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cProject.dir/main.cpp.obj"
	G:\programs\msys\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cProject.dir/main.cpp.obj -MF CMakeFiles\cProject.dir\main.cpp.obj.d -o CMakeFiles\cProject.dir\main.cpp.obj -c G:\projects\cplus\LIBRARY\cmake_multiple_bound\main.cpp

CMakeFiles/cProject.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cProject.dir/main.cpp.i"
	G:\programs\msys\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E G:\projects\cplus\LIBRARY\cmake_multiple_bound\main.cpp > CMakeFiles\cProject.dir\main.cpp.i

CMakeFiles/cProject.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cProject.dir/main.cpp.s"
	G:\programs\msys\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S G:\projects\cplus\LIBRARY\cmake_multiple_bound\main.cpp -o CMakeFiles\cProject.dir\main.cpp.s

# Object files for target cProject
cProject_OBJECTS = \
"CMakeFiles/cProject.dir/main.cpp.obj"

# External object files for target cProject
cProject_EXTERNAL_OBJECTS =

cProject.exe: CMakeFiles/cProject.dir/main.cpp.obj
cProject.exe: CMakeFiles/cProject.dir/build.make
cProject.exe: test/libtest.a
cProject.exe: CMakeFiles/cProject.dir/linkLibs.rsp
cProject.exe: CMakeFiles/cProject.dir/objects1.rsp
cProject.exe: CMakeFiles/cProject.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=G:\projects\cplus\LIBRARY\cmake_multiple_bound\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cProject.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cProject.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cProject.dir/build: cProject.exe
.PHONY : CMakeFiles/cProject.dir/build

CMakeFiles/cProject.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cProject.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cProject.dir/clean

CMakeFiles/cProject.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" G:\projects\cplus\LIBRARY\cmake_multiple_bound G:\projects\cplus\LIBRARY\cmake_multiple_bound G:\projects\cplus\LIBRARY\cmake_multiple_bound\build G:\projects\cplus\LIBRARY\cmake_multiple_bound\build G:\projects\cplus\LIBRARY\cmake_multiple_bound\build\CMakeFiles\cProject.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cProject.dir/depend

