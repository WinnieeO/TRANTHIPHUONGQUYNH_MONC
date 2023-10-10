// BT8: Lo Shu Magic Square
#include <iostream>
#include <stdlib.h>
using namespace std;

const short ROWS = 3;
const short COLUMNS = 3;

void testArray(const int [ROWS][COLUMNS]);

int main()
{
    
    int magicSquare[ROWS][COLUMNS];

    // Nhap mang 2 chieu
    cout << "Enter a two-dimensional:\n";
    for (int i = 0; i < COLUMNS; i++)
    {   
        for (int j = 0; j < ROWS; j++)
        {
            cin >> magicSquare[i][j];
        }
    }

    // Kiem tra va xuat ket qua
    testArray(magicSquare);
        return 0;
}

// Ham
void testArray(const int arr[ROWS][COLUMNS])
{
    int totalR, totalC, totalD1, totalD2, check[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    short k = 0, count;

    // Kiem tra mang co chua du cac so tu 1 den 9 khong
    while (k < 9)
    {
        count = 0;
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                if (check[k] == arr[i][j])
                    count++;
                if (count > 1)
                {
                    cout << "The array is not a Lo Shu Magic!";
                    exit(0);
                }
            }
        }
        k++;
    }

    // Tinh tong duong cheo chinh va phu
    totalD1 = arr[0][0] + arr[1][1] + arr[2][2];
    totalD2 = arr[0][2] + arr[1][1] + arr[2][0];

    // Tinh tong hang va cot, sau do so sanh va ket luan
    if (totalD1 != totalD2)
    {
        cout << "The array is not a Lo Shu Magic!";
    }
    else
    {
        for (int i = 0; i < ROWS; i++)
        {
            totalR = 0;
            totalC = 0;
            for (int j = 0; j < COLUMNS; j++)
            {
                if (arr[i][j] < 1 || arr[i][j] > 9)
                {
                    cout << "The array is not a Lo Shu Magic!";
                    exit(0);
                }
                totalR += arr[i][j];
                totalC += arr[j][i];
                
            }
            if ( totalC == totalD1 && totalR == totalD1)
                continue;
            else
            {   
                cout << "The array is not a Lo Shu Magic!";
                exit(0);  
            } 
        }
        cout << "The array is a Lo Shu Magic.";
    }
}