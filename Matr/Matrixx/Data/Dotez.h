#pragma once
#include "Position coordinates/Position.h"

struct Dotez //Struct which contains dot position
{
public:
    Dotez();
    Dotez(int x, int y);

    void set_distance(int x);
    void set_main_x_pos(int x) const;
    void set_main_y_pos(int y) const;
    int get_distance() const;
    int get_x_pos() const;
    int get_y_pos() const;
    int get_main_x_pos() const;
    int get_main_y_pos() const;
 
    ~Dotez();
    

private:
    Position* dot_pos{};
    Position* main_dot{};
    int distance{};
};
