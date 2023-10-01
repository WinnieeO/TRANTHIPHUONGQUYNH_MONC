// BT7: Number Analysis Program
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ifstream inFile;
    double avg, sum, max, min, number;
    vector<double> numbers;    
    string name;
    int n;

    // Nhap ten file
    cout << "Nhap ten file: ";
    cin >> name;

    // Mo file
    inFile.open(name);

    // Nhan gia tri cua tep va them vao vector
    while (inFile >> number)
    {
        numbers.push_back(number);
    } 

    // Tim so lon nhat, so nho nhat, tong va trung binh cong
    min = numbers[1];
    max = numbers[1];
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
        else if (numbers[i] > max)
            max = numbers[i];
        sum += numbers[i];
    }
    avg = sum / numbers.size();

    // Dong file
    inFile.close();

    // Xuat thong tin
    cout << "The lowest number in the array is " << min << endl;
    cout << "The highest number in the array is " << max << endl;
    cout << "The total of the numbers in the array is " << sum << endl;
    cout << "The average of the numbers in the array is " << avg << endl;

    return 0;
}