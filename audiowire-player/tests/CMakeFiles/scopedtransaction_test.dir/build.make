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
include tests/CMakeFiles/scopedtransaction_test.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/scopedtransaction_test.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/scopedtransaction_test.dir/flags.make

tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o: tests/CMakeFiles/scopedtransaction_test.dir/flags.make
tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o: tests/scopedtransaction_test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -Wno-bool-conversions -o CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o -c /home/mystte/rendu/audiowire/Perso/Player/tests/scopedtransaction_test.cpp

tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.i"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -Wno-bool-conversions -E /home/mystte/rendu/audiowire/Perso/Player/tests/scopedtransaction_test.cpp > CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.i

tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.s"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -Wno-bool-conversions -S /home/mystte/rendu/audiowire/Perso/Player/tests/scopedtransaction_test.cpp -o CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.s

tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o.requires:
.PHONY : tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o.requires

tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o.provides: tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/scopedtransaction_test.dir/build.make tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o.provides.build
.PHONY : tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o.provides

tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o.provides.build: tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o

# Object files for target scopedtransaction_test
scopedtransaction_test_OBJECTS = \
"CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o"

# External object files for target scopedtransaction_test
scopedtransaction_test_EXTERNAL_OBJECTS =

tests/scopedtransaction_test: tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o
tests/scopedtransaction_test: tests/libgmock.a
tests/scopedtransaction_test: tests/libgtest.a
tests/scopedtransaction_test: src/libclementine_lib.a
tests/scopedtransaction_test: tests/libtest_utils.a
tests/scopedtransaction_test: tests/libtest_main.a
tests/scopedtransaction_test: tests/libgmock.a
tests/scopedtransaction_test: tests/libgtest.a
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtTest.so
tests/scopedtransaction_test: src/libclementine_lib.a
tests/scopedtransaction_test: ext/libclementine-tagreader/liblibclementine-tagreader.a
tests/scopedtransaction_test: 3rdparty/sha2/libsha2.a
tests/scopedtransaction_test: 3rdparty/libmygpo-qt/libmygpo-qt.a
tests/scopedtransaction_test: 3rdparty/chromaprint/src/libchromaprint_p.a
tests/scopedtransaction_test: 3rdparty/libechonest/libechonest.a
tests/scopedtransaction_test: 3rdparty/qtsingleapplication/libqtsingleapplication.a
tests/scopedtransaction_test: 3rdparty/qtiocompressor/libqtiocompressor.a
tests/scopedtransaction_test: 3rdparty/qocoa/libQocoa.a
tests/scopedtransaction_test: 3rdparty/libprojectm/libprojectM.a
tests/scopedtransaction_test: 3rdparty/libprojectm/MilkdropPresetFactory/libMilkdropPresetFactory.a
tests/scopedtransaction_test: 3rdparty/libprojectm/Renderer/libRenderer.a
tests/scopedtransaction_test: 3rdparty/libprojectm/libprojectM.a
tests/scopedtransaction_test: 3rdparty/libprojectm/MilkdropPresetFactory/libMilkdropPresetFactory.a
tests/scopedtransaction_test: 3rdparty/libprojectm/Renderer/libRenderer.a
tests/scopedtransaction_test: /usr/lib/libGLEW.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libGLU.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libGL.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libSM.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libICE.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libXext.so
tests/scopedtransaction_test: /usr/lib/liblastfm.so
tests/scopedtransaction_test: /usr/lib/liblastfm.so
tests/scopedtransaction_test: gst/afcsrc/libgstafcsrc.a
tests/scopedtransaction_test: gst/moodbar/libgstmoodbar.a
tests/scopedtransaction_test: /usr/lib/libfftw3.so
tests/scopedtransaction_test: ext/libclementine-spotifyblob/libclementine-spotifyblob-messages.a
tests/scopedtransaction_test: ext/libclementine-common/liblibclementine-common.a
tests/scopedtransaction_test: 3rdparty/taglib/libtag.a
tests/scopedtransaction_test: /usr/lib/libprotobuf.so
tests/scopedtransaction_test: 3rdparty/universalchardet/libchardet.a
tests/scopedtransaction_test: 3rdparty/qxt/libqxt.a
tests/scopedtransaction_test: 3rdparty/qsqlite/libqsqlite.a
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtOpenGL.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtWebKit.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtXmlPatterns.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtGui.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtDBus.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtXml.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtSql.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtNetwork.so
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libQtCore.so
tests/scopedtransaction_test: 3rdparty/qsqlite/libsqlite.a
tests/scopedtransaction_test: /usr/lib/i386-linux-gnu/libX11.so
tests/scopedtransaction_test: tests/CMakeFiles/scopedtransaction_test.dir/build.make
tests/scopedtransaction_test: tests/CMakeFiles/scopedtransaction_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable scopedtransaction_test"
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scopedtransaction_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/scopedtransaction_test.dir/build: tests/scopedtransaction_test
.PHONY : tests/CMakeFiles/scopedtransaction_test.dir/build

tests/CMakeFiles/scopedtransaction_test.dir/requires: tests/CMakeFiles/scopedtransaction_test.dir/scopedtransaction_test.cpp.o.requires
.PHONY : tests/CMakeFiles/scopedtransaction_test.dir/requires

tests/CMakeFiles/scopedtransaction_test.dir/clean:
	cd /home/mystte/rendu/audiowire/Perso/Player/tests && $(CMAKE_COMMAND) -P CMakeFiles/scopedtransaction_test.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/scopedtransaction_test.dir/clean

tests/CMakeFiles/scopedtransaction_test.dir/depend:
	cd /home/mystte/rendu/audiowire/Perso/Player && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/tests /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/tests /home/mystte/rendu/audiowire/Perso/Player/tests/CMakeFiles/scopedtransaction_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/scopedtransaction_test.dir/depend

