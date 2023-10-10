// BT14: Monthly Sales Tax
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned short year;
    string month;
    double  statePer = 0.04, countyPer = 0.02,
            stateTax, countyTax, total, sale, totalTax;

    // Nhap thang, nam
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;

    // Nhap tong so tien thu duoc
    cout << "Enter the total amount collected at the cash register: $";
    cin >> total;

    // Tinh tien
    sale = total / 1.06;
    countyTax = sale * countyPer;
    stateTax = sale * statePer;

    // Xuat thong tin
    cout << "Month: " << month << endl;
    cout << "----------------\n";
    cout << setprecision(2) << fixed;
    cout << "Total Collected:" << setw(6) << "$" << total << endl;
    cout << "Sales:" << setw(16) << "$" << sale << endl;
    cout << "County Sales Tax:" << setw(5) << "$" << countyTax << endl;
    cout << "State Sales Tax:" << setw(6) << "$" << stateTax << endl;
    cout << "Total Sales Tax:" << setw(6) << "$" << total - sale << endl;
    return 0;
}