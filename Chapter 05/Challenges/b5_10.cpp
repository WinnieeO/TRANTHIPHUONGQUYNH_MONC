// BT10: Average Rainfall
#include <iostream>
using namespace std;

int main()
{
    int i, j, years, months = 0;
    double amount, total = 0, avg;

    // Nhap so nam
    cout << "Enter the number of years: ";
    cin >> years;
    while (years < 1)
    {
        cout << "Do not accept a number less than 1 for the number of years. Try again!\n";
        cout << "Enter the number of years: ";
        cin >> years;
    }

    // Nhap luong mua moi thang cua moi nam
    for (i = 1; i <= years; i++)
    {   
        if (i != 1)
            cout << "----------------------\n";
        if (i == 11)
            cout << "The " << i << "th year:\n";
        else if (i == 12)
            cout << "The " << i << "th year:\n";
        else if (i == 13)
            cout << "The " << i << "th year:\n";
        else if (((i- 11) % 100 == 0) || ((i- 11) % 1000 == 0))
            cout << "The " << i << "th year:\n";
        else if (((i- 12) % 100 == 0) || ((i- 12) % 1000 == 0))
            cout << "The " << i << "th year:\n";
        else if (((i- 13) % 100 == 0) || ((i- 13) % 1000 == 0))
            cout << "The " << i << "th year:\n";
        else if ((i- 1) % 10 == 0)
            cout << "The " << i << "st year:\n";
        else if ((i- 2) % 10 == 0)
            cout << "The " << i << "nd year:\n";
        else if ((i- 3) % 10 == 0)
            cout << "The " << i << "th year:\n";
        else
            cout << "The " << i << "th year:\n";

        for (j = 1; j <= 12; j++)
        {
            cout << "Enter the inches of rainfall for ";
            switch (j)
            {
                case 1: cout << "January: ";
                        break;
                case 2: cout << "February: ";
                        break;
                case 3: cout << "March: ";
                        break;
                case 4: cout << "April: ";
                        break;
                case 5: cout << "May: ";
                        break;
                case 6: cout << "June: ";
                        break;
                case 7: cout << "July: ";
                        break;
                case 8: cout << "August: ";
                        break;
                case 9: cout << "September: ";
                        break;
                case 10: cout << "October: ";
                        break;
                case 11: cout << "November: ";
                        break;
                case 12: cout << "December: ";
                        break;
            }
            cin >> amount;
           
            while (amount < 0)
            {
                cout << "Enter the inches of rairfall again: \n";
                cout << "Enter the inches of rainfall: ";
                cin >> amount;
            }
            months++;
            total += amount;
        }
    }
        // Hien thi thong tin
        avg = total / months;
        cout << "The number of months is " << months << endl;
        cout << "The total inches of rainfall is " << total << endl;
        cout << "The average of rainfall per month is " << avg << " inches\n";
        return 0;
}
