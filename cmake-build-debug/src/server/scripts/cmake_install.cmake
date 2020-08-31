# Install script for directory: /home/boil/TrinityCore/TrinityCore-TDB335.20071/src/server/scripts

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
    foreach(SCRIPT_TO_UNINSTALL /usr/local/bin/scripts/libscripts_battlefield.so;/usr/local/bin/scripts/libscripts_commands.so;/usr/local/bin/scripts/libscripts_custom.so;/usr/local/bin/scripts/libscripts_easternkingdoms.so;/usr/local/bin/scripts/libscripts_events.so;/usr/local/bin/scripts/libscripts_kalimdor.so;/usr/local/bin/scripts/libscripts_northrend.so;/usr/local/bin/scripts/libscripts_outdoorpvp.so;/usr/local/bin/scripts/libscripts_outland.so;/usr/local/bin/scripts/libscripts_pet.so;/usr/local/bin/scripts/libscripts_spells.so;/usr/local/bin/scripts/libscripts_world.so)
      if(EXISTS "${SCRIPT_TO_UNINSTALL}")
        message(STATUS "Uninstalling: ${SCRIPT_TO_UNINSTALL}")
        file(REMOVE "${SCRIPT_TO_UNINSTALL}")
      endif()
    endforeach()
  
endif()

