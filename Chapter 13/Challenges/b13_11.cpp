// BT11: Payroll
#include <iostream>
using namespace std;

class PayRoll
{
    private:
        int numberHours;                // So gio lam viec
        double hourlyRate;              // Ty gia gio lam viec
    public:
        void setHour(int x, double y)   // Thiet lap gia tri cho bien
        { numberHours = x;
          hourlyRate = y;}
        double salaries()               // Ham tinh luong va tra ve gia tri cua luong
        { return (numberHours * hourlyRate);}
};

int main()
{
    PayRoll employees[7];               // Khoi tao mang object
    int hour;
    double rate;

    for (short i = 0; i < 7; i++)       // Nhap luong va ty gia
    {
        cout << "Enter the number of hours the employee#" << i + 1 << " has worked: ";
        cin >> hour;
        while (hour > 60)               // Xac thuc dau vao
        {
            cout << "The number of hours mustn't greater than 60. Enter again: ";
            cin >> hour;
        }

        cout << "Enter the hourly pay rate: ";
        cin >> rate;
        employees[i].setHour(hour, rate);
    }

    for (short i = 0; i < 7; i++)       // Hien thi luong cua tung nhan vien
    {   
        cout << "The total pay of employee#" << i + 1 << " for the week is $" << employees[i].salaries() << endl;
    }
    return 0;
}