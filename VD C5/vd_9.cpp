#include <iostream>
using namespace std;

int main()
{
    int total = 0, points;
    cout << "Enter points earned "
     << "(or -1 to quit): ";
    cin  >> points;
    while (points != -1) // -1 is the sentinel
    {
    total += points;  
    cout << "Enter points earned: ";
    cin  >> points;
    }	
    return 0;
}
