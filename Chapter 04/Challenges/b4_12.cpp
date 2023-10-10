// BT12: Software Sales
#include <iostream>
using namespace std;

int main()
{
    int number;
    double total, price = 99.0;

    // Nhap so luong san pham da ban
    cout << "Enter the number of units sold: ";
    cin >> number;
    while (number < 0)
    {
        cout << "The number is invalid. Please try again!\n";
        cout << "Enter the number of units sold: ";
        cin >> number;
    }

    // Tinh tien va xuat ket qua
    if ((number >= 10) && (number <= 19))
    {
        total = number * price * 0.2;
    }
    else if ((number >= 20) && (number <= 49))
    {
        total = number * price * 0.3;
    }
    else if ((number >= 50) && (number <= 99))
    {
        total = number * price * 0.4;
    }
    else if (number >= 100)
    {
        total = number * price * 0.5;
    }
    cout << "The total cost of the purchase is $" << total;
    return 0;
}