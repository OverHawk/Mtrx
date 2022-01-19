#include "Matrixx.h"

#include <iostream>


Matrixx::Matrixx(int x,int y) : x_size(x), y_size(y)
{
    array_size=x*y;
    Array = new Dotez[array_size];
    value_array = new int[array_size];
}
Matrixx::Matrixx(){}


void Matrixx::print_zero_array() const
{
    for (int i=0;i<y_size;i++)
    {
        for (int j=0;j<x_size;j++)
        {
            const Dotez d(i,j);
            const int size = y_size*i+j;
            Array[size]=d;
            std::cout<< "0|";
            //std::cout<< "|"<<Array[size].get_x_pos()<<";"<< Array[size].get_y_pos() <<"|";
        }
        std::cout<<std::endl;
    }
    
}

void Matrixx::print_value_array() const
{
    for (int i=0; i<array_size;i++)
    {
        if (Array[i-1].get_y_pos()<Array[i].get_y_pos())
        {
            std::cout << std::endl;
            std::cout << value_array[i]<<'|';
        }
        else
        {
            std::cout << value_array[i]<<'|';
        }
    }
   
}

void Matrixx::calculate_value_array() const
{
    int main_dot_x;
    int main_dot_y;
    std::cout<< "Input x coordinate";
    std::cin>>main_dot_x;
    std::cout<< "Input y coordinate";
    std::cin>>main_dot_y;
    for(int i=0; i<array_size;i++)
    {
        if (abs(Array[i].get_x_pos() - main_dot_x) > abs(Array[i].get_y_pos() - main_dot_y))
            value_array[i]= abs(Array[i].get_x_pos() - main_dot_x);
        else
            value_array[i]= abs(Array[i].get_y_pos() - main_dot_y);
            
        
    }
}

Matrixx::~Matrixx()
{
    delete this;
}
