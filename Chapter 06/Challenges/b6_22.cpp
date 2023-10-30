// BT22: isPrime Function
#include <iostream>
using namespace std;

// Function prototype
bool isPrime(int);

int main()
{
    int number;
    bool value;

    cout << "Enter a number: ";
    cin >> number;      // Nhap 1 so nguyen duong
    while (number < 0)
    {
        cout << "Do not accept a negative number. Try again: ";
        cin >> number;  // Neu so am thi yeu cau nhap lai
    }

    value = isPrime(number);    // Goi ham isPrime de kiem tra so nguyen to va tra ve true/false

    if (value)  // value = true
        cout << "The argument is a prime number";
    else        // value = false
        cout << "The argument is not a prime number";  

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