// BT8: Sum of Digits in a String
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int SIZE = 100;       // Khai bao kich thuoc mang 
    int sum, min = 9, max = 0;
    char digits[SIZE];      // Khai bao mang ky tu

    cout << "Enter a series of single digit numbers with nothing separating them: ";
    cin.getline(digits, SIZE);      // Nhap chuoi so

    for (int i = 0; i < strlen(digits); i++)
    {
        // Dua vao bang ma ASCII, ky tu 0 ung voi ma he thap phan la 48, tuong tu cho den ky tu 9 ung voi 58
        sum += ((int)(digits[i]) - 48);         // Chuyen ky tu ve ma he thap phan roi tru cho 48 de ra duoc cac so tu 0 den 9
        if (min > ((int)(digits[i]) - 48))
            min = ((int)(digits[i]) - 48);      // Tim ky tu so nho nhat
        if (max < ((int)(digits[i]) - 48))
            max = ((int)(digits[i]) - 48);      // Tim ky tu so lon nhat
    }

    cout << atoi(digits);

    // Hien thi ket qua
    cout << "The highest digit in the string is " << max << endl;
    cout << "The lowest digit in the string is " << min << endl;
    cout << "The sum of digits in the string is " << sum;
    return 0;
}