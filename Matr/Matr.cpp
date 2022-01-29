
#include <iostream>

#include "Matrixx/Matrixx.h"
#include "Matrixx/Calculations/Calculations.h"


int main()
{
	Input input;

	input.input_size_of_matrix();
	Matrixx const Ar(input.get_x_size_of_array(),input.get_y_size_of_array());
	Ar.print_zero_array();
	input.input_main_dot();
	Calculations const calc(input);
	Ar.set_distance_array(calc);
	Ar.print_distance_array();
	return 0;
}

