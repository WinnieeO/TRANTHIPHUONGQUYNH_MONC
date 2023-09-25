// BT17: Math Tutor
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int num1, num2, sum;

    // Hien thi ngau nhien 2 so bat ki
    num1 = rand();
    num2 = rand();
    sum = num1 + num2;
    cout << num1 << endl;
    cout << "+" << num2 << endl;
    cout << "---------\n";
    system("pause"); // Lenh tam dung
    cout << num1 << endl;
    cout << "+" << num2 << endl;
    cout << "---------\n";
    cout << sum;
    return 0;
}