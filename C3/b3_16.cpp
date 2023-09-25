// BT16: Senior Citizen Property Tax
#include <iostream>
using namespace std;

int main()
{
    double  percent = 0.6, exemption = 5000,
            actualValuel, currentTax, quarterlyTax, annualPropety, assessmentValue, payTax;

    // Nhap gia tri thuc te cua mot phan tai san
    cout << "Enter the actual value of a piece of property: $";
    cin >> actualValuel;
    cout << "Enter the current tax rate for each $100 of assessed value: $";
    cin >> currentTax;

    // Tinh va xuat ra man hinh muc thue bat dong san hang nam va hoa don thue hang quy
    assessmentValue = percent * actualValuel;
    payTax = assessmentValue - exemption;
    annualPropety = currentTax * payTax / 100;
    quarterlyTax = annualPropety / 4;
    cout << "The annual property tax a senior which homeowner will be charged for will be $" << annualPropety;
    cout << "\nThe quarterly tax bill will be $" << quarterlyTax;
    return 0;
}