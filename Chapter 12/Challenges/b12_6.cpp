// BT6: String Search
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file;
    string name, str, search;
    int i = 0, pos, k = 0;

    cout << "Enter the name of file: ";     // Nhap ten file
    getline(cin, name);

    cout << "Enter a string to search for: ";   // Nhap chuoi tim kiem
    getline(cin, search);

    file.open(name);    // Mo file

    while (getline(file, str))  // Doc noi dung va gan vao bien str
    {
        bool value = false;
        pos = 0;

        while ((pos = str.find(search, pos)) != string::npos)   // Neu vi tri pos khong phai vi tri dac biet thi thuc hien vong lap
        {
            pos += search.length();     // Tang them 1 "do dai chuoi search" cho bien pos de bo qua vi tri da tim kiem
            i++;
            value = true;
        }
        if (value)
           cout << str << endl;         // Hien thi dong co chuoi tim kiem
    }

    // Hien thi so lan chuoi tim kiem xuat hien
    cout << "The number of times the string appeared in the file is " << i;

    file.close();   // Dong files
    return 0;
}