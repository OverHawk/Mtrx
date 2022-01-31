#include "Calculations.h"

Calculations::Calculations(Input input)
{
    main_dot_x1=input.get_main_dot_x();
    main_dot_y1=input.get_main_dot_y();
}
Calculations::Calculations(Input input1, Input input2)
{
    main_dot_x1=input1.get_main_dot_x();
    main_dot_y1=input1.get_main_dot_y();
    main_dot_x2=input2.get_main_dot_x();
    main_dot_y2=input2.get_main_dot_y();
}

int Calculations::calculate_distance(int x, int y, char num_of_dots) const
{
    switch (num_of_dots)
    {
        case '1':
            if (abs(x - main_dot_x1 ) > abs(y - main_dot_y1))
                return abs(x - main_dot_x1);
            else
                return abs(y - main_dot_y1);

        case '2':
            
            int max_distance_from_dot1;
            int max_distance_from_dot2;
    
            if (abs(x - main_dot_x1 )>abs(y - main_dot_y1))
                max_distance_from_dot1 = abs(x - main_dot_x1);
            else
                max_distance_from_dot1 = abs(y - main_dot_y1);

            if (abs(x - main_dot_x2 )>abs(y - main_dot_y2))
                max_distance_from_dot2= abs(x - main_dot_x2);
            else
                max_distance_from_dot2= abs(y - main_dot_y2);
    
            if(max_distance_from_dot1<max_distance_from_dot2)
                return max_distance_from_dot1;
            else
                return max_distance_from_dot2;
        default:
            break;
    }
    return 0;
}

int Calculations::calculate_two_dots_distance(int x, int y) const
{
    int max_distance_from_dot1;
    int max_distance_from_dot2;
    
    if (abs(x - main_dot_x1 )>abs(y - main_dot_y1))
        max_distance_from_dot1 = abs(x - main_dot_x1);
    else
        max_distance_from_dot1 = abs(y - main_dot_y1);

    if (abs(x - main_dot_x2 )>abs(y - main_dot_y2))
         max_distance_from_dot2= abs(x - main_dot_x2);
    else
         max_distance_from_dot2= abs(y - main_dot_y2);
    
    if(max_distance_from_dot1<max_distance_from_dot2)
        return max_distance_from_dot1;
    else
        return max_distance_from_dot2;
}

Calculations::~Calculations(){}
