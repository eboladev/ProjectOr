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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mystte/rendu/audiowire-dev

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mystte/rendu/audiowire-dev

# Include any dependencies generated for this target.
include ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/depend.make

# Include the progress variables for this target.
include ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/progress.make

# Include the compile flags for this target's objects.
include ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/flags.make

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/flags.make
ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o: ext/AudioWire-tagreader/fmpsparser.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire-dev/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o -c /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/fmpsparser.cpp

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.i"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/fmpsparser.cpp > CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.i

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.s"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/fmpsparser.cpp -o CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.s

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o.requires:
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o.requires

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o.provides: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o.requires
	$(MAKE) -f ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/build.make ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o.provides.build
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o.provides

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o.provides.build: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/flags.make
ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o: ext/AudioWire-tagreader/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire-dev/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AudioWire-tagreader.dir/main.cpp.o -c /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/main.cpp

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AudioWire-tagreader.dir/main.cpp.i"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/main.cpp > CMakeFiles/AudioWire-tagreader.dir/main.cpp.i

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AudioWire-tagreader.dir/main.cpp.s"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/main.cpp -o CMakeFiles/AudioWire-tagreader.dir/main.cpp.s

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o.requires:
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o.requires

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o.provides: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o.requires
	$(MAKE) -f ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/build.make ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o.provides.build
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o.provides

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o.provides.build: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/flags.make
ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o: ext/AudioWire-tagreader/tagreaderworker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire-dev/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o -c /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/tagreaderworker.cpp

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.i"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/tagreaderworker.cpp > CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.i

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.s"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/tagreaderworker.cpp -o CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.s

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o.requires:
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o.requires

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o.provides: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o.requires
	$(MAKE) -f ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/build.make ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o.provides.build
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o.provides

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o.provides.build: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/flags.make
ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o: ext/AudioWire-tagreader/googledrivestream.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire-dev/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o -c /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/googledrivestream.cpp

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.i"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/googledrivestream.cpp > CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.i

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.s"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/googledrivestream.cpp -o CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.s

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o.requires:
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o.requires

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o.provides: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o.requires
	$(MAKE) -f ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/build.make ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o.provides.build
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o.provides

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o.provides.build: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o

# Object files for target AudioWire-tagreader
AudioWire__tagreader_OBJECTS = \
"CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o" \
"CMakeFiles/AudioWire-tagreader.dir/main.cpp.o" \
"CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o" \
"CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o"

# External object files for target AudioWire-tagreader
AudioWire__tagreader_EXTERNAL_OBJECTS =

AudioWire-tagreader: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o
AudioWire-tagreader: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o
AudioWire-tagreader: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o
AudioWire-tagreader: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o
AudioWire-tagreader: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/build.make
AudioWire-tagreader: /usr/lib/i386-linux-gnu/libQtCore.so
AudioWire-tagreader: /usr/lib/i386-linux-gnu/libQtNetwork.so
AudioWire-tagreader: ext/libAudioWire-common/liblibAudioWire-common.a
AudioWire-tagreader: ext/libAudioWire-tagreader/liblibAudioWire-tagreader.a
AudioWire-tagreader: ext/libAudioWire-common/liblibAudioWire-common.a
AudioWire-tagreader: /usr/lib/libprotobuf.so
AudioWire-tagreader: 3rdparty/universalchardet/libchardet.a
AudioWire-tagreader: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../AudioWire-tagreader"
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AudioWire-tagreader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/build: AudioWire-tagreader
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/build

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/requires: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/fmpsparser.cpp.o.requires
ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/requires: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/main.cpp.o.requires
ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/requires: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/tagreaderworker.cpp.o.requires
ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/requires: ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/googledrivestream.cpp.o.requires
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/requires

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/clean:
	cd /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader && $(CMAKE_COMMAND) -P CMakeFiles/AudioWire-tagreader.dir/cmake_clean.cmake
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/clean

ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/depend:
	cd /home/mystte/rendu/audiowire-dev && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mystte/rendu/audiowire-dev /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader /home/mystte/rendu/audiowire-dev /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader /home/mystte/rendu/audiowire-dev/ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ext/AudioWire-tagreader/CMakeFiles/AudioWire-tagreader.dir/depend

