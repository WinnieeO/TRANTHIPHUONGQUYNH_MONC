// BT2: Rainfall Statistics
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double rainfall[12], total, avg, highest, lowest;
    short high, low;

    // Nhap gia tri cua mang
    for (int i = 0; i < 12; i++)
    {
        cout << "Enter the total rainfall for month " << (i + 1) << ": ";
        cin >> rainfall[i];
        while (rainfall[i] < 0)
        {
            cout << "Do not accept negative numbers for monthly rainfall figures. Try again!\n";
            cout << "Enter the total rainfall for month " << (i + 1) << ": ";
            cin >> rainfall[i];
        }

        total += rainfall[i];
        if (rainfall[i] < lowest)
        {
            lowest = rainfall[i];
            low = i;
        }
        else if (rainfall[i] > highest)
        {
            highest = rainfall[i];
            high = i;
        }
    }

    // Tinh trung binh va xuat thong tin
    avg = total / 12;
    cout << setprecision(2) << fixed;
    cout << "The total rainfall for the year is " << total;
    cout << "\nThe average monthly rainfall is " << avg;
    cout << "\nThe month with the highest amount is " << (high + 1);
    cout << "\nThe month with the lowest amount is " << (low + 1);
    return 0;
}