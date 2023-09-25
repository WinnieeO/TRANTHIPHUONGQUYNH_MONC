// BT21: How Many Pizzas
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14159;
    double diameter, area, eachSlice = 14.125, slices, amount;
    unsigned short people, onePerson = 4;

    // Nhap duong kinh banh pizza va so khach tham du
    cout << "Enter the diameter of the pizza: ";
    cin >> diameter;
    cout << "Enter the number of people who will be at the party: ";
    cin >> people;

    // Tinh dien tich cai banh va so lat cat duoc
    area = (diameter / 2) * (diameter / 2) * PI;
    slices = area / eachSlice;
    
    // Tinh so banh pizza can cho buoi tiec
    amount = (onePerson * people) / slices;

    // Xuat so banh pizza can thiet ra man hinh
    cout << "The number of pizzas to purchase is " << round(amount);
    return 0;
}