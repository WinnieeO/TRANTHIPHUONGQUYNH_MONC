// BT3: Chips and Salsa
#include <iostream>
using namespace std;

int main()
{
    int jars[5], high, low, total;
    string salsa[5] = {"mild", "medium", "sweet", "hot", "zesty"}, highest, lowest;

    high = 0;
    low = INT_MAX;

    // Nhap so lo da ban cho tung loai salsa
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number of jars sold during the past month for " << salsa[i] << ": ";
        cin >> jars[i];
        while (jars[i] < 0)
        {
            cout << "Do not accept negative values for number of jars sold. Try again!\n";
            cout << "Enter the number of jars sold during the past month for " << salsa[i] << ": ";
            cin >> jars[i];
        }

        // Tim san pham ban chay nhat va san phan khong ban chay
        if (low > jars[i])
        {
            low = jars[i];
            lowest = salsa[i];
        }
        
        else if (high < jars[i])
        {
            high = jars[i];
            highest = salsa[i];
        }
        
        // Tinh tong doanh so
        total += jars[i];
    }

    // Xuat thong tin
    for (int i = 0; i < 5; i++)
    {
        // Xuat thong tin doanh so ban hang
        cout << "Sales for " << salsa[i] << " is " << jars[i] << " jars\n";
    }
    cout << "The total sales is " << total << " jars\n";
    cout << "The name of the highest selling products is " << highest << endl;
    cout << "The name of the lowest selling products is " << lowest << endl;
    return 0;
}