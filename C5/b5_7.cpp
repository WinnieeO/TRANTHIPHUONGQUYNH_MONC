// BT7: Pennies for Pay
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days, i;
    double penny = 1, total = 0, salary;

    // Nhap so ngay
    cout << "The number of days is ";
    cin >> days;
    while (days < 1)
    {
        cout << "Do not accept a number less than 1 for the number of days worked. Try again!\n";
        cout << "The number of days is ";
        cin >> days;
    }

    // Tinh so luong
    cout << "-------------------\n";
    cout << "Day    Salary\n";
    for (i = 1; i <= days; i++)
    {
        if (i == 1)
        {
            salary = penny / 100;
            cout << i << setw(8) << "$" << salary << endl;
        }
        else
        {
            penny = penny * 2;
            salary = penny / 100;
            cout << i << setw(8) << "$" << salary << endl;
        }
        total = salary + total;
    }
    cout << "The total pay at the end of the period is $" << total;
    return 0;
}