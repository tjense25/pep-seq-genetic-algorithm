# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /zapps/cmake/3.6.2/bin/cmake

# The command to remove a file.
RM = /zapps/cmake/3.6.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/build

# Include any dependencies generated for this target.
include CMakeFiles/run.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/run.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/run.dir/flags.make

CMakeFiles/run.dir/main.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/run.dir/main.cpp.o"
	/apps/gcc/4.9.2/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/main.cpp.o -c /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/main.cpp

CMakeFiles/run.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/main.cpp.i"
	/apps/gcc/4.9.2/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/main.cpp > CMakeFiles/run.dir/main.cpp.i

CMakeFiles/run.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/main.cpp.s"
	/apps/gcc/4.9.2/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/main.cpp -o CMakeFiles/run.dir/main.cpp.s

CMakeFiles/run.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/run.dir/main.cpp.o.requires

CMakeFiles/run.dir/main.cpp.o.provides: CMakeFiles/run.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/run.dir/main.cpp.o.provides

CMakeFiles/run.dir/main.cpp.o.provides.build: CMakeFiles/run.dir/main.cpp.o


CMakeFiles/run.dir/Motif.cpp.o: CMakeFiles/run.dir/flags.make
CMakeFiles/run.dir/Motif.cpp.o: ../Motif.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/run.dir/Motif.cpp.o"
	/apps/gcc/4.9.2/bin/g++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/run.dir/Motif.cpp.o -c /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/Motif.cpp

CMakeFiles/run.dir/Motif.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/run.dir/Motif.cpp.i"
	/apps/gcc/4.9.2/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/Motif.cpp > CMakeFiles/run.dir/Motif.cpp.i

CMakeFiles/run.dir/Motif.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/run.dir/Motif.cpp.s"
	/apps/gcc/4.9.2/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/Motif.cpp -o CMakeFiles/run.dir/Motif.cpp.s

CMakeFiles/run.dir/Motif.cpp.o.requires:

.PHONY : CMakeFiles/run.dir/Motif.cpp.o.requires

CMakeFiles/run.dir/Motif.cpp.o.provides: CMakeFiles/run.dir/Motif.cpp.o.requires
	$(MAKE) -f CMakeFiles/run.dir/build.make CMakeFiles/run.dir/Motif.cpp.o.provides.build
.PHONY : CMakeFiles/run.dir/Motif.cpp.o.provides

CMakeFiles/run.dir/Motif.cpp.o.provides.build: CMakeFiles/run.dir/Motif.cpp.o


# Object files for target run
run_OBJECTS = \
"CMakeFiles/run.dir/main.cpp.o" \
"CMakeFiles/run.dir/Motif.cpp.o"

# External object files for target run
run_EXTERNAL_OBJECTS =

run: CMakeFiles/run.dir/main.cpp.o
run: CMakeFiles/run.dir/Motif.cpp.o
run: CMakeFiles/run.dir/build.make
run: CMakeFiles/run.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable run"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/run.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/run.dir/build: run

.PHONY : CMakeFiles/run.dir/build

CMakeFiles/run.dir/requires: CMakeFiles/run.dir/main.cpp.o.requires
CMakeFiles/run.dir/requires: CMakeFiles/run.dir/Motif.cpp.o.requires

.PHONY : CMakeFiles/run.dir/requires

CMakeFiles/run.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run.dir/clean

CMakeFiles/run.dir/depend:
	cd /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/build /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/build /fslhome/tjense25/fsl_groups/fslg_genome/pep_seq/genetic-algoirthm/build/CMakeFiles/run.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/run.dir/depend
