# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\mauri\CLionProjects\Project1attempt2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\mauri\CLionProjects\Project1attempt2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Project1attempt2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Project1attempt2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project1attempt2.dir/flags.make

CMakeFiles/Project1attempt2.dir/main.cpp.obj: CMakeFiles/Project1attempt2.dir/flags.make
CMakeFiles/Project1attempt2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\mauri\CLionProjects\Project1attempt2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project1attempt2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Project1attempt2.dir\main.cpp.obj -c C:\Users\mauri\CLionProjects\Project1attempt2\main.cpp

CMakeFiles/Project1attempt2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project1attempt2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\mauri\CLionProjects\Project1attempt2\main.cpp > CMakeFiles\Project1attempt2.dir\main.cpp.i

CMakeFiles/Project1attempt2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project1attempt2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\mauri\CLionProjects\Project1attempt2\main.cpp -o CMakeFiles\Project1attempt2.dir\main.cpp.s

# Object files for target Project1attempt2
Project1attempt2_OBJECTS = \
"CMakeFiles/Project1attempt2.dir/main.cpp.obj"

# External object files for target Project1attempt2
Project1attempt2_EXTERNAL_OBJECTS =

Project1attempt2.exe: CMakeFiles/Project1attempt2.dir/main.cpp.obj
Project1attempt2.exe: CMakeFiles/Project1attempt2.dir/build.make
Project1attempt2.exe: CMakeFiles/Project1attempt2.dir/linklibs.rsp
Project1attempt2.exe: CMakeFiles/Project1attempt2.dir/objects1.rsp
Project1attempt2.exe: CMakeFiles/Project1attempt2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\mauri\CLionProjects\Project1attempt2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Project1attempt2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Project1attempt2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project1attempt2.dir/build: Project1attempt2.exe

.PHONY : CMakeFiles/Project1attempt2.dir/build

CMakeFiles/Project1attempt2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Project1attempt2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Project1attempt2.dir/clean

CMakeFiles/Project1attempt2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\mauri\CLionProjects\Project1attempt2 C:\Users\mauri\CLionProjects\Project1attempt2 C:\Users\mauri\CLionProjects\Project1attempt2\cmake-build-debug C:\Users\mauri\CLionProjects\Project1attempt2\cmake-build-debug C:\Users\mauri\CLionProjects\Project1attempt2\cmake-build-debug\CMakeFiles\Project1attempt2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project1attempt2.dir/depend

