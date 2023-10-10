// BT1: Minimum/ Maximum
#include <iostream>
using namespace std;

int main()
{
    double num1, num2;

    // Nhap vao 2 so
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // So sanh va dua ra so lon va so be
    if (num1 < num2)
    {
        cout << "The smaller number is " << num1 << endl;
        cout << "The larger number is " << num2;
    }
    else if (num1 > num2)
    {
        cout << "The smaller number is " << num2 << endl;
        cout << "The larger number is " << num1;
    }
     else
    {
       cout << "Both numbers are equal";
    }
    return 0;
}