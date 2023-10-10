// BT18: Fat Gram Calculator
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double calories, fat, totalCalo, percent;

    // Nhap so calo va gam chat beo trong 1 loai thuc pham
    cout << "Enter the number of calories in a food: ";
    cin >> calories;
    while (calories < 0)
    {
        cout << "The calories are incorrectly entered. Please try again!\n";
        cout << "Enter the number of calories in a food: ";
        cin >> calories;
    }

    cout << "Enter the fat grams in a food: ";
    cin >> fat;
    totalCalo = fat * 9;
    while ((fat < 0) || (totalCalo > calories))
    {
        cout << "The fat grams are incorrectly entered. Please try again!\n";
        cout << "Enter the fat grams in a food: ";
        cin >> fat;
    }

    // Tinh toan va xuat thong tin
   
    percent = (totalCalo / calories) * 100;
    cout << setprecision(2) <<fixed;
    cout << "The percentage of calories that come from fat is " << percent << "%\n";
    if (percent < 30)
    {
        cout << "The food is low in fat.";
    }

    return 0;
}