// BT18: A Game of 21
#include <iostream>
using namespace std;

class Blackjack
{
    private:
        int value;
        int sides;
    public:
        Blackjack(int = 12);
        void roll();        // Tung xuc xac
        short getValue();   // Tra ve so diem lac duoc
};

Blackjack::Blackjack(int numSides)
{    
    unsigned seed = time(0);
    srand(seed);
    sides = numSides;

    roll();
}

void Blackjack::roll()
{
    const int MIN_VALUE = 1;
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

short Blackjack::getValue()
{
    return value;
}

int main()
{
    Blackjack player, cpt;
    short me = 0, computer = 0;
    char ch = 'y';

    while (ch == 'Y' || ch == 'y') 
    {
        // Luot cua may tinh
        cpt.roll();
        computer += cpt.getValue();

        // Luot cua nguoi choi
        player.roll();
        me += player.getValue();
        if (me > 21)    // Neu diem cua nguoi choi vuot qua 21 thi out khoi vong lap
            break;

        // Xac nhan lan tung xuc xac ke tiep
        cout << "Do you want to roll? ";
        cin >> ch;
        while (ch != 'N' && ch != 'Y' && ch != 'n' && ch != 'y')  // Xac thuc dau vao
        {
            cout << "Enter again: ";
            cin >> ch;
        }
    }
    
    // Hien thi thong bao
    cout << "The computer has " << computer << " points\n";
    cout << "You have " << me << " points\n";
    if (me > 21)
        cout << "Loserr";
    else if ((computer < 22) && (computer > me))
        cout << "Loserr";
    else
        cout << "Winner";
    return 0;
}