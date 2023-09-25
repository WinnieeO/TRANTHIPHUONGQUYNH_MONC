// BT1: Sum of Numbers
#include <iostream>
using namespace std;

int main()
{
    int number, sum, i;

    // Nhap mot so nguyen duong
    cout << "Enter a positive integer value: ";
    cin >> number;
    while (number < 0)
    {
        cout << "Do not accept a negative starting number. Try again!\n";
        cout << "Enter a positive integer value: ";
        cin >> number;
    }

    // Tinh tong va xuat ket qua ra man hinh
    sum = 0;
    for (i = 1; i <= number; i++)
    {
        sum = sum + i;
    }
    cout << "The sum is " << sum;
    return 0;
}