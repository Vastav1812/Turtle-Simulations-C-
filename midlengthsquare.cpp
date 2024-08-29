/* Draw a square of side length 100 as before, On top of this draw a square obtained by joining the midpoints of the side od the first square. */

#include <simplecpp>

main_program{
  turtleSim();
  repeat(4){
    forward(100);
    right(90);
  }
  
  double sidelengthInner = sqrt(5000);
  

  penUp();

  forward(50);
  right(90);
  forward(50);
  wait(5);
  
  penDown();

  repeat(4){

  forward(sidelengthInner);
  right(90) ; 
  
    }
    wait(20);
}
    
  
