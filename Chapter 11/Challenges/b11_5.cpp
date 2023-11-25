// BT5: Weather Statistics Modification
#include <iostream>
#include <iomanip>
using namespace std;

enum Month {JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER};

int main()
{
    Month index, min, max;
    string name[] = {"January", "February", "March", "April", "May", "June", "July", "August", "Septemper", "October", "November", "December"};
    double rainfall[12],        // Khoi tao mang chua chua luong mua cua 12 thang
           temp[12];            // Khoi tao mang chua chua nhiet do cua 12 thang
    double totalRainfall,       // Tong luong mua
           highTemp,            // Nhiet do cao
           lowTemp,             // Nhiet do thap
           totalTemp;           // Tong nhiet do

    min = JANUARY;
    max = JANUARY;

    // Nhap du lieu thoi tiet cho tung thang trong nam
    for (index = JANUARY; index <= DECEMBER; index = static_cast<Month>(index + 1))
    {
        cout << name[index];
        cout << "\nEnter the rainfall: ";
        cin >> rainfall[index];
        while (rainfall[index] < 0)   // Neu luong mua am thi yeu cau nhap lai
        {
            cout << "The number is invalid. Please try again: ";
            cin >> rainfall[index];
        }

        cout << "Enter the temperature: ";
        cin >> temp[index];
        while ((temp[index] < -100) || (temp[index] > 140)) // Neu nhiet do khong hop le thi nhap lai
        {
            cout << "The number is invalid. Please try again: ";
            cin >> temp[index];
        }

        
        if (temp[index] > temp[max])  // Tim thang co nhiet do cao nhat
        {
            highTemp = temp[index];
            max = index;
        }
        
        if (temp[index] < temp[min])   // Tim thang co nhiet do thap nhat
        {
            lowTemp = temp[index];
            min = index;
        }

        // Tinh tong luong mua va tong nhiet do
        totalRainfall += rainfall[index];
        totalTemp += temp[index];

        cout << endl;
    }

    // Hien thi du lieu
    cout << setprecision(2);
    cout << "\nThe total rainfall for the year is " << totalRainfall;
    cout << "\nThe average monthly rainfall is " << totalRainfall / 12 << endl;
    cout << name[max] << " is the month having the highest temperatures for the year with " << highTemp << "F\n";
    cout << name[min] << " is the month having the lowest temperatures for the year with " << lowTemp << "F\n";
    cout << "The average of all the monthly average temperature is " << totalTemp / 12;
    return 0;
}