// BT14: Student Line Up
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number, i;
    string name, first, last;

    // Nhap so hoc sinh
    cout << "Enter the number of students: ";
    cin >> number;
    while ((number < 1) || (number > 25))
    {
        if (number < 1)
            cout << "Do not accept a number less than 1 for the number of student. Try again!\n";
        else
            cout << "Do not accept a number greater than 25 for the number of student. Try again!\n";
        cout << "Enter the number of students: ";
        cin >> number;
    }

    // Nhap danh sach hoc sinh
    cout << "Enter student name number 1: ";
    cin >> name;
    first = last = name;
    if (name < first)
            first = name;
    if (name > last)
            last = name;

    for (i = 1; i < number; i++)
    {
        cout << "Enter student name number " << (i + 1) << ": ";
        cin >> name;
        if (name < first)
            first = name;
        if (name > last)
            last = name;
    }

    // Xuat ket qua
    cout << first << " will be at the front of the line.\n";
    cout << last << " will be at the end of the line.";
    return 0;     
}