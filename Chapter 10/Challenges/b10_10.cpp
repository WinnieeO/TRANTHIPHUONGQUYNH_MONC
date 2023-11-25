// BT10: replaceSubstring Function
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// Function prototype
string substring(string , char *, string);

int main()
{
    string string1, string3;
    char string2[50];

    cout << "Enter string: ";
    getline(cin, string1);          // Nhap chuoi thu nhat

    cout << "Enter string that you want to find: ";
    cin.getline(string2, 50);       // Nhap chuoi thu hai

    cout << "Enter string that you want to replace: ";
    getline(cin, string3);          // Nhap chuoi thu ba

    cout << "The string after that:\n" << substring(string1, string2, string3);   // Loi goi ham va hien thi ket qua
    return 0;
}

string substring(string str1, char *str2, string str3)
{   
    short pos;

    for (int i = 0; i < str1.length(); i++)
    {
        pos = str1.find(str2, i);   // Tim vi tri cua chuoi2 trong chuoi1
        if (pos < str1.length())    // Neu vi tri ton tai thi thay bang chuoi3
            str1.replace(pos, strlen(str2), str3);
    }
    
    return str1;    // Tra ve gia tri cho chuoi1
}