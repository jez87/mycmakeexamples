cmake_minimum_required ( VERSION 2.6)
project ( Hello_World )

# add the MathFunctions library
include_directories ( "${PROJECT_SOURCE_DIR}/MathFunctions" )
add_subdirectory( MathFunctions )

# add the executable
add_executable ( Hello_World Hello_World.cpp )
target_link_libraries ( Hello_World MathFunctions )