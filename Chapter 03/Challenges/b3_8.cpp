// BT8: How Many Widgets
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float   oneWidget = 12.5,
            pallet, widgets, number;

    // Nhap so trong luong cua pallet
    cout << "How much does the pallet weight by itself? ";
    cin >> pallet;
    
    // Nhap trong luong cac widget tren pallet
    cout << "How much does the pallet weight with the widgets stacked on it? ";
    cin >> widgets;

    // Tinh va xuat ra so luong widget tren pallet
    number = (widgets - pallet) / oneWidget;
    cout << "The number of widgets stacked on the pallet is about ";
    cout << setprecision(1);
    cout << ceil(number);
    return 0;
}