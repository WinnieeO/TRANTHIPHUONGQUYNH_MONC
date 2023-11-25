// BT9: Most Frequent Character
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Function prototype
char findChar(char *str);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);     // Nhap chuoi ky tu

    // Goi ham va hien thi ket qua
    cout << "The most frequent character is " << findChar(str);
    return 0;
}

char findChar(char *str)
{
    int max = 0;
    char ch;

    for (int i = 0; i < strlen(str); i++)
    {
        int count = 1;      // Cho bien dem chay tu 1
        for (int j = i + 1; j <= strlen(str); j++)  // Cho vong lap chay 1 lan nua tren chuoi
        {
            if (toupper(str[i]) == toupper(str[j]))     // Neu ky tu giong nhau thi tang bien dem len 1 don vi  
                count++;
        }

        // Tim ky tu co tan so xuat hien nhieu nhat
        if (max < count)
        {
            max = count;
            ch = tolower(str[i]);
        }
    }
    return ch;  // Tra ve ky tu co tan so xuat hien nhieu nhat
}