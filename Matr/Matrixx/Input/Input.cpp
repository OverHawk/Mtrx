#include "Input.h"

#include <iostream>

Input::Input():x_size_of_array(0),y_size_of_array(0),main_dot_x(0),main_dot_y(0)
{
}

void Input::input_size_of_matrix()
{
    std::cout<< "Input line size of matrix: ";
    std::cin >> x_size_of_array;
    std::cout<< "Input colomn size of matrix: ";
    std::cin >> y_size_of_array;
}

void Input::input_main_dot()
{
    std::cout<< "Input x coordinate: ";
    std::cin>>main_dot_x;
    std::cout<<std::endl;
    std::cout<< "Input y coordinate: ";
    std::cin>>main_dot_y;
    std::cout<<std::endl;
}

/*
void Input::set_x_size_of_array()
{
}

void Input::set_y_size_of_array()
{
}

void Input::set_main_dot_x()
{
}

void Input::set_main_dot_y()
{
}
*/ // Заготовка кода для обновления матрицы и точки без выхода из программы.

int Input::get_x_size_of_array() const
{
    return x_size_of_array;
}

int Input::get_y_size_of_array() const
{
    return y_size_of_array;
}

int Input::get_main_dot_x() const
{
    return main_dot_x;
}

int Input::get_main_dot_y() const
{
    return main_dot_y;
}