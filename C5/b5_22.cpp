// BT22: Square Display
#include <iostream>
using namespace std;

int main()
{
    short number, i, j;

    // Nhap 1 so nguyen duong
    cout << "Enter a postive integer no greater than 15: ";
    cin >> number;
    while ((number < 0) | (number > 15))
    {
        cout << "The number must be between 1 and 15\n";
        cout << "Enter a postive integer no greater than 15: ";
        cin >> number;
    }

    // Xuat thong tin
    for (i = 1; i <= number; i++)
    {
        for (j = 1; j <= number; j++)
            cout << "X";
        cout << endl;
    }
    return 0;
}