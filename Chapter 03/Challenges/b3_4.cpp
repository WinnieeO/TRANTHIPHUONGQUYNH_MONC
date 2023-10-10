// BT4: Average Rainfall
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string month1, month2, month3;
    double amount1, amount2, amount3, avg;

    // Nhap ten 3 thang va luong mua tuong ung
    cout << "Enter the first month: ";
    cin >> month1;
    cout << "The amount of rain in " << month1 << ": ";
    cin >> amount1;
    cout << "Enter the second month: ";
    cin >> month2;
    cout << "The amount of rain in " << month2 << ": ";
    cin >> amount2;
    cout << "Enter the third month: ";
    cin >> month3;
    cout << "The amount of rain in " << month3 << ": ";
    cin >> amount3;

    // Tinh va xuat luong mua trung binh trong ba thang ra man hinh
    avg = (amount1 + amount2 + amount3) / 3;
    cout << "The average rainfall for " << month1 << ", " << month2 << ", " << month3 << " is " << avg << " inches";
    return 0;
}
