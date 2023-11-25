// BT5: RetailItem Class
#include <iostream>
using namespace std;

class RetailItem
{
    private:
        string description;     // Mo ta ngan gon ve mat hang
        int unitsOnHand;        // So luong hien co
        double price;           // Gia ban le cua mat hang
    public:
        RetailItem(string, int, double);
        void getInfor();    // Ham hien thi du lieu
};

RetailItem::RetailItem(string des, int unit, double p)
{
    description = des;
    unitsOnHand = unit;
    price = p;
}

void RetailItem::getInfor()
{
    cout << "Desciption: " << description << endl;
    cout << "Units On Hand: " << unitsOnHand << endl;
    cout << "Price: " << price << endl << endl;
}


int main()
{
    RetailItem item1("Jacket", 12, 59.95),
               item2("Designer Jeans", 40, 34.95),
               item3("Shirt", 20, 24.95);
    
    // Goi ham de hien thi thong tin
    item1.getInfor();
    item2.getInfor();
    item3.getInfor();

    return 0;
}