// BT10: Number Array Class
#include <iostream>
using namespace std;

class NumberArray
{
    private:
        float *list;            // Khai bao con tro
        int numElements;        // So luong phan tu
        void initArray(int n)   // Cap phat dong bo nho 
            { list = new float[n];}
        
    public:
        NumberArray(int n)      // Constructor
            {initArray(n);
            numElements = n;}
        void setElement(int, float);    // Ham setter
        float getElement(int);          // Ham getter
        float highest();                // Ham tim max
        float lowest();                 // Ham tim min
        float average();                // Ham tinh trung binh cong

        ~NumberArray()          // Destructor
        {delete [] list;}

};

void NumberArray::setElement(int i, float number)
{
    if (i >= 0 && i < numElements)
        list[i] = number;
    else
        cout << "Invalid index\n";
}

float NumberArray::getElement(int i)
{
    if (i >= 0 && i < numElements)
        return list[i];
    else
    {
        cout << "Invalid index\n";
        return 0.0;
    }
}

float NumberArray::highest()
{
    float max = list[0];
    for (int i = 1; i < numElements; i++)
        if (max < list[i])
            max = list[i];
    return max;
}

float NumberArray::lowest()
{
    float min = list[0];
    for (int i = 1; i < numElements; i++)
        if (min > list[i])
            min = list[i];
    return min;
}

float NumberArray::average()
{
    float sum = 0;
    for (int i = 0; i < numElements; i++)
        sum += list[i];
    return (sum / numElements);
}

int main()
{
    NumberArray v1(5);
    float x;

    // Nhap du lieu
    for (int i = 0; i < 5; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> x;
        v1.setElement(i, x);
    }

    // Hien thi du lieu
    for (int i = 0; i < 5; i++)
        cout << v1.getElement(i) << " ";

    // Hien thi gia tri lon nhat, gia tri nho nhat va trung binh cong
    cout << endl << "The highest value is " << v1.highest();
    cout << endl << "The lowest value is " << v1.lowest();
    cout << endl << "The average of all the numbers is " << v1.average();

    return 0;
}