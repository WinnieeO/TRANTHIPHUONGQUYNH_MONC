// BT3: Corporate Sales Data
#include <iostream>
#include <string>
using namespace std;

struct SalesData
{
    string divisionName;        // Ten cac bo phan ban hang
    double firstQuarter, secondQuarter, thirdQuarter, fourthQuarter;   // Doanh thu moi quy
    double total, avg;          // Tong doanh thu va Doanh thu trung binh
};

int main()
{
    SalesData division[4];      // Khai bao bien mang co 4 phan tu SalesDate Structure

    // Nhap thong tin cua cac bo phan
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the division name: ";
        getline(cin, division[i].divisionName);

        cout << "Enter the First-Quarter sales: ";
        cin >> division[i].firstQuarter;
        while (division[i].firstQuarter < 0)
        {
            cout << "The number is invalid. Try again: ";
            cin >> division[i].firstQuarter;
        }
        
        cout << "Enter the Second-Quarter sales: ";
        cin >> division[i].secondQuarter;
        while (division[i].secondQuarter < 0)
        {
            cout << "The number is invalid. Try again: ";
            cin >> division[i].secondQuarter;
        }
        
        cout << "Enter the Third-Quarter sales: ";
        cin >> division[i].thirdQuarter;
        while (division[i].thirdQuarter < 0)
        {
            cout << "The number is invalid. Try again: ";
            cin >> division[i].thirdQuarter;
        }

        cout << "Enter the Fourth-Quarter sales: ";
        cin >> division[i].fourthQuarter;
        while (division[i].fourthQuarter < 0)
        {
            cout << "The number is invalid. Try again: ";
            cin >> division[i].fourthQuarter;
        }

        // Tinh tong va trung binh cong doanh thu
        division[i].total = division[i].firstQuarter + division[i].secondQuarter + division[i].thirdQuarter + division[i].fourthQuarter;
        division[i].avg = division[i].total / 4.0;
        cout << endl;
        cin.ignore();
    }

    // Hien thi thong tin cua tung bo phan
    for (int i = 0; i < 4; i++)
    {
        cout << "Division Name: " << division[i].divisionName;
        cout << "\nThe total is $" << division[i].total;
        cout << "\nThe average is $" << division[i].avg;
        cout << endl << endl;
    }

    return 0;
}