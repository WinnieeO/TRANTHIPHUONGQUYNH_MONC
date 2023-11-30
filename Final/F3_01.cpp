#include <iostream>
using namespace std;

class Math
{
private:
    int a, b;
public:
    Math(int, int);
    void setData();
    Math operator+(const Math &);
    Math operator-(const Math &);
    Math operator*(const Math &);
    Math operator-();
    void getData();
};

Math::Math(int num1 = 0, int num2 = 0): a(num1), b(num2) {};

void Math::setData()
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << endl;
}

Math Math::operator + (const Math & other){
    int sum1 = this->a + other.a;
    int sum2 = this->b + other.b;
	return Math(sum1, sum2);
}

Math Math::operator - (const Math & other){
    int sum1 = this->a - other.a;
    int sum2 = this->b - other.b;
	return Math(sum1, sum2);
}

Math Math::operator * (const Math & other){
    int sum1 = this->a * other.a;
    int sum2 = this->b * other.b;
	return Math(sum1, sum2);
}

Math Math::operator-(){
	return Math(-a, -b);
}

void Math::getData()
{
    if ((b < 0) && (a != 0))
        cout << a << b << "v7" << endl;
    else if ((b > 0) && (a != 0))
        cout << a << " + " << b << "v7" << endl;
    else if ((b == 0) && (a != 0))
        cout << a << endl;
    else
        cout << 0 << endl;
}

int main()
{
    Math n1, n2, n3, n4, n5;
    n2.setData();
    n3.setData();

    n4 = n3 * n2;
    n4.getData();

    n1 = n3 - n2;
    n1.getData();

    n5 = n4 + n1;
    n5.getData();

    n2 = -n2;
    n2.getData();

    return 0;
}