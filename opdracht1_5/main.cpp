// example:
// a rectangle object that is contains four line objects

#include "hwlib.hpp"
#include "rectangle.hpp"
#include "filled_rectangle.hpp"

int main(int argc, char **argv){
    
   // the window in which we want to print the line
   hwlib::target::window w( hwlib::xy( 128, 64 ));    
    
    filled_rectangle square(w, 20, 20, 30, 30);
    filled_rectangle square1(w, 30, 30, 50, 50);
    square1.print();
    square.print();
    
//   rectangle square( w, 20, 20, 40, 40 );
//   square.print();
   
   // keep the window around until we close it
   for(;;){ w.poll(); }       
}
