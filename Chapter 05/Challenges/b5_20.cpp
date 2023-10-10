// BT20: 20. Random Number Guessing Game
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    short number, guess;
    number = rand();
    cout << "Guess what the number is: ";
    cin >> guess;
    while (guess != number)
    {
        if (guess < number)
        {
            cout << "Too low, try again.\n";
            cout << "Guess what the number is: ";
            cin >> guess;
        }

        else if (guess > number)
        {
            cout << "Too high, try again.\n";
            cout << "Guess what the number is: ";
            cin >> guess;
        }
    }

    if (guess == number)
            cout << "Congratulation!\n";
    return 0;
}