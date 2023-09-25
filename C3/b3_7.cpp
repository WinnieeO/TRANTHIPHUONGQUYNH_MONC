// BT7: Box Office
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string nameMV;
    unsigned short adults, children;
    double  adultPrice = 10.00,
            childPrice = 6.00,
            percentTheater = 0.2,
            gross, netBox, distributor;

    // Nhap ten phim 
    cout << "Enter the movie name: ";
    getline(cin, nameMV);

    // Nhap so luong ve nguoi lon va tre em da ban
    cout << "Enter the number of adult tickets: ";
    cin >> adults;
    cout << "Enter the number of child tickets: ";
    cin >> children;

    // Tinh loi nhuan
    gross = adultPrice * adults + childPrice * children;
    netBox = percentTheater * gross;
    distributor = gross - netBox;

    // Xuat thong tin va loi nhuan kiem duoc
    cout << "Movie Name:" << setw(20) << "\"" << nameMV << "\"" << endl;
    cout << "Adult Tickets Sold:" << setw(16) << adults << endl;
    cout << "Child Tickets Sold:" << setw(16) << children << endl;
    cout << setprecision(2) << fixed;
    cout << "Gross Box Office Profit:" << setw(8) << "$ " << gross << endl;
    cout << "Net Box Office Profit:" << setw(10) << "$ " << netBox << endl;
    cout << "Amount Paid to Distributor:" << setw(5) << "$ " << distributor << endl;
    return 0;

}