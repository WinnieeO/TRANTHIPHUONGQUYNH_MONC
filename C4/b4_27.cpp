// BT27: Mobile Service Provider, Part 3
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char package;
    string month;
    double  totalA = 39.99,
            totalB = 59.99,
            totalC = 69.99,
            minute, pA, pB, pC, days, d30, d31, d28;

    cout << "Enter the package (A, B or C): ";
    cin >> package;
    while ((package != 'A') && (package != 'a') && (package != 'B') && (package != 'b') && (package != 'C') && (package != 'c'))
    {
        cout << "Enter the package again: ";
        cin >> package;
    }
    cout << "Enter the month (by name): ";
    cin >> month;
    if ((month == "January") || (month == "March") || (month == "May") || (month == "July") || (month == "August") || (month == "October") || (month == "December") || (month == "january") || (month == "march") || (month == "may") || (month == "july") || (month == "august") || (month == "october") || (month == "december"))
        days = 31;
    else if ((month == "April") || (month == "June") || (month == "September") || (month == "November") || (month == "april") || (month == "june") || (month == "september") || (month == "november"))
        days = 30;
    else if ((month == "February") || (month == "february"))
        days = 28;
    d28 = 672 * 60;
    d30 = 720 * 60;
    d31 = 744 * 60;
    cout << setprecision(2) << fixed;
    cout << "Enter the number of minutes were used: ";
    cin >> minute;
    while ((days = 30) && (minute > d30))
    {
        cout << "The number of minutes is invalid. Please try again!\n";
        cout << "Enter the number of minutes were used: ";
        cin >> minute;
    }
    while ((days = 31) && (minute > d31))
    {
        cout << "The number of minutes is invalid. Please try again!\n";
        cout << "Enter the number of minutes were used: ";
        cin >> minute;
    }
    while ((days = 28) && (minute > d28))
    {
        cout << "The number of minutes is invalid. Please try again!\n";
        cout << "Enter the number of minutes were used: ";
        cin >> minute;
    }


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