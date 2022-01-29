#pragma once

class Input
{
private:
    int x_size_of_array{};
    int y_size_of_array{};
    int main_dot_x{};
    int main_dot_y{};    
public:
    void input_size_of_matrix();
    void input_main_dot();
    /*
     void set_x_size_of_array();
     void set_y_size_of_array();
     void set_main_dot_x();
     void set_main_dot_y();
     */
    int get_x_size_of_array() const; 
    int get_y_size_of_array() const;
    int get_main_dot_x() const;
    int get_main_dot_y() const;
    
    
};
