#pragma once

struct Position
{
public:
    Position();
    Position(int x, int y);
    int get_x_position();
    int get_y_position();    
    void set_x_position(int x);
    void set_y_position(int y);
    ~Position();
private:
    int x_pos{};
    int y_pos{};
};
