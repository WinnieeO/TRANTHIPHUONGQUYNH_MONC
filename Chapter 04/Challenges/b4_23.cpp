// BT23: Gepmetry Calculator
#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;
    short choice;
    double radius, area, length, width, height, base;

    // Hien thi menu
    cout << "Geometry Calculator\n";
    cout << "   1. Calculate the Area of a Circle\n";
    cout << "   2. Calculate the Area of a Rectangle\n";
    cout << "   3. Calculate the Area of Triangle\n";
    cout << "   4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;
    while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4))
    {
        cout << "You enter a number outside the range of 1 through 4\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
    }

    // So sanh va hien ket qua theo lua chon
    if (choice == 1)
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        while (radius < 0)
        {
            cout << "The number is invalid. Try again!\n";
            cout << "Enter the radius of the circle: ";
            cin >> radius;
        }
        area = radius * radius * PI;
        cout << "The area is " << area;
    }
    else if (choice == 2)
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        while (length < 0)
        {
            cout << "The number is invalid. Try again!\n";
            cout << "Enter the length of the rectangle: ";
            cin >> length;
        }
        cout << "Enter the width of the rectangle: ";
        cin >> width;
        while (width < 0)
        {
            cout << "The number is invalid. Try again!\n";
            cout << "Enter the width of the rectangle: ";
            cin >> width;
        }
        area = length * width;
        cout << "The area is " << area;
    }
    else if (choice == 3)
    {
        cout << "Enter the length of the triangle's base: ";
        cin >> base;
        while (base < 0)
        {
            cout << "The number is invalid. Try again!\n";
            cout << "Enter the length of the triangle's base: ";
            cin >> base;
        }

        cout << "Enter the triangle's height: ";
        cin >> height;
        while (height < 0)
        {
            cout << "The number is invalid. Try again!\n";
            cout << "Enter the triangle's height: ";
            cin >> height;
        }
        area = base * height * .5;
        cout << "The area is " << area;
    }
    else if (choice == 4)
    
    return 0;
}
