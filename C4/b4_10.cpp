// BT10: Days in a Month
#include <iostream>
using namespace std;

int main()
{
    unsigned short month, year;

    // Nhap thang, nam
    cout << "Enter a month (1 - 12): ";
    cin >> month;
    while ((month < 1) || (month >12))
    {
        cout << "The month is invalid. Please try again!\n";
        cout << "Enter a month: ";
        cin >> month;
    }

    cout << "Enter a year: ";
    cin >> year;

    // Tinh so ngay cua thang va xuat ra man hinh
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12))
    {
        cout << "31 days";
    }
    else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
    {
        cout << "30 days";
    }
    else
    {
        if (((year % 100 == 0) && (year % 400 == 0)) || ((year % 100 != 0) && (year % 4 == 0)))
        {
            cout << "29 days";
        }
        else cout << "28 days";
    }
    return 0;
}