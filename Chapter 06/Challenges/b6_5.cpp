// BT5: Falling Distance
#include <iostream>
using namespace std;

// Function prototype
double faasDistance(double);

int main()
{
    for (int t = 1; t <= 10; t++)   // Vong lap thoi gian t tu 1s den 10s
    {
        // Truyen doi so t vao ham va hien thi ket qua
        cout << "In " << t << "s, the distance the object falls is " << faasDistance(t) << "m\n";  
    }
    return 0;
}

double faasDistance(double t)
{
    double g = 9.8, d;

    d = 0.5 * g * t;    // Tinh quang duong roi duoc
    return d;           // Tra ve gia tri cua quang duong
}