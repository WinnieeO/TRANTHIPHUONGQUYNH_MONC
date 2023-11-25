// BT7: Sentence Filter
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream inFile, outFile;
    string name1, name2;
    char ch;

    cout << "Enter the name of the first file: ";     // Nhap ten file 1
    getline(cin, name1);

    cout << "Enter the name of the second file: ";   // Nhap ten file 2
    getline(cin, name2);

    // Mo file
    inFile.open(name1);   
    outFile.open(name2);

    inFile.get(ch); // Doc ky tu tu file 1
    while (inFile)  // Neu file 1 mo thanh cong thi thuc hien cau lenh duoi
    {
        outFile.put(toupper(ch));   // Viet hoa ky tu vua doc o file 1
        inFile.get(ch);             // Doc ky tu tu file 1
    }
       
   // Dong file    
   inFile.close();
   outFile.close();
   return 0;
}