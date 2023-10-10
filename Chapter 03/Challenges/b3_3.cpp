// BT3: Test Average
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double score1, score2, score3, score4, score5, avg;

    // Nhap diem 5 bai kiem tra
    cout << "Enter the first score: ";
    cin >> score1;
    cout << "Enter the second score: ";
    cin >> score2;
    cout << "Enter the first score: ";
    cin >> score3;
    cout << "Enter the fourth score: ";
    cin >> score4;
    cout << "Enter the fifth score: ";
    cin >> score5;
    
    // Tinh diem trung binh va xuat ket qua ra man hinh
    avg = (score1 + score2 + score3 + score4 + score5) / 5;
    cout << "The average test score is ";
    cout << setprecision(1) << fixed;
    cout << avg << endl;
    return 0;
}