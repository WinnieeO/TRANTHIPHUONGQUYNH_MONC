// BT21: Multiple Stock Sales
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
double calcProfit(int, double, double);

int main()
{
    int num, numToo, sale;
    double purchasePrice, PurchaseCommission, salePrice, saleCommission, profit, latest = 0;

    cout << "Enter the number of shares: ";
    cin >> num;                 // Nhap so luong co phieu

    cout << "Enter the purchase price per share: $";
    cin >> purchasePrice;       // Nhap gia mua 1 co phieu

    cout << "Enter the purchase commission paid: $";
    cin >> PurchaseCommission;  // Nhap tien hoa hong khi mua

    numToo = num;
    cout << "Enter the number of shares you want to sale: ";
    while ((num > 0) && (cin >> sale))     // Nhap so co phieu muon ban
    {
        num -= sale;
        cout << "Enter the sale price per share: $";
        cin >> salePrice;           // Nhap gia ban 1 co phieu

        cout << "Enter the sale commission paid: $";
        cin >> saleCommission;      // Nhap tien hoa hong khi ban

        // Goi ham calcProfit de tinh so tien ban duoc cua dot ban nay
        profit = calcProfit(sale, salePrice, saleCommission); 

        if (num > 0)
        {
            cout << "You still have " << num << " shares left\n";   // In ra so co phieu con lai
            cout << "Enter the number of shares you want to sale: ";
        }
        latest += profit;   // Tinh tong so tien ban duoc
    }

    latest = latest - (numToo * purchasePrice + purchasePrice); // Tinh loi nhuan cuoi cung

    if (latest > 0)    // Neu profit duong thi co loi
        cout << "The sale of the stock resulted in a profit with $" << latest; 

    else                // Neu profit am thi lo  
        cout << "The sale resulted in a loss with -$" << (0 - latest);
    return 0;
}

double calcProfit(int NS, double SP, double SC)
{
    double profit;
    profit = (NS * SP) - SC;
    return profit;
}