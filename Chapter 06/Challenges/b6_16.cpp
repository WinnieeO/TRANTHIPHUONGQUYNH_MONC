// BT16: Population
#include <iostream>
#include <cmath>
using namespace std;

// Function prototype
double sizePopulation(double P, double B, double D);
void check(double &x);

int main()
{
    double start, birthRate, deadRate;
    int year;

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

    cout << "Enter the number of years to display: ";
    cin >> year;        // Nhap so nam
    while (year < 1)
    {
        cout << " Do not accept numbers less than 1 for the number of years. Try again: ";
        cin >> year;    // Neu so nam nho hon 1 thi yeu cau nhap lai
    }

    // Hien thi ket qua
    cout << "The new population size is " << year * sizePopulation(start, birthRate, deadRate);
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

double sizePopulation(double P, double B, double D)
{
    double N = P + B * P - D * P;
    N = round(N);   // Lam tron quy mo dan so moi len so nguyen gan nhat
    return N;
}