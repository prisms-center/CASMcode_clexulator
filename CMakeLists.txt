cmake_minimum_required(VERSION 3.20)
set(CMAKE_OSX_DEPLOYMENT_TARGET "10.15" CACHE STRING "Minimum OS X deployment version")

project(CASMcode_clexulator VERSION 2.2.0 LANGUAGES CXX)

# set CMAKE_INSTALL_X variables
include(GNUInstallDirs)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# try to use ccache
find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set(CMAKE_CXX_COMPILER_LAUNCHER "${CCACHE_PROGRAM}")
endif()

##############################################
## Find dependencies

# Should find ZLIB::ZLIB
find_package(ZLIB)

# Find CASM
if(NOT DEFINED CASM_PREFIX)
  message(STATUS "CASM_PREFIX not defined")
  # try to find Python
  find_package (Python COMPONENTS Interpreter Development)
  if(DEFINED Python_EXECUTABLE)
    # if Python found, obtain CASM_PREFIX from the libcasm.casmglobal
    message(STATUS "found Python_EXECUTABLE: ${Python_EXECUTABLE}")
    message(STATUS "checking for libcasm-global")
    execute_process(
      COMMAND pip show libcasm-global
      RESULT_VARIABLE EXIT_CODE
      OUTPUT_QUIET
    )
    if (${EXIT_CODE} EQUAL 0)
      message(STATUS "found libcasm-global")
      execute_process(COMMAND ${Python_EXECUTABLE} -m libcasm.casmglobal --prefix
                      OUTPUT_VARIABLE CASM_PREFIX_RAW)
      string(STRIP "${CASM_PREFIX_RAW}" CASM_PREFIX)
      message(STATUS "CASM_PREFIX: ${CASM_PREFIX}")
    else()
      message(STATUS "did not find libcasm-global")
    endif()
  endif()
endif()
if(DEFINED CASM_PREFIX)
  set(CASMcode_global_ROOT ${CASM_PREFIX}/share/CASMcode_global/cmake)
  set(CASMcode_crystallography_ROOT ${CASM_PREFIX}/share/CASMcode_crystallography/cmake)
endif()
find_package(CASMcode_global)
if(NOT CASMcode_global_FOUND)
  message(FATAL_ERROR "CMake failed to find CASMcode_global")
endif()
# if successful, we have CASM::casm_global

find_package(CASMcode_crystallography)
if(NOT CASMcode_crystallography_FOUND)
  message(FATAL_ERROR "CMake failed to find CASMcode_crystallography")
endif()
# if successful, we have CASM::casm_crystallography

# if no user CMAKE_INSTALL_PREFIX, use CASM_PREFIX if it exists
IF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
  if(DEFINED CASM_PREFIX)
    message(STATUS "CMAKE_INSTALL_PREFIX initialized to default, so updating CMAKE_INSTALL_PREFIX to CASM_PREFIX")
    set(CMAKE_INSTALL_PREFIX ${CASM_PREFIX} CACHE PATH "set CMAKE_INSTALL_PREFIX to CASM_PREFIX" FORCE)
    message(STATUS "CMAKE_INSTALL_PREFIX: ${CMAKE_INSTALL_PREFIX}")
  endif()
ENDIF(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)

##############################################
## Build libcasm_clexulator

# create libcasm_clexulator
set(
  libcasm_clexulator_HEADERS
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/BaseClexulator.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/BasicClexParamPack.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/ClexParamPack.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/Clexulator.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/ClusterExpansion.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/ConfigDoFValues.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/ConfigDoFValuesTools.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/ConfigDoFValuesTools_impl.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/Correlations.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/DiffClexParamPack.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/DoFSpace.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/DoFSpaceAxisInfo.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/ImpactTable.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/LocalClusterExpansion.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/LocalCorrelations.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/NeighborList.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/OrderParameter.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/SparseCoefficients.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/external/fadbad/badiff.h
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/external/fadbad/fadbad.h
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/external/fadbad/fadiff.h
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/external/fadbad/tadiff.h
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/io/json/Clexulator_json_io.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/io/json/ConfigDoFValues_json_io.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/io/json/DoFSpace_json_io.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/io/json/SparseCoefficients_json_io.hh
  ${PROJECT_SOURCE_DIR}/include/casm/clexulator/version.hh
)
set(
  libcasm_clexulator_SOURCES
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/BaseClexulator.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/Clexulator.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/ClusterExpansion.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/Correlations.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/DoFSpace.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/DoFSpaceAxisInfo.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/ImpactTable.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/LocalClusterExpansion.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/LocalCorrelations.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/NeighborList.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/OrderParameter.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/io/json/Clexulator_json_io.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/io/json/ConfigDoFValues_json_io.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/io/json/DoFSpace_json_io.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/io/json/SparseCoefficients_json_io.cc
  ${PROJECT_SOURCE_DIR}/src/casm/clexulator/version.cc
)
add_library(casm_clexulator SHARED ${libcasm_clexulator_SOURCES})
target_include_directories(casm_clexulator
  PUBLIC
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/casm/external>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}/casm/external/gzstream>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/casm/external>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/casm/external/gzstream>
)
target_compile_options(casm_clexulator
  PUBLIC
    "-DCASM_CLEXULATOR_TXT_VERSION=\"${CMAKE_PROJECT_VERSION}\""
    -DEIGEN_DEFAULT_DENSE_INDEX_TYPE=long
    -DGZSTREAM_NAMESPACE=gz
)
target_link_libraries(casm_clexulator
  ZLIB::ZLIB
  ${CMAKE_DL_LIBS}
  CASM::casm_global
  CASM::casm_crystallography
)
if(APPLE)
  set_target_properties(
    casm_clexulator PROPERTIES INSTALL_RPATH "@loader_path")
else()
  set_target_properties(
    casm_clexulator PROPERTIES INSTALL_RPATH "$ORIGIN")
endif()

##############################################
## Install libcasm_clexulator

# install header files in <prefix>/libcasm/include/,
# while preserving directory structure
foreach ( filevar ${libcasm_clexulator_HEADERS} )
  file(RELATIVE_PATH relfile ${PROJECT_SOURCE_DIR}/include/ ${filevar})
  get_filename_component( reldir ${relfile} DIRECTORY )
  install( FILES ${filevar} DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/${reldir} )
endforeach()

# install libcasm_clexulator in <prefix>/libcasm/lib/
install(
  TARGETS casm_clexulator
  EXPORT CASMcode_clexulatorTargets
  DESTINATION lib)

##############################################
## Python extensions

# The CMake package config and target files are installed under the Python
# package root. This is necessary to ensure that all the relative paths in the
# helloTargets.cmake resolve correctly. It also provides encapsulation.
#
# The actual path used must be selected so that consuming projects can locate it
# via `find_package`. To support finding CMake packages in the Python package
# prefix, using `find_package`s default search path of
# `<prefix>/<name>/share/<name>*/cmake/` is reasonable. Adding the Python
# package installation prefix to CMAKE_PREFIX_PATH in combination with this path
# will allow `find_package` to find this package and any other package installed
# via a Python package if the CMake and Python packages are named the same.
set(CASM_CMAKE_PACKAGE_INSTALL_SUBDIR "share/CASMcode_clexulator/cmake")

install(
  EXPORT CASMcode_clexulatorTargets
  NAMESPACE CASM::
  DESTINATION ${CASM_CMAKE_PACKAGE_INSTALL_SUBDIR})

include(CMakePackageConfigHelpers)

write_basic_package_version_file(
  CASMcode_clexulatorConfigVersion.cmake
  VERSION ${PROJECT_VERSION}
  COMPATIBILITY SameMinorVersion)

configure_package_config_file(
  "${PROJECT_SOURCE_DIR}/cmake/CASMcode_clexulatorConfig.cmake.in" CASMcode_clexulatorConfig.cmake
  INSTALL_DESTINATION ${CASM_CMAKE_PACKAGE_INSTALL_SUBDIR})

install(FILES "${PROJECT_BINARY_DIR}/CASMcode_clexulatorConfig.cmake"
              "${PROJECT_BINARY_DIR}/CASMcode_clexulatorConfigVersion.cmake"
        DESTINATION ${CASM_CMAKE_PACKAGE_INSTALL_SUBDIR})

# We are using the SKBUILD variable, which is defined when scikit-build is
# running the CMake build, to control building the Python wrapper. This allows
# the C++ project to be installed, standalone, when using the standard CMake
# build flow.
if(DEFINED SKBUILD)

  # call pybind11-config to obtain the root of the cmake package
  execute_process(COMMAND ${PYTHON_EXECUTABLE} -m pybind11 --cmakedir
                  OUTPUT_VARIABLE pybind11_ROOT_RAW)
  string(STRIP "${pybind11_ROOT_RAW}" pybind11_ROOT)
  find_package(pybind11)

  # The extension modules must load:
  # - the casm_global library
  # - the casm_clexulator library
  # They can be found by setting a relative rpath

  ### libcasm.clexulator._clexulator ###
  pybind11_add_module(_clexulator MODULE
                      "${PROJECT_SOURCE_DIR}/python/src/clexulator.cpp")
  target_link_libraries(_clexulator PRIVATE
    CASM::casm_global
    CASM::casm_crystallography
    casm_clexulator
  )
  install(TARGETS _clexulator DESTINATION clexulator)
  if(APPLE)
    set_target_properties(
      _clexulator PROPERTIES INSTALL_RPATH "@loader_path/../lib")
  else()
    set_target_properties(
      _clexulator PROPERTIES INSTALL_RPATH "$ORIGIN/../lib")
  endif()

endif()
