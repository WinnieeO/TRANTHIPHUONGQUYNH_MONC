// BT11: Case Manipulator
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Function prototype
void upper(char *);
void lower(char *);
void reverse(char *);

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Nhap chuoi

    reverse(str);   // Ham dao chu

    lower(str);     // Ham viet thuong

    upper(str);     // Ham viet hoa

    return 0;
}

void upper(char *str)
{
    for (int i = 0; i < strlen(str); i++)
        putchar(toupper(str[i]));       // Viet hoa tat ca cac ky tu trong chuoi va hien thi
    cout << endl;
}

void lower(char *str)
{
    for (int i = 0; i < strlen(str); i++)
        putchar(tolower(str[i]));       // Viet thuong tat ca cac ky tu trong chuoi va hien thi
    cout << endl;
}

void reverse(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
            putchar(tolower(str[i]));       // Neu la ky tu in hoa thi chuyen ve ky tu thuong va hien thi
        else if (islower(str[i]))
            putchar(toupper(str[i]));       // Neu la ky tu in thuong thi chuyen ve ky tu hoa va hien thi
        else 
            cout << str[i];                 // Neu khong phai 2 truong hop tren thi hien thi nhu binh thuong
    }

    cout << endl;
}