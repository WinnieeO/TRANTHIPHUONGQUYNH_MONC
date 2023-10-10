#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num = 0, sum;
    while (num <= 10)     // accumulator
    {	  
        sum += num;
		num++;
    }
    cout << "Sum of numbers 1 - 10 is " << sum << endl;

}