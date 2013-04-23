execute_process(COMMAND date "+%a %b %d %Y"
                OUTPUT_VARIABLE RPM_DATE OUTPUT_STRIP_TRAILING_WHITESPACE)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/AudioWire.spec.in
               ${CMAKE_CURRENT_SOURCE_DIR}/AudioWire.spec @ONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Info.plist.in
               ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/maketarball.sh.in
               ${CMAKE_CURRENT_SOURCE_DIR}/maketarball.sh @ONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/windows/AudioWire.nsi.in
               ${CMAKE_CURRENT_SOURCE_DIR}/windows/AudioWire.nsi @ONLY)
# windows/windres.rc is done by src/CMakeLists.txt

if(EXISTS /etc/lsb-release)
  file(READ "/etc/lsb-release" LSB_RELEASE_CONTENTS)
  string(REGEX MATCH "DISTRIB_ID=Ubuntu" IS_UBUNTU ${LSB_RELEASE_CONTENTS})
  if(IS_UBUNTU)
    set(INSTALL_UBUNTU_ICONS_DEFAULT ON)
  else(IS_UBUNTU)
    set(INSTALL_UBUNTU_ICONS_DEFAULT OFF)
  endif(IS_UBUNTU)
else(EXISTS /etc/lsb-release)
  set(INSTALL_UBUNTU_ICONS_DEFAULT OFF)
endif(EXISTS /etc/lsb-release)

option(INSTALL_UBUNTU_ICONS "Install the Ubuntu themed monochrome panel icons" ${INSTALL_UBUNTU_ICONS_DEFAULT})

if (NOT APPLE)
  install(FILES AudioWire_64.png
    DESTINATION share/icons/hicolor/64x64/apps/
    RENAME application-x-AudioWire.png
  )

  install(FILES ../data/icon.svg
    DESTINATION share/icons/hicolor/scalable/apps/
    RENAME application-x-AudioWire.svg
  )

  install(FILES AudioWire.desktop
    DESTINATION share/applications
  )

  install(FILES AudioWire-itms.protocol
                AudioWire-itpc.protocol
                AudioWire-feed.protocol
                AudioWire-zune.protocol
    DESTINATION share/kde4/services
  )

  if(INSTALL_UBUNTU_ICONS)
    foreach(icon AudioWire-panel.png AudioWire-panel-grey.png)
      foreach(theme ubuntu-mono-dark ubuntu-mono-light)
        install(FILES icons/${theme}/${icon}
          DESTINATION share/icons/${theme}/apps/24/
        )
      endforeach(theme)
    endforeach(icon)
  endif(INSTALL_UBUNTU_ICONS)
endif (NOT APPLE)
