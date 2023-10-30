// BT13: Days Out
#include <iostream>
using namespace std;

// Function prototype
int getNumber();
int missedDays(int days);
double getAvg(int days, int absent);

int main()
{
    int number = getNumber(),           // Gan so cong nhan vao bien number
        total = missedDays(number);     // Gan tong so ngay nghi cua cong nhan vao bien total

    // Tinh trung binh ngay nghi cua cong nhan va hien thi ket qua
    cout << "The average number of days a company's employees are absent is " << getAvg(number, total);
    return 0;
}

int getNumber()
{
    int num;

    cout << "Enter the number of employees: ";
    cin >> num;     // Nhap so cong nhan
    while (num < 1)     // Neu so cong nhan be hon 1 thi nhap lai
    {
        cout << "Do not accept a number less than 1 for the number of employees. Try again: ";
        cin >> num;
    }

    return num;     // Tra ve gia tri cua num
}

int missedDays(int days)
{
    int total = 0, absent;

    for (int i = 1; i <= days; i++)
    {
        cout << "Enter the number of days employee#" << i << " missed during the past year: ";
        cin >> absent;  // Nhap so ngay nghi cua tung cong nhan
        while (absent < 0)  // Neu so ngay nghi am thi nhap lai
        {
            cout << "Do not accept a negative number for the days any employee missed. Try again: ";
            cin >> absent;
        }

        total += absent;    // Tinh tong ngay nghi cua cac nhan vien
    }

    return total;   // Tra ve gia tri cua total
}

double getAvg(int num, int absent)
{
    double avg = static_cast<double>(absent) / num;     // Tinh trung binh ngay nghi cua cong nhan
    return avg;     // Tra ve gia tri cua avg
}