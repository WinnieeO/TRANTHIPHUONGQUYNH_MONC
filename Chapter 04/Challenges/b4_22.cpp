// BT22: Freezing and Boiling Points
#include <iostream>
using namespace std;

int main()
{
    double temp;

    // Nhap nhiet do
    cout << "Enter a temperature: ";
    cin >> temp;

    // Hien thi cac chat se dong bang va soi o nhiet do do
    if (temp <= -362)
    {
        cout << "Oxygen will freeze.\n";
    }
    else if (temp <= -173)
    {
        cout << "Ethyl alcohol will freeze.\n";
    }
    else if (temp <= -38)
    {
        cout << "Mercury will freeze.\n";
    }
    else if (temp <= 32)
    {
        cout << "Water will freeze.\n";
    }

    if (temp <= -306)
    {
        cout << "Oxygen will boil.\n";
    }
    else if (temp <= 172)
    {
        cout << "Ethyl alcohol will boil.\n";
    }
    else if (temp <= 212)
    {
        cout << "Water will boil.\n";
    }
    else if (temp <= 676)
    {
        cout << "Mercury will boil.\n";
    }
    return 0;
}