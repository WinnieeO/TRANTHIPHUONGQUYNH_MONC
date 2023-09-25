// BT11: Distance per Tank of Gas
#include <iostream>
using namespace std;

int main()
{
    float   gallon = 20.0,          // Xe chua 20 gallon xang
            townAverage = 23.5,     // Trung binh xe di duoc 23.5m/ gallon trong thi tran
            highwayAverage = 28.9,  // Trung binh xe di duoc 28.9m/ gallon tren cao toc
            distance;

    // Tinh va xuat ra quang duong di duoc trong thi tran voi 20 gallon
    distance = townAverage * gallon;
    cout << "The distance the car can travel on one tank of gas when driven in town is " << distance << " miles\n";

    // Tinh va xuat ra quang duong di duoc tren duong cao toc voi 20 gallon
    distance = highwayAverage * gallon;
    cout << "The distance the car can travel on one tank of gas when driven on the highway is " << distance << " miles\n";

    return 0;
}