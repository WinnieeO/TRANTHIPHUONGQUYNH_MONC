// BT13: The Greatest and Least of These
#include <iostream>
using namespace std;

int main()
{
    int i, num, min, max;

    // Nhap cac so nguyen
    cout << "Enter -99 to signal the end of the series.\n";
    cout << "Enter number: ";
    cin >> num;
    num = min = max;

    while (num != -99)
    {
        if (num < min)
            min = num;
        if (num > max)
            max = num;
        cout << "Enter number: ";
        cin >> num;
    }

    // Xuat so lon nhat va so nho nhat
    cout << "The largest number entered is " << max << endl;
    cout << "the smallest number entered " << min;
}