// BT7: Celsius Temperature Table
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double celsius(double);

int main()
{
    cout << "Fahrenheit    Celsius\n";
    cout << "---------------------\n"; 
    for (int temp = 0; temp < 21; temp++)   // Vong lap truyen doi so temp vao ham celsius de chuyen doi tu thang do F sang C
    {
        cout << setw(6) << temp  << "F" << setw(13) << setprecision(2) << fixed << celsius(temp) << "C" << endl;
    }
    return 0;
}

double celsius(double f)
{
    double c = (f - 32) * 5/9;
    return c;
}