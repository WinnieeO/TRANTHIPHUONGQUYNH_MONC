// BT2: Backward String
#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
void backward(const char *str);

int main()
{
    const int SIZE = 100;
    char str[SIZE];     // Tao chuoi

    cout << "Enter a C-string: ";
    cin.getline(str, SIZE);     // Nhap chuoi

    backward(str);      // Lat nguoc chuoi va in ra man hinh
    return 0;
}

void backward(const char *str)
{
    for (int i = strlen(str); i >= 0; i--)
    {
        cout << str[i];
    }
}