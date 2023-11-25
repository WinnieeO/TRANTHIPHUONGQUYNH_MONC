// BT12: Corporate Sales Data Input
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
    double totalQuarter, totalDivision;
    double number;
    string str;
    short pos;    

    data.open("Sales.txt");     // Mo file

    while (getline(data, str))
    {
        pos = str.find(": ", 0);
        if (pos != string::npos)
        {
            str.at(pos);
            const char *ch = str.c_str();
            cout << ch; 
        }
    }
    

    data.close();   // Dong file
    return 0;
}