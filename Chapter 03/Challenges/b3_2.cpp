// BT2: Stadium Seating
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int ticketA, ticketB, ticketC;
    float costA = 15, costB = 12, costC = 9, income;

    cout << "How many tickets were sold for each class of seats?\n";
    cout << "Class A: ";
    cin >> ticketA;
    cout << "Class B: ";
    cin >> ticketB;
    cout << "Class c: ";
    cin >> ticketC;

    income = ticketA * costA + ticketB * costB + ticketC * costC;
    cout << "The amount of income generated from ticket sales is $";
    cout << setprecision(2) << fixed;
    cout << income << endl;
    return 0;
}