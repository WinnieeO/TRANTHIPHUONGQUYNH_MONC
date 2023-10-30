// BT11: Lowest Score Drop
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
void getScore(int &x);
void calcAverage(int arr[], int num);
int findLowest(int arr[], int num);

int main()
{
    int scores[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter score #" << (i + 1) << ": ";
        getScore(scores[i]);    // Nhap diem bang ham getScore
    }

    calcAverage(scores, 5);     // Tinh trung binh cong 4 diem cao nhat va hien thi ket qua
    return 0;
}

void getScore(int &x)
{
    int *ptr = &x;      // Khai bao bien con tro va gan dia chi cua x

    cin >> *ptr;        // Nhap diem thong qua bien con tro
    while ((*ptr < 0) || (*ptr > 100))
    {
        cout << "Do not accept test scores lower than 0 or higher than 100. Try again: ";
        cin >> *ptr;
    }
}

int findLowest(int arr[], int num)
{
    int min = 100;
    
    for (int i = 0; i < num; i++)
    {
        if (min > arr[i])       // Tim diem nho nhat
            min = arr[i];
    }

    return min;                 // Tra ve gia tri min
}

void calcAverage(int arr[], int num)
{
    int smallest, total;
    double avg;

    smallest = findLowest(arr, num);    // Gan gia tri diem nho nhat cho smallest bang ham findLowest

    for (int i = 0; i < num; i++)
    {
        if (arr[i] == smallest)
            continue;
        total += arr[i];        // Tinh tong 4 diem cao nhat
    }

    // Tinh trung binh va hien thi ket qua
    avg = static_cast<double>(total) / 4;
    cout << "The average of four highest scores is " << avg; 
}