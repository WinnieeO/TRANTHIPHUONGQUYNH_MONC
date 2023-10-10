// BT22: Angle Calculator
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
   double angle;

    // Nhap goc tinh bang radian
    cout << "Enter the angle: ";
    cin >> angle;

    // Xuat ket qua sin, cos, tang
    cout << setprecision(4) << fixed;
    cout << "sin(" << angle << ") = " << sin(angle) ;
    cout << "\ncos(" << angle << ") = " << cos(angle) ;
    cout << "\ntan(" << angle << ") = " << tan(angle) ;
    return 0;
}