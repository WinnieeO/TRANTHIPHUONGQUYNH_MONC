// BT14: Order Status
#include <iostream>
using namespace std;

// Function prototype
void getOrder(int &order, int &stock, double &another);
void report(int order, int stock, double another);

int main()
{
    int order, stock;
    char choice;
    double another = 0;
    
    // Loi goi ham de nhap va ham de tinh toan, hien thi ket qua
    getOrder(order, stock, another);
    report(order, stock, another);

    return 0;
}

void getOrder(int &order, int &stock, double &another)
{
    int *ptr = nullptr;
    char choice;

    // Nhap so cuon duoc dat hang
    ptr = &order;   // Gan dia chi cua order cho bien con tro ptr
    cout << "Enter the number of spools ordered: ";
    cin >> *ptr;    // Nhap vao gia tri thong qua bien con tro 
    while (order < 1)
    {
        cout << "Do not accept numbers less than 1 for spools ordered. Try again: ";
        cin >> *ptr;    // Neu so cuon dat hang be hon 1 thi yeu cau nhap lai
    }

    // Nhap so cuon co trong kho
    ptr = &stock;   // Gan dia chi cua stock cho bien con tro ptr
    cout << "Enter the number of spools in stock: ";
    cin >> *ptr;    // Nhap vao gia tri thong qua bien con tro
    while (stock < 0)
    {
        cout << "Do not accept a number less than 0 for spools in stock. Try again: ";
        cin >> *ptr;    // Neu so cuon trong kho be hon 0 thi yeu cau nhap lai
    }

    // Nhap chi phi phat sinh (neu co)
    cout << "Are there any special shipping and handling charges? (Y/N): ";
    cin >> choice;
    while((choice != 'Y') && (choice != 'y') && (choice != 'N') && (choice != 'n'))
    {
        cout << "ERROR! Try again: ";
        cin >> choice;  // Yeu cau nhap lai neu dien ky tu nao khac ngoai Y/y/N/n
    }

    if ((choice == 'Y') || (choice == 'y'))     
    {
        double *charges  = &another;    // Gan dia chi cua another cho bien con tro ptr
        cout << "Enter the special charges per spool: $";
        cin >> *charges;    // Nhap vao gia tri thong qua bien con tro
        while (another < 0)
        {
            cout << "Do not accept a number less than 0 for shipping and handling charges. Try again: ";
            cin >> *charges;    // Neu phi phat sinh be hon 0 thi yeu cau nhap lai
        }
    }
}

void report(int order, int stock, double another)
{    
    double total;
    const double deliver = 10.00;   // Phi van chuyen $10/ cuon

    cout << "---------------------------------------------------------\n";
    if (order >= stock)
    {
        cout << "The number of spools ready to ship from current stock is " << stock << endl;
        cout << "The number of spools on backorder is " << (order - stock) << endl;
        cout << "Subtotal of the portion ready to ship is $" << (stock * 100) << endl;
        cout << "Total shipping and handling charges on the portion ready to ship is $" << (stock * deliver) << endl;
        total = (stock * 100) + (stock * 10) + another;
        cout << "Total of the order ready to ship is $" << total << endl;
    }
    else 
    {
        cout << "The number of spools ready to ship from current stock is " << order << endl;
        cout << "Subtotal of the portion ready to ship is $" << (order * 100) << endl;
        cout << "Total shipping and handling charges on the portion ready to ship is $" << (order * deliver) << endl;
        total = (order * 100) + (order * deliver) + another;
        cout << "Total of the order ready to ship is $" << total << endl;
    }
}