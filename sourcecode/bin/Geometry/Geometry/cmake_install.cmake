# Install script for directory: /Users/meganstark/Computation*/opensource/CLHEP/Geometry/Geometry

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/CLHEP/Geometry" TYPE FILE FILES
    "/Users/meganstark/Computation*/opensource/CLHEP/Geometry/Geometry/BasicVector3D.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Geometry/Geometry/Normal3D.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Geometry/Geometry/Plane3D.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Geometry/Geometry/Point3D.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Geometry/Geometry/Transform3D.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Geometry/Geometry/Transform3D.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Geometry/Geometry/Vector3D.h"
    )
endif()

