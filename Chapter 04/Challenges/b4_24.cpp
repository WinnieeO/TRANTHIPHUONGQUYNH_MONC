// BT24: Long-Distance Calls
#include <iostream>
using namespace std;

int main()
{
    double time, number, charges;

    // Nhap thoi gian bat dau
    
    cout << "Enter the starting time of the call (HH.MM): ";
    cin >> time;
    while ((time-static_cast<int>(time) > 0.59) || (time > 23.59))
    {
        cout << "The time is ERORR. Please try again!\n";
        cout << "Enter the starting time of the call (HH.MM): ";
        cin >> time;
    }
    cout << "Enter the number of minutes of the call: ";
    cin >> number;

    // So sanh thoi gian va tinh so tien dien thoai phai tra
    if ((time >= 00.00) && (time <= 06.59))
    {
        charges = number * 0.05;
    }
    else if ((time >= 00.00) && (time <= 06.59))
    {
        charges = number * 0.45;
    }
    else if ((time >= 00.00) && (time <= 06.59))
    {
        charges = number * 0.20;
    }
    cout << "The charges is $" << charges;
    return 0;
}