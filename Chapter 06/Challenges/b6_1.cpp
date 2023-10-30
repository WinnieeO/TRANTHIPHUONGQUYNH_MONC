// BT1: Markup
#include <iostream>
using namespace std;

double calculateRetail(double price, double percentage);     // Function prototype

int main()
{
    double cost, percent;

    // Nhap gia mat hang
    cout << "Enter an item's wholesale cost: ";
    cin >> cost;
    while (cost < 0)
    {
        cout << "Do not accept negative value. Try again: ";
        cin >> cost;
    }

    // Nhap phan tram gia tang cua no
    cout << "Enter its markup percentage (%): ";
    cin >> percent;
    while (percent < 0)     // Neu phan tram be hon 0 thi nhap lai
    {
        cout << "Do not accept negative value. Try again: ";
        cin >> percent;
    }

    // Xuat thong tin
    cout << "The item's retail is $" << calculateRetail(cost, percent);
    return 0;
}

double calculateRetail(double price, double percentage)
{
    double retail;
    retail = price * (1 + (percentage / 100));  // Tinh gia tien cua mat hang
    return retail;
}