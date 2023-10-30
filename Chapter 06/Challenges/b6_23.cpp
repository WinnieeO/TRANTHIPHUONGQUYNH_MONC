// BT23: Prime Number List
#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
bool isPrime(int);

int main()
{
    bool value;
    ofstream outFile;

    // Mo file
    outFile.open("Prime Number List.txt");

    // Cho vong lap chay tu 1 den 100
    for (int number = 1; number <= 100; number++)
    {
    value = isPrime(number);    // Goi ham isPrime de kiem tra so nguyen to va tra ve true/false

    if (value)  // value = true
        outFile << number << endl; 
    }

    // Dong file
    outFile.close();
    
    return 0;
}

bool isPrime(int x)
{
    bool value = true;

    if (x == 2)         // Neu x = 2 thi tra ve true
        value = true;
    else if (x == 1)    // Neu x = 1 thi tra ve false
        value = false;
    else if (x > 2) 
    {
        for (int i = 2; i < x; i++)
        {
            // Neu x chia het cho 1 so bat ki trong khoang (2,x) thi tra ve false
            if ((x % i) == 0)       
            {
                value = false;
                break;  // Thoat vong lap
            }
        }
    }
    
    return value;
}