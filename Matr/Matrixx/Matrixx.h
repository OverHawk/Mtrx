#pragma once
#include <vcruntime.h>
#include <iostream>

#include "Calculations/Calculations.h"
#include "Data/Dotez.h"

class Matrixx //class which has array of dots and includes methods which calculates and prints matrix
{
private:
    int x_size{};
    int y_size{};
    Dotez **Array_of_dots;
    Dotez main_dot;
    int* value_array; // array of dot values


public:
    Matrixx();
    Matrixx(int x, int y);
    void print_zero_array() const;
    void print_distance_array() const;
    void set_distance_array(Calculations calc, char num_of_dots) const;
    ~Matrixx();
};
