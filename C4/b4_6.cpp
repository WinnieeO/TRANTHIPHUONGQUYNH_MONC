// BT6: Mass and Weight
#include <iostream>
using namespace std;

int main()
{
    double mass, weight;

    // Nhap khoi luong cua vat
    cout << "Enter an object's mass(kg): ";
    cin >> mass;
    while (mass < 0)
    {
        cout << "The object's mass is invalid. Try again!\n";
        cout << "Enter an object's mass(kg): ";
        cin >> mass;
    }

    // Tinh trong luong cua vat
    weight = mass * 9.8;
    cout << "The object's weight is " << weight << " newtons.\n";

    // So sanh va hien thong bao ra man hinh
    if (weight > 1000)
    {
        cout << "The object is too heavy!";
    }
    else if (weight < 10)
    {
        cout << "The object is too light!";
    }
    return 0;
}