// BT15: Shipping Charges
#include <iostream>
using namespace std;

int main()
{
    double weight, distance, charges;

    // Nhap trong luong cua goi hang va khoang cach van chuyen
    cout << "Enter the weight of the package: ";
    cin >> weight;
    while ((weight < 0 ) || (weight > 20))
    {
        cout << "The weight is invalid. Please try again!\n";
        cout << "Enter the weight of the package: ";
        cin >> weight;
    }

    cout << "Enter the distance it is to be shipped: ";
    cin >> distance;
     while ((distance < 10 ) || (distance > 3000))
    {
        cout << "The distance is invalid. Please try again!\n";
        cout << "Enter the distance it is to be shipped: ";
        cin >> distance;
    }

    // So sanh va xuat thong tin khoan phi
    if (weight <= 2.0)
    {
        charges = 1.1 / 500 * distance;
    }
    else if ((weight > 2.0) && (weight <= 6.0))
    {
        charges = 2.2 / 500 * distance;
    }
    else if ((weight > 10.0) && (weight <= 20.0))
    {
        charges = 4.8 / 500 * distance;
    }
    cout << "The charges is $" << charges;
    return 0;
}
