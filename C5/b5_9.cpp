// BT9: Hotel Occupancy
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    short floors, rooms, i, occupied, allRooms = 0, allOccupied = 0;
    float percent;

    // Nhap so tang
    cout << "How many floor does the hotel have? ";
    cin >> floors;
    while (floors < 1)
    {
        cout << "Do not accept a value less than 1 for the number of floors. Try again!\n";
        cout << "How many floor does the hotel have? ";
        cin >> floors;
    }

    // Nhap so phong tung tang
    for (i = 1; i <= floors; i++ )
    {
        if (i == 11)
            cout << "How many rooms does the " << i << "th floor have? ";
        else if (i == 12)
            cout << "How many rooms does the " << i << "th floor have? ";
        else if (i == 13)
            continue;
        else if (((i- 11) % 100 == 0) || ((i- 11) % 1000 == 0))
            cout << "How many rooms does the " << i << "th floor have? ";
        else if (((i- 12) % 100 == 0) || ((i- 12) % 1000 == 0))
            cout << "How many rooms does the " << i << "th floor have? ";
        else if (((i- 13) % 100 == 0) || ((i- 13) % 1000 == 0))
            cout << "How many rooms does the " << i << "th floor have? ";
        else if ((i- 1) % 10 == 0)
            cout << "How many rooms does the " << i << "st floor have? ";
        else if ((i- 2) % 10 == 0)
            cout << "How many rooms does the " << i << "nd floor have? ";
        else if ((i- 3) % 10 == 0)
            cout << "How many rooms does the " << i << "rd floor have? ";
        else
            cout << "How many rooms does the " << i << "th floor have? ";
        cin >> rooms;
        while (floors < 1)
        {
            cout << "Do not accept a value less than 10 for the number of rooms on a floor. Try again!\n";
            cout << "Enter the number of rooms: ";
            cin >> rooms;
        }
        allRooms = allRooms + rooms;

        // Nhap so phong duoc su dung
        cout << "How many of rooms are occupied? ";
        cin >> occupied;
        allOccupied = allOccupied + occupied;
    }

    // Xuat thong tin
    percent = (static_cast<float>(allOccupied) / allRooms) * 100;
    cout << "The hotel has " << allRooms << " rooms\n";
    cout << "There are " << allOccupied << " rooms occupied\n";
    cout << "There are " << allRooms - allOccupied << " rooms unoccupied\n";
    cout << setprecision(2) << fixed;
    cout << "The percentage of rooms that are occupied is " << percent << "%";
    return 0;
}