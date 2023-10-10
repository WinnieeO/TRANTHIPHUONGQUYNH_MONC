// BT18: Population Bar Chart
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream inFile;
    int i, year = 1900, population, each = 1000, stars;

    // Mo file
    inFile.open("People.txt");

    // Nhap thong tin va xuat thong tin
    cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n";
    while (inFile >> population)
    {
        if (year > 2000)
            break;
        stars = population / each;
        cout << year << " " ;
        for (int i = 1; i <= stars; i++)
        cout << "*";
        if (i = stars)
            cout << endl;
        year += 20;
    }
    
    // Dong file
    inFile.close();

    return 0;
}