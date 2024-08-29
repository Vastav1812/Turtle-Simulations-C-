/* Draw a dashed line, say a dash line of 10 points with a gap of 10 pixels, so on 10 times*/
#include <simplecpp>
main_program
{
    turtleSim();
    repeat(4)     // repeating 4 times as square has 4 sides and 4 times it need to change its angle 
    {
        repeat(10)     
        {
            forward(10);
            penUp();     // not making any line 
            forward(10);
            penDown();   // draw line
        }
        right(90);
    }
}