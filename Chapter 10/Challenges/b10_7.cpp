// BT7: Name Arranger
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    
    char first[50], middle[50], last[50], name[100];

    cout << "Enter your name: \n";
    cin.getline(first, 50);     // Nhap ten
    cin.getline(middle, 50);    // Nhap ten lot
    cin.getline(last, 50);      // Nhap ho
    for (int i = 0; i < strlen(last); i++)
    {
        name[i] = last[i];  // Gan mang ho vao mang thu 4
    }
    // Noi cac mang lai theo yeu cau de bai
    strcat(name, ", ");
    strcat(name, first);
    strcat(name, " ");
    cout << strcat(name, middle);   // Hien thi ket qua

    return 0;
}