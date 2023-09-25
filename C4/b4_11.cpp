// BT11: Math Tutor
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    unsigned int num1, num2, sum, answer;

    // Hien thi 2 so ngau nhien
    num1 = rand();
    num2 = rand();
    answer = num1 + num2;
    cout << setw(7) << num1 << endl;
    cout << "+" << setw(6) << num2 << endl;
    cout << "--------" << endl;

    // Nhap cau tra loi
    cin >> sum;
    if (sum == answer)
    {
        cout << "Congratulate you!";
    }
    else
    {
        cout << "The answer is wrong.\n";
        cout << "The correct answer is " << answer;
    }
    return 0;
}