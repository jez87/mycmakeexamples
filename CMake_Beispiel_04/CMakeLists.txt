cmake_minimum_required( VERSION 2.6)
project(Hello_World)

# add the MathFunctions library
include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
add_subdirectory(MathFunctions)

set(${PROJECT_NAME}_SRC
	src/main.cpp
	src/internal_functions.cpp
)

# add the executable
add_executable(Hello_World ${${PROJECT_NAME}_SRC})

set(EXTRA_LIB MathFunctions)

# add the library to the executable (target)
target_link_libraries(Hello_World ${EXTRA_LIB})

# add the include directory
target_include_directories(Hello_World
	PRIVATE
	${CMAKE_CURRENT_LIST_DIR}/include
)