// BT5: Monkey Business
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MONKEYS = 3;            // So hang
    const int DAYS = 5;               // So cot
    double zoo[MONKEYS][DAYS], total, least, greatest, allEaten;
    double avg;

    least = INT_MAX;
    greatest = 0;

    // Nhap luong thuc an cua moi con khi trong 5 ngay
    cout << "Enter data for each monkey:\n";
    for (int i = 0; i < MONKEYS; i++)
    {
        total = 0;
        for (int j = 0; j < DAYS; j++)
        {
            cin >> zoo[i][j];
            while (zoo[i][j] < 0)
                {
                    cin >> zoo[i][j];
                }
            total += zoo[i][j];
        }

        allEaten += total;

        if (total < least)
            least = total;
        else if (total > greatest)
            greatest = total;
    }

    // Xuat luong thuc an trung binh cua 1 ngay an cua khi
    avg = allEaten / DAYS;
    cout << "Average amount of food eaten per day by the whole family of monkeys is " << avg << " pounds\n";

    // Xuat luong thuc an it nhat ma con khi an trong tuan
    cout << "The least amount of food eaten during the week by any one monkey is " << least << " pounds\n";

    // Xuat luong thuc an it nhat ma con khi an trong tuan
    cout << "The greatest amount of food eaten during the week by any one monkey is " << greatest << " pounds\n";

    return 0;
}