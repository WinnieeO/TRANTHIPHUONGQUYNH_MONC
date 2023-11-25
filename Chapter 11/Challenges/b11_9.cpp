// BT9: Speakers’ Bureau
#include <iostream>
#include <string>
using namespace std;

struct Bureau
{
    string name, phone, topic;  // Ten, So dien thoai va Chu de cua nguoi dien gia
    int fee;                    // Phi bat buoc
};

int main()
{
    Bureau speakers[20];
    short i = 0, choice = 1;

    while ((choice == 1) || (choice == 2) || (choice == 3))
    {
        // Hien thi menu
        cout << "MENU\n";
        cout << "1. Enter data for new speaker\n";
        cout << "2. Change the data of speaker\n";
        cout << "3. Display all the data stored\n";
        cout << "4. Quit\n\n";

        cout << "Your choice (1 - 4): ";    // Nhap lua chon
        cin >> choice;
        while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4))     // Xac thuc dau vao
        {
            cout << "The number is invalid. Enter again: ";
            cin >> choice;
        }

        if (choice == 1)     // Nhap thong tin (lua chon 1)
        {
            cin.ignore();
            cout << "Speaker#" << (i + 1);
            cout << "\nEnter the speaker's name: ";
            getline(cin, speakers[i].name);

            cout << "Enter the telephone number: ";
            getline(cin, speakers[i].phone);
            
            cout << "Enter the speaking topic: ";
            getline(cin, speakers[i].topic);

            cout << "Enter the fee required: ";
            cin >> speakers[i].fee;
            while (speakers[i].fee < 0)     // Xac thuc dau vao
            {
                cout << "The number is invalid. Enter again: ";
                cin >> speakers[i].fee;
            }

            i++;
        }

        else if (choice == 2)   // Thay doi thong tin (lua chon 2)
        {
            short j;
            // Nhap so thu tu cua nguoi dien gia muon thay doi thong tin
            cout << "You want to change the information of speaker# (1 - " << i << "): ";
            cin >> j;
            j--;
            while (j > i)   // Xac thuc dau vao
            {
                cout << "Not find information. Enter again: ";
                cin >> j;
            }

            cin.ignore();
            // Nhap lai thong tin can thay doi
            cout << "\nEnter the speaker's name: ";
            getline(cin, speakers[i].name);

            cout << "Enter the telephone number: ";
            getline(cin, speakers[i].phone);
            
            cout << "Enter the speaking topic: ";
            getline(cin, speakers[i].topic);

            cout << "Enter the fee required: ";
            cin >> speakers[i].fee;
            while (speakers[i].fee < 0)     // Xac thuc dau vao
            {
                cout << "The number is invalid. Enter again: ";
                cin >> speakers[i].fee;
            }
        }

        else if (choice == 3)        // Hien thi thong tin (lua chon 3)
        {
            for (int j = 0; j <= i - 1; j++)
            {
                cout << "\nThe name of the speaker's bureau: " << speakers[i].name;
                cout << "\nThe telephone number: " << speakers[i].phone;
                cout << "\nThe speaking topic: " << speakers[i].topic;
                cout << "\nThe fee required: " << speakers[i].fee << endl;
            }
        }
        
        cout << endl;
    }
    return 0;
}