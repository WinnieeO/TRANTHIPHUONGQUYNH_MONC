// BT7: TestScores Class
#include <iostream>
#include <iomanip>
using namespace std;

class TestScores
{
    private:
        double score1, score2, score3;  // 3 thanh phan diem
    public:
        TestScores();                           // Constructor
        void getScore(double, double, double);  // Ham nhan gia tri diem
        double average();                       // Ham tinh gia tri trung binh
};

TestScores::TestScores()    // Khoi tao cac gia tri bang 0
{
    score1 = 0;
    score2 = 0;
    score3 = 0;
}

void TestScores::getScore(double s1, double s2, double s3)
{
    score1 = s1;
    score2 = s2;
    score3 = s3;
}

double TestScores::average()
{
    return ((score1 + score2 + score3) / 3);
}

int main()
{
    TestScores student;
    double s1, s2, s3;

    // Nhap diem
    cout << "Enter the first score: ";
    cin >> s1;
    cout << "Enter the second score: ";
    cin >> s2;
    cout << "Enter the third score: ";
    cin >> s3;

    student.getScore(s1, s2, s3);   // Loi goi ham
    cout << "The average of the scores is " << setprecision(2) << student.average();   // Hien thi diem trung binh
    return 0;
}