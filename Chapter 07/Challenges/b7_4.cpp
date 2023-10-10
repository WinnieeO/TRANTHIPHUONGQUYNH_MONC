// BT4: Larger Than n
#include <iostream>
using namespace std;

void great(int arr[], int n, int number);

int main()
{
    int n, arr[1000], size;
    cout << "Enter the size of the array: ";
    cin  >> size;
    cout << "Enter a number n: ";
    cin >> n;
    cout << "Enter an array: \n";
    great(arr, n, size);
    return 0;
}

void great(int arr[], int n, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << "All of the numbers in the array that are greater than " << n << " is ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > n)
            cout << arr[i] << " ";    
    }
}