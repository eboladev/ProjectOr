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
include ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/depend.make

# Include the progress variables for this target.
include ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/progress.make

# Include the compile flags for this target's objects.
include ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/flags.make

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/flags.make
ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o: ext/clementine-tagreader/fmpsparser.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o -c /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/fmpsparser.cpp

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.i"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/fmpsparser.cpp > CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.i

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.s"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/fmpsparser.cpp -o CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.s

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o.requires:
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o.requires

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o.provides: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o.requires
	$(MAKE) -f ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/build.make ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o.provides.build
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o.provides

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o.provides.build: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/flags.make
ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o: ext/clementine-tagreader/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/clementine-tagreader.dir/main.cpp.o -c /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/main.cpp

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clementine-tagreader.dir/main.cpp.i"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/main.cpp > CMakeFiles/clementine-tagreader.dir/main.cpp.i

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clementine-tagreader.dir/main.cpp.s"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/main.cpp -o CMakeFiles/clementine-tagreader.dir/main.cpp.s

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o.requires:
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o.requires

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o.provides: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o.requires
	$(MAKE) -f ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/build.make ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o.provides.build
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o.provides

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o.provides.build: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/flags.make
ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o: ext/clementine-tagreader/tagreaderworker.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o -c /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/tagreaderworker.cpp

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.i"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/tagreaderworker.cpp > CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.i

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.s"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/tagreaderworker.cpp -o CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.s

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o.requires:
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o.requires

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o.provides: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o.requires
	$(MAKE) -f ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/build.make ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o.provides.build
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o.provides

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o.provides.build: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/flags.make
ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o: ext/clementine-tagreader/googledrivestream.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o -c /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/googledrivestream.cpp

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.i"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/googledrivestream.cpp > CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.i

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.s"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/googledrivestream.cpp -o CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.s

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o.requires:
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o.requires

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o.provides: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o.requires
	$(MAKE) -f ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/build.make ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o.provides.build
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o.provides

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o.provides.build: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o

# Object files for target clementine-tagreader
clementine__tagreader_OBJECTS = \
"CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o" \
"CMakeFiles/clementine-tagreader.dir/main.cpp.o" \
"CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o" \
"CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o"

# External object files for target clementine-tagreader
clementine__tagreader_EXTERNAL_OBJECTS =

clementine-tagreader: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o
clementine-tagreader: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o
clementine-tagreader: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o
clementine-tagreader: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o
clementine-tagreader: 3rdparty/taglib/libtag.a
clementine-tagreader: /usr/lib/i386-linux-gnu/libQtCore.so
clementine-tagreader: /usr/lib/i386-linux-gnu/libQtNetwork.so
clementine-tagreader: ext/libclementine-common/liblibclementine-common.a
clementine-tagreader: ext/libclementine-tagreader/liblibclementine-tagreader.a
clementine-tagreader: ext/libclementine-common/liblibclementine-common.a
clementine-tagreader: 3rdparty/taglib/libtag.a
clementine-tagreader: /usr/lib/libprotobuf.so
clementine-tagreader: 3rdparty/universalchardet/libchardet.a
clementine-tagreader: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/build.make
clementine-tagreader: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../clementine-tagreader"
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clementine-tagreader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/build: clementine-tagreader
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/build

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/requires: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/fmpsparser.cpp.o.requires
ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/requires: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/main.cpp.o.requires
ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/requires: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/tagreaderworker.cpp.o.requires
ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/requires: ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/googledrivestream.cpp.o.requires
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/requires

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/clean:
	cd /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader && $(CMAKE_COMMAND) -P CMakeFiles/clementine-tagreader.dir/cmake_clean.cmake
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/clean

ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/depend:
	cd /home/mystte/rendu/audiowire/Perso/Player && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader /home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : ext/clementine-tagreader/CMakeFiles/clementine-tagreader.dir/depend

