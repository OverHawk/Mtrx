#pragma once
#include <iostream>

#include "../Input/Input.h"

class Calculations
{
private:
    int main_dot_x1;
    int main_dot_y1;
    int main_dot_x2;
    int main_dot_y2;
public:
    Calculations(){}
    Calculations(Input input);
    Calculations(Input input1, Input input2);
    int calculate_distance(int x, int y, char num_of_dots) const;
    int calculate_two_dots_distance(int x,int y) const;
    ~Calculations();
};
