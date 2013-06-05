# Install script for directory: /home/mystte/rendu/audiowire/Perso/Player

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/taglib/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/libprojectm/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/qsqlite/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/qtsingleapplication/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/qtiocompressor/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/qxt/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/libechonest/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/sha2/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/chromaprint/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/libmygpo-qt/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/qocoa/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/src/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/3rdparty/universalchardet/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/tests/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/dist/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/tools/ultimate_lyrics_parser/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/ext/libclementine-common/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/ext/libclementine-tagreader/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/ext/clementine-tagreader/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/gst/afcsrc/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/ext/libclementine-spotifyblob/cmake_install.cmake")
  INCLUDE("/home/mystte/rendu/audiowire/Perso/Player/gst/moodbar/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

IF(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
ELSE(CMAKE_INSTALL_COMPONENT)
  SET(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
ENDIF(CMAKE_INSTALL_COMPONENT)

FILE(WRITE "/home/mystte/rendu/audiowire/Perso/Player/${CMAKE_INSTALL_MANIFEST}" "")
FOREACH(file ${CMAKE_INSTALL_MANIFEST_FILES})
  FILE(APPEND "/home/mystte/rendu/audiowire/Perso/Player/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
ENDFOREACH(file)
