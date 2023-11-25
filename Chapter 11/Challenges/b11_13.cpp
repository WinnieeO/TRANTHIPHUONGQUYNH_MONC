// BT13: Drink Machine Simulator
#include <iostream>
#include <iomanip>
using namespace std;

struct DrinkMachine
{
    string name;
    double cost;
    unsigned short numberOfDrink;
};

int main()
{
    // Khai bao mang gom 5 phan tu DrinkMachine
    DrinkMachine order[5] = {{"Cola", .75 , 20}, {"Root Beer", .75, 20}, {"Lemon-Lime", .75, 20}, {"Grape Soda", .80, 20}, {"Cream Soda", .80, 20}};
    short number = 0;
    double payment, total = 0;

    while(number != -1)
    {
        // Hien thi menu
        cout << "   Drink Name         Cost        Number in Machine\n";
        for (short i = 0; i < 5; i++)
        {
            if (i == 0)
                cout << (i + 1) << "  " << order[i].name << setw(19) << order[i].cost << setw(17) << order[i].numberOfDrink << endl;
            else if (i == 1)
                cout << (i + 1) << "  " << order[i].name << setw(14) << order[i].cost << setw(17) << order[i].numberOfDrink << endl;
            else
                cout << (i + 1) << "  " << order[i].name << setw(13) << order[i].cost << setw(17) << order[i].numberOfDrink << endl;
        }

        // Nhap lua chon
        cout << "Enter -1 to quit\nEnter your choice (1 - 5): ";
        cin >> number;
        while ((number != -1) && ((number < 1) || (number > 5)))
        {
            cout << "The number is invalid. Try again: ";
            cin >> number;
        }

        if (number == -1)   // Neu nguoi dung nhap -1 thi thoat 
            break;

        if (order[number - 1].numberOfDrink < 0)     // Neu loai nuoc da het thi hien thi thong bao
            cout << "The drink that has sold out\n";
        else
        {
            cout << "Enter your payment: ";     // Nhap so tien tra ve may
            cin >> payment;
            while ((payment < order[number - 1].cost) || (payment > 1))     // Xac thuc dau vao
            {
                cout << "Please enter the amount between $0 to $1: ";
                cin >> payment;
            }
            total += payment;       // Tinh tong so tien may kiem duoc
            order[number - 1].numberOfDrink--;      // Giam so luong do uong sau khi ban nuoc cho nguoi dung
        }        
        cout << endl;
    }

    // Hien thi so tien kiem duoc
    cout << "The total amount of money the machine earned is $" << total;   

    return 0;
}