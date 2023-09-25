// BT12: Celsius to Fahrenheit
#include <iostream>
using namespace std;

int main()
{
    float cTemp, fTemp;

    // Nhap do C
    cout << "Enter Celsius temperature: ";
    cin >> cTemp;

    // Chuyen tu do C sang do F va xuat ra man hinh
    fTemp = (9 * cTemp / 5) + 32;
    cout << cTemp << "C = " << fTemp << "F";
    return 0;
}