// BT5: Body Mass Index
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float weight, height, BMI;

    // Nhap can nang
    cout << "Enter your weight: ";
    cin >> weight;
    while (weight < 0.0)
    {
        cout << "The weight is invalid. Try again!\n";
        cout << "Enter your weight: ";
        cin >> weight;
    }

    // Nhap chieu cao
    cout << "Enter your height: ";
    cin >> height;
    while (height < 0.0)
    {
        cout << "The height is invalid. Try again!\n";
        cout << "Enter your height: ";
        cin >> height;
    }

    // Tinh chi so BMI
    weight = weight / 0.45359237;
    height = height / 2.54;
    BMI = weight * 703.0 / pow(height, 2.0);

    // So sanh chi so va dua ra ket qua
    if (BMI > 25.0)
    {
        cout << "You are overweight";
    }
    else if (BMI < 18.5)
    {
        cout << "You are underweight";
    }
    else
    {
        cout << "You has optimal weight";
    }
    return 0;
}