// BT1: Miles per Gallon
#include <iostream>
using namespace std;

int main()
{
    // Khai bao bien
    double gallons, miles, milesPerGallon;
    
    // Nhap luong nhien lieu va quang duong di duoc
    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> gallons;
    cout << "Enter the number of miles it can be driven on a full tank: ";
    cin >> miles;

    // Tinh va xuat quang duong di duoc tren 1 gallon gas
    milesPerGallon = miles / gallons;
    cout << "The number of miles that may be driven per gallon of gas is " << milesPerGallon;
    return 0;
}