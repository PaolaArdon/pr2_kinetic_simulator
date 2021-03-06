# - Config file for the GRASPIT package
# It defines the following variables
#  GRASPIT_INCLUDE_DIRS - include directories for GRASPIT
#  GRASPIT_LIBRARIES    - libraries to link against
#  GRASPIT_EXECUTABLE   - the bar executable
 
# Compute paths
get_filename_component(GRASPIT_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(GRASPIT_INCLUDE_DIRS "/home/pardon/graspit;/home/pardon/graspit/build")
 
# Our library dependencies (contains definitions for IMPORTED targets)
if(NOT TARGET graspit_simulator AND NOT GRASPIT_BINARY_DIR)
  include("${GRASPIT_CMAKE_DIR}/graspitTargets.cmake")
endif()
 
# These are IMPORTED targets created by second_endpointTargets.cmake
set(GRASPIT_LIBRARIES graspit)
set(GRASPIT_EXECUTABLE graspit_simulator)

