// BT5: Sentence Capitalizer
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

// Function prototype
void upperStr(char *str);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);     // Nhap chuoi

    upperStr(str);  // Loi goi ham viet hoa chu dau moi cau trong chuoi
    return 0;
}

void upperStr(char *str)
{        
    int start = 0;
    for (int i = 0;  i < strlen(str); i++)
        if (isalpha(str[i]))
        {
            start = i;  // Gan bien start = vi tri dau tien cua chuoi bat dau bang ki tu chu
            putchar(toupper(str[i]));   // Thay ki tu chu dau tien cua chuoi bang chu in hoa roi hien thi
            break;
        }
    
    for (int i = start + 1; i < strlen(str); i++)
    {
        if (str[i - 2] == ',')      // Neu gap dau phay thi tiep tuc in
            cout << str[i];
        else if (ispunct(str[i - 2]))   // Neu gap cac dau cau khac thi viet hoa chu cai dau
        {
            putchar(toupper(str[i])); 
        }
        else
            cout << str[i];
    }
}