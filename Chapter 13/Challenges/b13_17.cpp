// BT17: Cash Register
#include <iostream>
#include<cstdlib>
#include <string>
using namespace std;

class InventoryItem
{
    private:
        string description;         // Mo ta mat hang
        double cost;                // Gia san pham
        int units;                  // So luong co san
    public:
        // Constructor #1
        InventoryItem()
        {   description = "";
            cost = 0.0;
            units = 0; }

        // Constructor #2
        InventoryItem(string desc)
        {   description = desc;
            cost = 0.0;
            units = 0; }

        // Constructor #3
        InventoryItem(string desc, double c, int u)
        {   description = desc;
            cost = c;
            units = u; }

        // Mutator functions
        void setDescription(string d)
            { description = d; }

        void setCost(double c)
            { cost = c; }

        void setUnits(int);

        // Accessor functions
        void getCost(int);

        int getUnits(short x)
            { return units - x; }
};

void InventoryItem::setUnits(int x)
{
    units = x;
}

void InventoryItem::getCost(int x)
{
    double c = cost * 1.3 * x;
    cout << "The tax is $" << (c * 0.06) << endl;
    cout << "The purchase subtotal is $" << c << endl;
    cout << "The purchase total is $" << (c * 1.06);
}

int main()
{
    InventoryItem item;
    string thing;
    short number;

    // Nhap thong tin
    cout << "Enter the item: ";
    getline(cin, thing);
    cout << "Enter the quantity: ";
    cin >> number;
    while (number < 0)  // Xac thuc dau vao
    {
        cout << "Enter again: ";
        cin >> number;
    }
    item.setDescription(thing);
    item.setUnits(1000);
    item.setCost(30.12);
    item.getCost(number);   // Hien thi thong bao
    cout << "\nNow we have " << item.getUnits(number) << " " << thing << "s";
    
    return 0;
}