// BT8: Search Function for Customer Accounts Program
#include <iostream>
#include <string>
using namespace std;

struct Data
{
    string name, address,       // Ten va Dia chi
           city, state, zip,    // Thanh pho, Tieu bang va Zip
           date,                // Ngay thanh toan cuoi cung
           phone;               // So dien thoai
    int accBalance;             // So du tai khoan
};

int main()
{
    Data customers[20];     // Khai bao mang chua 20 phan tu Data Structure
    short choice = 1, i = 0;

    while ((choice == 1) || (choice == 2) || (choice == 3) || (choice == 4))
    {
        // Hien thi menu
        cout << "MENU\n";
        cout << "1. Enter data for new customer\n";
        cout << "2. Change the data of costumer\n";
        cout << "3. Display all the data stored\n";
        cout << "4. Find customer's information\n";
        cout << "5. Quit\n\n";

        cout << "Your choice (1 - 5): ";    // Nhap lua chon
        cin >> choice;
        while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice != 5))     // Xac thuc dau vao
        {
            cout << "The number is invalid. Enter again: ";
            cin >> choice;
        }

        if (choice == 1)     // Nhap thong tin (lua chon 1)
        {
            cin.ignore();
            cout << "Customer#" << (i + 1);
            cout << "\nEnter the customer's name: ";
            getline(cin, customers[i].name);

            cout << "Enter the customer's address: ";
            getline(cin, customers[i].address);

            cout << "Enter the city: ";
            getline(cin, customers[i].city);

            cout << "Enter the state: ";
            getline(cin, customers[i].state);

            cout << "Enter the ZIP: ";
            cin >> customers[i].zip;

            cout << "Enter the customer's telephone number: ";
            cin >> customers[i].phone;

            cout << "Enter the customer's account balance: ";
            cin >> customers[i].accBalance;
            while (customers[i].accBalance < 0)
            {
                cout << "The number is invalid. Enter again: ";
                cin >> customers[i].accBalance;
            }

            cout << "Enter the date of last payment: ";
            cin >> customers[i].date;

            i++;
        }

        else if (choice == 2)   // Thay doi thong tin (lua chon 2)
        {
            short j;
            // Nhap so thu tu cua khach hang muon thay doi thong tin
            cout << "You want to change the information of customer# (1 - " << i << "): ";
            cin >> j;
            j--;
            while (j > i)   // Xac thuc dau vao
            {
                cout << "Not find information. Enter again: ";
                cin >> j;
            }

            cin.ignore();
            // Nhap lai thong tin can sua
            cout << "\nEnter the customer's name: ";
            getline(cin, customers[j].name);

            cout << "Enter the customer's address: ";
            getline(cin, customers[j].address);

            cout << "Enter the city: ";
            getline(cin, customers[j].city);

            cout << "Enter the state: ";
            getline(cin, customers[j].state);

            cout << "Enter the ZIP: ";
            getline(cin, customers[j].zip);

            cout << "Enter the customer's telephone number: ";
            cin >> customers[j].phone;

            cout << "Enter the customer's account balance ";
            cin >> customers[j].accBalance;
            while (customers[j].accBalance < 0)     // Xac thuc dau vao
            {
                cout << "The number is invalid. Enter again: ";
                cin >> customers[j].accBalance;
            }

            cout << "Enter the date of last payment: ";
            cin >> customers[j].date;
        }

        else if (choice == 3)        // Hien thi thong tin (lua chon 3)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "\nThe customer's name: " << customers[j].name << endl;
                cout << "The customer's address: " << customers[j].address << endl;
                cout << "City: " << customers[j].city << endl;
                cout << "State: " << customers[j].state << endl;
                cout << "ZIP: " << customers[j].zip << endl;
                cout << "Telephone number: " << customers[j].phone << endl;
                cout << "Account balance " << customers[j].accBalance << endl;
                cout << "Date of last payment: " << customers[j].date << endl;
            }
        }

        else if (choice == 4)       // Tim kiem thong tin (lua chon 4)
        {
            char ch[100];
            short pos, k = 0;

            cin.ignore();
            cout << "Enter the customer's name you want to find: ";
            cin.getline(ch, 100);   // Nhap ten khach hang muon tim

            for (int j = 0; j < i; j++)
            {
                pos = customers[j].name.find(ch, 0);    // Tim kiem vi tri xuat hien dau tien
                if ((pos >= 0) && (pos <= customers[j].name.length()))      // Neu vi tri ton tai thi hien thi thong tin
                {
                    cout << "\nThe customer's name: " << customers[j].name << endl;
                    cout << "The customer's address: " << customers[j].address << endl;
                    cout << "City: " << customers[j].city << endl;
                    cout << "State: " << customers[j].state << endl;
                    cout << "ZIP: " << customers[j].zip << endl;
                    cout << "Telephone number: " << customers[j].phone << endl;
                    cout << "Account balance " << customers[j].accBalance << endl;
                    cout << "Date of last payment: " << customers[j].date << endl;
                    k++;
                }
            }

            if (k == 0)         // Neu khong tim duoc thong tin thi hien thi thong bao
                cout << "No account matches\n";
        }

        cout << endl;
    }
    return 0;
}