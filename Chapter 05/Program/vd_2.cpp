#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number (1-100) and I will guess it. ";
    cin >> number;
    while (number < 1 || number > 100)
    {
        cout << "Number must be between 1 and 100." 
             << "Re-enter your number. ";
        cin >> number;
    }
    return 0;
}