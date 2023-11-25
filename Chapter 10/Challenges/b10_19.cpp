// BT19: Check Writer
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    string col2[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    string col1[] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string number[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    char date[20], name[100], check[100];
    short num = 0, temp;

    cout << "Enter the date: ";
    cin.getline(date, 20);      // Nhap ngay

    cout << "Enter the payee's name: ";
    cin.getline(name, 100);     // Nhap ten

    cout << "Enter the amount of the check (up to $10,000): $";
    cin.getline(check, 100);               // Nhap so tien
    while ((atof(check) < 0) || (atof(check) > 10000))
    {
        cout << "Do not accept negative dollar amounts, or amounts over $10,000. Please enter again: $";
        cin.getline(check, 100);   // Neu so tien khong hop le thi nhap lai
    }

    // Hien thi thong tin
    cout << "-------------------------------------------------------\n";
    cout << setw(45) << "Date: " << date << endl;
    cout << "Pay to the Order of: " << name << setw(14) << "$" << setprecision(2) << fixed << showpoint << atof(check) << endl;

    // Bien doi hang nghin
    temp = atoi(check);     // Chuyen doi phan ky su so nguyen cua so tien thanh so roi gan vao bien temp
    num = (int)(temp / 1000);    // Lay bien temp chia 1000 lay phan nguyen roi gan vao num
    if (num > 0)            // Neu num lon hon 0 thi hien thi trong
        cout << number[num - 1] << " Thousand ";
    
    // Bien doi hang tram
    temp -= (1000 * num);   // Lay bien temp tru hang nghin de ra hang tram
    num = (int)(temp / 100);    // Lay bien temp chia 100 lay phan nguyen roi gan vao num
    if (num > 0)            // Neu num lon hon 0 thi hien thi
        cout << number[num - 1] << " Hundred ";
    
    // Bien doi hang chuc
    temp -= (100 * num);       // Lay bien temp tru hang tram de ra hang chuc
    num = (int)(temp / 10);    // Lay bien temp chia 10 lay phan nguyen roi gan vao num
    if (num >= 2)              // Neu num > 1
    {
        cout << col2[num - 2]; // Hien thi hang chuc
        temp -= (10 * num);    // Lay bien temp tru hang chuc de ra hang don vi
        if (temp > 0)          // Neu temp lon hon 0 thi hien thi
            cout << "-" << number[temp - 1];
    }
    else                            // Neu num = 1
        cout << col1[temp - 11];    // Hien thi ket qua

    num = (int)((atof(check) - atoi(check)) * 100);
    if (num > 0)
    cout << " and " << (num + 1) << " Cents";   // Hien thi phan thap phan cua so tien

    return 0;
}