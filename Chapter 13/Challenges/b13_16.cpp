// BT16: Freezing and Boiling Points
#include <iostream>
using namespace std;

class Points
{
    private:
        double temp;        // Nhiet do
    public:
        void setTemp(double);       // Thiet lap gia tri nhiet do
        bool isEthylFreezing();     // Tra ve true neu ethyl dong bang
        bool isEthylBoiling();      // Tra ve true neu ethyl soi
        bool isOxygenFreezing();    // Tra ve true neu oxygen dong bang
        bool isOxygenBoiling();     // Tra ve true neu oxygen soi
        bool isWaterFreezing();     // Tra ve true neu nuoc dong bang
        bool isWaterBoiling();      // Tra ve true neu nuoc soi
};

void Points::setTemp(double x)
{
    temp = x;
}

bool Points::isWaterBoiling()
{
    if (temp >= 212)
        return true;
    else
        return false;
}

bool Points::isOxygenFreezing()
{
    if (temp <= -362)
        return true;
    else
        return false;    
}

bool Points::isEthylBoiling()
{
    if ((temp < 212) && (temp >= 172))
        return true;
    else
        return false;    
}

bool Points::isWaterFreezing()
{
    if ((temp <= 32) && (temp > -173))
        return true;
    else
        return false;    
}

bool Points::isOxygenBoiling()
{
    if ((temp <= -306) && (temp > -362))
        return true;
    else
        return false;    
}

bool Points::isEthylFreezing()
{
    if ((temp <= -173) && (temp > -306))
        return true;
    else
        return false;    
}

int main()
{
    Points test;
    double t;

    // Nhap nhiet do
    cout << "Enter the temperature: ";
    cin >> t;

    test.setTemp(t);    // Truyen gia tri bang loi goi ham

    // Hien thi ket qua
    if (test.isWaterFreezing())
        cout << "Water is freezing\n";
    if (test.isWaterBoiling())
        cout << "Water is boiling\n";
    if (test.isEthylFreezing())
        cout << "Ethyl is freezing\n";
    if (test.isEthylBoiling())
        cout << "Ethyl is boiling\n";
    if (test.isOxygenFreezing())
        cout << "Oxygen is freezing\n";
    if (test.isOxygenBoiling())
        cout << "Oxygen is boiling\n";
    return 0;
}