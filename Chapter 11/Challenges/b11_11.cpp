// BT11: Monthly Budget
#include <iostream>
using namespace std;

const string arr[] = {"housing", "utilities", "household expenses", "transportation", "food",
                    "medical", "insurance", "entertainment", "clothing", "miscellaneous"};

struct Budget
{
    double  monthly[10];
    /*housing, utilities, household, transportation, food,
            medical, insurance, entertainment, clothing, miscellaneous*/
    double fee[10];
};

// Function prototype
void getInfo(Budget &);
void display(Budget &, Budget &);

int main()
{
    Budget standard = {500, 150, 65, 50, 250, 30, 100, 150, 75, 50}, category;

    getInfo(category);      // Ham nhap 
    display(category, standard);    // Ham xuat
    return 0;
}

void getInfo(Budget &s)
{
    for (short i = 0; i < 10; i++)  // Dung vong lap nhap chi tieu tung khoan
    {
        cout << "Enter the amount spent in " << arr[i] << ": ";
        cin >> s.fee[i];
    }
}

void display(Budget &s, Budget &x)
{
    double realTotal = 0, predictedTotal = 0;

    cout << endl;
    for (short i = 0; i < 10; i++)  // Dung vong lap so sanh phi chi tieu voi dinh muc va dua ra ket luan
    {
        if (s.fee[i] < x.monthly[i])  
            cout << "The amount spent in " << arr[i] << " is under the budget" << endl;
        else if (s.fee[i] > x.monthly[i])
            cout << "The amount spent in " << arr[i] << " is over the budget" << endl;
        else 
            cout << "The amount spent in " << arr[i] << " is qualified" << endl;

        realTotal += s.fee[i];
        predictedTotal += x.monthly[i];
    }

    if (realTotal > predictedTotal)
        cout << endl << "The amount is over for the entire monthly budget";
    else if (realTotal < predictedTotal)
        cout << endl << "The amount is under for the entire monthly budget";
    else
        cout << "The amount is qualified for the entire monthly budget";
}