# Install script for directory: /home/boil/TrinityCore/TrinityCore-TDB335.20071/dep

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/threads/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/boost/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/process/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/zlib/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/g3dlite/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/recastnavigation/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/fmt/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/SFMT/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/utf8cpp/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/valgrind/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/openssl/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/jemalloc/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/argon2/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/mysql/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/readline/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/gsoap/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/efsw/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/bzip2/cmake_install.cmake")
  include("/home/boil/TrinityCore/TrinityCore-TDB335.20071/cmake-build-debug/dep/libmpq/cmake_install.cmake")

endif()

