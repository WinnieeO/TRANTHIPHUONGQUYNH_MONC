// BT6: Soccer Scores
#include <iostream>
#include <string>
using namespace std;

struct Soccer
{
    string name;            // Ten nguoi choi
    short number, point;    // So hieu va diem ghi duoc
};

int main()
{
    Soccer players[12];     // Tao mang chua 12 bien Soccer Structure
    short total = 0, index;
    short max = 0;

    // Nhap thong tin cua cac cau thu
    for (int i = 0; i < 12; i++)
    {
        cout << "Enter player's name#" << (i + 1) << ": ";
        getline(cin, players[i].name);

        cout << "Enter " << players[i].name << "'s number: ";
        cin >> players[i].number;
        while(players[i].number < 0)    // Yeu cau nhap lai neu gia tri am
        {
            cout << "The number is invalid. Please try again: ";
            cin >> players[i].number;
        }

        cout << "Enter the points scored by " << players[i].name << ": ";
        cin >> players[i].point;
        while(players[i].point < 0)     // Yeu cau nhap lai neu gia tri am
        {
            cout << "The number is invalid. Please try again: ";
            cin >> players[i].point;
        }

        total += players[i].point;      // Tinh tong so diem ghi duoc

        if (players[i].point > max)     // Tim nguoi ghi diem nhieu nhat
        {
            max = players[i].point;
            index = i;
        }

        cin.ignore();
        cout << endl;
    }

    // Hien thi thong tin
    cout << "The total points earned by the team is " << total << endl;
    cout << players[index].name << " whose number is " << players[index].number << " has earned the most points";
    return 0;
}