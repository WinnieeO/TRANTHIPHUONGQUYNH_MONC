// BT10: File Decryption Filter
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file1, file2;
    char ch;

    file2.open("Content.txt");
    file1.open("Filter.txt");

    while(file1.get(ch))
    {
        short number = static_cast<int>(ch);        // Dua ve ma ascii
        if ((number > 32) && (number <= 126))       // Neu nam giua 32 va 127
        {
            file2 << static_cast<char>(number - 1);  // Tru  di 1 don vi roi tra lai ve ky tu va in ra file2
        }
        else
            file2 << ch;
    }

    file1.close();
    file2.close();
    return 0;
}