// BT2: Characters for the ASCII Codes
#include <iostream>
using namespace std;

int main()
{
    char a;
    int i;

    // Xuat cac ki tu
    for (i = 0; i <= 127; i++)
    {
        if (i % 16 == 0)
            cout << endl;
        a = i;
        cout << a << " ";
    }
    return 0;
}