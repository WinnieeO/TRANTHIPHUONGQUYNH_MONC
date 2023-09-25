// BT2: Roman Numeral Converter
#include <iostream>
using namespace std;

int main()
{
    short number;

    // Nhap 1 so
    cout << "Enter a number within the range of 1 through 10: ";
    cin >> number;
    while ((number < 1) || (number > 10))   // Neu so vua nhap khong hop le, yeu cau nhap lai
    {
        cout << "The number is invalid. Try again!\n";
        cout << "Enter a number within the range of 1 through 10: ";
        cin >> number;
    }

    // So sanh dieu kien va xuat ra man hinh
    cout << "Your number in the Roman numeral version is ";
    switch (number)
    {
    case 1: cout << "I";
        break;
    case 2: cout << "II";
        break;
    case 3: cout << "III";
        break;
    case 4: cout << "IV";
        break;
    case 5: cout << "V";
        break;
    case 6: cout << "VI";
        break;
    case 7: cout << "VII";
        break;
    case 8: cout << "VIII";
        break;
    case 9: cout << "IX";
        break;
    case 10: cout << "X";
        break;
    }
    return 0;
}