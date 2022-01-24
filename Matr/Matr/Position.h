#pragma once

struct Position
{
public:
    Position();
    Position(int x, int y);
    void get_x_position();
    void get_y_position();    
    void set_x_position();
    void set_y_position();
    ~Position();
private:
    int x_pos;
    int y_pos;
};
