// example:clTabCtrl
// definition of the functions of a line class 

#include "hwlib.hpp"
#include "line.hpp"

void line::print(){
    if(extra_arm >= 1 && extra_arm < 6){
        for(int i = 0; i < extra_arm; i++){
            hwlib::line line( 
                  hwlib::xy( start_x , start_y), 
                  hwlib::xy( end_x, end_y ) );
          
          line.draw( w );
          w.flush();
          end_y += 5;
          start_y += 5;
        }
       
    } else{
   hwlib::line line( 
      hwlib::xy( start_x, start_y), 
      hwlib::xy( end_x, end_y ) );
   line.draw( w );
   w.flush();
    }
}