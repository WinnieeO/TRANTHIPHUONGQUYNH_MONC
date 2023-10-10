// BT4: Restaurant Bill
#include <iostream>
using namespace std;

int main()
{
    float   mealCost = 88.67,                   // Gia goc cua bua an
            taxAmount, tipAmount, totalBill;

    // Xuat tien cua bua an
    cout << "The meal cost is $" << mealCost << endl;

    // Tinh va xuat tien thue
    taxAmount = mealCost * 0.0675;
    cout << "The tax amount is $" << taxAmount << endl;

    // Tinh va xuat tien boa
    tipAmount = mealCost * 0.2;
    cout << "The tip amount is $" << tipAmount << endl;

    // Tinh va xuat tong hoa don
    totalBill = mealCost + taxAmount + tipAmount;
    cout << "The total bill is $" << totalBill;
    return 0;
}