#include <simplecpp>

main_program{
  turtleSim();
  cout << "how many side?";
  int nsides;
  cin >> nsides;
  repeat(nsides){
    forward(100);
    right(360.0/nsides);
  }
  wait(10);
}
