// BT7: Time Calculator
#include <iostream>
using namespace std;

int main()
{
    int seconds, minutes = 0, hours = 0, days = 0;

    // Nhap so giay
    cout << "Enter a number of seconds: ";
    cin >> seconds;
    while (seconds < 0)
    {
        cout << "The number is invalid. Please try again!\n";
        cout << "Enter a number of seconds: ";
        cin >> seconds;
    }

    // Tinh thoi gian va xuat thong tin
    if (seconds >= 86400)
    {
        days = seconds / 86400;
        seconds = seconds % 86400; 
    }

    if (seconds >= 3600)
    {
        hours = seconds / 3600;
        seconds = seconds % 3600;
    }

    if (seconds >= 60)
    {
        minutes = seconds / 60;
        seconds = seconds % 60;
    }
    cout << "The time is ";
    cout << days << " days " << hours << " hours " << minutes << " minutes " << seconds << " seconds";
    return 0;
}