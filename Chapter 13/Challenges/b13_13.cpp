// BT13: Tossing Coins for a Dollar
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
    Coin quarter, dime, nickel;
    double balance = 0;
    
    while (balance < 1)         // Neu so du be hon 1 thi tiep tuc
    {
        // Tung cac loai dong xu bang loi goi ham
        quarter.toss();
        dime.toss();
        nickel.toss();

        // So sanh dieu kien va tinh toan so du
        if (quarter.getSideUp() == "heads")
            balance += 0.25;
        if (dime.getSideUp() == "heads")
            balance += 0.1;
        if (nickel.getSideUp() == "heads")
            balance += 0.05;
    }

    // Hien thi ket qua
    if (balance == 1)
        cout << "Congratulation! You win";
    else 
        cout << "Loserrrr";
    return 0;
}