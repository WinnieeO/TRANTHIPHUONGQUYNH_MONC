//BT25: Mobile Service Provider
#include <iostream>
using namespace std;

int main()
{
    char package;
    double minute, total;

    cout << "Enter the package (A, B or C): ";
    cin >> package;
    while ((package != 'A') && (package != 'a') && (package != 'B') && (package != 'b') && (package != 'C') && (package != 'c'))
    {
        cout << "Enter the package again: ";
        cin >> package;
    }
    cout << "Enter the number of minutes were used: ";
    cin >> minute;

    // Tinh so tien va hien thi ra man hinh
    if ((package == 'A') || (package == 'a'))
    {
        if (minute > 450)
            total = 39.99 + (minute - 450) * 0.45;
        else total = 39.99;
    }
    else if ((package == 'B') || (package == 'b'))
    {
        if (minute > 900)
            total = 59.99 + (minute - 900) * 0.40;
        else total = 59.99;
    }
    else if ((package == 'C') || (package == 'c'))
    {
        total = 69.99;
    }
    cout << "The total amount due is $" << total;
}