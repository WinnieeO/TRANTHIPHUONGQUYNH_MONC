// BT9: Change for a Dollar Game
#include <iostream>
using namespace std;

int main()
{
    unsigned int pennies, nickels, dimes, quarters;
    double  penny = 0.01,
            nickel = 0.05,
            dime = 0.1,
            quarter = 0.25,
            dollar;

    // Nhap tien xu
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Tinh toan va so sanh, xuat ket qua ra man hinh
    dollar = pennies * penny + nickels * nickel + dimes * dime + quarters * quarter;
    if (dollar == 1.0)
    {
        cout << "Congratulate you for winning the game";
    }
    else if (dollar < 1.0)
    {
        cout << "The amount entered was less than one dollar";
    }
    else
    {
        cout << "The amount entered was more than one dollar";
    }
    return 0;
}    