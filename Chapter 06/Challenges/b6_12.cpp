// BT12: Star Search
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
void getJudgeData(double &x);
void calcScore(double arr[], short num);
double findLowest(double arr[], short num);
double findHighest(double arr[], short num);

int main()
{
    double scores[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter score#" << (i + 1) << ": ";
        getJudgeData(scores[i]);    // Nhap diem bang loi goi ham getJudgeData
    }

    calcScore(scores, 5);   // Xuat ra diem cuoi cung bang ham calcScore
    return 0;
}

void getJudgeData(double &x)
{
    double *ptr = &x;       // Gan dia chi cua x cho bien con tro
    
    cin >> *ptr;            // Nhap gia tri cua x thong qua bien con tro
    while ((*ptr < 0) || (*ptr > 10))
    {
        cout << "Do not accept judge scores lower than 0 or higher than 10. Try again: ";
        cin >> *ptr;
    }
}

double findLowest(double arr[], short num)
{
    double min = 10;

    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
            min = arr[i];       // Tim diem nho nhat
    }

    return min;
}

double findHighest(double arr[], short num)
{
    double max = 0;

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
            max = arr[i];       // Tim diem lon nhat
    }

    return max;
}

void calcScore(double arr[], short num)
{
    double total, avg, min, max;

    min = findLowest(arr, num);     // Gan diem nho nhat thong qua ham findLowest cho bien min
    max = findHighest(arr, num);    // Gan diem lon nhat thong qua ham findHighest cho bien max

    for (int i = 0; i < 5; i++)
    {
        // Neu gia tri mang bang min hoac max thi chuyen sang lan lap tiep theo
        if (arr[i] == min)
            continue;
        if (arr[i] == max)
            continue;    
        total += arr[i];    // Tinh tong 3 diem con lai
    }

    // Tinh trung binh cong va hien thi ket qua
    avg = total / 3;
    cout << "The final score is " << setprecision(2) << avg;
}