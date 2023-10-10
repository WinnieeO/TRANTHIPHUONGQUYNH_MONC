// BT10: Miles per Gallon
#include <iostream>
using namespace std;

int main()
{
    float   gallon = 15.0,              // Xe chua 15 gallon xang
            milesDriven = 375.0, MPG;   // Xe di duoc 370m voi 15 gallon xang
    
    // Tinh va xuat khoang cach di duoc cua moi gallon
    MPG = milesDriven/gallon;
    cout << "The number of miles per gallon the car gets is " << MPG << " miles";
    return 0;
}