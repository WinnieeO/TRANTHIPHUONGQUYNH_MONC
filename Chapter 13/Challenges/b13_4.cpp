// BT4: Personal Information Class
#include <iostream>
#include <string>
using namespace std;

class PersonalData
{
    private:    
        string name, address, phone;    // Ten, dia chi, so dien thoai
        short age;                      // Tuoi
    public:
        void setInfor(string, string, string, short);   // Ham truyen du lieu
        void getInfor();                                // Ham xuat du lieu
};

void PersonalData::setInfor(string n, string a, string p, short ag)
{
    name = n;
    address = a;
    phone = p;
    age = ag;
}

void PersonalData::getInfor()
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Phone Number: " << phone << endl << endl;
}


int main()
{
    PersonalData p[3];
    string pName, pAddress, pPhone;
    short pAge;

    for (short i = 0; i < 3; i++)   // Nhap thong tin cua 3 object
    { 
        cout << "Enter the name: ";
        getline(cin, pName);

        cout << "Enter the address: ";
        getline(cin, pAddress);

        cout << "Enter the phone number: ";
        cin >> pPhone;

        cout << "Enter the age: ";
        cin >> pAge;

        p[i].setInfor(pName, pAddress, pPhone, pAge);   // Loi goi ham de truyen doi so vao
        cin.ignore();

        cout << endl;
    }    

    for (short i = 0; i < 3; i++)   // Hien thi thong tin cua tung nguoi
        p[i].getInfor();

    return 0;
}