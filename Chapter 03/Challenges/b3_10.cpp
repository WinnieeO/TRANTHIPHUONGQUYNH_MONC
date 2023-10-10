// BT10: How Much Insurance
#include <iostream>
using namespace std;

int main()
{
    double  percent = 0.2,
            buildingCost, minAmount;

    // Nhap chi phi thay the cua toa nha
    cout << "Enter the replacement cost of a building: ";
    cin >> buildingCost;

    // Tinh va xuat so tien bao hiem toi thieu phai mua cho tai san do
    minAmount = percent * buildingCost;
    cout << "The minimum amount of insurance you should buy for the property is $" << minAmount;
    return 0;
}
