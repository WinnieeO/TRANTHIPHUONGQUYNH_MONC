// BT5: Average of Values
#include <iostream>
using namespace std;

int main()
{
    unsigned short int  num1 = 28,
                        num2 = 32,
                        num3 = 37,
                        num4 = 24,
                        num5 = 33, sum;
    float average;

    // Tinh tong 5 so
    sum = num1 + num2 + num3 + num4 + num5;

    // Tinh va xuat gia tri trung binh
    average = sum/5.0;
    cout << "The average is " << average;
    return 0;
}