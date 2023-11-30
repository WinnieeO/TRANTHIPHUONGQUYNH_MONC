#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class BigInteger
{
    private:
        string str;
    public:
        BigInteger(string s = "0"): str(s){};
        friend istream& operator>>(istream& is, BigInteger& obj); 
        bool operator==(const BigInteger& obj);
};

istream& operator>>(istream& is, BigInteger& obj) {
    is >> obj.str;
    return is;
}

bool BigInteger::operator==(const BigInteger& obj)
{
    size_t firstNonSpace = str.find_first_not_of('0');
    if (firstNonSpace != string::npos) {
        str = str.substr(firstNonSpace);
    } else {
        str = "0";
    }

    if (obj.str.length() != this->str.length())
        return false;
    else{
        bool val;
        const char*ch1 = obj.str.c_str();
        const char*ch2 = this->str.c_str();
        for(int i = 0; i < strlen(ch1); i++){
            if (ch1[i] != ch2[i]){
                val = false;
                break;
            }
            else   
                val = true; 
        }
        return val;
    }
}



int main() {
    BigInteger n1("1234567891011");   // Khởi tạo từ chuỗi.
    BigInteger n2;                      // Khởi tạo mặc định = 0.

    cout << "Input an integer = ";
    cin >> n2;
    if ( n1 == n2 ) // So sánh bằng nhau.
        cout << "Equal.\n";
    else
        cout << "Not equal.\n";

    return 0;
}