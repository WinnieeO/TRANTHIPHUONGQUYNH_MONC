#include <iostream>
#include <iomanip>
using namespace std;

class Market
{
    protected:
        float area;
        int revenue;
    public:
        static const int RENT_COST = 40000000;
        Market(): area(0), revenue(0){};
        virtual void setData();
        float getRentCost();
        virtual float getTotal() = 0;
};

void Market::setData(){
    cout << "Enter the area: ";
    cin >> area;
    cout << "Enter the revenue: ";
    cin >> revenue;
}

float Market::getRentCost(){
    return area * RENT_COST;
}

class Food: public Market{
    private:
        const float TAX = 0.05;
        int freezingCost;
    public:
        void setData();
        float getRentCost();
        float getTotal();
    
};

void Food::setData()
{
    Market::setData();
    cout << "Enter the fee of the freezing cost: ";
    cin >> freezingCost;
}

float Food::getTotal()
{
    return Market::getRentCost() + revenue * TAX + freezingCost;
}

class Clothes: public Market
{
    private:
        const float TAX = 0.1;
    public:
        void setData() {Market::setData();}
        float getRentCost();
        float getTotal();
};

float Clothes::getTotal()
{
    return Market::getRentCost() + revenue * TAX;
}

class Jewelry: public Market
{
    private:
        const float TAX1 = 0.2;
        const float TAX2 = 0.3;
    public:
        virtual void setData() {Market::setData();}
        float getRentCost();
        float getTotal();
};

float Jewelry::getTotal()
{
    if (revenue < 100000000)
        return Market::getRentCost() + revenue * TAX1;
    else    
        return Market::getRentCost() + revenue * TAX2;
}

int main()
{
    cout << "Enter the number of stores: ";
    int n;
    cin >> n;

    Market** stores = new Market*[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Type of Stores: \n1. Food\n2. Clothes\n3. Jewelry\n";
        short choice = 0;
        cout << "Enter your choice: ";
        do cin >> choice;
        while (choice != 1 && choice != 2 && choice != 3);

        if (choice == 1)
            stores[i] = new Food();
        else if (choice == 2)
            stores[i] = new Clothes();
        else
            stores[i] = new Jewelry();

        stores[i]->setData();
    }

    for (int i = 0; i < n; i++)
        cout << setprecision(0) << fixed << "The fee of the store#" << i + 1 << ": "<< stores[i]->getTotal() << endl;
    delete []stores;
    return 0;
}