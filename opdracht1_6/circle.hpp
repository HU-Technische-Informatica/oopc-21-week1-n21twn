#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "hwlib.hpp"
//clTabCtrl#include <hwlib-graphics-drawables.hpp>

class circle
{
private:
    hwlib::window & w;
    int start_x;
    int start_y;
    uint_fast16_t raduis;
    
public:
    circle(
        hwlib::window & w,
        int start_x, 
        int start_y, 
        uint_fast16_t raduis
    ):
    w(w), 
    start_x(start_x),
    start_y(start_y),
    raduis(raduis)
    {}
    
    void print();

};

#endif // CIRCLE_HPP
