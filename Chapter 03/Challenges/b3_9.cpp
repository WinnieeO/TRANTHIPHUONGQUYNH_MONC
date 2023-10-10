// BT9: How Many Calories?
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    unsigned short  bagCookies = 30,
                    servings = 10, 
                    cookies;
    float   calories = 300,
            eaten;

    // Nhap so luong banh quy da an
    cout << "How many cookies did you eat? ";
    cin >> cookies;

    // Tinh va xuat luong calo co trong do
    eaten = calories / (bagCookies / servings) * cookies;
    cout << "The total calories were consumed is ";
    cout << setprecision(2) << fixed;
    cout << eaten << endl;
    return 0;    
}