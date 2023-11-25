// BT2: File Display Program
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream dataFile;
    string name, str;
    short i = 1;

    // Nhap ten file
    cout << "Enter the name of name: ";
    getline(cin, name);

    dataFile.open(name);    // Mo file
    
    while (getline(dataFile, str))  // Doc tung dong trong file roi gan vao bien str
    {
        cout << str << endl;    
        if (i % 24 == 0)
        {
            cout << "Press Enter to continue";  // Hien thi thong bao khi du 24 dong
            cin.get();  // Nhan enter de tiep tuc
        }
        i++;
    }
    dataFile.close();   // Dong file
    return 0;
}