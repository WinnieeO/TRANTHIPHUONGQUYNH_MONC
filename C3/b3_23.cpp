// BT23: Stock Transaction Program
#include <iostream>
using namespace std;

int main()
{
    double  purchasePrice = 45.50,
            salePrice = 56.90,
            percent = 0.02,
            commission1, commission2, sale, purchase, profit;
    unsigned short number = 1000;

    // Tinh tien va hien thi thong tin
    purchase = number * purchasePrice;
    commission1 = purchase * percent;
    cout << "The amount of money Joe paid for the stock is " << purchase << " USD\n";
    cout << "The amount of commission Joe paid his broker when he bought the stock is " << commission1 << " USD\n";

    sale = number * salePrice;
    commission2 = sale * percent;
    cout << "The amount that Joe sold the stock for is " << sale << " USD\n";
    cout << "The amount of commission Joe paid his broker when he sold the stock is " << commission2 << " USD\n";

    profit = (sale - commission2) - (purchase - commission1);
    cout << "The amount of profit that Joe made after selling his stock and paying the two commission to his broker is " << profit << " USD";
    return 0;
}