// BT9: Payroll
#include <iostream>
using namespace std;

int main()
{
    long int emID[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    short    hours[7];
    double   payRate[7],
             wages[7];

    // Nhap so gio lam viec va muc luong cua tung nguoi
    cout << "Enter hours and pay rate of each employee:\n";
    for (int i = 0; i < 7; i++)
    {
        cout << "emID: " << emID[i];
        cout << "\nHours: ";
        cin >> hours[i];
        while (hours[i] < 0)
        {
            cout << "Do not accept negative values for hours\n";
            cout << "Hours: ";
            cin >> hours[i];  
        }

        cout << "Pay rate: $";
        cin >> payRate[i];
        while (payRate[i] < 15.00)
        {
            cout << "Do not accept negative values for numbers less than 15.00 for pay rate\n";
            cout << "Pay rate: $";
            cin >> payRate[i];  
        }
        cout << "-------------------\n";
        wages[i] = hours[i] * payRate[i];
    }

    // Xuat tong tien luong cua tung nhan vien
    for (int i = 0; i < 7; i++)
    {
        cout << "emID: " << emID[i];
        cout << "\nThe gross wages: $" << wages[i] << endl;
    }
    return 0;
}