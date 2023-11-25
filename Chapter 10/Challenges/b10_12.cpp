// BT12: Password Verifier
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int SIZE = 100;
    char str[SIZE];
    bool checkUp = false, checkLow = false, checkDi = false, checkLeng = false;

    // Vong lap se chay den khi mat khau hop le
    do
    {
        cout << "Enter your password: ";
        cin.getline(str, SIZE);     // Nhap mat khau
    
        // Tra ve true neu mat khau co hon 6 ky tu
        if (strlen(str)  > 5)
            checkLeng = true;
        if (checkLeng == false)     // Neu tra ve false thi thong bao cho nguoi dung
            cout << "The password should be at least six characters long\n"; 
    
        // Tra ve true neu mat khau co it nhat 1 chu hoa
        for (int i = 0; i <= strlen(str); i++)
        {
            if (isupper(str[i]))
            {
                checkUp = true;
                break;
            }
        }
        if (checkUp == false)       // Neu tra ve false thi thong bao cho nguoi dung
            cout << "The password should contain at least one uppercase letter\n";

        // Tra ve true neu mat khau co it nhat 1 chu thuong
        for (int i = 0; i <= strlen(str); i++)
        {
            if (islower(str[i]))
            {
                checkLow = true;
                break;
            }
        }
        if (checkLow == false)      // Neu tra ve false thi thong bao cho nguoi dung
            cout << "The password should contain at least one lowercase letter.\n";

        // Tra ve true neu mat khau co it nhat 1 con so
        for (int i = 0; i <= strlen(str); i++)
        {
            if (isdigit(str[i]))
            {
                checkDi = true;
                break;
            }
        }
        if (checkDi == false)       // Neu tra ve false thi thong bao cho nguoi dung
            cout << "The password should have at least one digit\n";
    }while ((checkUp == false) || (checkLow == false) || (checkDi == false) || (checkLeng == false));

    // Neu mat khau hop le thi thong bao cho nguoi dung
    if ((checkUp) && (checkLow) && (checkDi) && (checkLeng))
        cout << "Accept password";
        
    return 0;
}