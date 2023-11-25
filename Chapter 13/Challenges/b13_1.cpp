// BT1: Date
#include <iostream>
using namespace std;

class Date
{
    private:
        short day, month, year;
    public:
        void setDay(short);
        void setMonth(short);
        void setYear(short);
        void printType1();
        void printType2();
        void printType3();
};

void Date::setDay(short dd)
{
    day = dd;
}

void Date::setMonth(short mm)
{
    month = mm;
}

void Date::setYear(short yyyy)
{
    year = yyyy;
}

void Date::printType1()
{
    cout << month << "/" << day << "/" << year << endl;
}

void Date::printType2()
{
    string arr[] = {"January ", "February ", "March ", "April ", "May ", "June ", "July ", "August ", "September ", "October ", "November ", "December "};
    cout << arr[month - 1] << day << ", " << year << endl;
}

void Date::printType3()
{
    string arr[] = {" January ", " February ", " March ", " April ", " May ", " June ", " July ", " August ", " September ", " October ", " November ", " December "};
    cout << day << arr[month - 1] << year << endl;
}

int main()
{
    Date print;
    short dd, mm, yyyy, check;

    // Nhap thang
    cout << "Enter a month: ";
    cin >> mm;
    while ((mm < 1) || (mm > 12))
    {
        cout << "The number is invalid. Try again: ";
        cin >> mm;
    }
    
    // Nhap nam
    cout << "Enter a year: ";
    cin >> yyyy;
    while (yyyy < 0)
    {
        cout << "The number is invalid. Try again: ";
        cin >> yyyy;
    }

    if ((mm == 2) && (yyyy % 4 == 0))
        check = 29;
    else if ((mm == 2) && (yyyy % 4 != 0))
        check = 28;
    else if (mm < 8)
        if (mm % 2 == 0)
            check = 30;
        else check = 31;
    else if (mm > 7)
        if (mm % 2 == 0)
            check = 31;
        else check = 30;

    // Nhap ngay
    cout << "Enter a day: ";
    cin >> dd;
    while ((dd < 1) || (dd > 31) || (dd > check))
    {
        cout << "The number is invalid. Try again: ";
        cin >> dd;
    }

    print.setDay(dd);
    print.setMonth(mm);
    print.setYear(yyyy);    

    print.printType1();
    print.printType2();
    print.printType3();

    return 0;
}