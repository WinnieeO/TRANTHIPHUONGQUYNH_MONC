// BT5: Male and Female Percentages
#include <iostream>
using namespace std;

int main()
{
    unsigned short males, females;
    float perFemales, perMales;

    // Nhap so nam va so nu tham gia lop hoc
    cout << "Enter the number of males registered in a class: ";
    cin >> males;
    cout << "Enter the number of females registered in a class: ";
    cin >> females;

    // Tinh va xuat so phan tram nam va nu trong lop hoc
    perFemales = static_cast <float> (females) / (males + females) * 100;
    perMales = static_cast <float> (males) / (males + females) * 100;
    cout << "The percentage of males in the class is " << perMales << "%\n";
    cout << "The percentage of females in the class is " << perFemales << "%";
    return 0;
}