// BT3: Punch Line
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function prototype
void joke(fstream&);
void punchLine(fstream&);

int main()
{
    fstream file;
   
    // Loi goi ham
    joke(file);
    punchLine(file);
    return 0;
}

void joke(fstream &x)
{
    string str;
    // Mo file joke
    x.open("joke.txt", ios::in);

    while (getline(x, str)) // Doc file
    {
        cout << str;    // Hien thi noi dung file
    }
    // Dong file joke
    x.close();
}

void punchLine(fstream &x)
{
    string str;
    // Mo file punch line
    x.open("punch line.txt");

    x.seekg(0, ios::end);   // Dua con tro toi vi tri cuoi file
    long pos = x.tellg();   // Gan vi tri hien tai cua con tro cho bien pos
    do
    {
        pos--;              // Giam bien pos 1 don vi
        x.seekg(pos);       // Dua con tro toi vi tri pos trong file
        char ch;
        x.get(ch);          // Doc ky tu cua file noi con tro dang dung
        if (ch == '\n')     // Neu ky tu la \n thi thoat vong lap
            break;
    } while (pos > 0);

    pos++;                  // Tang bien pos len 1 don vi
    x.seekg(pos);           // Dua con tro toi vi tri pos
    getline(x, str);        // Doc dong con tro dang dung
    cout << str;            // Hien thi ra man hinh

    // Dong file punch line
    x.close();
}