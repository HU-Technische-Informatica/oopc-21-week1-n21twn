#ifndef FILLED_RECTANGLE_HPP
#define FILLED_RECTANGLE_HPP
#include "hwlib.hpp"

class filled_rectangle
{
private:
    hwlib::window & w;
    int start_x;
    int start_y;
    int end_x;
    int end_y;
public:
    filled_rectangle(
        hwlib::window & w,
        int start_x,int start_y, int end_x, int end_y
    ):
    w(w),
    start_x(start_x),
    start_y(start_y),
    end_x(end_x),
    end_y(end_y)
   {}
    void print();
};

#endif // FILLED_RECTANGLE_HPP
