// BT8: Array/File Functions
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void arrayToFile(const char* filename, int* arr, int size) {
    ofstream outFile(filename, ios::binary);
    if (!outFile) {
        cout << "Failed to open the file." << endl;     // Hien thi thong bao neu khong mo duoc file
        return;
    }

    outFile.write(reinterpret_cast<char*>(arr), size * sizeof(int));    // Viet vao file
    outFile.close();    // Dong file
}

void fileToArray(const char* filename, int* arr, int size) {
    ifstream inFile(filename, ios::binary);
    if (!inFile) {
        cout << "Failed to open the file." << endl;     // Hien thi thong bao neu khong mo duoc file
        return;
    }

    inFile.read(reinterpret_cast<char*>(arr), size * sizeof(int));  // Doc file
    inFile.close();     // Dong file
}

int main() {
    const char* filename = "data.bin";  // Ten file
    int arr[] = { 1, 2, 3, 4, 5 };      // Khai bao mang
    int size = sizeof(arr) / sizeof(arr[0]);

    arrayToFile(filename, arr, size);   // Hien thi noi dung mang trong file

    int* readArr = new int[size];       // Cap phat dong
    fileToArray(filename, readArr, size);   // Doc noi dung mang tu file ra man hinh

    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        cout << readArr[i] << " ";      // Hien thi noi dung
    }
    cout << endl;

    return 0;
}