#pragma once
#include <vcruntime.h>

#include "Dotez.h"

class Matrixx //class which has array of dots and includes methods which calculates and prints matrix
{
private:
    int x_size{};
    int y_size{};
    Dotez* Array; // array of dots
    int* value_array; // array of dot values
    int array_size; //size of array

public:
    Matrixx();
    Matrixx(int x, int y);
    void print_zero_array() const;
    void print_value_array() const;
    void calculate_value_array() const;
    ~Matrixx();
};
