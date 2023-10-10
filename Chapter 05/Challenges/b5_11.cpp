// BT11: Population
#include <iostream>
using namespace std;

int main()
{
    int i, start, days;
    double avg;

    // Nhap so luong dan ban dau
    cout << "Enter the starting number of organisms: ";
    cin >> start;
    while (start < 2)
    {
        cout << "Do not accept a number less than 2 for the starting size of the population. Try again!\n";
        cout << "Enter the starting number of organisms: ";
        cin >> start;
    }

    // Nhap muc tang dan so trung binh ngay
    cout  << "Enter their average daily population increase (as a percentage): ";
    cin >> avg;
    while (avg < 0)
    {
        cout << "Do not accept a negative number for average daily population increase. Try again!\n";
        cout  << "Enter their average daily population increase (as a percentage): ";
        cin >> avg;
    }

    // Nhap so ngay dan se nhan len
    cout << "Enter the number of days they will multiply: ";
    cin >> days;
    while (days < 1)
    {
        cout << "Do not accept a number less than 1 for the number of days they will multiply. Try again!\n";
        cout << "Enter the number of days they will multiply: ";
        cin >> days;
    }

    // Hien thi quy mo dan so moi ngay
    for (i = 1; i <= days; i++)
    {
        start += (avg * start);
        if (i == 11)
            cout << "The size of the population for the " << i << "th day is " << start << endl;
        else if (i == 12)
            cout << "The size of the population for the " << i << "th day is " << start << endl;
        else if (i == 13)
            cout << "The size of the population for the " << i << "th day is " << start << endl;
        else if (((i- 11) % 100 == 0) || ((i- 11) % 1000 == 0))
            cout << "The size of the population for the " << i << "th day is " << start << endl;
        else if (((i- 12) % 100 == 0) || ((i- 12) % 1000 == 0))
            cout << "The size of the population for the " << i << "th day is " << start << endl;
        else if (((i- 13) % 100 == 0) || ((i- 13) % 1000 == 0))
            cout << "The size of the population for the " << i << "th day is " << start << endl;
        else if ((i- 1) % 10 == 0)
            cout << "The size of the population for the " << i << "st day is " << start << endl;
        else if ((i- 2) % 10 == 0)
            cout << "The size of the population for the " << i << "nd day is " << start << endl;
        else if ((i- 3) % 10 == 0)
            cout << "The size of the population for the " << i << "rd day is " << start << endl;
        else
            cout << "The size of the population for the " << i << "th day is " << start << endl;
    }
    return 0;
}
