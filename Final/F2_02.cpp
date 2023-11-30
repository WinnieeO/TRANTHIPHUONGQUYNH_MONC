#include <iostream>
using namespace std;

class Animal{ /// Abstract Class///
    public:
	  virtual void speak() = 0; // Pure virtual function
};

class Dog: public Animal{
public:
  void speak(){ cout << "Woof\n";}
};

class Cat: public Animal{
public:
  void speak(){ cout << "Meow\n";}
};

int main(){
    Animal **animal = new Animal*[2];
    animal[0] = new Cat();
    animal[1] = new Dog();
    for (int i = 0; i < 2; i++)
      animal[i] -> speak();
    return 0;
}