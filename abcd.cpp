#include <simplecpp>

void drawCircle(double radius)
{
    int sides = 360; // Number of sides to approximate a circle
    double angle = 360.0 / sides;
    double length = 2 * radius * PI / sides;

    repeat(sides)
    {
        forward(length);
        right(angle);
    }
}

main_program
{
    turtleSim();

    double radius = 50; // Radius of the circles

    // Draw the central circle
    drawCircle(radius);

    // Move to starting position for surrounding circles
    penUp();
    forward(2 * radius);    penDown();

    // Draw 6 surrounding circles
    repeat(6)
    {
        drawCircle(radius);
        penUp();
        forward(-2 * radius);
        right(60);
        forward(2 * radius);
        penDown();
    }

    wait(10); // Pause to view the circles
}
