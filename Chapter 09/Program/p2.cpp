// Program 9.2
// This program stores the adress of a variable in a pointer.
#include <iostream>
using namespace std;

int main()
{
    int x = 25;             // int variable
    int *ptr = nullptr;     // Pointer variable, can point to an int

    ptr = &x;
    cout << "The value in x is " << x << endl;
    cout << "The address of x is " << ptr << endl;
    return 0;
}