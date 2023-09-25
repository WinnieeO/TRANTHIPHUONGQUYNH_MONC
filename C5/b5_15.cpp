// BT15: Payroll Report
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number = 1;
    double gross, stateTax, federalTax, withholdings, sum, totalGross, totalState, totalFederal, totalWithholdings, totalNet;

    // Nhap MS nhan vien, tong luong, thue tieu bangm thue lien bang, cac khoan khau tru FICA
    cout << "Enter 0 for the employee number to finish.\n";
    while (number != 0)
    {
        cout << "Enter the employee number: ";
        cin >> number;
        if (number == 0)
            break;
        while (number < 0)
        {
            cout << "Do not accept negative number for the employee number. Try again!\n";
            cout << "Enter the employee number: ";
            cin >> number;  
        }

        cout << "Enter the gross pay: ";
        cin >> gross;
        while (gross < 0)
        {
            cout << "Do not accept negative number for the gross pay. Try again!\n";
            cout << "Enter the gross pay: ";
            cin >> gross;  
        }

        cout << "Enter the state tax(%): ";
        cin >> stateTax;
        while ((stateTax < 0) || (stateTax > gross))
        {
            cout << "Do not accept negative number for the state tax. Try again!\n";
            cout << "Enter the state tax(%): ";
            cin >> stateTax;
        }

        cout << "Enter the federal tax(%): ";
        cin >> federalTax;
        while ((federalTax < 0) || (federalTax > gross))
        {
            cout << "Do not accept negative number for the federal tax. Try again!\n";
            cout << "Enter the federal tax(%): ";
            cin >> federalTax;
        }

        cout << "Enter the FICA withholdings: ";
        cin >> withholdings;
        while ((withholdings < 0) || (withholdings> gross))
        {
            cout << "Do not accept negative number for the FICA withholdings. Try again!\n";
            cout << "Enter the FICA withholdings: ";
            cin >> withholdings;
        }

        sum = ((stateTax / 100 + federalTax / 100) * gross) + withholdings;
        if (sum > gross)
        {
            cout << "ERROR!\n Please reenter the data for that employee!\n";
            cout << "Enter the employee number: ";
            cin >> number;
            while (number < 0)
            {
                cout << "Do not accept negative number for the employee number. Try again!\n";
                cout << "Enter the employee number: ";
                cin >> number;  
            }

            cout << "Enter the gross pay: ";
            cin >> gross;
            while (gross < 0)
            {
                cout << "Do not accept negative number for the gross pay. Try again!\n";
                cout << "Enter the gross pay: ";
                cin >> gross;  
            }

            cout << "Enter the state tax: ";
            cin >> stateTax;
            while ((stateTax < 0) || (stateTax > gross))
            {
                cout << "Do not accept negative number for the state tax. Try again!\n";
                cout << "Enter the state tax: ";
                cin >> stateTax;
            }

            cout << "Enter the federal tax: ";
            cin >> federalTax;
            while ((federalTax < 0) || (federalTax > gross))
            {
                cout << "Do not accept negative number for the federal tax. Try again!\n";
                cout << "Enter the federal tax: ";
                cin >> federalTax;
            }

            cout << "Enter the FICA withholdings: ";
            cin >> withholdings;
            while ((withholdings < 0) || (withholdings> gross))
            {
                cout << "Do not accept negative number for the FICA withholdings. Try again!\n";
                cout << "Enter the FICA withholdings: ";
                cin >> withholdings;
            }
        }
        
        // Tinh toan
        else
        {
            totalGross += gross;
            totalState += (gross * stateTax/100);
            totalFederal += (gross * federalTax/100);
            totalWithholdings += withholdings;
        }
        cout << "-------------------------------------------------------------------------------\n";
    }
        // Xuat thong tin
        totalNet = totalGross - totalState - totalFederal - totalWithholdings;
        cout << setprecision(2) << fixed;
        cout << "\nThe total of gross is $" << totalGross;
        cout << "\nThe total of state tax is $" << totalState;
        cout << "\nThe total of federal tax is $" << totalFederal;
        cout << "\nThe total of the FICA withholdings is $" << totalWithholdings;
        cout << "\nThe total of net pay is $" << totalNet;
    return 0;
}