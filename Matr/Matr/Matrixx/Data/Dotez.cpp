#include "Dotez.h"

#include <iostream>

Dotez::Dotez() : distance(0)
{
     dot_pos= new Position();
     main_dot= new Position();
}

Dotez::Dotez(int x, int y) : distance(0)
{
     dot_pos= new Position(x,y);
     main_dot= new Position();
}

void Dotez::set_distance(int dist)
{
     distance=dist;
}

void Dotez::set_main_x_pos(int x) const
{
     main_dot->set_x_position(x);
}

void Dotez::set_main_y_pos(int y) const
{
     main_dot->set_y_position(y);
}

int Dotez::get_distance() const
{
     return distance;
}

int Dotez::get_x_pos() const
{
     return dot_pos->get_x_position();
}

int Dotez::get_y_pos() const
{
     return dot_pos->get_y_position();
}

int Dotez::get_main_x_pos() const
{
     return main_dot->get_x_position();
}

int Dotez::get_main_y_pos() const
{
     return main_dot->get_y_position();
}

Dotez::~Dotez()
{

}


