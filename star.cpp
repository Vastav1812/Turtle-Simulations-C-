/*Draw a 5 pointed star*/
#include <simplecpp>

main_program
{
    turtleSim();
    repeat(5)
    {
        right(72);   // tuetle position change
        forward(100);
        right(72);  // to make the star repeat the angle
    }
    wait(10);
}