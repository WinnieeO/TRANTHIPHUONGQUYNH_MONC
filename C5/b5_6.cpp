// BT6: Distance Traveled
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double speed, distance;
    int hour, i;

    // Nhap van toc
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    while (speed < 0)
    {
        cout << "Do not accept a negative number for speed. Try again!\n";
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
    }
    cout << "How many hours has it traveled? ";
    cin >> hour;
    while (hour < 1)
    {
        cout << "Do not accept any value less than 1 for time traveled. Try again!\n";
        cout << "How many hours has it traveled? ";
        cin >> hour;
    }

    // Xuat ket qua
    cout << "Hour      Distance Traveled\n";
    cout << "------------------------------\n";
    for (i = 1; i <= hour; i++)
    {
        distance = i * speed;
        cout << i << setw(16) << distance << endl;
    }
    return 0;
}