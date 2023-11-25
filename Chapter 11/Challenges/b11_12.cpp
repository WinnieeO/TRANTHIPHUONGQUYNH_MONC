// BT12: Course Grade
#include <iostream>
#include <string>
using namespace std;

struct CourseGrade
{
    string name, idNum, grade;
    double *tests, avg;
};

int main()
{
    CourseGrade *student = nullptr;
    int number, numTest, n;
    double sum;

    // Nhap so hoc sinh
    cout << "Enter the number of students: ";
    cin >> number;

    student = new CourseGrade[number];  // Cap phat dong bo nho

    // Nhap so bai kiem tra
    cout << "Enter the number of tests: ";
    cin >> numTest;

    cout << endl;
    for (int i = 0; i < number; i++)
    {
        sum = 0;
        cin.ignore();
        cout << "Enter name of student#" << (i + 1) << ": ";    // Nhap ten
        getline(cin, student[i].name);

        cout << "Enter student ID number: ";    // Nhap ID
        cin >> student[i].idNum;

        student[i].tests = new double[numTest];     // Cap phat dong bo nho

        // Nhap diem kiem tra
        cout << "Tests:\n";
        for (int j = 0; j < numTest; j++)
        {
            cout << "Enter score#" << (j + 1) << ": ";
            cin >> student[i].tests[j];
            while (student[i].tests[j] < 0)     // Xac thuc dau vao
            {
                cout << "The number is invalid. Try again: ";
                cin >> student[i].tests[j];
            }
            sum += student[i].tests[j];     // Tinh tong diem kiem tra
        }

        student[i].avg = sum / numTest;     // Tinh trung binh cong

        // Phan loai diem theo tieu chuan de bai
        if ((student[i].avg >= 91) && (student[i].avg <= 100))
            student[i].grade = "A";
        else if ((student[i].avg >= 81) && (student[i].avg <= 90))
            student[i].grade = "B";
        else if ((student[i].avg >= 71) && (student[i].avg <= 80))
            student[i].grade = "C";
        else if ((student[i].avg >= 61) && (student[i].avg <= 70))
            student[i].grade = "D";
        else
            student[i].grade = "F";

        cout << endl;
    }

    // Hien thi thong tin cua cac hoc sinh
    for (int i = 0; i < number; i++)
    {
        cout << "\nName: " << student[i].name;
        cout << "\nID: " << student[i].idNum;
        cout << "\nAverage test score: " << student[i].avg;
        cout << "\nCourse grade: " << student[i].grade << endl; 
    }

    // Giai phong vung nho
    for (int i = 0; i < number; i++)
    {
        delete [] student[i].tests;
    }
    delete []student;
    student = nullptr;

    return 0;
}