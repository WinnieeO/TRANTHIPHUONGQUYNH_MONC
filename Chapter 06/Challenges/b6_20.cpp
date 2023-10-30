// BT20: Stock Profit
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
void calcProfit(int, double, double, double, double);

int main()
{
    int num;
    double purchasePrice, PurchaseCommission, salePrice, saleCommission;

    cout << "Enter the number of shares: ";
    cin >> num;                 // Nhap so luong co phieu

    cout << "Enter the purchase price per share: $";
    cin >> purchasePrice;       // Nhap gia mua 1 co phieu

    cout << "Enter the purchase commission paid: $";
    cin >> PurchaseCommission;  // Nhap tien hoa hong khi mua

    cout << "Enter the sale price per share: $";
    cin >> salePrice;           // Nhap gia ban 1 co phieu

    cout << "Enter the sale commission paid: $";
    cin >> saleCommission;      // Nhap tien hoa hong khi ban

    // Goi ham calcProfit
    calcProfit(num, salePrice, saleCommission, purchasePrice, PurchaseCommission);

    return 0;
}

void calcProfit(int NS, double SP, double SC, double PP, double PC)
{
    double profit = ((NS * SP) - SC) - ((NS * PP) + PC);

    if (profit >= 0)    // Neu profit duong thi co loi
        cout << "The sale of the stock resulted in a profit with $" << profit; 

    else                // Neu profit am thi lo
    profit = 0 - profit;    
        cout << "The sale resulted in a loss with -$" << profit;
}