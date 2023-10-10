// BT20: Pizza Pi
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float PI = 3.14159;
    double diameter, area, eachSlice = 14.125, slices;

    // Nhap duong kinh banh pizza
    cout << "Enter the diameter of the pizza: ";
    cin >> diameter;

    // Tinh dien tich cai banh va so lat cat duoc
    area = (diameter / 2) * (diameter / 2) * PI;
    slices = area / eachSlice;
    
    // Xuat so lat cat duoc ra man hinh
    cout << setprecision(1) << fixed;
    cout << "The number of slices is " << slices;
    return 0;
}