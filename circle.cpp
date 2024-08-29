/* Draw A Circle */
#include <simplecpp>

main_program
{
    turtleSim();
    int nsides;
    nsides = 100;
    repeat(nsides)
    {
        forward(100);
        right(360.0 / nsides);
    }
    wait(10);
}