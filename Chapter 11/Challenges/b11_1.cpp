// BT1: Moive Data
#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string title, director;             // Tieu de va Nha san xuat
    short yearReleased, runningTime;    // Nam phat hanh va Thoi luong phim
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

    // Hien thi thong tin cua movie 1
    cout << "\nMovie: " << movie1.title << endl;
    cout << "Director: " << movie1.director << endl;
    cout << "Year Released: " << movie1.yearReleased << endl;
    cout << "Running Time: " << movie1.runningTime << " minutes" << endl;

    // Hien thi thong tin cua movie 2
    cout << "\nMovie: " << movie2.title << endl;
    cout << "Director: " << movie2.director << endl;
    cout << "Year Released: " << movie2.yearReleased << endl;
    cout << "Running Time: " << movie2.runningTime << " minutes" << endl;
   
    return 0;
}