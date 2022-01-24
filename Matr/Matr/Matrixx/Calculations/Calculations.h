#pragma once
#include <iostream>

#include "../Input/Input.h"

class Calculations
{
private:
    int main_dot_x;
    int main_dot_y;
 
public:
    Calculations(){}
    Calculations(Input input)
    {
        main_dot_x=input.get_main_dot_x();
        main_dot_y=input.get_main_dot_y();
    }
    int calculate_distance(int x, int y) const;
    ~Calculations();
};
