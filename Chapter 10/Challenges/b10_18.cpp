// BT18: Phone Number List
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string list[] = {"Alejandra Cruz, 555-1223", "Joe Looney, 555-0097", "Geri Palmer, 555-8787",
                     "Li Chen, 555-1212", "Holly Gaddis, 555-8878", "Sam Wiggins, 555-0998", 
                     "Bob Kain, 555-8712", "Tim Haynes, 555-7676", "Warren Gaddis, 555-9037",
                     "Jean James, 555-4939", "Ron Palmer, 555-2783"};
    char ch[50];
    short pos;

    cout << "Search: ";
    cin.getline(ch, 50);    // Nhap tim kiem

    for (int i = 0; i < 11; i++)
    {
        pos = list[i].find(ch, 0);  // Neu tim duoc vi tri cua tu khoa trong chuoi thi gan vao pos
        if ((0 <= pos) && (pos <= list[i].length()))  // Neu vi tri pos ton tai thi hien thi thong tin
            cout << list[i] << endl;
    }
    return 0;
}