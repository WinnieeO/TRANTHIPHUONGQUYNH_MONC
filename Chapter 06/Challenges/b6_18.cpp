// BT18: Paint Job Estimator
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Khai bao bien toan cuc
const double LABOR = 25.00,     // $25 cho 1 gio lam viec
             SPACE = 110;       // 110 feet vuong dung het 1 gallon son

// Function prototype
void report();

int main()
{
    report();   // Loi goi ham
    return 0;
}

void report()
{
    int numRooms;
    double price, square, totalGallon, totalSquare = 0, laborTime, costPaint, laborCharges;

    cout << "Enter the number of rooms that are to be painted: ";
    cin >> numRooms;    // Nhap so luong phong can son
    while (numRooms < 1)
    {
        cout << "Do not accept a value less than 1 for the number of rooms. Try again: ";
        cin >> numRooms;    // Neu so phong be hon 1 thi nhap lai
    }

    for (int i = 1; i <= numRooms; i++)     // Dung vong lap nhap dien tich cua tung phong
    {
        cout << "Enter the square feet of wall space in room#" << i << ": ";
        cin >> square;
        while (square < 0)
        {
            cout << "Do not accept a negative value for square footage of wall space. Try again: ";
            cin >> square;      // Neu dien tich am thi nhap lai
        }
        totalSquare += square;  // Tinh tong dien tich cua tat ca cac phong duoc nhap
    }

    cout << "Enter the price of the paint per gallon: $";
    cin >> price;       // Nhap gia cua 1 gallon xang
    while (price < 10.00)
    {
        cout << "Do not accept a value less than 10.00 for the price of paint. Try again: ";
        cin >> price;   // Neu gia it hon 10 thi nhap lai
    }

    // Tinh so luong gallon son can thiet
    totalGallon = totalSquare / SPACE;
    totalGallon = round(totalGallon);

    if (totalSquare < SPACE)
        totalGallon = 1;

    // Tinh so gio lao dong can thiet
    laborTime = totalSquare * 8 / SPACE;

    // Tinh chi phi son
    costPaint = price * totalGallon;

    // Tinh chi phi lao dong
    laborCharges = LABOR * laborTime;

    // Hien thi thong tin
    cout << setprecision(2) << fixed;
    cout << "The number of gallons of paint required is " << totalGallon << endl;
    cout << "The hours of labor required is " << laborTime << endl;
    cout << "The cost of the paint is $" << costPaint << endl;
    cout << "The labor charges is $" << laborCharges << endl;
    cout << "The total cost of the paint job is $" << (costPaint + laborCharges);    
}