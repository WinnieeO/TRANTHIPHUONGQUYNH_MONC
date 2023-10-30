// BT9: Present Value
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
double presentValue(double, double, double);

int main()
{
    double futureValue, annualRate, numYear;
    
    cout << "Enter the value that you want in the account: $";
    cin >> futureValue;     // Nhap so tien muon co trong tuong lai

    cout << "Enter the annual interest rate (%): ";
    cin >> annualRate;      // Nhap thue hang nam

    cout << "Enter the number of years that you plan to let the money sit in the account: ";
    cin >> numYear;         // Nhap so nam muon gui tien

    // Hien thi so tien can gui trong hom nay
    cout << "The amount of money that you need to deposit today is $" << presentValue(futureValue, annualRate, numYear);
    return 0;
}

double presentValue(double F, double r, double n)
{
    double P = F / pow((1 + r / 100), n);       // Tinh so tien can gui
    return P;                                   // Tra ve gia tri cho so tien can gui
}