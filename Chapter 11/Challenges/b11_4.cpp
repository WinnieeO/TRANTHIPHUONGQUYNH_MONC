// BT4: Weather Statistics
#include <iostream>
#include <iomanip>
using namespace std;

struct Weather
{

    double totalRainfall,   // Tong luong mua
           highTemp,        // Nhiet do cao
           lowTemp,         // Nhiet do thap
           avgTemp,         // Nhiet do trung binh
           temp, rainfall;
};

int main()
{
    string name[] = {"January", "February", "March", "April", "May", "June", "July", "August", "Septemper", "October", "November", "December"};
    Weather month[12];      // Khoi tao mang chua 12 bien Weather Structure
    int min, max;

    month[0].totalRainfall = 0;
    month[0].highTemp = -100;
    month[0].lowTemp = 140;
    month[0].avgTemp = 0;

    // Nhap du lieu thoi tiet cho tung thang trong nam
    for (int i = 0; i < 12; i++)
    {
        cout << name[i];
        cout << "\nEnter the rainfall: ";
        cin >> month[i].rainfall;
        while (month[i].rainfall < 0)   // Neu luong mua am thi yeu cau nhap lai
        {
            cout << "The number is invalid. Please try again: ";
            cin >> month[i].rainfall;
        }

        cout << "Enter the temperature: ";
        cin >> month[i].temp;
        while ((month[i].temp < -100) || (month[i].temp > 140)) // Neu nhiet do khong hop le thi nhap lai
        {
            cout << "The number is invalid. Please try again: ";
            cin >> month[i].temp;
        }

        // Tinh tong luong mua va tong nhiet do
        month[0].totalRainfall += month[i].rainfall;
        month[0].avgTemp += month[i].temp;

        if (month[i].temp > month[0].highTemp)  // Tim thang co nhiet do cao nhat
        {
            month[0].highTemp = month[i].temp;
            max = i;
        }
        
        if (month[i].temp < month[0].lowTemp)   // Tim thang co nhiet do thap nhat
        {
            month[0].lowTemp = month[i].temp;
            min = i;
        }
        cout << endl;
    }

    // Hien thi du lieu
    cout << setprecision(2);
    cout << "\nThe total rainfall for the year is " << month[0].totalRainfall;
    cout << "\nThe average monthly rainfall is " << month[0].totalRainfall / 12 << endl;
    cout << name[max] << " is the month having the highest temperatures for the year with " << month[0].highTemp << "F\n";
    cout << name[min] << " is the month having the lowest temperatures for the year with " << month[0].lowTemp << "F\n";
    cout << "The average of all the monthly average temperature is " << month[0].avgTemp / 12;
    return 0;
}