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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/boil/GithubRepository/ServerCluster

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/boil/GithubRepository/ServerCluster/build

# Include any dependencies generated for this target.
include dep/argon2/CMakeFiles/argon2.dir/depend.make

# Include the progress variables for this target.
include dep/argon2/CMakeFiles/argon2.dir/progress.make

# Include the compile flags for this target's objects.
include dep/argon2/CMakeFiles/argon2.dir/flags.make

dep/argon2/CMakeFiles/argon2.dir/argon2/argon2.c.o: dep/argon2/CMakeFiles/argon2.dir/flags.make
dep/argon2/CMakeFiles/argon2.dir/argon2/argon2.c.o: ../dep/argon2/argon2/argon2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boil/GithubRepository/ServerCluster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object dep/argon2/CMakeFiles/argon2.dir/argon2/argon2.c.o"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/argon2.dir/argon2/argon2.c.o   -c /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/argon2.c

dep/argon2/CMakeFiles/argon2.dir/argon2/argon2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/argon2.dir/argon2/argon2.c.i"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/argon2.c > CMakeFiles/argon2.dir/argon2/argon2.c.i

dep/argon2/CMakeFiles/argon2.dir/argon2/argon2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/argon2.dir/argon2/argon2.c.s"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/argon2.c -o CMakeFiles/argon2.dir/argon2/argon2.c.s

dep/argon2/CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.o: dep/argon2/CMakeFiles/argon2.dir/flags.make
dep/argon2/CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.o: ../dep/argon2/argon2/blake2/blake2b.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boil/GithubRepository/ServerCluster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object dep/argon2/CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.o"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.o   -c /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/blake2/blake2b.c

dep/argon2/CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.i"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/blake2/blake2b.c > CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.i

dep/argon2/CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.s"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/blake2/blake2b.c -o CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.s

dep/argon2/CMakeFiles/argon2.dir/argon2/core.c.o: dep/argon2/CMakeFiles/argon2.dir/flags.make
dep/argon2/CMakeFiles/argon2.dir/argon2/core.c.o: ../dep/argon2/argon2/core.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boil/GithubRepository/ServerCluster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object dep/argon2/CMakeFiles/argon2.dir/argon2/core.c.o"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/argon2.dir/argon2/core.c.o   -c /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/core.c

dep/argon2/CMakeFiles/argon2.dir/argon2/core.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/argon2.dir/argon2/core.c.i"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/core.c > CMakeFiles/argon2.dir/argon2/core.c.i

dep/argon2/CMakeFiles/argon2.dir/argon2/core.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/argon2.dir/argon2/core.c.s"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/core.c -o CMakeFiles/argon2.dir/argon2/core.c.s

dep/argon2/CMakeFiles/argon2.dir/argon2/encoding.c.o: dep/argon2/CMakeFiles/argon2.dir/flags.make
dep/argon2/CMakeFiles/argon2.dir/argon2/encoding.c.o: ../dep/argon2/argon2/encoding.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boil/GithubRepository/ServerCluster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object dep/argon2/CMakeFiles/argon2.dir/argon2/encoding.c.o"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/argon2.dir/argon2/encoding.c.o   -c /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/encoding.c

dep/argon2/CMakeFiles/argon2.dir/argon2/encoding.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/argon2.dir/argon2/encoding.c.i"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/encoding.c > CMakeFiles/argon2.dir/argon2/encoding.c.i

dep/argon2/CMakeFiles/argon2.dir/argon2/encoding.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/argon2.dir/argon2/encoding.c.s"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/encoding.c -o CMakeFiles/argon2.dir/argon2/encoding.c.s

dep/argon2/CMakeFiles/argon2.dir/argon2/opt.c.o: dep/argon2/CMakeFiles/argon2.dir/flags.make
dep/argon2/CMakeFiles/argon2.dir/argon2/opt.c.o: ../dep/argon2/argon2/opt.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boil/GithubRepository/ServerCluster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object dep/argon2/CMakeFiles/argon2.dir/argon2/opt.c.o"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/argon2.dir/argon2/opt.c.o   -c /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/opt.c

dep/argon2/CMakeFiles/argon2.dir/argon2/opt.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/argon2.dir/argon2/opt.c.i"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/opt.c > CMakeFiles/argon2.dir/argon2/opt.c.i

dep/argon2/CMakeFiles/argon2.dir/argon2/opt.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/argon2.dir/argon2/opt.c.s"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/opt.c -o CMakeFiles/argon2.dir/argon2/opt.c.s

dep/argon2/CMakeFiles/argon2.dir/argon2/thread.c.o: dep/argon2/CMakeFiles/argon2.dir/flags.make
dep/argon2/CMakeFiles/argon2.dir/argon2/thread.c.o: ../dep/argon2/argon2/thread.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/boil/GithubRepository/ServerCluster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object dep/argon2/CMakeFiles/argon2.dir/argon2/thread.c.o"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/argon2.dir/argon2/thread.c.o   -c /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/thread.c

dep/argon2/CMakeFiles/argon2.dir/argon2/thread.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/argon2.dir/argon2/thread.c.i"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/thread.c > CMakeFiles/argon2.dir/argon2/thread.c.i

dep/argon2/CMakeFiles/argon2.dir/argon2/thread.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/argon2.dir/argon2/thread.c.s"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && /bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/boil/GithubRepository/ServerCluster/dep/argon2/argon2/thread.c -o CMakeFiles/argon2.dir/argon2/thread.c.s

# Object files for target argon2
argon2_OBJECTS = \
"CMakeFiles/argon2.dir/argon2/argon2.c.o" \
"CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.o" \
"CMakeFiles/argon2.dir/argon2/core.c.o" \
"CMakeFiles/argon2.dir/argon2/encoding.c.o" \
"CMakeFiles/argon2.dir/argon2/opt.c.o" \
"CMakeFiles/argon2.dir/argon2/thread.c.o"

# External object files for target argon2
argon2_EXTERNAL_OBJECTS =

dep/argon2/libargon2.a: dep/argon2/CMakeFiles/argon2.dir/argon2/argon2.c.o
dep/argon2/libargon2.a: dep/argon2/CMakeFiles/argon2.dir/argon2/blake2/blake2b.c.o
dep/argon2/libargon2.a: dep/argon2/CMakeFiles/argon2.dir/argon2/core.c.o
dep/argon2/libargon2.a: dep/argon2/CMakeFiles/argon2.dir/argon2/encoding.c.o
dep/argon2/libargon2.a: dep/argon2/CMakeFiles/argon2.dir/argon2/opt.c.o
dep/argon2/libargon2.a: dep/argon2/CMakeFiles/argon2.dir/argon2/thread.c.o
dep/argon2/libargon2.a: dep/argon2/CMakeFiles/argon2.dir/build.make
dep/argon2/libargon2.a: dep/argon2/CMakeFiles/argon2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/boil/GithubRepository/ServerCluster/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library libargon2.a"
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && $(CMAKE_COMMAND) -P CMakeFiles/argon2.dir/cmake_clean_target.cmake
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/argon2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dep/argon2/CMakeFiles/argon2.dir/build: dep/argon2/libargon2.a

.PHONY : dep/argon2/CMakeFiles/argon2.dir/build

dep/argon2/CMakeFiles/argon2.dir/clean:
	cd /home/boil/GithubRepository/ServerCluster/build/dep/argon2 && $(CMAKE_COMMAND) -P CMakeFiles/argon2.dir/cmake_clean.cmake
.PHONY : dep/argon2/CMakeFiles/argon2.dir/clean

dep/argon2/CMakeFiles/argon2.dir/depend:
	cd /home/boil/GithubRepository/ServerCluster/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/boil/GithubRepository/ServerCluster /home/boil/GithubRepository/ServerCluster/dep/argon2 /home/boil/GithubRepository/ServerCluster/build /home/boil/GithubRepository/ServerCluster/build/dep/argon2 /home/boil/GithubRepository/ServerCluster/build/dep/argon2/CMakeFiles/argon2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dep/argon2/CMakeFiles/argon2.dir/depend
