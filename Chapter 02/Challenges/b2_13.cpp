// BT13: Circuit Board Price
#include <iostream>
using namespace std;

int main()
{
    float   profit = 0.35,          // Tien lai cua cua hang: 35%
            priceCBoard = 14.95,    // Gia goc cua mot bang mach
            sellingPrice;
    
    // Tinh va xuat gia ban ra cua 1 bang mach
    sellingPrice = priceCBoard * (1.0 + profit);
    cout << "The selling price of a circuit board that costs $14.95 is $" << sellingPrice;

    return 0;
}