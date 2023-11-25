// BT15: Multipurpose Payroll
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

union PayRoll
{
    int hoursWorked;    // So gio lam viec
    double salaried;    // Luong
};

int main()
{
    PayRoll employee;
    char payType;
    double bonus, payRate;

    // Hoi nguoi dung muon tinh luong theo loai nao
    cout << "Do you want calculate the pay for an hourly paid worker or a salaried worker? (H/S) ";
    cin >> payType;
    while ((toupper(payType) != 'H') && (toupper(payType) != 'S'))  // Xac thuc dau vao
    {
        cout << "Enter again: ";
        cin >> payType;
    }

    if (toupper(payType) == 'S')    // Neu chon luong thi nhap cac so lieu lien quan (luong va thuong them)
    {
        cout << "Enter your bonus: ";
        cin >> bonus;
        while (bonus < 0)   // Xac thuc dau vao
        {
            cout << "The number is invalid. Please enter again: ";
            cin >> bonus;
        }

        cout << "Enter your salary: ";
        cin >> employee.salaried;
        while (employee.salaried < 0)   // Xac thuc dau vao
        {
            cout << "The number is invalid. Please enter again: ";
            cin >> employee.salaried;
        }

        // Hien thi luong sau khi da tinh
        cout << "Your gross pay is $" << (bonus + employee.salaried);
    }
    else    // Neu chon tinh theo gio thi nhap cac so lieu lien quan (so gio lam viec, ty gia luong)
    {
        cout << "Enter your worked hour: ";
        cin >> employee.hoursWorked;
        while ((employee.hoursWorked < 0) || (employee.hoursWorked > 80))   // Xac thuc dau vao
        {
            cout << "The number of hours is invalid. Please enter again: ";
            cin >> employee.hoursWorked;
        }

        cout << "Enter the pay rate: ";
        cin >> payRate;
        while (payRate < 0)     // Xac thuc dau vao
        {
            cout << "The number is invalid. Please enter again: ";
            cin >> payRate;
        }

        // Hien thi luong sau khi da tinh
        cout << "Your gross pay is $" << (employee.hoursWorked * payRate);
    }

    return 0;
}