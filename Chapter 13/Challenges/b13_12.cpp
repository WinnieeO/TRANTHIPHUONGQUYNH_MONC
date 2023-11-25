// BT12:  Coin Toss Simulator
#include <iostream>
using namespace std;

class Coin
{
    private:
        string sideUp;      // Mat ngua len cua dong xu
    public:
        Coin();             // Constructor
        void toss();        // Ham tung dong xu
        string getSideUp(); // Tra ve ket qua mat ngua len sau khi tung
};

Coin::Coin()
{
    short number = rand() % 2 + 1;      // Random ngau nhien mat ngua len cua dong xu luc ban dau
    if (number == 1)
        sideUp = "heads";
    else if (number == 2)
        sideUp = "tails";
}

void Coin::toss()
{
    short number = rand() % 2 + 1;      // Random ngau nhien mat ngua len cua dong xu sau khi goi ham tung
    if (number == 1)
        sideUp = "heads";
    else if (number == 2)
        sideUp = "tails";
}

string Coin::getSideUp()
{
    return sideUp;
}

int main()
{
    Coin ex;
    short countH = 0, countT = 0;

    // Hien thi mat ngua len ban dau cua dong xu
    cout << "The side that is initially facing up: " << ex.getSideUp() << endl << endl;

    // Tung dong xu 20 lan va hien thi ket qua tung lan
    for (short i = 0; i < 20; i++)
    {
        ex.toss();
        cout << "The side that is initially facing up: " << ex.getSideUp() << endl;

        // Dem so lan mat ngua xuat hien
        if (ex.getSideUp() == "heads")
            countH++;
        else
            countT++;
    }

    // Hien thi ket qua
    cout << endl << "The number of times heads is facing up is " << countH << endl;
    cout << "The number of times tails is facing up is " << countT;

    return 0;
}