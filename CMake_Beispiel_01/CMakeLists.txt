cmake_minimum_required ( VERSION 2.6)
project ( Hello_World )
add_executable ( Hello_World Hello_World.cpp )

##############################################################
### Print out all accessible variables in a script
#get_cmake_property(_variableNames VARIABLES)
#list (SORT _variableNames)
#foreach (_variableName ${_variableNames})
#    message(STATUS "${_variableName}=${${_variableName}}")
#endforeach()
##############################################################