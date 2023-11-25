// BT6: Vowels and Consonats
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Function prototype
int countVowels(char *c);
int countCons(char *c);

int main()
{
    const int SIZE = 100;
    char str[SIZE], ch, choice = 0;

    cout << "Enter a string: ";
    cin.getline(str, SIZE);     // Nhap chuoi

    while (choice != 'E')   // Neu lua chon E thi thoat chuong trinh
    {
        // Hien thi menu
        cout << "\nMENU\n"
            << "A. Count the number of vowels in the string\n"
            << "B. Count the number of consonants in the string\n"
            << "C. Count both the vowels and consonants in the string\n"
            << "D. Enter another string\n"
            << "E. Exit the program\n";

        cout << "\nEnter you choice: ";
        cin >> ch;      // Nhap lua chon
        choice = toupper(ch);
        while ((choice != 'A') && (choice != 'B') && (choice != 'C') && (choice != 'D') && (choice != 'E'))
        {
            cout << "ERROR. Please try again: ";
            cin >> ch;      // Neu nhap sai thi yeu cau nhap lai
            choice = toupper(ch);
        }

        // Lam theo lua chon cua nguoi dung
        if (choice == 'A')
            cout << "The number of vowels in the string is " << countVowels(str) << endl;   // Dem nguyen am
        else if (choice == 'B')
            cout << "The number of consonants in the string is " << countCons(str) << endl; // Dem phu am
        else if (choice == 'C')
            cout << "Both the vowels and consonants in the string is " << (countVowels(str) + countCons(str)) << endl;  // Dem ca nguyen va phu am
        else if (choice == 'D')
        {
            cin.ignore();
            cout << "Enter another string: ";   
            cin.getline(str, SIZE);     // Nhap chuoi moi
        }
    }

    return 0;
}

int countVowels(char *c)    // Dem so nguyen am
{
    int vow = 0;
    char ch;
    for (int i = 0; i < strlen(c); i++)
    {
        ch = toupper(c[i]);
        if ((ch == 'U') || (ch == 'E') || (ch == 'O') || (ch == 'A') || (ch == 'I'))
            vow++;    // Neu chuoi co cac nguyen am u, e, o, a, i thi tang bien dem len 1 don vi
    }
    return vow;   // Tra ve so nguyen am chuoi co
}

int countCons(char *c)
{
    int count = 0, cons;
    for (int i = 0; i < strlen(c); i++)
    {
        if (isalpha(c[i]))
            count++;    // Dem tong so chu cai cua chuoi
    }

    cons = count - countVowels(c);  // Tinh so phu am cua chuoi
    return cons;    // Tra ve so phu am chuoi co
}