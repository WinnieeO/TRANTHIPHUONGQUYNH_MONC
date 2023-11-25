// BT17: Morse Code Converter
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100], ch;

    cout << "Enter a string: ";
    cin.getline(str, 100);  // Nhap chuoi

    // Chuyen thanh ma Morse bang lenh lap va lenh dieu kien
    for (int i = 0; i < strlen(str); i++)
    {
        ch = toupper(str[i]);
        switch (ch)
        {
        case ' ': cout << " ";
            break;
        case ',': cout << "--..--";
            break;
        case '.': cout << ".-.-.-";
            break;
        case '?': cout << "..--..";
            break;
        case '0': cout << "-----";
            break;
        case '1': cout << ".----";
            break;
        case '2': cout << "..---";
            break;
        case '3': cout << "...--";
            break;
        case '4': cout << "....-";
            break;
        case '5': cout << ".....";
            break;
        case '6': cout << "-....";
            break;
        case '7': cout << "--...";
            break;
        case '8': cout << "---..";
            break;
        case '9': cout << "----.";
            break;
        case 'A': cout << ".-";
            break;
        case 'B': cout << "-...";
            break;
        case 'C': cout << "-.-.";
            break;
        case 'D': cout << "-..";
            break;
        case 'E': cout << ".";
            break;
        case 'F': cout << "..-.";
            break;
        case 'G': cout << "--.";
            break;
        case 'H': cout << "....";
            break;
        case 'I': cout << "..";
            break;
        case 'J': cout << ".---";
            break;
        case 'K': cout << "-.-";
            break;
        case 'L': cout << ".-..";
            break;
        case 'M': cout << "--";
            break;
        case 'N': cout << "-.";
            break;
        case 'O': cout << "---";
            break;
        case 'P': cout << ".--.";
            break;
        case 'Q': cout << "--.-";
            break;
        case 'R': cout << ".-.";
            break;
        case 'S': cout << "...";
            break;
        case 'T': cout << "-";
            break;
        case 'U': cout << "..-";
            break;
        case 'V': cout << "...-";
            break;
        case 'W': cout << ".--";
            break;
        case 'X': cout << "-..-";
            break;
        case 'Y': cout << "-.--";
            break;
        default: cout << "--..";
            break;
        }
    }
    return 0;
}