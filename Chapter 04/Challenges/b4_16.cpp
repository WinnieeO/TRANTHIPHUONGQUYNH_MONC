// BT16: Running the Race
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name1, name2, name3;
    double time1, time2, time3;

    // Nhap ten 3 van dong vien va thoi gian chay
    cout << "Enter the first runner's name: ";
    getline(cin, name1);
    cout << "Enter the time it took the first runner to finish a race: ";
    cin >> time1;
    while (time1 <= 0)
    {
        cout << "The time is invalid. Please try again!\n";
        cout << "Enter the time it took the first runner to finish a race: ";
        cin >> time1;
    }

    cout << "Enter the second runner's name: ";
    cin.ignore();
    getline(cin, name2);
    cout << "Enter the time it took the second runner to finish a race: ";
    cin >> time2;
    while (time2 <= 0)
    {
        cout << "The time is invalid. Please try again!\n";
        cout << "Enter the time it took the second runner to finish a race: ";
        cin >> time2;
    }

    cout << "Enter the third runner's name: ";
    cin.ignore();
    getline(cin, name3);
    cout << "Enter the time it took the third runner to finish a race: ";
    cin >> time3;
    while (time3 <= 0)
    {
        cout << "The time is invalid. Please try again!\n";
        cout << "Enter the time it took the third runner to finish a race: ";
        cin >> time3;
    }

    // So sanh va xuat ket qua cuoc thi
    if ((time1 < time2) && (time1 < time3))
    {
        cout << name1 << " came in first place.\n";
        if (time2 < time3)
        {
            cout << name2 << " came in second place.\n";
            cout << name3 << " came in third place.";
        }
        else
        {
            cout << name3 << " came in second place.\n";
            cout << name2 << " came in third place.";
        }
    }

    else if ((time2 < time1) && (time2 < time3))
    {
        cout << name2 << " came in first place.\n";
        if (time1 < time3)
        {
            cout << name1 << " came in second place.\n";
            cout << name3 << " came in third place.";
        }
        else
        {
            cout << name3 << " came in second place.\n";
            cout << name1 << " came in third place.";
        }
    }

    else if ((time3 < time2) && (time3 < time1))
    {
        cout << name3 << " came in first place.\n";
        if (time2 < time1)
        {
            cout << name2 << " came in second place.\n";
            cout << name1 << " came in third place.";
        }
        else
        {
            cout << name1 << " came in second place.\n";
            cout << name2 << " came in third place.";
        }
    }
    return 0;
}