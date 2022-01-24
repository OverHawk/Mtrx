#include "Dotez.h"

#include <iostream>

Dotez::Dotez()
{
}

Dotez::Dotez(int x, int y)
{
     dot_y_pos=x;
     dot_x_pos=y;
}


int Dotez::get_x_pos()
{
     return dot_x_pos;
}

int Dotez::get_y_pos()
{
     return dot_y_pos;
}

Dotez::~Dotez()
{

}


