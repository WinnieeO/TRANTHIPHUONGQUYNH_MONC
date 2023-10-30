// BT6: Kinetic Energy
#include <iostream>
using namespace std;

// Function prototype
double kineticEnergy(double, double);

int main()
{
    double mass, velocity;

    cout << "Enter the object's mass (kilograms): ";
    cin >> mass;        // Nhap khoi luong vat the
    cout << "Enter the object's velocity (meters per second): ";
    cin >> velocity;    // Nhap van toc cua vat

    // Tinh dong luong va hien thi ket qua
    cout << "The amount of kinetic energy that the object has is " << kineticEnergy(mass, velocity) << "J";
    return 0;
}

double kineticEnergy(double m, double v)
{
    double KE = 0.5 * m * v * v;    // Tinh dong luong cua vat 
    return KE;
}