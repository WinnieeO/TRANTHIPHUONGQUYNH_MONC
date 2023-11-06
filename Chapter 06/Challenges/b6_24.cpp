// BT24: Rock, Paper, Scissors Game
#include <iostream>
using namespace std;

// Function prototype
void computerTurn(short);
int game();

int main()
{
    short you, computer;
    bool result = false;

    while (result == false)     // Neu gia tri la false thi tiep tuc lap
    {
        computer = game();  // Goi ham tra ve 1 so nguyen tu 1 den 3 va gan cho bien computer

        // Hien thi Menu va yeu cau nhap lua chon
        cout << "1: Rock\n";
        cout << "2: Paper\n";
        cout << "3: Scissors\n";
        cout << "Enter your choice (1-3): ";
        cin >> you;  // Nhap lua chon
        while ((you < 1) || (you > 3))
        {
            cout << "Do not accept a value which less than 1 and greater than 3. Try again: ";
            cin >> you;  // Nhap lai neu so nhap vao khong dung dieu kien
        }

        // Hien thi lua chon cua chuong trinh
        computerTurn(computer);

        // Hien thi lua chon cua nguoi dung
        if (you == 1)
            cout << "Rock\n";
        else if (you == 2)
            cout << "Paper\n";
        else
            cout << "Scissors\n";

        // So sanh va dua ra ket qua
        // Neu tim ra duoc nguoi chien thang thi tra ve gia tri true
        if (((computer == 1) && (you == 2)) || ((computer == 2) && (you == 3)) || ((computer == 3) && (you == 1)))
        {
            cout << "You win. Congratulation!";
            result = true;
        }
        else if (((computer == 2) && (you == 1)) || ((computer == 3) && (you == 2)) || ((computer == 1) && (you == 3)))
        {
            cout << "You lose";
            result = true;
        }
    }
    return 0;
}

int game()
{
    short turn = rand() % 3 +1;     // Random 1 so nguyen tu 1 den 3 roi gan cho bien turn
    return turn;    // Tra ve gia tri cho bien turn
}

void computerTurn(short x)
{
    // Hien thi lua chon cua chuong trinh
    if (x == 1)
        cout << "Rock vs ";
    else if (x == 2)
        cout << "Paper vs ";
    else if (x == 3)
        cout << "Scissors vs ";
}