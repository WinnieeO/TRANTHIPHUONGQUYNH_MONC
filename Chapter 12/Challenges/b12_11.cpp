// BT11: Corporate Sales Data Output
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct CompanyData
{
    string name;                                    // Ten khu vuc
    short quarter1, quarter2, quarter3, quarter4;   // Quy
    double quarterSales;                            // Doanh thu hang quy
};

int main()
{
    fstream data;
    CompanyData division[4];    // Khai bao mang co 4 phan tu CompanyData Structure

    data.open("Sales.txt");     // Mo file

    for (short i = 0; i < 4; i++)
    {    
        cout << "Enter the division name: ";
        getline(cin, division[i].name);     // Nhap ten khu vuc

        cout << "Enter the First-Quarter sales: ";
        cin >> division[i].quarter1;        // Nhap doanh thu quy 1
        while (division[i].quarter1 < 0)    // Xac thuc dau vao
        {
            cout << "The number is invalid. Try again: ";
            cin >> division[i].quarter1;
        }
        
        cout << "Enter the Second-Quarter sales: ";
        cin >> division[i].quarter2;        // Nhap doanh thu quy 2
        while (division[i].quarter2 < 0)    // Xac thuc dau vao
        {
            cout << "The number is invalid. Try again: ";
            cin >> division[i].quarter2;
        }
        
        cout << "Enter the Third-Quarter sales: ";
        cin >> division[i].quarter3;        // Nhap doanh thu quy 3
        while (division[i].quarter3 < 0)    // Xac thuc dau vao
        {
            cout << "The number is invalid. Try again: ";
            cin >> division[i].quarter3;
        }

        cout << "Enter the Fourth-Quarter sales: ";
        cin >> division[i].quarter4;        // Nhap doanh thu quy 4
        while (division[i].quarter4 < 0)    // Xac thuc dau vao
        {
            cout << "The number is invalid. Try again: ";
            cin >> division[i].quarter4;
        }

        cout << endl;
        cin.ignore();
    }

    // In thong tin vao file
    for (short i = 0; i < 4; i++)
    {
        data << division[i].name << ":\n";
        data << "First quarter: " << division[i].quarter1 << endl; 
        data << "Second quarter: " << division[i].quarter2 << endl; 
        data << "Third quarter: " << division[i].quarter3 << endl; 
        data << "Fouth quarter: " << division[i].quarter4 << endl << endl; 
    }

    data.close();   // Dong file
    return 0;
}