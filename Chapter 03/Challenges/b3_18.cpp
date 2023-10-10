// BT18: Interest Earned
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    unsigned short number;
    double amount, principal, rate, interest;

    // Nhap so tien goc, lai suat, so lan tien lai duoc gop lai
    cout << "Enter the principal: $";
    cin >> principal;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "Enter the number of times the interest is compounded: ";
    cin >> number;

    // Tinh va xuat thong tin
    amount = principal * pow((1.0 + (rate / static_cast<double>(number))), static_cast<double>(number));
    interest = amount - principal;
    cout << setprecision(2) << fixed;
    cout << "Interest Rate:" << setw(12) << rate * 100 << "%";
    cout << "\nTimes Compounded:" << setw(7) << number;
    cout << "\nPrincipal:" << setw(13) << "$" << principal;
    cout << "\nInterest:" << setw(14) << "$" << interest;
    cout << "\nAmount in Savings:" << setw(5) << "$" << amount;
    return 0;
}