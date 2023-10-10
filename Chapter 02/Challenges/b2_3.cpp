// BT3: Sales Tax
#include <iostream>
using namespace std;

int main()
{
    float   purchase = 95.0,        // Gan tien phi mua hang la 95
            stateSalesTax = 0.04,   // Gan thue o tieu bang la 0.04
            countySalesTax = .02,   // Gan thue o quan la 0.02
            totalSalesTax;
    
    // Tinh va xuat tong so tien thue
    totalSalesTax = purchase * stateSalesTax + purchase * countySalesTax;
    cout << "The total sales tax is $" << totalSalesTax << endl;
    
    return 0;
}