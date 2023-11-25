// BT14: Fishing Game Simulation
#include <iostream>
using namespace std;

class FishingGame
{
private:
    int value;
    int sides;
public:
    FishingGame(int = 6);
    void roll();        // Tung xuc xac
    string getValue();  // Tra ve vat pham cau duoc
};

FishingGame::FishingGame(int numSides)
{    
    unsigned seed = time(0);
    srand(seed);
    sides = numSides;

    roll();
}

void FishingGame::roll()
{
    const int MIN_VALUE = 1;
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}


string FishingGame::getValue()
{
    if (value == 1)
        return "a huge fish";
    else if (value == 2)
        return "an old shoe";
    else if (value == 3)
        return "a little fish";
    else if (value == 4)
        return "a tire";
    else if (value == 5)
        return "a can";
    else
        return "a swordfish";
}

int main()
{
    FishingGame player;
    char ch = 'Y';
    short point = 0;

    while (ch == 'Y' || ch == 'y')
    {
        // Hien thi ket qua sau khi cau ca
        cout << player.getValue() << endl;

        // Tinh diem dua tren vat pham cau duoc
        if (player.getValue() == "a huge fish")
            point += 5;
        else if (player.getValue() == "an old shoe")
            point -= 1;
        else if (player.getValue() == "a little fish")
            point += 2;
        else if (player.getValue() == "a tire")
            point -= 5;
        else if (player.getValue() == "a can")
            point -= 1;
        else
            point += 10 ;

        // Hoi nguoi dung co muon tiep tuc
        cout << "Do you want to continue fishing? (Y/N)";
        cin >> ch;
        while (ch != 'N' && ch != 'Y' && ch != 'n' && ch != 'y')  // Xac thuc dau vao
        {
            cout << "Enter again: ";
            cin >> ch;
        }
    }

    // Hien thi diem cung thong bao
    if (point > 0)
        cout << "Congratulation. You have " << point << " points";
    else
        cout << "Loserrr with " << point << " points";
    return 0;
}