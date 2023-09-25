// BT4: Calories Burned
#include <iostream>
using namespace std;

int main()
{
    int i;
    double caloBurned = 3.6, amount = 0;

    // Hien thi so luong calo duoc dot chay sau 5, 10, 15, 20, 25, 30p
    for (i = 1; i <= 30; i++)
    {
        amount = caloBurned * i;
        if (i % 5 == 0)
            cout << "The number of calories burned after " << i << " minutes is " << amount << endl;
    }
    return 0;
}