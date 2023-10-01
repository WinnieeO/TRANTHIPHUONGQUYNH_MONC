// BT6: Rain or Shine
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const short MONTHS = 3;             // 0: thang 6, 1: thang 7, 2: thang 8
    const short DAYS = 30;              // So ngay ghi nhan thoi tiet cua moi thang
    char weather[MONTHS][DAYS];
    short sun, rain, cloud, totalS, totalR, totalC, largestR, month, r[MONTHS], s[MONTHS], c[MONTHS];
    ifstream inFile;

    totalC = 0;
    totalR = 0;
    totalS = 0;

    // Mo file
    inFile.open("RainOrShine.txt");

    // Nhap du lieu thoi tiet
    for (int i = 0; i < MONTHS; i++)
    {
        sun = 0;
        rain = 0;
        cloud = 0;
        for (int j = 0; j < DAYS; j++)
        {
            inFile >> weather[i][j];
            if (weather[i][j] == 'S')
            {
                sun++;
            }
            else if (weather[i][j] == 'R')
            {
                rain++;
            }
            else if (weather[i][j] == 'C')
            {
                cloud++;
            }   
        }
        r[i] = rain;
        s[i] = sun;
        c[i] = cloud;

        totalS += sun;
        totalR += rain;
        totalC += cloud;



        if (rain > largestR)
        {
            largestR = rain;
            month = i;
        }
    }

    // Xuat thong tin
    cout << "REPORT\n";
    for (int i = 0; i < MONTHS; i++)
    {
        if (i == 0)
            cout << "June:\n";
        else if (i == 1)
            cout << "July:\n";
        else
            cout << "August:\n";

        cout << "Rainy days: " << r[i];
        cout << "\nSunny days: " << s[i];
        cout << "\nCloudy days: " << c[i] << endl;
    }


    cout << "\nThe number of rainy days for the whole three-months period: " << totalR << endl;
    cout << "The number of sunny days for the whole three-months period: " << totalS << endl;
    cout << "The number of cloudy days for the whole three-months period: " << totalC << endl;
    cout << "Month had the largest number of rainy days: ";
    if (month == 0)
        cout << "June";
    else if (month == 1)
        cout << "July";
    else
        cout << "August";

    // Dong file
    inFile.close();
    return 0;
}
/*An amateur meteorologist wants to keep track of weather conditions during the
past year’s three-month summer season and has designated each day as either rainy
(‘R’), cloudy (‘C’), or sunny (‘S’). Write a program that stores this information in a
3 × 30 array of characters, where the row indicates the month (0 = June, 1 = July,
2 = August) and the column indicates the day of the month. Note that data are not
being collected for the 31st of any month. The program should begin by reading the
weather data in from a file. Then it should create a report that displays, for each
month and for the whole three-month period, how many days were rainy, how many
were cloudy, and how many were sunny. It should also report which of the three
months .
Một nhà khí tượng học nghiệp dư muốn theo dõi điều kiện thời tiết trong mùa
mùa hè kéo dài ba tháng năm ngoái và được chỉ định ngày nào cũng có mưa
('R'), nhiều mây ('C') hoặc nắng ('S'). Viết chương trình lưu trữ thông tin này trong một
Mảng ký tự 3 × 30, trong đó hàng biểu thị tháng (0 = tháng 6, 1 = tháng 7,
2 = tháng 8) và cột cho biết ngày trong tháng. Lưu ý rằng dữ liệu không
được thu vào ngày 31 hàng tháng. Chương trình nên bắt đầu bằng việc đọc
dữ liệu thời tiết từ một tập tin. Sau đó, nó sẽ tạo một báo cáo hiển thị cho mỗi
tháng và trong suốt ba tháng có bao nhiêu ngày mưa, bao nhiêu
có mây và có bao nhiêu nắng. Nó cũng nên báo cáo cái nào trong ba cái
tháng có số ngày mưa lớn nhất. Dữ liệu cho chương trình có thể được tìm thấy trong
tệp RainOrShine.txt.*/
