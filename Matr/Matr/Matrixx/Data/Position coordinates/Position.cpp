#include "Position.h"


Position::Position() : x_pos(0), y_pos(0)
{
}

Position::Position(int x, int y) : x_pos(x), y_pos(y)
{
}

int Position::get_x_position()
{
    return x_pos;
}

int Position::get_y_position()
{
    return y_pos;
}

void Position::set_x_position(int x)
{
    x_pos=x;
}

void Position::set_y_position(int y)
{
    y_pos=y;
}

Position::~Position(){}
