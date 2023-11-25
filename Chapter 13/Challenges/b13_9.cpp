// BT9: Population
#include <iostream>
#include <iomanip>
using namespace std;

class Population
{
    private:
        int numBirth, numDeath, ppl;    // So luong sinh, so luong tu, dan so hien tai
    public:
        void setBirth(int);             // Thiet lap gia tri cho numBirth
        void setDeath(int);             // Thiet lap gia tri cho numDeath
        void setPopulation(int);        // Thiet lap gia tri cho ppl (population)
        double birthRate();             // Ham tra ve gia tri ti le sinh
        double deathRate();             // Ham tra ve gia tri ti le tu
};

void Population::setBirth(int b)
{
    numBirth = b;
}

void Population::setDeath(int d)
{
    numDeath = d;
}

void Population::setPopulation(int p)
{
    ppl = p;
}

double Population::birthRate()
{
    return (numBirth / static_cast<double>(ppl));
}

double Population::deathRate()
{
    return (numDeath / static_cast<double>(ppl));
}

int main()
{
    Population p1;
    int p, b, d;

    // Nhap so luong sinh
    cout << "Enter the number of births: ";
    cin >> b;   
    while (b < 0)   // Xac thuc dau vao
    {
        cout << "The number must greater than 0. Enter again: ";
        cin >> b;
    }

    // Nhap so luong tu
    cout << "Enter the number of deaths: ";
    cin >> d;
    while (d < 0)   // Xac thuc dau vao
    {
        cout << "The number must greater than 0. Enter again: ";
        cin >> d;
    }

    // Nhap dan so
    cout << "Enter the population: ";
    cin >> p;
    while (p < 1)   // Xac thuc dau vao
    {
        cout << "The number must greater than 1. Enter again: ";
        cin >> p;
    }

    p1.setBirth(b);
    p1.setDeath(d);
    p1.setPopulation(p);

    // Hien thi thong tin
    cout << "The birth rate is " << p1.birthRate() << endl;
    cout << "The death rate is " << p1.deathRate() << endl;
    return 0;
}