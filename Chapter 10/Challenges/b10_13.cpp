// BT13: Date Printer
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    char str[15];
    unsigned short day, month, year;

    cout << "Enter a date in the form mm/dd/yyyy: ";
    cin.getline(str, 15);     // Nhap ngay thang nam
    
    // Do ma ASCII cua ky tu so tu 0 - 9 co ma tu 48 - 58 nen sau khi chuyen ve ma ASCII, tru cho 48 se ra gia tri so
    // Tinh thang
    month =   ((int)(str[0]) - 48) * 10 + ((int)(str[1]) - 48);
    
    // Tinh ngay
    day = ((int)(str[3]) - 48) * 10 + ((int)(str[4]) - 48);

    // Tinh nam
    year = ((int)(str[6]) - 48) * 1000 + ((int)(str[7]) - 48) * 100 + ((int)(str[8]) - 48) * 10 + ((int)(str[9]) - 48);

    // Hien thi ket qua
    cout << months[month - 1] << " " << day << ", " << year;
    
    return 0;
}