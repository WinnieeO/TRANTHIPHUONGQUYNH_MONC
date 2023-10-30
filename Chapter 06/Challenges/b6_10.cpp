// BT10: Future Value
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
double futureValue(double, double, double);

int main()
{
    double presentValue, monthlyRate, numMonth;
    
    cout << "Enter the present value of the account: $";
    cin >> presentValue;     // Nhap so tien hien tai co

    cout << "Enter the monthly interest rate (%): ";
    cin >> monthlyRate;      // Nhap thue hang thang

    cout << "Enter the number of months that you plan to let the money sit in the account: ";
    cin >> numMonth;         // Nhap so thang muon gui tien

    // Hien thi so tien tai khoan co trong tuong lai
    cout << "The future value of the account after " << numMonth << " months is $" << futureValue(presentValue, monthlyRate, numMonth);
    return 0;
}

double futureValue(double P, double r, double n)
{
    double F = P * pow((1 + r / 100), n);       // Tinh so tien nhan duoc trong tuong lai
    return F;                                   // Tra ve gia tri cho khoan tien tuong lai
}