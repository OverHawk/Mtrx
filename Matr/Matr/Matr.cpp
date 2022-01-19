// Matr.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Matrixx.h"

/*
class Matrix
{
	int x;
	int y;
public:

	void print_zero_Matrix()
	{
		std::cin >> x;

		std::cin >> y;


		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				Dot d1;
				std::cout << '|' << d1.get_dotValue() << '|';
			}
			std::cout << ' ' << std::endl;
		}
	


	}

	void print_Value_Matrix()
	{
		Dot d1;
		d1.inputDot();
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				
				d1.setDotPosition(i, j);
				d1.calculate_pos();
				std::cout << '|' << d1.get_dotValue() << '|';
			}
			std::cout << ' ' << std::endl;
		}


	}

};
*/

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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
