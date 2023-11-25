// BT4: Tail Program
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    string name, str;
    short i = 0;

    cout << "Enter the name of file: ";     // Nhap ten file
    getline(cin, name);

    file.open(name);    // Mo file

    file.seekg(0, ios::end);    // Dua con tro toi vi tri cuoi cung cua file
    long pos = file.tellg();    // Gan vi tri hien tai cua con tro cho bien pos
    do
    {
        pos--;
        file.seekg(pos);        // Dua con tro den vi tri pos
        char ch = file.get();   // Gan ky tu vao bien ch
        if (ch == '\n')         // Moi lan gap ky tu \n thi tu dong tang bien i len 1 don vi
            i++;
    } while ((i < 20) && (pos > 0));

    if (pos != 0)               // Neu pos khong bang 0 thi tang pos len 2 don vi
        pos += 2;
    file.seekg(pos);            // Dua con tro toi vi tri pos
    while (getline(file, str))  // Doc va in ra man hinh 
        cout << str << endl;

    if (pos < 1)    // Hien thi thong bao neu file co it hon 10 dong
        cout << "\nThe file has been completely displayed";
    
    file.close();   // Dong file
}