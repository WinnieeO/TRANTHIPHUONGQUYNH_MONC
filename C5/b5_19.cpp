// BT19: Budget Analysis
#include <iostream>
using namespace std;

int main()
{
    double budget, expense, amount;
    char answer = 'Y';

    // Nhap so tien du tru
    cout << "Enter the amount has been budgeted for a month: $";
    cin >> budget;
    amount = 0;

   // Nhap cac khoan chi tieu trong thang 
    while ((answer == 'Y') || (answer == 'y'))
    {
        cout << "Enter your expense: $";
        cin >> expense;
        amount += expense;

        cout << "Do you have another expenses? ";
        cin >> answer;
        while ((answer != 'Y') && (answer != 'N') && (answer != 'y') && (answer != 'n'))
        {
            cout << "Your answer is invalid. Please try again!\n";
            cout << "Do you have another expenses? ";
            cin >> answer;
        }
        cout << endl;
    }

    // Xuat ket qua
    cout << "You spent $" << amount << " in this month\n"; 
    if (budget < amount)
        cout << "The amount that the you is over budget!\n";
    else if (budget > amount)
        cout << "The amount that the you is under budget!\n";
    return 0;
}