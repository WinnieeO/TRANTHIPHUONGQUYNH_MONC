// BT15: Character Analysis
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    const int SIZE = 100;       // Khai bao kich thuoc mang
    int numUp = 0, numLow = 0, numDi = 0;       // Khai bao bien dem
    char str[SIZE];     // Khai bao mang ky tu

    // Mo file
    inFile.open("text.txt");

    inFile.getline(str, SIZE);     // Nhap chuoi ky tu

    for (int i = 0; i < strlen(str); i++)
    {
        // Neu ham isupper() tra ve true thi tang bien dem so ky tu in hoa numUp len 1 don vi
        if (isupper(str[i]))    
            numUp++;

        // Neu ham islower() tra ve true thi tang bien dem so ky tu khong in hoa numLow len 1 don vi
        if (islower(str[i]))
            numLow++;

        // Neu ham isdigit() tra ve true thi tang bien dem so ky tu chu so numDi len 1 don vi
        if (isdigit(str[i]))
            numDi++;
    }

    // Hien thi ket qua
    cout << "The number of uppercase letters in the file is " << numUp << endl;
    cout << "The number of lowercase letters in the file is " << numLow << endl;
    cout << "The number of digits in the file is " << numDi;

    // Dong file
    inFile.close();
    return 0;
}