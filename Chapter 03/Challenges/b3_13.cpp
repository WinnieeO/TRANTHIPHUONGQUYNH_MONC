// BT13: Currency
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double    YEN_PER_DOLLAR = 98.93,
                    EUROS_PER_DOLLAR = 0.74;
    double dollar, convert;

    // Nhap so tien dollar My
    cout << "Enter the U.S. dollar amouts: ";
    cin >> dollar;

    // Chuyen doi qua dong Yen
    convert = dollar * YEN_PER_DOLLAR;
    cout << setprecision(2) << fixed;
    cout << dollar << "Dollars = " << convert << " Yen\n";

    // Chuyen doi qua dong Euro
    convert = dollar * EUROS_PER_DOLLAR;
    cout << dollar << " Dollars = " << convert << " Euros";
    return 0;
}