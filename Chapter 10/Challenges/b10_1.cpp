// BT1: String Length
#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
int lengthStr(const char *c);

int main()
{
    const int SIZE = 100;
    char strC[SIZE];
    int i = 0;

    cout << "Enter C-string: ";
    cin.getline(strC, SIZE);         // Nhap chuoi C

    // Goi ham lengthStr va hien thi so ki tu cua chuoi C
    cout << "The length of the C-string is " <<lengthStr(strC);
    return 0;
}

int lengthStr(const char *c)
{
    int i = 0;
    while (c[i] != '\0')    // Khoi tao vong lap dem so ki tu cua chuoi, khi nao gap ki tu '\0' thi dung
        i++;

    return i;   // Tra ve so ki tu cua chuoi
}