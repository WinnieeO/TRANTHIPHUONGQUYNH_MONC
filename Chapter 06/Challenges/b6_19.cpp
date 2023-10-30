// BT19: Using Files - Hospital Report
#include <iostream>
#include <fstream>
using namespace std;

// Function prototype
double inTotal(int days, double rate, double medication, double services);
double outTotal(double medication, double services);
void check(double &x);

int main()
{
    char choice;
    int days;
    double rate, medication, services, total;
    ofstream outFile;
    
    // Mo file
    outFile.open ("Hospital Report.txt");

    cout << "Are you are in-patient or out-patient? (I/O) ";    // Xac nhan benh nhan noi tru hay ngoai tru
    cin >> choice;
    while((choice != 'I') && (choice != 'i') && (choice != 'O') && (choice != 'o'))
    {
        cout << "ERROR! Try again: ";
        cin >> choice;  // Yeu cau nhap lai neu dien ky tu nao khac ngoai I/i/O/o
    }

    if ((choice = 'I') || (choice != 'i'))      // Neu la benh nhan noi tru thi nhap cac thong tin sau
    {
        cout << "Enter the number of days spent in the hospital: ";
        cin >> days;    // Nhap so ngay o benh vien
        while (days < 0)
        {
            cout << "Do not accept a negative number. Try again: ";
            cin >> days;    // Neu so ngay la so am thi yeu cau nhap lai
        }

        cout << "Enter the daily rate: $";
        check(rate);        // Nhap ti gia moi ngay o benh vien
    }

    cout << "Enter your charges for hospital services (lab tests, etc.): $";        
    check(services);        // Nhap phi su dung cac thiet bi

    cout << "Enter your hospital medication charges: $";
    check(medication);      // Nhap tien thuoc

    if ((choice = 'I') || (choice != 'i'))
    {
        // Neu la benh nhan noi tru thi goi ham tinh tong chi phi inTotal
        total = inTotal(days, rate, medication, services);  
    }
    else
        // Neu la benh nhan ngoai tru thi goi ham tinh tong chi phi outTotal
        total = outTotal(medication, services);   

    outFile << "The total is $" << total;  // Hien thi tong chi phi

    // Dong file
    outFile.close();
    return 0;
}

void check(double &x)     // Ham kiem tra so am
{
    double *ptr = &x;
    cin >> *ptr;
    while (x < 0)
    {
        cout << "Do not accept a negative number. Try again: ";
        cin >> *ptr;  // Yeu cau nhap lai neu gia tri am
    }
}

double outTotal(double medication, double services)
{
    return (medication + services);
}

double inTotal(int days, double rate, double medication, double services)
{
    double total = medication + services + (days * rate);
    return total;
}