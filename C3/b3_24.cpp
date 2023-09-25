// BT24: Word Game
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, city, college, profession, animal, petName;
    short age;
    
    // Nhap thong tin
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter the name of a city: ";
    getline(cin, city);
    cout << "Enter the name of a college: ";
    getline(cin, college);
    cout << "Enter a profession: ";
    cin >> profession;
    cout << "Enter a type of animal: ";
    cin >> animal;
    cout << "Enter a pet's name: ";
    cin >> petName;

    // Xuat thong tin
    cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << petName << ". They both lived happily ever after!";
    return 0;
}