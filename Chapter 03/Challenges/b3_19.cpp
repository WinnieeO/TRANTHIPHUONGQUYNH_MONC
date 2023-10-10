// BT19: Monthly Payments
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double payment, rate, loan;
    unsigned short number;

    // Nhap thong tin
    cout << "Enter the amount of the loan: $";
    cin >> loan;
    cout << "Enter the monthly interest rate: ";
    cin >> rate;
    cout << "Enter the number of payments: ";
    cin >> number;

    // Tinh va xuat thong tin
    payment = (rate * loan * pow((1 + rate), static_cast<double>(number))) / (pow((1 + rate), static_cast<double>(number)) - 1.0);
    cout << setprecision(2) << fixed;
    cout << "Loan Amount:" << setw(16) << "$" << loan;
    cout << "\nMonthly Interest Rate:" << setw(9) << rate * 100 << "%";
    cout << "\nNumber of Payments:" << setw(10) << number;
    cout << "\nMonthly Payments:" << setw(11) <<"$" << payment;
    cout << "\nAmount Paid Back:" << setw(11) << "$" << payment * number;
    cout << "\nInterest Paid:" << setw(14) << "$" << (payment * number) - loan;
    return 0;
}