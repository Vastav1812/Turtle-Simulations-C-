/*Draw 7 identical circles, with 6 touching the central circle. Circle
= polygon of large no of sides, say 360.*/

/* Draw A Circle */
#include <simplecpp>

main_program
{
    turtleSim();

    int sides = 360; // Number of sides to approximate a circle
    int radius = 50; // Radius of the circle

    // Draw the circle
    repeat(sides)
    {
        forward(2 * radius * PI / sides); // Move forward by the calculated arc length
        right(360.0 / sides);             // Turn by the angle corresponding to one side of the polygon
    }

    wait(10); // Pause to view the circle
}
