// BT4: Areas of Rectangles
#include <iostream>
using namespace std;

int main()
{
    double area1, area2, length1, length2, width1, width2;

    // Nhap chieu dai va chieu rong cua hinh chu nhat thu nhat
    cout << "Enter the length of the first rectangle: ";
    cin >> length1;
    while (length1 < 0)
    {
        cout << "The length is invalid. Try again!\n";
        cout << "Enter the length of the first rectangle: ";
        cin >> length1;
    }

    cout << "Enter the width of the first rectangle: ";
    cin >> width1;
    while (width1 < 0)
    {
        cout << "The width is invalid. Try again!\n";
        cout << "Enter the width of the first rectangle: ";
        cin >> width1;
    }

    // Nhap chieu dai va chieu ron cua hinh chu nhat thu hai
    cout << "Enter the length of the second rectangle: ";
    cin >> length2;
    while (length2 < 0)
    {
        cout << "The length is invalid. Try again!\n";
        cout << "Enter the length of the second rectangle: ";
        cin >> length2;
    }

    cout << "Enter the width of the second rectangle: ";
    cin >> width2;
    while (width2 < 0)
    {
        cout << "The width is invalid. Try again!\n";
        cout << "Enter the width of the first rectangle: ";
        cin >> width2;
    }

    // Tinh dien tich 2 hinh chu nhat
    area1 = length1 * width1;
    area2 = length2 * width2;

    // So sanh dien tich hai hinh chu nhat va xuat ra man hinh
    if (area1 > area2)
    {
        cout << "The first rectangle has the greater area";
    }
    else if (area1 < area2)
    {
        cout << "The second rectangle has greater area";
    }
    else
    {
        cout << "The areas are the same";
    }
    return 0;
}