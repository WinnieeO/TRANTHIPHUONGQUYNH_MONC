// BT6: Inventory Class
#include <iostream>
#include <cstdlib>
using namespace std;

class Inventory
{
    private:
        int itemNumber, quantity;   // So mat hang, so luong co san
        double cost, totalCost;     // Gia, tong gia
    public:
        Inventory();                    // Default Constructor
        Inventory(int, int, double);    // Constructor khoi tao gia tri ban dau
        void setItemNumber(int);        // Ham thiet lap gia tri cho bien itemNumber
        void setQuantity(int);          // Ham thiet lap gia tri cho bien quantity
        void setCost(double);           // Ham thiet lap gia tri cho bien cost
        void setTotalCost();            // Ham tinh tong gia
        int getItemNumber();            // Ham tra ve so mat hang
        int getQuantity();              // Ham tra ve so luong co san
        double getCost();               // Ham tra ve gia tri cua gia
        double getTotalCost();          // Ham tra ve gia tri cua tong gia
};

Inventory::Inventory()
{
    itemNumber = 0;
    quantity = 0;
    cost = 0;
    totalCost = 0;
}

Inventory::Inventory(int n, int q, double c)
{
    itemNumber = n;
    quantity = q;
    cost = c;

    setTotalCost();
}

void Inventory::setItemNumber(int n)
{
    if (n > 0)
        itemNumber = n;
    else
    {
        cout << "Do not accept negative number";
        exit (EXIT_FAILURE);
    }
}

void Inventory::setQuantity(int q)
{
    if (q > 0)
        quantity = q;
    else
    {
        cout << "Do not accept negative number";
        exit (EXIT_FAILURE);
    }
}

void Inventory::setCost(double c)
{
    if (c > 0)
        cost = c;
    else
    {
        cout << "Do not accept negative number";
        exit (EXIT_FAILURE);
    }
}

void Inventory::setTotalCost()
{
    totalCost = quantity * cost;
}

int Inventory::getItemNumber()
{
    return itemNumber;
}

int Inventory::getQuantity()
{
    return quantity;
}

double Inventory::getCost()
{
    return cost;
}

double Inventory::getTotalCost()
{
    return totalCost;
}

int main()
{
    Inventory item1(1, 30, 59.95);  // Khoi tao 1 object

    // Hien thi thong tin
    cout << "The item's item number: " << item1.getItemNumber() << endl;
    cout << "The quantity of the items on hand: " << item1.getQuantity() << endl;
    cout << "The wholesale per-unit cost of the item: " << item1.getCost() << endl;
    cout << "The total inventory cost of the item: " << item1.getTotalCost() << endl;
    return 0;
}