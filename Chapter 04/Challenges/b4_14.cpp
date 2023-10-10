// BT14: Bank Charges
#include <iostream>
using namespace std;

int main()
{
    double balance, numberChecks, fee;

    // Nhap so du dau ky va so du so luong sec duoc viet
    cout << "Enter the beginning balance: ";
    cin >> balance;
    while (balance < 0)
    {
        cout << "Urgent message: The account is overdrawn.\n";
        break;
    }
    cout << "Enter the number of checks written: ";
    cin >> numberChecks;
    while (numberChecks < 0)
    {
        cout << "The number is invalid. Please try again!\n";
        cout << "Enter the number of checks written: ";
        cin >> numberChecks;
    }

    // Tinh va hien thi phi dich vu cua ngan hang trong thang
    if (balance < 400)
    {
        fee = 25;
    }
    else fee = 10;

    if (numberChecks < 20)
    {
        fee = fee + 0.1 * numberChecks;
    }
    else if ((numberChecks >= 20) && (numberChecks < 40))
    {
        fee = fee + 0.08 * numberChecks;
    }
    else if ((numberChecks >= 40) && (numberChecks < 59))
    {
        fee = fee + 0.06 * numberChecks;
    }
    else if (numberChecks >= 60)
    {
        fee = fee + 0.04 * numberChecks;
    }
    cout << "The bank's service fees for the month is $" << fee;
    return 0;
}