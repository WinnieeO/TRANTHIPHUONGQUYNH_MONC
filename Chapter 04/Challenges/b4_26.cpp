// BT26: Mobile Service Provider, Part 2
#include <iostream>
using namespace std;

int main()
{
    char package;
    double  totalA = 39.99,
            totalB = 59.99,
            totalC = 69.99,
            minute, pA, pB, pC;

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
            pA = 39.99 + (minute - 450) * 0.45;
        else pA = 39.99;
        cout << "The total amount due is $" << pA;
        if (pA > totalB)
            cout << "\nYou will save $" << (pA - totalB) << " if you purchase package B\n";
        if (pA > totalC)
            cout << "You will save $" << (pA - totalC) << " if you purchase package C\n";

    }
    else if ((package == 'B') || (package == 'b'))
    {
        if (minute > 900)
            pB = 59.99 + (minute - 900) * 0.40;
        else pB = 59.99;
        cout << "The total amount due is $" << pB;
        if (pB > totalC)
            cout << "\nYou will save $" << (pB - totalC) << " if you purchase package C\n";
    }
    else if ((package == 'C') || (package == 'c'))
    {
        pC = 69.99;
        cout << "The total amount due is $" << pC;
    }
    
    return 0;
}