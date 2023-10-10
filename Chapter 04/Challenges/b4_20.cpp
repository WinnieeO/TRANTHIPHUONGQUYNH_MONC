// BT20: The Speed of Sound
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string environment;
    double distance, time;

    // Chon moi truong
    cout << "Medium         Speed\n";
    cout << "Air            1,100 feet per second\n";
    cout << "Water          4,900 feet per second\n";
    cout << "Steel          16,400 feet per second\n\n";
    cout << "Enter your choice: ";
    cin >> environment;
    while ((environment != "Air") && (environment != "air") && (environment != "Water") && (environment != "water") && (environment != "Steel") && (environment != "steel"))
    {
        cout << "ERORR!\n";
        cout << "Enter your choice again: ";
        cin >> environment;
    }

    // Nhap khoang cach
    cout << "Enter the distance: ";
    cin >> distance;
    while (distance < 0)
    {
        cout << "ERORR!\n";
        cout << "Enter the distance again: ";
        cin >> distance;
    }

    // So sanh va tinh toan
    if ((environment == "Air") || (environment == "air"))
    {
        time = distance / 1100;
    }
    else if ((environment == "Water") || (environment == "water"))
    {
        time = distance / 4900;
    }
    else if ((environment == "Steel") || (environment == "steel"))
    {
        time = distance / 16400;
    }

    // Xuat thong tin
    cout << setprecision(4) << fixed;
    cout << "The amount of time it will take is: " << time << " seconds";
    return 0;
}