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
include tests/CMakeFiles/translations_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/translations_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/translations_test.dir/flags.make

tests/CMakeFiles/translations_test.dir/translations_test.cpp.o: tests/CMakeFiles/translations_test.dir/flags.make
tests/CMakeFiles/translations_test.dir/translations_test.cpp.o: tests/translations_test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/translations_test.dir/translations_test.cpp.o"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -Wno-bool-conversions -o CMakeFiles/translations_test.dir/translations_test.cpp.o -c /home/mystte/rendu/audiowire/Perso/Player/tests/translations_test.cpp

tests/CMakeFiles/translations_test.dir/translations_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/translations_test.dir/translations_test.cpp.i"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -Wno-bool-conversions -E /home/mystte/rendu/audiowire/Perso/Player/tests/translations_test.cpp > CMakeFiles/translations_test.dir/translations_test.cpp.i

tests/CMakeFiles/translations_test.dir/translations_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/translations_test.dir/translations_test.cpp.s"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -Wno-bool-conversions -S /home/mystte/rendu/audiowire/Perso/Player/tests/translations_test.cpp -o CMakeFiles/translations_test.dir/translations_test.cpp.s

tests/CMakeFiles/translations_test.dir/translations_test.cpp.o.requires:
.PHONY : tests/CMakeFiles/translations_test.dir/translations_test.cpp.o.requires

tests/CMakeFiles/translations_test.dir/translations_test.cpp.o.provides: tests/CMakeFiles/translations_test.dir/translations_test.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/translations_test.dir/build.make tests/CMakeFiles/translations_test.dir/translations_test.cpp.o.provides.build
.PHONY : tests/CMakeFiles/translations_test.dir/translations_test.cpp.o.provides

tests/CMakeFiles/translations_test.dir/translations_test.cpp.o.provides.build: tests/CMakeFiles/translations_test.dir/translations_test.cpp.o

# Object files for target translations_test
translations_test_OBJECTS = \
"CMakeFiles/translations_test.dir/translations_test.cpp.o"

# External object files for target translations_test
translations_test_EXTERNAL_OBJECTS =

tests/translations_test: tests/CMakeFiles/translations_test.dir/translations_test.cpp.o
tests/translations_test: tests/libgmock.a
tests/translations_test: tests/libgtest.a
tests/translations_test: src/libclementine_lib.a
tests/translations_test: tests/libtest_utils.a
tests/translations_test: tests/libtest_main.a
tests/translations_test: tests/libgmock.a
tests/translations_test: tests/libgtest.a
tests/translations_test: /usr/lib/i386-linux-gnu/libQtTest.so
tests/translations_test: src/libclementine_lib.a
tests/translations_test: ext/libclementine-tagreader/liblibclementine-tagreader.a
tests/translations_test: 3rdparty/sha2/libsha2.a
tests/translations_test: 3rdparty/libmygpo-qt/libmygpo-qt.a
tests/translations_test: 3rdparty/chromaprint/src/libchromaprint_p.a
tests/translations_test: 3rdparty/libechonest/libechonest.a
tests/translations_test: 3rdparty/qtsingleapplication/libqtsingleapplication.a
tests/translations_test: 3rdparty/qtiocompressor/libqtiocompressor.a
tests/translations_test: 3rdparty/qocoa/libQocoa.a
tests/translations_test: 3rdparty/libprojectm/libprojectM.a
tests/translations_test: 3rdparty/libprojectm/MilkdropPresetFactory/libMilkdropPresetFactory.a
tests/translations_test: 3rdparty/libprojectm/Renderer/libRenderer.a
tests/translations_test: 3rdparty/libprojectm/libprojectM.a
tests/translations_test: 3rdparty/libprojectm/MilkdropPresetFactory/libMilkdropPresetFactory.a
tests/translations_test: 3rdparty/libprojectm/Renderer/libRenderer.a
tests/translations_test: /usr/lib/libGLEW.so
tests/translations_test: /usr/lib/i386-linux-gnu/libGLU.so
tests/translations_test: /usr/lib/i386-linux-gnu/libGL.so
tests/translations_test: /usr/lib/i386-linux-gnu/libSM.so
tests/translations_test: /usr/lib/i386-linux-gnu/libICE.so
tests/translations_test: /usr/lib/i386-linux-gnu/libXext.so
tests/translations_test: /usr/lib/liblastfm.so
tests/translations_test: /usr/lib/liblastfm.so
tests/translations_test: gst/afcsrc/libgstafcsrc.a
tests/translations_test: gst/moodbar/libgstmoodbar.a
tests/translations_test: /usr/lib/libfftw3.so
tests/translations_test: ext/libclementine-spotifyblob/libclementine-spotifyblob-messages.a
tests/translations_test: ext/libclementine-common/liblibclementine-common.a
tests/translations_test: 3rdparty/taglib/libtag.a
tests/translations_test: /usr/lib/libprotobuf.so
tests/translations_test: 3rdparty/universalchardet/libchardet.a
tests/translations_test: 3rdparty/qxt/libqxt.a
tests/translations_test: 3rdparty/qsqlite/libqsqlite.a
tests/translations_test: /usr/lib/i386-linux-gnu/libQtOpenGL.so
tests/translations_test: /usr/lib/i386-linux-gnu/libQtWebKit.so
tests/translations_test: /usr/lib/i386-linux-gnu/libQtXmlPatterns.so
tests/translations_test: /usr/lib/i386-linux-gnu/libQtGui.so
tests/translations_test: /usr/lib/i386-linux-gnu/libQtDBus.so
tests/translations_test: /usr/lib/i386-linux-gnu/libQtXml.so
tests/translations_test: /usr/lib/i386-linux-gnu/libQtSql.so
tests/translations_test: /usr/lib/i386-linux-gnu/libQtNetwork.so
tests/translations_test: /usr/lib/i386-linux-gnu/libQtCore.so
tests/translations_test: 3rdparty/qsqlite/libsqlite.a
tests/translations_test: /usr/lib/i386-linux-gnu/libX11.so
tests/translations_test: tests/CMakeFiles/translations_test.dir/build.make
tests/translations_test: tests/CMakeFiles/translations_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable translations_test"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/translations_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/translations_test.dir/build: tests/translations_test
.PHONY : tests/CMakeFiles/translations_test.dir/build

tests/CMakeFiles/translations_test.dir/requires: tests/CMakeFiles/translations_test.dir/translations_test.cpp.o.requires
.PHONY : tests/CMakeFiles/translations_test.dir/requires

tests/CMakeFiles/translations_test.dir/clean:
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && $(CMAKE_COMMAND) -P CMakeFiles/translations_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/translations_test.dir/clean

tests/CMakeFiles/translations_test.dir/depend:
	cd /home/mystte/rendu/audiowire/Perso/Player && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/tests /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/tests /home/mystte/rendu/audiowire/Perso/Player/tests/CMakeFiles/translations_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/translations_test.dir/depend

