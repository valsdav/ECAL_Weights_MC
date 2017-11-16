# Install script for directory: /Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/meganstark/Computation*/opensource/bin")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RelWithDebInfo")
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

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/CLHEP/Matrix" TYPE FILE FILES
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/DiagMatrix.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/DiagMatrix.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/GenMatrix.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/GenMatrix.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/Matrix.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/Matrix.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/Pile.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/SymMatrix.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/SymMatrix.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/Vector.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Matrix/Matrix/Vector.icc"
    )
endif()

