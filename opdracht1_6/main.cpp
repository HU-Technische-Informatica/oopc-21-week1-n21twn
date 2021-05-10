// example:
// a rectangle object that is contains four line objects

#include "hwlib.hpp"
#include "filled_rectangle.hpp"
#include "line.hpp"
#include "circle.hpp"

int main(int argc, char **argv){
    
   // the window in which we want to print the line
   hwlib::target::window w( hwlib::xy( 128, 64 ));    
    circle hoofd(w, 50, 10, 10);
    hoofd.print();
    line mond(w,55,15, 45,15, 0);
    mond.print();
    circle oog1(w, 55, 8, 2);
    oog1.print();
    circle oog2(w, 45, 8, 2);
    oog2.print();
    
    filled_rectangle body(w, 40, 20, 61, 50);
    body.print();
    
    line been1(w, 45, 50, 45, 64, 0);
    been1.print();
    
    line been2(w, 55, 50, 55, 64, 0);
    been2.print();

// de laatse parameter is om te bepalen hoeveel armen het popetje heeft 
   line arm1(w, 40, 25, 25, 25,  6);
    arm1.print();
    
  line arm2(w, 61, 25, 75, 20, 6);
    arm2.print();
   
   // keep the window around until we close it
   for(;;){ w.poll(); }       
}
