# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/clion/114/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/114/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/boil/TrinityCore/TrinityCore-TDB335.20071

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug

# Include any dependencies generated for this target.
include src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/depend.make

# Include the progress variables for this target.
include src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/progress.make

# Include the compile flags for this target's objects.
include src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/flags.make

src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.o: src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/flags.make
src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.o: ../src/tools/vmap4_assembler/VMapAssembler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.o"
	cd /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/src/tools/vmap4_assembler && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.o -c /home/boil/TrinityCore/TrinityCore-TDB335.20071/src/tools/vmap4_assembler/VMapAssembler.cpp

src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.i"
	cd /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/src/tools/vmap4_assembler && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/boil/TrinityCore/TrinityCore-TDB335.20071/src/tools/vmap4_assembler/VMapAssembler.cpp > CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.i

src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.s"
	cd /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/src/tools/vmap4_assembler && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/boil/TrinityCore/TrinityCore-TDB335.20071/src/tools/vmap4_assembler/VMapAssembler.cpp -o CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.s

# Object files for target vmap4assembler
vmap4assembler_OBJECTS = \
"CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.o"

# External object files for target vmap4assembler
vmap4assembler_EXTERNAL_OBJECTS =

src/tools/vmap4_assembler/vmap4assembler: src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/VMapAssembler.cpp.o
src/tools/vmap4_assembler/vmap4assembler: src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/build.make
src/tools/vmap4_assembler/vmap4assembler: src/common/libcommon.a
src/tools/vmap4_assembler/vmap4assembler: dep/argon2/libargon2.a
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libboost_atomic.so.1.71.0
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libboost_program_options.so.1.71.0
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.71.0
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
src/tools/vmap4_assembler/vmap4assembler: dep/fmt/libfmt.a
src/tools/vmap4_assembler/vmap4assembler: dep/g3dlite/libg3dlib.a
src/tools/vmap4_assembler/vmap4assembler: dep/recastnavigation/Detour/libDetour.a
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libz.so
src/tools/vmap4_assembler/vmap4assembler: dep/SFMT/libsfmt.a
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libssl.so
src/tools/vmap4_assembler/vmap4assembler: /usr/lib/x86_64-linux-gnu/libcrypto.so
src/tools/vmap4_assembler/vmap4assembler: dep/jemalloc/libjemalloc.a
src/tools/vmap4_assembler/vmap4assembler: src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vmap4assembler"
	cd /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/src/tools/vmap4_assembler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vmap4assembler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/build: src/tools/vmap4_assembler/vmap4assembler

.PHONY : src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/build

src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/clean:
	cd /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/src/tools/vmap4_assembler && $(CMAKE_COMMAND) -P CMakeFiles/vmap4assembler.dir/cmake_clean.cmake
.PHONY : src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/clean

src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/depend:
	cd /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/boil/TrinityCore/TrinityCore-TDB335.20071 /home/boil/TrinityCore/TrinityCore-TDB335.20071/src/tools/vmap4_assembler /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/src/tools/vmap4_assembler /home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/tools/vmap4_assembler/CMakeFiles/vmap4assembler.dir/depend
