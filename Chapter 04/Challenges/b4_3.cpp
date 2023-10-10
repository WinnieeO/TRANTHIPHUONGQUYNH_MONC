// BT3: Magic Dates
#include <iostream>
using namespace std;

int main()
{
    short day, month, year;

    // Nhap ngay, thang, nam
    cout << "Enter a month (in numeric form): ";
    cin >> month;
    while ((month < 1) || (month > 12))
    {
        cout << "The month is invalid. Try again!\n";
        cout << "Enter a month (in numeric form): ";
        cin >> month;
    }

    cout << "Enter a day: ";
    cin >> day;
    while ((day < 1) || (day > 31))
     {
        cout << "The day is invalid. Try again!\n";
        cout << "Enter a day: ";
        cin >> day;
    }
    cout << "Enter a two-digit year: ";
    cin >> year;
    while ((year < 1) || (year > 99))
     {
        cout << "The year is invalid. Try again!\n";
        cout << "Enter a two-digit year : ";
        cin >> year;
    }

    // Nhan thang va ngay lai, so sanh voi nam va xuat ra ket qua
    if ((day * month) == year)
    {
        cout << "The date is magic.";
    }
    else
    {
        cout << "The date is not magic.";
    }
    return 0;
}