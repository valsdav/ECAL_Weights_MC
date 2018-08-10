# Install script for directory: /Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/CLHEP/Vector" TYPE FILE FILES
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/AxisAngle.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/AxisAngle.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/Boost.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/Boost.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/BoostX.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/BoostX.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/BoostY.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/BoostY.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/BoostZ.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/BoostZ.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/EulerAngles.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/EulerAngles.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/LorentzRotation.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/LorentzRotation.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/LorentzVector.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/LorentzVector.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/Rotation.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/Rotation.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/RotationInterfaces.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/RotationInterfaces.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/RotationX.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/RotationX.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/RotationY.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/RotationY.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/RotationZ.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/RotationZ.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/Sqr.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/ThreeVector.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/ThreeVector.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/TwoVector.h"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/TwoVector.icc"
    "/Users/meganstark/Computation*/opensource/CLHEP/Vector/Vector/ZMxpv.h"
    )
endif()

