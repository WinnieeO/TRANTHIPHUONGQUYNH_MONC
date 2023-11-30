#include <iostream>
using namespace std;

class A {
    public:
        A() { a = new int[3]; for ( int i = 0; i < 3; i++ ) a[i] = i + 1; }
        void getData() {for ( int i = 0; i < 3; i++ ) cout << " " << a[i];}
        ~A() { delete[] a; }
    private:
        int *a;
};
void init( A &a ) {
    A *b = new A();
    a = *b;
}
int main() {
    A obj;
    init( obj );
    obj.getData();
}