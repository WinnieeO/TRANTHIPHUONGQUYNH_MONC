// BT8: Math Tutor
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    short choice;
    double num1, num2, num3;

    // Hien thi menu va nhap lua chon
    cout << "Menu\n";
    cout << "----------------------------\n";
    cout << "1: An addition problem\n";
    cout << "2: A subtraction problem\n";
    cout << "3: A multiplication problem\n";
    cout << "4: A division problem\n";
    cout << "5: Quit\n";
    cout << "What is your choice? ";
    cin >> choice;
    while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice != 5))
    {
        cout << "The choice is not invalid. Try again!\n";
        cout << "What is your choice? ";
        cin >> choice;
    }

    // Thuc hien yeu cau va lap lai den khi thoat
    while ((choice == 1) || (choice == 2) || (choice == 3) || (choice == 4) || (choice == 5))
    {
        if (choice == 1)
        {
            cout << "Enter the first summand: ";
            cin >> num1;
            cout << "Enter the second summand: ";
            cin >> num2;
            num3 = num1 + num2;
            cout << num1 << " + " << num2 << " = " << num3 << endl;

            Sleep(5000);
            cout << "\nMenu\n";
            cout << "----------------------------\n";
            cout << "1: An addition problem\n";
            cout << "2: A subtraction problem\n";
            cout << "3: A multiplication problem\n";
            cout << "4: A division problem\n";
            cout << "5: Quit\n";
            cout << "What is your choice? ";
            cin >> choice;
            while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice != 5))
            {
                cout << "The choice is not invalid. Try again!\n";
                cout << "What is your choice? ";
                cin >> choice;
            }
        }

        else if (choice == 2)
        {
            cout << "Enter the minuend: ";
            cin >> num1;
            cout << "Enter the subtrahend: ";
            cin >> num2;
            num3 = num1 - num2;
            cout << num1 << " - " << num2 << " = " << num3 << endl;

            Sleep(5000);
            cout << "\nMenu\n";
            cout << "----------------------------\n";
            cout << "1: An addition problem\n";
            cout << "2: A subtraction problem\n";
            cout << "3: A multiplication problem\n";
            cout << "4: A division problem\n";
            cout << "5: Quit\n";
            cout << "What is your choice? ";
            cin >> choice;
            while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice != 5))
            {
                cout << "The choice is not invalid. Try again!\n";
                cout << "What is your choice? ";
                cin >> choice;
            }
        }

        else if (choice == 3)
        {
            cout << "Enter the first factor: ";
            cin >> num1;
            cout << "Enter the second factor: ";
            cin >> num2;
            num3 = num1 * num2;
            cout << num1 << " * " << num2 << " = " << num3 << endl;

            Sleep(5000);
            cout << "\nMenu\n";
            cout << "----------------------------\n";
            cout << "1: An addition problem\n";
            cout << "2: A subtraction problem\n";
            cout << "3: A multiplication problem\n";
            cout << "4: A division problem\n";
            cout << "5: Quit\n";
            cout << "What is your choice? ";
            cin >> choice;
            while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice != 5))
            {
                cout << "The choice is not invalid. Try again!\n";
                cout << "What is your choice? ";
                cin >> choice;
            }
        }

        else if (choice == 4)
        {
            cout << "Enter the dividend: ";
            cin >> num1;
            cout << "Enter the divisor: ";
            cin >> num2;
            while (num2 == 0)
            {
                cout << "The divisor cannot be 0.\n";
                cout << "Enter the divisor: ";
                cin >> num2;
            }
            num3 = num1 / num2;
            cout << num1 << " / " << num2 << " = " << num3 << endl;

            Sleep(5000);
            cout << "\nMenu\n";
            cout << "----------------------------\n";
            cout << "1: An addition problem\n";
            cout << "2: A subtraction problem\n";
            cout << "3: A multiplication problem\n";
            cout << "4: A division problem\n";
            cout << "5: Quit\n";
            cout << "What is your choice? ";
            cin >> choice;
            while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4) && (choice != 5))
            {
                cout << "The choice is not invalid. Try again!\n";
                cout << "What is your choice? ";
                cin >> choice;
            }
        }
        else if (choice == 5)
        {
            cout << "You will exit this program!";
            break;
        }
    }
    return 0;
}