// BT4: Average Number of Letters
#include <iostream>
#include <cstring>
#include <iomanip>
#include <cctype>
using namespace std;

// Function prototype
double avgStr(char *str);
int countStr(char *str);

int main()
{
    int SIZE = 100;
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);     // Nhap chuoi

    // Goi ham tinh trung binh va hien thi ket qua
    cout << "The average number of letters in each word is " << setprecision(2) << avgStr(str);      
    return 0;
}

int countStr(char *str)
{
    int count = 0;  // Khai bao bien dem = 0
    int start = 0;  

    // Neu khong co khoang trang nao o dau chuoi thi tang bien dem len 1 don vi
    if (isalpha(str[0]))
        count++;
    else    // Neu co khoang trang o dau chuoi thi
    {    
        for (int i = 0;  i < strlen(str); i++)
            if (isalpha(str[i]))
            {
                start = i;  // Gan bien start = vi tri dau tien cua chuoi bat dau bang ki tu chu
                count++;
                break;
            }
    }
    
    for (int i = start + 1; i <= strlen(str); i++)
    {
        // Neu co 1 khoang trang truoc 1 ki tu thi bien dem tang 1 don vi
        if ((str[i - 1] == ' ') && (isalpha(str[i])))
            count++;  
    }
    return count;   // Tra ve gia tri cua bien dem count
}

double avgStr(char *str)
{
    int letters = 0;
    double avg;
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (isalpha(str[i]))
            letters++;      // Dem so ki tu trong chuoi
    }
    avg = static_cast<double>(letters) / countStr(str);
    return avg;   // Tra ve gia tri cua gia tri trung binh
}