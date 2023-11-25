// BT1: File Head Program
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    fstream dataFile;
    string nameFile, str;
    short  i = 0;

    // Nhap ten file
    cout << "Enter the name of file: ";
    getline(cin, nameFile);

    dataFile.open(nameFile);    // Mo file
    
    // In 10 dong dau tien trong file
    while(getline(dataFile, str) && (i < 10))   // Doc tung dong cua file va gan vao bien str
    {
        cout << str << endl;    // Hien thi ra ngoai man hinh
        i++;
        if (dataFile.eof())     // Neu file co it hon 10 dong thi hien thi thong bao va thoat vong lap
        {
            cout << "\nAll content of " << nameFile << " is displayed";
            break;
        }

    }
    
    dataFile.close();   // Dong file
    return 0;
}