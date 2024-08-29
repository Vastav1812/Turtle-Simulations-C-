#include <simplecpp>

main_program
{
    turtleSim();

    repeat(4)
    {
        forward(100);
        right(90);
    }

    penUp();
    forward(50);
    right(45);
    penDown();

    repeat(4)
    {
        forward(sqrt(5000));
        right(90);
    }
    wait(10);
}