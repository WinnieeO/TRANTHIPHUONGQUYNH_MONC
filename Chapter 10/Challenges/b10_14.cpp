// BT14: Word Separator
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);     // Nhap chuoi ky tu

    cout << str[0];     // In ky tu dau tien
    for (int i = 1; i <= strlen(str); i++)
    {
        if (isupper(str[i]))               // Neu gap ky tu in hoa thi in 1 khoang trang o truoc ky tu do
        {
           cout << " " << str[i];
        }
        else cout << str[i];            // Neu khong thi in ky tu nhu binh thuong
    }
    return 0;
}