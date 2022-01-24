
#include <iostream>
#include "Matrixx.h"


int main()
{
	int x;
	int y;
	std::cout<< "Input line size of matrix";
	std::cin >> x;
	std::cout<< "Input colomn size of matrix";
	std::cin >>y;
	Matrixx Ar(x,y);
	Ar.print_zero_array();
	Ar.calculate_value_array();
	Ar.print_value_array();
	return 0;
}

