// BT2: Sales Prediction
#include <iostream>
#define percent 0.58 // Dinh nghia phan tram doanh thu cua bo phan ban hang mien Dong = 0.58
using namespace std;

int main()
{
    float   salesPrediction,        
            totalSales = 8.6;       //Gan bien totalSales = 8.6
    
    salesPrediction = totalSales * percent; // Tinh doanh thu cua bo phan ban hang phia Dong
    cout << "The East Coast sales division will generate $" << salesPrediction << " milion in sales this year"; // Xuat ket qua du doan
    return 0;
}