// BT21: 21. Random Number Guessing Game Enhancement
#include <iostream>
using namespace std;

int main()
{
    short number, guess, count = 1;
    number = rand();
    cout << "Guess what the number is: ";
    cin >> guess;
    while (guess != number)
    {
        count++;
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
    {
        cout << "\nCongratulation!\n";
        cout << "The number of guesses is " << count;
    }
    return 0;
}
