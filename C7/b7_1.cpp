// BT1: Largest/Smallest Array Values
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double arr[10], max, min;
    
    max = 0;
    min = INT_MAX;

    // Nhap cac gia tri phan tu mang
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter value #" << (i+1) << ": ";
        cin >> arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
        }
        else if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Xuat gia tri lon nhat va nho nhat trong mang
    cout << "The largest value stored in the array is " << max;
    cout << "\nThe smallest value stored in the array is " << min;
    return 0;
}