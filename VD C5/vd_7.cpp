#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sum = 0, num;
    for (num = 1; num <= 10; num++)
    sum += num;
    cout << "Sum of numbers 1 - 10 is " << sum << endl;
    return 0;
}