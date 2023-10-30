// BT8: Coin Toss
#include <iostream>
#include <cstdlib>
using namespace std;

// Function prototype
void coinToss();

int main()
{
    int times;

    cout << "How many times should the coin be tossed? ";
    cin >> times;   // Nhap so lan tung dong xu

    for (int i = 1; i <= times; i++)
    {
        coinToss();     // Tung dong xu voi so lan duoc nhap
    }

    return 0;
}

void coinToss()
{
    int a = rand() % 2 + 1;     // Mo phong viec tung dong xu bang ham rand()
    
    // Hien thi ket qua
    if (a == 1)
        cout << "heads\n";
    else if (a == 2)
        cout << "tails\n";
}