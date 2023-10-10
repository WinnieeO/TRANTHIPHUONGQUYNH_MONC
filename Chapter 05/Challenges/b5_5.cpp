// BT5: Membership Fees Increase
#include <iostream>
using namespace std;

int main()
{
    double charge = 2500, percent = 0.04, rates;
    int i;

    // Hien thi lai suat du kien trong 6 nam toi
    for (i = 1; i <= 6; i++)
    {
        rates = charge * percent;
        charge = charge + rates;
    }
    cout << "The projected rates for the next six years is $" << rates << endl;
    return 0;
}