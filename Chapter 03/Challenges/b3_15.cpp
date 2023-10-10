// BT15: Property Tax
#include <iostream>
using namespace std;

int main()
{
    double  percent = 0.6,
            propertyTax = 0.0075,
            actualValue, assessmentValue, tax;

    // Nhap gia tri thuc cua phan tai san
    cout << "Enter the actual value of a piece pf property: ";
    cin >> actualValue;

    // Tinh va xuat gia tri thue ra man hinh
    assessmentValue = actualValue * percent;
    tax = assessmentValue * propertyTax;
    cout << "The assessment value is " << assessmentValue << " USD";
    cout << "\nThe property tax is " << tax << " USD";
    return 0;
}