// BT25: Using Files—Student Line Up
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int number, i;
    string name, first, last;

    // Mo file
    inFile.open("LineUp.txt");

    // Nhap danh sach hoc sinh
    inFile >> name;
    first = last = name;

    while (inFile >> name)
    {
        if (name < first)
            first = name;
        if (name > last)
            last = name;
    }

    // Xuat ket qua
    cout << first << " will be at the front of the line.\n";
    cout << last << " will be at the end of the line.";

    // Dong file
    inFile.close();
    return 0;
}