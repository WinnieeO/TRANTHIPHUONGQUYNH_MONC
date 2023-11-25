// BT14: Inventory Bins
#include <iostream>
#include <iomanip>
using namespace std;

struct InventoryBins
{
    string decription;
    short number;
};

// Function prototype
void addPart(InventoryBins *);
void removePart(InventoryBins *);

int main()
{
    // Khai bao mang co 10 phan tu InventoryBins Structure duoc gan san cac gia tri theo de bai
    InventoryBins bins[10] = {{"Value", 10}, {"Bearing", 5}, {"Bushing", 15}, {"Coupling", 21}, {"Flange", 7}, 
                             {"Gear", 5}, {"Gear Housing", 5}, {"Vacuum Gripper", 25}, {"Cable", 18}, {"Rod", 12}};
    short choice = 0, option;

    while (choice != -1) 
    {
        // Hien thi menu
        cout << "Here are Description of parts and Number of parts\n";
        for (short i = 0; i < 10; i++)
        {
            cout << (i + 1) << ". " << bins[i].decription << ": " << bins[i].number << endl;
        }

        // Nhap lua chon
        cout << "Enter -1 to quit\nEnter your choice (1 - 10): ";
        cin >> choice;
        while ((choice != -1) && ((choice < 1) || (choice > 10)))   // Xac thuc dau vao
        {
            cout << "The number is invalid. Try again: ";
            cin >> choice;
        }

        if (choice == -1)   // Thoat ra neu nhap -1
            break;

        // Nhap lua chon them hoac loai bo
        cout << "1. Add parts\n2. Remove parts\n";
        cout << "Enter your selection (1 - 2): ";
        cin >> option;
        while ((option != 1) && (option != 2))      // Xac thuc dau vao
        {
            cout << "Your selection is invalid. Try again: ";
            cin >> option;
        }

        // Thuc hien yeu cau cua nguoi dung qua cac loi goi ham
        if (option == 1)
            addPart(&bins[choice - 1]);
        else
            removePart(&bins[choice - 1]);
    }
    return 0;
}

void removePart(InventoryBins *s)
{
    short n;
    if (s -> number == 0)   // Neu khong co phan nao trong thung thi hien thi thong bao
        cout << "Can not remove bin has no part";
    else
    {
        cout << "Enter the number of parts removed: ";
        cin >> n;   // Nhap so luong phan muon loai bo
        while (((s -> number - n) < 0) || (n < 0))  // Xac thuc dau vao
        {
            if (n < 0)
                cout << "The number must be greater than 0. Try again: ";
            else
                cout << "The number of parts in chosen bin is less than the number of parts removed. Try again: ";
            cin >> n;
        }

        s -> number -= n;
    }
}

void addPart(InventoryBins *s)
{
    short n;
    cout << "Enter the number of parts added: ";
    cin >> n;
    while (((s -> number + n) > 30) || (n < 0))
    {
        if (n < 0)
            cout << "The number must be greater than 0. Try again: ";
        else
            cout << "No bin can hold more than 30 parts. Try again: ";
        cin >> n;
    }

    s -> number += n;
}