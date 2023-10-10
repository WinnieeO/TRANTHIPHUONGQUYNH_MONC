// BT18: Energy Drink Consumption
#include <iostream>
using namespace std;

int main()
{
    int numCustomers = 16500,       // So luong khach duoc khao sat
        purchase, citrus;
    float   percentPurchase = 0.15, // Phan tram khach mua nuoc tang luc
            percentCitrus = 0.58;   // Phan tram khach mua nuoc tang luc thich vi cam

    // Tinh va xuat so khach hang mua nuoc tang luc
    purchase = numCustomers * percentPurchase;
    cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week is about " << purchase << endl;

    // Tinh va xuat so khach hang mua nuoc tang luc thich nuoc tang luc vi cam
    citrus = purchase * percentCitrus;
    cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks is about " << citrus;

    return 0;
}