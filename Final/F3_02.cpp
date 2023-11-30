#include <iostream>
using namespace std;

class Base {
  public: 
	virtual~Base() { std::cout << "Destructor of Base" << std::endl;}
};

class Derived: public Base {
  public:
    ~Derived() { std::cout << "Destructor of Derived" << std::endl; }
};

int main() {
  Base * ptr = new Derived();
  delete ptr;

  return 0;
}
