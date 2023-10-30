// BT3: Winning Division
#include <iostream>
using namespace std;

const string NAME[] = {"Northeast", "Southeast", "Northwest", "Southwest"};     // Khai bao hang toan cuc
double divisionSales[4];                                                        // Khai bao bien toan cuc

// Function prototype
double getSales();
void findHighest(double arr[]);

int main()
{        
   for (int i = 0; i < 4; i++)
    {
        cout << "Enter the " << NAME[i] << "'s quarterly sales figure: ";       
        divisionSales[i] = getSales();      // Nhap so tien ban hang moi quy cua tung bo phan bang chuong trinh con
    }

    findHighest(divisionSales);             // Tim bo phan co doanh thu cao nhat kem voi so tien thu duoc
    return 0;
}

double getSales()
{
    double sales;
        cin >> sales;       // Nhap doanh thu ban hang
        while (sales < 0)
        {
            cout << "Do not accept dollar amounts less than $0.000. Try again: ";   // Neu gia tri nho hon 0 thi nhap lai
            cin >> sales;
        }  
        return sales;   // Tra ve gia tri cua doanh thu
}

void findHighest(double arr[])      // Tim bo phan co doanh thu lon nhat
{
    double max = 0;
    string name;
    for (int i = 0; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            name = NAME[i];
        }
    }
    
    // Hien thi ra man hinh ket qua
    cout << name << " is the division which has the largest quarterly sales figure with $" << max;
}