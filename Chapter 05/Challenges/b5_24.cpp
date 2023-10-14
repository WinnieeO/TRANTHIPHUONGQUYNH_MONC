// BT24: Using Files—Numeric Processing
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    double avg, sum = 0, number;
    int    count = 0;

    // Mo file
    inFile.open("Random.txt");
    outFile.open("Run.txt");
    
    // Tinh tong, so luong phan tu, trung binh cong
    while (inFile >> number)
    {
        count++;
        sum += number;
    }
    avg = sum / count;

    // Xuat thong tin ra man hinh
    outFile << "The number of numbers in the file is " << count << endl;
    outFile << "The sum of all the numbers in the file is " << sum << endl;
    outFile << "The average of all the numbers in the file is " << avg;

    // Dong file
    inFile.close();
    outFile.close();

    return 0;
}