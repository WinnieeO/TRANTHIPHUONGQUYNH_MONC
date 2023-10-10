// BT6: Annual Pay
#include <iostream>
using namespace std;

int main()
{
    double  payAmount = 2200.0,     // Tien luong moi ky la 2200
            payPeriods = 26.0,      // So ky trong 1 nam la 26
            annualPay;

    // Tinh va xuat so tien luong trong 1 nam   
    annualPay = payAmount * payPeriods;
    cout << "The total annual pay is $" << annualPay;
    return 0;  
}