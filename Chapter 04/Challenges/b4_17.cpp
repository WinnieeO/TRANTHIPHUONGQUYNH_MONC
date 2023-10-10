// BT17: Personal Best
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, date1, date2, date3;
    float height1, height2, height3;

    // Nhap ten van dong vien nhay sao
    cout << "Enter the name of a pole vaulter: ";
    getline(cin, name);

    // Nhap ngay thang va chieu cao buoc nhay cua 3 thanh tich tot nhat
    cout << "Enter the first date: ";
    cin >> date1;
    cout << "Enter the first height: ";
    cin >> height1;
    while ((height1 < 2.0) || (height1 > 5.0))
    {
        cout << "The height is invalid. Please try again!\n";
        cout << "Enter the first height: ";
        cin >> height1;
    }

    cout << "Enter the second date: ";
    cin >> date2;
    cout << "Enter the second height: ";
    cin >> height2;
    while ((height2 < 2.0) || (height2 > 5.0))
    {
        cout << "The height is invalid. Please try again!\n";
        cout << "Enter the second height: ";
        cin >> height2;
    }

    cout << "Enter the third date: ";
    cin >> date3;
    cout << "Enter the third height: ";
    cin >> height3;
    while ((height3 < 2.0) || (height3 > 5.0))
    {
        cout << "The height is invalid. Please try again!\n";
        cout << "Enter the third height: ";
        cin >> height3;
    }

    // So sanh va xuat ket qua theo thu tu
    if ((height1 > height2) && (height1 > height3))
    {
        cout << "\nDate: " << date1;
        cout << "\nThe best height: " << height1;
        if (height2 > height3)
        {
            cout << "\nDate: " << date2;
            cout << "\nThe 2nd height: " << height2;
            cout << "\nDate: " << date3;
            cout << "\nThe 3rd height: " << height3;
        }
        else
        {
            cout << "\nDate: " << date3;
            cout << "\nThe 2nd height: " << height3;
            cout << "\nDate: " << date2;
            cout << "\nThe 3rd height: " << height2;
        }
    }

    else if ((height2 > height1) && (height2 > height3))
    {
        cout << "\nDate: " << date2;
        cout << "\nThe best height: " << height2;
        if (height1 > height3)
        {
            cout << "\nDate: " << date1;
            cout << "\nThe 2nd height: " << height1;
            cout << "\nDate: " << date3;
            cout << "\nThe 3rd height: " << height3;
        }
        else
        {
            cout << "\nDate: " << date3;
            cout << "\nThe 2nd height: " << height3;
            cout << "\nDate: " << date1;
            cout << "\nThe 3rd height: " << height1;
        }
    }

    else if ((height3 > height2) && (height3 > height1))
    {
        cout << "\nDate: " << date3;
        cout << "\nThe best height: " << height3;
        if (height2 > height1)
        {
            cout << "\nDate: " << date2;
            cout << "\nThe 2nd height: " << height2;
            cout << "\nDate: " << date1;
            cout << "\nThe 3rd height: " << height1;
        }
        else
        {
            cout << "\nDate: " << date1;
            cout << "\nThe 2nd height: " << height1;
            cout << "\nDate: " << date2;
            cout << "\nThe 3rd height: " << height2;
        }
    }
    return 0;
}