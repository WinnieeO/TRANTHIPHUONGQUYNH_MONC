// BT2: Employee Class
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name, department, position;  // Ten, bo phan, vi tri
        int idNumber;   // So ID 
    public:
        Employee();     // Default Constructor
        Employee(string, int, string, string);  // Constructor
        void getInfor();    // Ham xuat thong tin
};


Employee::Employee(string n, int i, string d = "", string p = "")   // Neu khong nhap gia tri cho bien thi gan gia tri mac dinh cho bien
{
    name = n;
    idNumber = i;
    department = d;
    position = p;
}

Employee::Employee()    // Khoi tao gia tri ban dau
{
    name = "";
    idNumber = 0;
    department = "";
    position = "";
}

void Employee::getInfor()
{
    cout << "Name: " << name << endl;
    cout << "ID number: " << idNumber << endl;
    cout << "Department: " << department << endl;
    cout << "Position: " << position << endl << endl;
}

int main()
{
    // Khai bao 3 object va cac gia tri cua no
    Employee e1("Susan Meyers", 47899, "Accounting", "Vice President"), 
             e2("Mark Jones", 39119, "IT", "Programmer"), 
             e3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Hien thi thong tin bang loi goi ham
    e1.getInfor();
    e2.getInfor();
    e3.getInfor();
    return 0;
}
