# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mystte/rendu/audiowire/Perso/Player

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mystte/rendu/audiowire/Perso/Player

# Include any dependencies generated for this target.
include tests/CMakeFiles/test_main.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/test_main.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/test_main.dir/flags.make

tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o: tests/CMakeFiles/test_main.dir/flags.make
tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o: tests/qrc_testdata.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_main.dir/qrc_testdata.cxx.o -c /home/mystte/rendu/audiowire/Perso/Player/tests/qrc_testdata.cxx

tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_main.dir/qrc_testdata.cxx.i"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire/Perso/Player/tests/qrc_testdata.cxx > CMakeFiles/test_main.dir/qrc_testdata.cxx.i

tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_main.dir/qrc_testdata.cxx.s"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire/Perso/Player/tests/qrc_testdata.cxx -o CMakeFiles/test_main.dir/qrc_testdata.cxx.s

tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o.requires:
.PHONY : tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o.requires

tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o.provides: tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o.requires
	$(MAKE) -f tests/CMakeFiles/test_main.dir/build.make tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o.provides.build
.PHONY : tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o.provides

tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o.provides.build: tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o

tests/CMakeFiles/test_main.dir/main.cpp.o: tests/CMakeFiles/test_main.dir/flags.make
tests/CMakeFiles/test_main.dir/main.cpp.o: tests/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/test_main.dir/main.cpp.o"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_main.dir/main.cpp.o -c /home/mystte/rendu/audiowire/Perso/Player/tests/main.cpp

tests/CMakeFiles/test_main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_main.dir/main.cpp.i"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire/Perso/Player/tests/main.cpp > CMakeFiles/test_main.dir/main.cpp.i

tests/CMakeFiles/test_main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_main.dir/main.cpp.s"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire/Perso/Player/tests/main.cpp -o CMakeFiles/test_main.dir/main.cpp.s

tests/CMakeFiles/test_main.dir/main.cpp.o.requires:
.PHONY : tests/CMakeFiles/test_main.dir/main.cpp.o.requires

tests/CMakeFiles/test_main.dir/main.cpp.o.provides: tests/CMakeFiles/test_main.dir/main.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/test_main.dir/build.make tests/CMakeFiles/test_main.dir/main.cpp.o.provides.build
.PHONY : tests/CMakeFiles/test_main.dir/main.cpp.o.provides

tests/CMakeFiles/test_main.dir/main.cpp.o.provides.build: tests/CMakeFiles/test_main.dir/main.cpp.o

tests/qrc_testdata.cxx: tests/data/beep.flac
tests/qrc_testdata.cxx: tests/data/beep.mp3
tests/qrc_testdata.cxx: tests/data/beep.ogg
tests/qrc_testdata.cxx: tests/data/beep.spx
tests/qrc_testdata.cxx: tests/data/beep.wav
tests/qrc_testdata.cxx: tests/data/beep.wma
tests/qrc_testdata.cxx: tests/data/beep.m4a
tests/qrc_testdata.cxx: tests/data/brokensong.cue
tests/qrc_testdata.cxx: tests/data/fmpsplaycount.mp3
tests/qrc_testdata.cxx: tests/data/fmpsplaycountboth.mp3
tests/qrc_testdata.cxx: tests/data/fmpsplaycountuser.mp3
tests/qrc_testdata.cxx: tests/data/fmpsrating.mp3
tests/qrc_testdata.cxx: tests/data/fmpsratingboth.mp3
tests/qrc_testdata.cxx: tests/data/fmpsratinguser.mp3
tests/qrc_testdata.cxx: tests/data/fullmetadata.cue
tests/qrc_testdata.cxx: tests/data/manyfiles.cue
tests/qrc_testdata.cxx: tests/data/manyfilesbroken.cue
tests/qrc_testdata.cxx: tests/data/onesong.cue
tests/qrc_testdata.cxx: tests/data/pls_one.pls
tests/qrc_testdata.cxx: tests/data/pls_somafm.pls
tests/qrc_testdata.cxx: tests/data/secretagent.asx
tests/qrc_testdata.cxx: tests/data/secretagent.pls
tests/qrc_testdata.cxx: tests/data/test.m3u
tests/qrc_testdata.cxx: tests/data/test.xspf
tests/qrc_testdata.cxx: tests/data/test.asx
tests/qrc_testdata.cxx: tests/data/test.asxini
tests/qrc_testdata.cxx: tests/data/twosongs.cue
tests/qrc_testdata.cxx: tests/data/withdatafiles.cue
tests/qrc_testdata.cxx: tests/data/testdata.qrc.depends
tests/qrc_testdata.cxx: tests/data/testdata.qrc
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Generating qrc_testdata.cxx"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/rcc -name testdata -o /home/mystte/rendu/audiowire/Perso/Player/tests/qrc_testdata.cxx /home/mystte/rendu/audiowire/Perso/Player/tests/data/testdata.qrc

# Object files for target test_main
test_main_OBJECTS = \
"CMakeFiles/test_main.dir/qrc_testdata.cxx.o" \
"CMakeFiles/test_main.dir/main.cpp.o"

# External object files for target test_main
test_main_EXTERNAL_OBJECTS =

tests/libtest_main.a: tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o
tests/libtest_main.a: tests/CMakeFiles/test_main.dir/main.cpp.o
tests/libtest_main.a: tests/CMakeFiles/test_main.dir/build.make
tests/libtest_main.a: tests/CMakeFiles/test_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libtest_main.a"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_main.dir/cmake_clean_target.cmake
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/test_main.dir/build: tests/libtest_main.a
.PHONY : tests/CMakeFiles/test_main.dir/build

tests/CMakeFiles/test_main.dir/requires: tests/CMakeFiles/test_main.dir/qrc_testdata.cxx.o.requires
tests/CMakeFiles/test_main.dir/requires: tests/CMakeFiles/test_main.dir/main.cpp.o.requires
.PHONY : tests/CMakeFiles/test_main.dir/requires

tests/CMakeFiles/test_main.dir/clean:
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && $(CMAKE_COMMAND) -P CMakeFiles/test_main.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/test_main.dir/clean

tests/CMakeFiles/test_main.dir/depend: tests/qrc_testdata.cxx
	cd /home/mystte/rendu/audiowire/Perso/Player && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/tests /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/tests /home/mystte/rendu/audiowire/Perso/Player/tests/CMakeFiles/test_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/test_main.dir/depend

