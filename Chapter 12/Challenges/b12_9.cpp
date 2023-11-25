// BT9: File Encryption Filter
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file1, file2;
    char ch;

    // Mo file
    file1.open("Content.txt");
    file2.open("Filter.txt");

    while(file1.get(ch))    // Doc tung ky tu trong file1
    {
        short number = static_cast<int>(ch);    // Dua ve ma ascii
        if ((number > 32) && (number < 126))    // Neu nam giua 32 va 126
        {
            file2 << static_cast<char>(number + 1);  // Cong them 1 don vi roi tra lai ve ky tu va in ra file2
        }
        else
            file2 << ch;
    }

    file1.close();
    file2.close();
    return 0;
}