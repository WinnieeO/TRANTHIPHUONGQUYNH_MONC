// BT7: Ocean Levels
#include <iostream>
using namespace std;

int main()
{
    float   level = 1.5, // Muc nuoc bien tang 1.5mm/ nam
            higherLevel;
    
    // Tinh va xuat muc nuoc bien tang them sau 5 nam
    higherLevel = level * 5.0;
    cout << "The number of milimeters higher than the current level that the ocean's level will be in 5 years is " << higherLevel << endl;

    // Tinh va xuat muc nuoc bien tang them sau 7 nam
    higherLevel = level * 7.0;
    cout << "The number of milimeters higher than the current level that the ocean's level will be in 7 years is " << higherLevel << endl;

    // Tinh va xuat muc nuoc bien tang them sau 10 nam
    higherLevel = level * 10.0;
    cout << "The number of milimeters higher than the current level that the ocean's level will be in 10 years is " << higherLevel;
    
    return 0;
}