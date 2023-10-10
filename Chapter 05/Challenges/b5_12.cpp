// BT12:  Celsius to Fahrenheit Table
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float cTemp, fTemp;

    // Chuyen tu 0 - 28 do C sang do F va xuat ra man hinh
    cout << "Celsius        Fahrenheit\n";
    for (cTemp = 0; cTemp <= 28; cTemp++)
    {
        fTemp = (9 * cTemp / 5) + 32;
        cout << setw(3) << cTemp << "C " << setw(16) << fTemp << "F\n";
    }
    return 0;
}