#include <iostream>
#include "ProgramConfig.h"
#include "internal_functions.h"

#ifdef USE_MYMATH
	#include <MathFunctions.h>
#endif

void print_all_X()
{
	std::cout << "Main function ..." << std::endl;

#ifdef USE_MYMATH
	std::cout << "USE_MYMATH is defined" << std::endl;
	std::cout << "Result is " << mysqrt(0) << std::endl;
#else
	std::cout << "USE_MYMATH is NOT defined" << std::endl;
#endif
}

int main()
{
	print_all_X();
	print_all_Y();

  	return 0;
}