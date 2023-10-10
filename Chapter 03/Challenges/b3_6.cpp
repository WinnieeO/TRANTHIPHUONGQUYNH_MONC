// BT6: Ingredient Adjuster
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    short number;
    float   amountSugar, amountButter, amountFlour, 
            sugar = 1.5,
            butter = 1.0,
            flour = 2.75;

    // Nhap so luong banh quy mmuon lam ra
    cout << "How many cookies do you want to make? ";
    cin >> number;

    // Tinh va xuat luong nguyen lieu can thiet
    amountSugar = sugar / 48.0 * number;
    amountButter = butter / 48.0 * number;
    amountFlour = flour / 48 * number;
    cout << "To make " << number << " cookies you need:\n";
    cout << setprecision(2) << fixed;
    cout << amountSugar << " cups of sugar\n";
    cout << amountButter << " cups of butter\n";
    cout << amountFlour << " cups of flour";
    return 0;
}