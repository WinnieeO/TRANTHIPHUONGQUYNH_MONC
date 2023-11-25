// BT19: Trivia Game
#include <iostream>
using namespace std;

class Question
{
    public:
        void asking(short);
        bool answer(char, short);
};


void Question::asking(short x)
{
    if (x == 1)
    {
        cout << "I am sure that everything will be all right_____\n";
        cout << "A. in the end\nB. at the end\nC. by the end\nD. for the end\n";
    }
    else if (x == 2)
    {
        cout << "The suspect confessed_____\n";
        cout << "A. the police his crime\nB. his crime\nC. his crime the police\nD. his crime to the police\n";
    }
    else if (x == 3)
    {
        cout << "Tom denied_____part in the fighting at school\n";
        cout << "A. to take\nB. take\nC. to taking\nD. taking\n";
    }
    else if (x == 4)
    {
        cout << "I'm sure you'll have no_____the exam\n";
        cout << "A. difficulty passing\nB. difficulty to pass\nC. difficult to pass\nD. difficulties of passing\n";
    }
    else if (x == 5)
    {
        cout << "The old man accused the boy_____the window\n";
        cout << "A. in breaking\nB. on breaking\nC. at breaking\nD. of breaking\n";
    }
    else if (x == 6)
    {
        cout << "I love_____films but I seldom find time to go to the cinema\n";
        cout << "A. seeing\nB. see\nC. saw\nD. seen\n";
    }
    else if (x == 7)
    {
        cout << "The house is too dark. You need_____a bright color\n";
        cout << "A. to be painted\nB. painting it\nC. to have it painted\nD. to have it paint\n";
    }
    else if (x == 8)
    {
        cout << "It's no good_____to him\n";
        cout << "A. write\nB. to write\nC. writing\nD. for writing\n";
    }
    else if (x == 9)
    {
        cout << "Don't use the milk I bought last month. It's_____date now\n";
        cout << "A. out of\nB. in for\nC. into\nD. over\n";
    }
    else
    {
        cout << "I don't mind_____much homework\n";
        cout << "A. did\nB. to do\nC. do\nD. doing\n";
    }
}

bool Question::answer(char ch, short i)
{
    if ((i == 1) && (ch == 'A' || ch == 'a'))
        return true;
    else if ((i == 2) && (ch == 'D' || ch == 'd'))
        return true;
    else if ((i == 3) && (ch == 'D' || ch == 'd'))
        return true;
    else if ((i == 4) && (ch == 'A' || ch == 'a'))
        return true;
    else if ((i == 5) && (ch == 'D' || ch == 'd'))
        return true;
    else if ((i == 6) && (ch == 'A' || ch == 'a'))
        return true;
    else if ((i == 7) && (ch == 'C' || ch == 'c'))
        return true;
    else if ((i == 8) && (ch == 'C' || ch == 'c'))
        return true;
    else if ((i == 9) && (ch == 'A' || ch == 'a'))
        return true;
    else if ((i == 10) && (ch == 'D' || ch == 'd'))
        return true;
    else
        return false;
    
}
char check()
{
    char ch;
    cout << "Your answer is ";
        cin >> ch;
    while (toupper(ch) != 'A' && toupper(ch) != 'B' && toupper(ch) != 'C' && toupper(ch) != 'D')
    {
        cout << "Enter again: ";
        cin >> ch;
    }
    return ch;
}

int main()
{
    Question player1, player2;
    char ch;
    short point1 = 0, point2 = 0;

    cout << "Player#1: Your turn:\n";
    for (short i = 1; i < 6; i++)
    {
        player1.asking(i);
        if (player1.answer(check(), i))
            point1++;
    }

    cout << "Player#2: Your turn:\n";
    for (short i = 6; i < 11; i++)
    {
        player2.asking(i);
        if (player2.answer(check(), i))
            point2++;
    }

    if (point1 < point2)
        cout << "Player#2 is the winner";
    else if (point1 > point2)
        cout << "Player#1 is the winner";
    else 
        cout << "Nobody wins";
    return 0;
}