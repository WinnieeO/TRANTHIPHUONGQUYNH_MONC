// BT8: Circle Class
#include <iostream>
using namespace std;

class Circle
{
    private:
        double radius;              // Ban kinh
        const double PI = 3.14159;  // Khai bao hang so PI
    public:
        Circle();                   // Default constructor
        Circle(double r);           // Constructor
        void setRadius(double);     // Thiet lap bien r cho radius
        double getRadius();         // Ham tra ve ban kinh
        double getArea();           // Ham tra ve dien tich
        double getDiameter();       // Ham tra ve duong kinh
        double getCircumference();  // Ham tra ve chu vi
};

Circle::Circle()
{
    radius = 0.0;
}

Circle::Circle(double r)
{
    radius = r;
}

void Circle::setRadius(double r)
{
    radius = r;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return (radius * radius * PI);
}

double Circle::getDiameter()
{
    return radius * 2;
}

double Circle::getCircumference()
{
    return (radius * 2 * PI);
}
int main()
{
    Circle c;
    double r;

    // Nhap do dai ban kinh
    cout << "Enter the circle's radius: ";
    cin >> r;

    c.setRadius(r);

    // Hien thi thong tin
    cout << "The circle's area is " << c.getArea() << endl;
    cout << "The circle's diameter is " << c.getDiameter() << endl;
    cout << "The circle's circumference is " << c.getCircumference();

    return 0;
}