// BT23: Pattern Displays
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int j, k;
    
    // Xuat thong tin 
    cout << "Pattern A\tPattern B\n";
    for (int i = 1; i <= 10; i++)
    {
        j = 1;
        for (j; j <= i; j++)
        {
            cout << "+";
            if (i == j)
            {
                cout << "              ";
                for (k = 10; k >= j; k--)
                    cout << "+";
            }
        }
        cout << endl;
    }
    return 0;
}