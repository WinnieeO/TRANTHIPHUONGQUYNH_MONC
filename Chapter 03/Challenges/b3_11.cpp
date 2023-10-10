// BT11: Automobile Costs
#include <iostream>
using namespace std;

int main()
{
    double loanPay, insurance, gas, oil, tires, maintenance, totalMonth, totalAnnual;

    // Nhap cac khoan chi phi
    cout << "Enter the monthly costs for the following expenses incurred from operating your automobile:\n";
    cout << "Loan payment: $";
    cin >> loanPay;
    cout << "Insurance: $";
    cin >> insurance;
    cout << "Gas: $";
    cin >> gas;
    cout << "Oil: $";
    cin >> oil;
    cout << "Tires: $";
    cin >> tires;
    cout << "Maintenance: $";
    cin >> maintenance;

    // Tinh va xuat tong chi phi hang thang
    totalMonth = loanPay + gas + insurance + oil + tires + maintenance;
    cout << "The total monthly cost of these expenses is $" << totalMonth << endl;

    // Tinh va xuat tong chi phi hang nam
    totalAnnual = totalMonth * 12.0;
    cout << "The total annual cost of these expenses is $" << totalAnnual;
    return 0;
}