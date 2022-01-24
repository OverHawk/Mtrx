#include "Calculations.h"


int Calculations::calculate_distance(int x, int y) const
{ 
    if (abs(x - main_dot_x ) > abs(y - main_dot_y))
        return abs(x - main_dot_x);
    else
        return abs(y - main_dot_y);
    
}

Calculations::~Calculations(){}
