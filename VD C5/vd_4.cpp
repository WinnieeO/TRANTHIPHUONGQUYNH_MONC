#include <iostream>
using namespace std;

int main()
{
    int x = 1, y = 1;

    x = y++;        // y++ returns a 1
                    // The 1 is assigned to x
                    // and y is incremented to 2
    cout << x << "  " << y << " "; // Displays 1  2

    x = y--;        // y-- returns a 2
                    // The 2 is assigned to x
                    // and y is decremented to 1
    cout << x << "  " << y; // Displays 2 1
    return 0;
}
