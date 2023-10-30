// BT17: Transient Population
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
double sizePopulation(double P, double B, double D, int moveInto, int leave);
void check(double &x);
void check2(int &x);

int main()
{
    double start, birthRate, deadRate;
    int numYear, leave, moveInto;

    cout << "Enter the starting size of a population: ";
    cin >> start;   // Nhap quy mo dan so ban dau
    while (start < 2)
    {
        cout << " Do not accept numbers less than 2 for the starting size. Try again: ";
        cin >> start;   // Neu quy mo ban dau nho hon 2 thi yeu cau nhap lai
    }

    cout << "Enter the annual birth rate (%): ";
    check(birthRate);   // Nhap ti le sinh bang ham check
    

    cout << "Enter the annual dead rate (%): ";
    check(deadRate);    // Nhap ti le tu bang ham check

    cout << "Enter the number of individuals who typically move into the area each year: ";
    check2(moveInto);   // Nhap so nguoi den bang ham check2

    cout << "Enter the number of individuals who typically leave the area each year: ";
    check2(leave);      // Nhap so nguoi di bang ham check2

    cout << "Enter the number of years to display: ";
    cin >> numYear;        // Nhap so nam
    while (numYear < 1)
    {
        cout << " Do not accept numbers less than 1 for the number of years. Try again: ";
        cin >> numYear;    // Neu so nam nho hon 1 thi yeu cau nhap lai
    }

    // Hien thi ket qua
    cout << "The new population size is " << numYear * sizePopulation(start, birthRate, deadRate, moveInto, leave);
    return 0;
}

void check(double &x)     // Ham kiem tra so am
{
    double *ptr = &x;   // Gan dia chi x cho bien con tro ptr
    cin >> *ptr;        // Nhap gia tri cua x thong qua bien con tro
    while (x < 0)
    {
        cout << "Do not accept a negative number. Try again: ";
        cin >> *ptr;  // Yeu cau nhap lai neu gia tri am
    }
    *ptr = *ptr / 100;
}

void check2(int &x)     // Ham kiem tra so am
{
    int *ptr = &x;   // Gan dia chi x cho bien con tro ptr
    cin >> *ptr;        // Nhap gia tri cua x thong qua bien con tro
    while (x < 0)
    {
        cout << "Do not accept a negative number. Try again: ";
        cin >> *ptr;  // Yeu cau nhap lai neu gia tri am
    }
}

double sizePopulation(double P, double B, double D, int moveInto, int leave)
{
    double N = P + B * P - D * P + moveInto - leave;
    N = round(N);   // Lam tron quy mo dan so moi len so nguyen gan nhat
    return N;
}