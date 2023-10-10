// BT8: Color Mixer
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string color1, color2;

    // Nhap 2 mau co ban, neu nhap khac thi bao loi
    cout << "Enter the first name of primary color: ";
    cin >> color1;
    while ((color1 != "red") && (color1 != "blue") && (color1 != "yellow"))
    {
        cout << "The program has error! Please try agian!\n";
        cout << "Enter the first name of primary color: ";
        cin >> color1;
    }
    
    cout << "Enter the second name of primary color: ";
    cin >> color2;
    while ((color2 != "red") && (color2 != "blue") && (color2 != "yellow"))
    {
        cout << "The program has error! Please try agian!\n";
        cout << "Enter the second name of primary color: ";
        cin >> color2;
    }

    // So sanh va xuat ket qua
    if (((color1 == "red") && (color2 == "blue")) || ((color1 == "blue") && (color2 == "red")))
    {
        cout << "The secondary color that results by mixing red and blue is purple";
    }
    if (((color1 == "red") && (color2 == "yellow")) || ((color1 == "yellow") && (color2 == "red")))
    {
        cout << "The secondary color that results by mixing red and yellow is orange";
    }

    if (((color1 == "yellow") && (color2 == "blue")) || ((color1 == "blue") && (color2 == "yellow")))
    {
        cout << "The secondary color that results by mixing yellow and blue is purple";
    }
    return 0;
}