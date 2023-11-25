// BT15:  Average Number of Words
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    string str;
    double count = 0, line = 0;

    inFile.open("text.txt");   // Mo file

    while(getline(inFile, str))
    {
        const char *ch = str.c_str();   // Chuyen noi dung cua str thanh chuoi C-string, tra ve con tro toi chuoi C-string
        short blank = 0;

        for (short i = 0; i <= strlen(ch); i++)
        {
            if (!isspace(ch[i]) && ((isspace(ch[i + 1])) || (isspace(ch[i - 1]))))  // Neu ke ky tu la 1 khoang trang thi tang bien count len 1 don vi
                count++;
            if (isspace(ch[i])) // Dem so khoang trang
                blank++;
        }
        line++; // Dem so dong

        // Tru di so lan bien count dem 1 tu 2 lan (neu co)
        if (blank > 1)  
            count -= (blank - 1);
    }

    // Hien thi thong tin
    cout << "The average number of words per sentence is " << setprecision(1) << (count / line);
    inFile.close();     // Dong file
    return 0;
}