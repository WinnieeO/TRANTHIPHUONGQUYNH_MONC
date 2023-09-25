// BT21: The Speed of Sound in Gases
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string gas;
    double time, distance;

    // Chon 1 loai khi
    cout << "Medium             Speed (Meters per Second)\n";
    cout << "Carbon Dioxide     258.0\n";
    cout << "Air                331.5\n";
    cout << "Helium             972.0\n";
    cout << "Hydrogen           1,270.0\n\n";
    cout << "Enter your choice: ";
    getline(cin, gas);
    while ((gas != "Carbon Dioxide") && (gas != "carbon dioxide") && (gas != "Air") && (gas != "air") && (gas != "Helium") && (gas != "helium") && (gas != "Hydrogen") && (gas != "hydrogen"))
    {
        cout << "ERORR!\n";
        cout << "Enter your choice again: ";
        getline(cin, gas);
    }

    // Nhap thoi gian
    cout << "Enter the number of seconds it toook for the sound to travel in this medium from its source to the location at which it was detected: ";
    cin >> time;
    while ((time < 0) || (time > 30))
    {
        cout << "The time is invalid. Try again!\n";
        cout << "Enter the number of seconds it toook for the sound to travel in this medium from its source to the location at which it was detected: ";
        cin >> time;
    }

    // Tinh khoang cach va xuat ra man hinh
    if ((gas == "Carbon Dioxide") || (gas == "carbon dioxide"))
    {
        distance = 258.0 * time;
    }
    else if ((gas == "Air") || (gas == "air"))
    {
        distance = 331.5 * time;
    }
    else if ((gas == "Helium") || (gas == "helium"))
    {
        distance = 972.0 * time;
    }
    else if ((gas == "Hydrogen") || (gas == "hydrogen"))
    {
        distance = 1270.0 * time;
    }
    cout << setprecision(2) << fixed;
    cout << "The distance which the source of the sound was from the detection location is " << distance << " meters";
    return 0;
}