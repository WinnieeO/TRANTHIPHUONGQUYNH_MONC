// BT16: Saving Account Balance
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double annualRate, balance, deposited, withdrawn, interest, totalDeposited = 0, totalWithdrawn = 0, totalInterest = 0;
    int months;

    // Nhap thong tin
    cout << "Enter the annual interest rate (%): ";
    cin >> annualRate;

    cout << "Enter the starting balance: ";
    cin >> balance;

    cout << "Enter the number of months that have passed since the account was established: ";
    cin >> months;

    for (int i = 1; i <= months; i++)
    {
        cout << "\nMonth No." << i << endl;
        cout << "----------------\n";

        // Nhap so tien gui vao
        cout << "Enter the amount deposited into the account during the month: ";
        while (!(cin >> deposited) || (deposited < 0))
        {
            cout << "Do not accept negative numbers\n";
            cout << "Enter the amount deposited into the account during the month: ";
        }
        balance += deposited;
        totalDeposited += deposited;

        // Nhap so tien rut
        cout << "Enter the amount withdrawn from the account during the month: ";
        while (!(cin >> withdrawn) || (withdrawn < 0))
        {
            cout << "Do not accept negative numbers\n";
            cout << "Enter the amount withdrawn from the account during the month: ";
        }
        balance -= withdrawn;
        totalWithdrawn += withdrawn;

        if (balance < 0)
        {
            cout << "The account has been closed!";
            break;
        }

        // Tinh tien lai
        interest = (annualRate / 100) / 12 * balance;
        totalInterest += interest;
        balance += interest;
    }

    // Xuat thong tin
    cout << setprecision(1) << fixed;
    cout << "The ending balance:                    $" << balance << endl;
    cout << "The total amount of deposits:          $" << totalDeposited << endl;
    cout << "The total amount of withdrawals:       $" << totalWithdrawn << endl;
    cout << "The total interest earned:             $" << totalInterest;
    return 0;
}