/* Draw a any pointed star */
#include <simplecpp>

main_program
{
    turtleSim();
    cout << "How many points of a star?"; // display
    int n, k;                             // integer value of n , k cell

    k = 1; //  angle formula

    cin >> n; // insert value in n cell
    repeat(n)
    {

        right(180 * (n - 2 * k) / n);
        forward(100);
        right(180 * (n - 2 * k) / n);
    }

    wait(10);
}