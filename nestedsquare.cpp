#include <simplecpp>

main_program
{
    turtleSim();

    repeat(4)
    {
        forward(100);
        right(90);
    }
    wait(5);

    penUp();
    forward(50);
    right(90);
    forward(50);

    penDown();

    repeat(4)
    {
        forward(50);
        right(90);
    }

    wait(10);
}
