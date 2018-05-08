cmake_minimum_required ( VERSION 2.6)
project ( Hello_World )

# set variables
set ( PROGRAM_SRCS 	main.cpp )
set ( EXTRA_INCLUDE include )
set ( EXTRA_LIB MathFunctions )

# output messages
message( STATUS "PROGRAM_SRCS contains: " ${PROGRAM_SRCS} )
message( STATUS "EXTRA_INCLUDE contains: " ${EXTRA_INCLUDE} )
message( STATUS "EXTRA_LIB contains: " ${EXTRA_LIB} )
message( STATUS "PROJECT_SOURCE_DIR contains: " ${PROJECT_SOURCE_DIR} )

# should we use our own math functions
option(USE_MYMATH "Use tutorial provided math implementation" ON)
message( STATUS "USE_MYMATH is: " ${USE_MYMATH} )

# add the binary tree to the search path for include files
# so that we will find ProgramConfig.h
# (1) this is the old method how to include files
#include_directories( include )

# add the MathFunctions library?

if (USE_MYMATH)
	message( STATUS "Using own math library" )
	include_directories ( "${PROJECT_SOURCE_DIR}/MathFunctions" )
	add_subdirectory( MathFunctions )
endif ()

# add the executable
add_executable ( Hello_World ${PROGRAM_SRCS} )

# add the library to the executable (target)
if (USE_MYMATH)
	target_link_libraries ( Hello_World ${EXTRA_LIB} )
endif ()

# add the include files
# (2) this is the new method to add include files
target_include_directories(Hello_World PRIVATE ${EXTRA_INCLUDE} )