// BT8: Total Purchase
#include <iostream>
using namespace std;

int main()
{
    float   item1 = 15.95,      // Gia cua mat hang 1
            item2 = 24.95,      // Gia cua mat hang 2
            item3 = 6.95,       // Gia cua mat hang 3
            item4 = 12.95,      // Gia cua mat hang 4
            item5 = 3.95,       // Gia cua mat hang 5
            salesTax = 0.07,    // Phan tram thue mua hang
            subtotal, taxAmount, total;
        
    // Xuat gia cua tung mat hang
    cout << "Price of item 1 = $" << item1 << endl;
    cout << "Price of item 2 = $" << item2 << endl;
    cout << "Price of item 3 = $" << item3 << endl;
    cout << "Price of item 4 = $" << item4 << endl;
    cout << "Price of item 5 = $" << item5 << endl;
    // Tinh va xuat tong so tien mua hang (chua bao gom thue)
    subtotal = item1 + item2 + item3 + item4 + item5;
    cout << "The subtotal of the sale is $" << subtotal << endl;

    // Tinh va xuat tien thue mua hang
    taxAmount = subtotal * salesTax;
    cout << "The amount of sales tax is $" << taxAmount << endl;

    // Tinh va xuat tong hoa don (bao gom thue)
    total = subtotal + taxAmount;
    cout << "The total is $" << total;

    return 0;
} 
