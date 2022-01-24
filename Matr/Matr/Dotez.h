#pragma once

struct Dotez //Struct which contains dot position
{
public:
    Dotez();
    Dotez(int x, int y);
    int get_x_pos();
    int get_y_pos();
    ~Dotez();
    

private:
    int dot_x_pos;
    int dot_y_pos;
};
