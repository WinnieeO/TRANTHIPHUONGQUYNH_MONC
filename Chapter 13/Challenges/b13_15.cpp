// BT15: Mortgage Payment
#include <iostream>
#include <cmath>
using namespace std;

class Payment
{
private:
    double pm, loan, rate;
    int years;
public:
    void setLoan(double);   // Thiet lap khoan vay
    void setRate(double);   // Thiet lap lai suat
    void setNumYear(int);   // Thiet lap so nam vay
    double monthlyPayment();    // Tra ve so tien phai tra hang thang
    double total();             // Tra ve tong so tien phai tra sau khi vay
};

double Payment::monthlyPayment()
{
    double term = pow((1.0 + rate / 12.0), (12.0 * years));
    pm = (loan * term * (rate / 12.0)) / (term - 1);
    return pm;
}

double Payment::total()
{
    double sum = monthlyPayment() * years * 12;
    return sum;
}

void Payment::setLoan(double x)
{
    loan = x;
}

void Payment::setRate(double x)
{
    rate = x;
}

void Payment::setNumYear(int x)
{
    years = x;
}

int main()
{
    Payment user;
    double l, r;
    int y;

    // Nhap du lieu
    cout << "Enter the loan: ";
    cin >> l;
    while (l < 0)   // Xac thuc dau vao
    {
        cout << "The loan mustn't be negative. Enter again: ";
        cin >> l;
    }

    cout << "Enter the rate: ";
    cin >> r;

    cout << "Enter the number of years: ";
    cin >> y;

    // Truyen du lieu bang loi goi ham
    user.setLoan(l);
    user.setRate(r);
    user.setNumYear(y);

    // Hien thi thong bao
    cout << "The monthly payment amount is $" << user.monthlyPayment() << endl;
    cout << "the total amount paid to the bank at the end of the loan period is $" << user.total();
    return 0;
}