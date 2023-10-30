// BT4: Safest Driving Area
#include <iostream>
using namespace std;

const string AREAS[] = {"North", "South", "East", "West", "Central"};   // Khai bao hang toan cuc

// Function prototype
int getNumAccidents();
void findLowest(int num[]);

int main()
{
    int num[5];
    
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the number of accidents of " << AREAS[i] << " area: ";
        num[i] = getNumAccidents();     // Nhap so tai nan cua tung khu vuc bang chuong trinh con
    }

    findLowest(num);        // Tim khu vuc co it tai nan nhat kem theo so lieu
    return 0;
}

int getNumAccidents()
{
    int number;
    
    cin >> number;      // Nhap so luong tai nan
    while (number < 0)
    {
        cout << "Do not accept an accident number that is less than 0. Try again: ";
        cin >> number;      // Neu gia tri be hon 0 thi nhap lai
    }
    return number;
}

void findLowest(int number[])       // Tim noi khu vuc an toan nhat va so tai nan o do
{
    int min = number[0];
    string name = AREAS[0];

    for (int i = 1; i < 5; i++)
    {
        if (min > number[i])
        {
            min = number[i];
            name = AREAS[i];
        }
    }

    // Hien thi thong tin
    cout << name << " is the area which has the smallest number of accident with " << min << " cases";
}