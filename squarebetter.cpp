#include <simplecpp>

main_program{
  turtleSim();
  repeat(4){
    forward(100) wait(.5);
    right(90)  wait(.5);
  }
  wait(10);
}
