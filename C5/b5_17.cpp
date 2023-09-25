// BT17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sales, barChart[5];
    int each = 100;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter today's sales for store " << i << ": ";
        cin >> sales;
        barChart[i] = sales / each;
    }

    // Xuat bieu do ra man hinh
    cout << "SALE BAR CHART\n";
    cout << "(Each * = $100)\n";
    for (int i = 1; i <= 5; i++)
    {
        cout << setprecision(0);
        cout << "Store " << i << ": ";
        for (int j = 1; j <= barChart[i]; j++)
            cout << "*";  
        cout << endl; 
    }
    return 0;
}