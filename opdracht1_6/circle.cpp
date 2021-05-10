#include "circle.hpp"
//#include <hwlib-graphics-drawables.hpp>
#include "hwlib.hpp"

void circle::print(){
    hwlib::circle circle(
        hwlib::xy( start_x, start_y),
        raduis
    );
    circle.draw(w);
    w.flush();

}

