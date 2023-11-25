// BT5: Line Numbers
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    string name, str;
    short i = 1;

    cout << "Enter the name of file: ";     // Nhap ten file
    getline(cin, name);

    file.open(name);    // Mo file

    while (getline(file, str))  // Doc va in noi dung file ra man hinh
    {
        cout << i << ": " << str << endl;

        if (i % 24 == 0)
        {
            cout << "Press Enter to continue";  // Hien thi thong bao khi du 24 dong
            cin.get();  // Nhan enter de tiep tuc
        }

        i++;
    }

    file.close();   // Dong file
    return 0;
}