
#include <iostream>

#include "Matrixx/Matrixx.h"
#include "Matrixx/Calculations/Calculations.h"


int main()
{
	Input input1;
	Input input2;
	bool restart =true;
	char answer;
	char num_of_dots;
	

	

	/*
	Restart:
	switch (num_of_dots)
	{
		case '1':
			input1.input_size_of_matrix();
			Matrixx const Ar1(input1.get_x_size_of_array(),input1.get_y_size_of_array());
			Ar1.print_zero_array();
			input1.input_main_dot();
			Calculations const calc1(input1);
			Ar1.set_distance_array(calc1, num_of_dots);
			Ar1.print_distance_array();
			std::cout<<"Try again? y/n"<< std::endl;
			std::cin >> answer;
			if (answer=='y')
				goto Restart;
			else
				return 0;
		
		case '2':
			input1.input_size_of_matrix();
			Matrixx const Ar2(input1.get_x_size_of_array(),input1.get_y_size_of_array());
			Ar2.print_zero_array();
			std::cout << "First dot: "<<std::endl;
			input1.input_main_dot();
			std::cout << "Second dot: "<<std::endl;
			input2.input_main_dot();
			Calculations const calc2(input1, input2);
			Ar2.set_distance_array(calc2, num_of_dots);
			Ar2.print_distance_array();
			std::cout<<"Try again? y/n"<< std::endl;
			std::cin >> answer;
			if (answer=='y')
				goto Restart;
			else
				return 0;
			
			break;

		
		default:
			std::cout << "Input how many dots will be in matrix 1 or 2?"<<std::endl;
			std::cin >>num_of_dots;
			std::cout <<std::endl;
		goto Restart;
	}
	*/
	Restart:
	input1.input_size_of_matrix();
	Matrixx const Ar(input1.get_x_size_of_array(),input1.get_y_size_of_array());
	Ar.print_zero_array();
	std::cout << "Input how many dots will be in matrix 1 or 2?"<<std::endl;
	std::cin >>num_of_dots;
	std::cout <<std::endl;
one_or_two:
	switch (num_of_dots)
	{
	case '1':
		input1.input_main_dot();
		break;
		
	case '2':
		std::cout << "First dot: "<<std::endl;
		input1.input_main_dot();
		std::cout << "Second dot: "<<std::endl;
		input2.input_main_dot();
		break;
	default:
		std::cout << "Input how many dots will be in matrix 1 or 2?"<<std::endl;
		std::cin >>num_of_dots;
		std::cout <<std::endl;
		goto one_or_two;
	}
	Calculations const calc2(input1, input2);
	Ar.set_distance_array(calc2, num_of_dots);
	Ar.print_distance_array();
	std::cout<<"Try again? y/n"<< std::endl;
	std::cin >> answer;
	if (answer=='y')
		goto Restart;
	else
		return 0;
	
}

