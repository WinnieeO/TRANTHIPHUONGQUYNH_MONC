// BT12: Land Calculation
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double  oneAcre = 43560,    // Mot mau dat gom 43560 met vuong
            land = 391876,      // Manh dat rong 391876 met vuong
            numAcres;
    short int numberAcres;
    
    // Tinh va xuat so mau dat tren khu dat
    numAcres = land/ oneAcre;
    numberAcres = round(numAcres); // Ham lam tron thanh so nguyen
    cout << "The number of acres in a tract of land with 391876 square feet is about " << numberAcres;
    
    return 0;
}