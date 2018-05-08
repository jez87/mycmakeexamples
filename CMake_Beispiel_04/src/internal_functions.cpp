#include <iostream>
#include <../include/internal_functions.h>

void print_all_Y()
{
	std::cout << "print_all_Y ..." << std::endl;

#ifdef USE_MYMATH
	std::cout << "USE_MYMATH is defined" << std::endl;
	std::cout << "Result is " << mysqrt(0) << std::endl;
#else
	std::cout << "USE_MYMATH is NOT defined" << std::endl;
#endif
}