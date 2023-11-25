// BT2: Movie Profit
#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string title, director;             // Tieu de va Nha san xuat
    short yearReleased, runningTime;    // Nam phat hanh va Thoi luong phim
    int productionCost, revenues;       // Chi phi san xuat va Doanh thu nam dau tien
    int profit;                         // Loi nhuan
};

int main()
{
    MovieData movie1, movie2;   // Khai bao 2 bien MovieData structure

    // Nhap thong tin cua movie 1
    cout << "Enter the title of movie#1: ";
    getline(cin, movie1.title);

    cout << "Enter the director's " << movie1.title << ": ";
    getline(cin, movie1.director);

    cout << "Enter the year released: ";
    cin >> movie1.yearReleased;
    while (movie1.yearReleased < 0)     // Neu nam phat hanh la gia tri am thi nhap lai
    {
        cout << "The number is invalid. Try again: ";
        cin >> movie1.yearReleased;
    }

    cout << "Enter the running time (in minutes): ";
    cin >> movie1.runningTime;
    while (movie1.runningTime < 0)      // Neu thoi luong phim la gia tri am thi nhap lai
    {
        cout << "The number is invalid. Try again: ";
        cin >> movie1.runningTime;
    }

    cout << "Enter " << movie1.title << "'s production cost: ";
    cin >> movie1.productionCost;
    while (movie1.productionCost < 0)    // Neu chi phi san xuat la gia tri am thi nhap lai
    {
        cout << "The number is invalid. Try again: ";
        cin >> movie1.productionCost;
    }

    cout << "Enter the first-year revenues: ";
    cin >> movie1.revenues;
    while (movie1.revenues < 0)         // Neu doanh thu nam dau la gia tri am thi nhap lai
    {
        cout << "The number is invalid. Try again: ";
        cin >> movie1.revenues;
    }
    // Tinh loi nhuan thu duoc cua movie 1
    movie1.profit = movie1.revenues - movie1.productionCost;

    // Nhap thong tin cua movie 2
    cin.ignore();
    cout << "\nEnter the title of movie#2: ";
    getline(cin, movie2.title);

    cout << "Enter the director's " << movie2.title << ": ";
    getline(cin, movie2.director);

    cout << "Enter the year released: ";
    cin >> movie2.yearReleased;
    while (movie2.yearReleased < 0)     // Neu nam phat hanh la gia tri am thi nhap lai
    {
        cout << "The number is invalid. Try again: ";
        cin >> movie2.yearReleased;
    }

    cout << "Enter the running time (in minutes): ";
    cin >> movie2.runningTime;
    while (movie2.runningTime < 0)      // Neu thoi luong phim la gia tri am thi nhap lai
    {
        cout << "The number is invalid. Try again: ";
        cin >> movie2.runningTime;
    }

    cout << "Enter " << movie2.title << "'s production cost: ";
    cin >> movie2.productionCost;
    while (movie2.productionCost < 0)    // Neu chi phi san xuat la gia tri am thi nhap lai
    {
        cout << "The number is invalid. Try again: ";
        cin >> movie2.productionCost;
    }

    cout << "Enter the first-year revenues: ";
    cin >> movie2.revenues;
    while (movie2.revenues < 0)         // Neu doanh thu nam dau la gia tri am thi nhap lai
    {
        cout << "The number is invalid. Try again: ";
        cin >> movie2.revenues;
    }
    // Tinh loi nhuan thu duoc cua movie 2
    movie2.profit = movie2.revenues - movie2.productionCost;

    // Hien thi thong tin cua movie 1
    cout << "\nMovie: " << movie1.title << endl;
    cout << "Director: " << movie1.director << endl;
    cout << "Year Released: " << movie1.yearReleased << endl;
    cout << "Running Time: " << movie1.runningTime << " minutes" << endl;

    if (movie1.profit < 0)      // Loi nhuan am thi hien thi lo
        cout << "The first's year loss: " << (0 - movie1.profit);
    else cout << "The first's year profit: " << movie1.profit;  // Loi nhuan duong thi hien thi loi

    // Hien thi thong tin cua movie 2
    cout << "\n\nMovie: " << movie2.title << endl;
    cout << "Director: " << movie2.director << endl;
    cout << "Year Released: " << movie2.yearReleased << endl;
    cout << "Running Time: " << movie2.runningTime << " minutes" << endl;

    if (movie2.profit < 0)      // Loi nhuan am thi hien thi lo
        cout << "The first's year loss: " << (0 - movie2.profit);
    else cout << "The first's year profit: " << movie2.profit;  // Loi nhuan duong thi hien thi loi
   
    return 0;
}