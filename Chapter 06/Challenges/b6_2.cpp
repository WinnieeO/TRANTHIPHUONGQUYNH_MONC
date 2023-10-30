// BT2: Rectangle Area - Complete the Program
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double getLength(double len);
double getWidth(double wid);
double getArea(double len, double wid);
void displayData(double len, double wid, double area);

int main()
{
    double length, width, area;

    length = getLength(length);         // Nhap chieu dai bang chuong trinh con
    width = getWidth(width);            // Nhap chieu rong bang chuong trinh con
    area = getArea(length, width);      // Tinh dien tich bang chuong trinh con
    displayData(length, width, area);   // Hien thi cac gia tri tren ra man hinh
   
    return 0;
}

double getLength(double len)
{
    cout << "Enter rectangle's length: ";   
    cin >> len;                     // Nhap chieu dai
    while (len < 0)
    {
        cout << "Do not accept negative value. Try again: ";    // Neu gia tri am thi nhap lai
        cin >> len;
    }
    return len;         // Tra ve gia tri cua chieu dai
}

double getWidth(double wid)
{
    cout << "Enter rectangle's width: ";
    cin >> wid;                     // Nhap chieu rong
    while (wid < 0)
    {
        cout << "Do not accept negative value. Try again: ";    // Neu gia tri am thi nhap lai
        cin >> wid;
    }
    return wid;         // Tra ve gia tri cua chieu rong
}

double getArea(double len, double wid)
{
    double area = len * wid;    // Tinh dien tich hinh chu nhat
    return area;                // Tra ve gia tri cua dien tich
}

void displayData(double len, double wid, double area)
{
    cout << setprecision(2) << fixed;
    cout << "The rectangle's length is " << len << endl;
    cout << "The rectangle's width is " << wid << endl;
    cout << "The rectangle's area is " << area << endl;
}