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

# Utility rule file for rpm.

# Include the progress variables for this target.
include CMakeFiles/rpm.dir/progress.make

CMakeFiles/rpm:
	dist/maketarball.sh
	/usr/bin/cmake -E copy clementine-1.1.1.tar.gz ~/rpmbuild/SOURCES/
	rpmbuild -bs /home/mystte/rendu/audiowire/Perso/Player/dist/clementine.spec
	mock --verbose --root=fedora-13-x86_64 --resultdir=/home/mystte/rendu/audiowire/Perso/Player/mock_result/ ~/rpmbuild/SRPMS/clementine-1.1.1-1.fc13.src.rpm
	/usr/bin/cmake -E copy /home/mystte/rendu/audiowire/Perso/Player/mock_result/clementine-1.1.1-1.fc13.x86_64.rpm /home/mystte/rendu/audiowire/Perso/Player/clementine-1.1.1-1.fc13.x86_64.rpm

rpm: CMakeFiles/rpm
rpm: CMakeFiles/rpm.dir/build.make
.PHONY : rpm

# Rule to build all files generated by this target.
CMakeFiles/rpm.dir/build: rpm
.PHONY : CMakeFiles/rpm.dir/build

CMakeFiles/rpm.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rpm.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rpm.dir/clean

CMakeFiles/rpm.dir/depend:
	cd /home/mystte/rendu/audiowire/Perso/Player && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player /home/mystte/rendu/audiowire/Perso/Player/CMakeFiles/rpm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rpm.dir/depend

