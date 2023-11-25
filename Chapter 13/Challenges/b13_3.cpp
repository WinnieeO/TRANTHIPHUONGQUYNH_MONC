// BT3: Car Class
#include <iostream>
using namespace std;

class Car
{
    private:
        int yearModel, speed;   // Nam san xuat xe, toc do cua xe
        string make;            // Hang san xuat
    public:
        Car(string, int, int);  // Constructor
        int getSpeed();         // Hien thi speed
        void accelerate();      // Cong 5 vao bien speed
        void brake();           // Tru 5 cho bien speed
};

Car::Car(string name, int year, int s = 0)
{
    make = name;
    yearModel = year;
    speed = s;
}

int Car::getSpeed()
{
    return speed;
}

void Car::accelerate()
{
    speed += 5;
}

void Car::brake()
{
    speed -= 5;
}

int main()
{
    Car c("Audi", 2021);    // Khoi tao object voi cac gia tri
    int s;

    for (short i = 0; i < 5; i++)   // Tang 5 don vi cho bien speed 5 lan
        c.accelerate();
    
    cout << "Speed is " << c.getSpeed() << endl;    // Hien thi bien speed

    for (short i = 0; i < 5; i++)   // Giam 5 don vi cho bien speed 5 lan
        c.brake();
    
    cout << "Speed is " << c.getSpeed();            // Hien thi bien speed
}