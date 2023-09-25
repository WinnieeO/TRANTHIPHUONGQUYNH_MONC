// BT3: Ocean Levels
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount = 1.5, risen = 0;
    short year, i;

    // Hien thi muc nuoc bien tang trong moi nam trong 25 nam toi
    cout << "Year" << setw(25) << "Number of milimeters\n";
    for (i = 1; i <= 25; i++)
    {
        
        risen = amount * i;
        cout << setprecision(1) << fixed;
        if (i < 10)
            cout << i << setw(15) << risen << endl;
        else
            cout << i << setw(14) << risen << endl;
    }
    return 0;
}