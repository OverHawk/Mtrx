#include "Matrixx.h"

#include <csetjmp>
#include <iostream>

#include "Calculations/Calculations.h"


Matrixx::Matrixx(int x,int y) : x_size(x), y_size(y)
{
    Array_of_dots = new Dotez* [y];
    for (int i = 0; i < y; i++) 
        Array_of_dots[i] = new Dotez[x];
}


Matrixx::Matrixx(){}



void Matrixx::print_zero_array() const
{
    for (int i=0;i<y_size;i++)
    {
        for (int j=0;j<x_size;j++)
        {
            const Dotez d(i,j);
            Array_of_dots[i][j]=d;
            std::cout<< "0|";
        }
        std::cout<<std::endl;
    }
    
}

void Matrixx::print_distance_array() const
{
    for (int i=0; i<y_size;i++)
    {
        for(int j=0;j<x_size;j++)
        {
            std::cout<< Array_of_dots[i][j].get_distance()<<'|';
        }
        std::cout<<std::endl;
    }
   
}




void Matrixx::set_distance_array(Calculations calc, char num_of_dots) const
{
    for(int i=0; i<y_size;i++)
    {
        for(int j=0;j<x_size;j++)
            Array_of_dots[i][j].set_distance(calc.calculate_distance(j,i,num_of_dots));
    }
}

Matrixx::~Matrixx()
{    
}
