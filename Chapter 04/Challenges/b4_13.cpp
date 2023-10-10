// BT13: Book Club Points
#include <iostream>         
using namespace std;

int main()
{
    unsigned int number, point;

    // Nhap so sach mua duoc
    cout << "Enter the number of books that you purchased this month: ";
    cin >> number;

    // So sanh va tinh diem 
    if (number == 0)
    {
        cout << "The number of points awarded is 0 points";
    }
    if (number == 1)
    {
        cout << "The number of points awarded is 5 points";
    }
    if (number == 2)
    {
        cout << "The number of points awarded is 15 points";
    }
    if (number == 3)
    {
        cout << "The number of points awarded is 30 points";
    }
    if (number >= 4)
    {
        cout << "The number of points awarded is 60 points";
    }
    return 0;
}