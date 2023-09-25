// BT17: Stock Commission
#include <iostream>
using namespace std;

int main()
{
    double  price = 35.0,                   // Gia 1 co phieu la $35
            percentCommission = 0.02,       // 2% so tien so co phieu da mua la phi giao dich
            alonePaid, commission, total;
    short int sharesOfStock = 750;         //So co phieu da mua

    //Tinh va xuat gia cua 750 co phieu
    alonePaid = price * sharesOfStock;
    cout << "The amount paid for the stock alone is $" << alonePaid << endl;

    //Tinh va xuat so tien phi giao dich
    commission = percentCommission * alonePaid;
    cout << "The amount of the commission is $" << commission << endl;

    //Tinh va xuat tong so tien phai tra
    total = alonePaid + commission;
    cout << "The total amount paid is $" << total;

    return 0;
}