// BT14: Inventory Screen Report
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

struct InventoryItem {
    string name;
    int quantity;
    double wholesaleCost;
    double retailPrice;
};

void calculateInventoryStatistics(const string& fileName, double& totalWholesaleValue, double& totalRetailValue, int& totalQuantity) {
    totalWholesaleValue = 0;
    totalRetailValue = 0;
    totalQuantity = 0;

    ifstream inputFile(fileName);
    string line;

    while (std::getline(inputFile, line)) {
        istringstream iss(line);
        InventoryItem item;
        string itemData;

        getline(iss, item.name, ',');
        getline(iss, itemData, ',');
        item.quantity = stoi(itemData);
        getline(iss, itemData, ',');
        item.wholesaleCost = stod(itemData);
        getline(iss, itemData, ',');
        item.retailPrice = stod(itemData);

        totalQuantity += item.quantity;
        totalWholesaleValue += item.quantity * item.wholesaleCost;
        totalRetailValue += item.quantity * item.retailPrice;
    }

    inputFile.close();
}

int main() {
    string fileName = "inventory_data.txt";
    double totalWholesaleValue, totalRetailValue;
    int totalQuantity;

    calculateInventoryStatistics(fileName, totalWholesaleValue, totalRetailValue, totalQuantity);

    cout << "Total Wholesale Value: $" << totalWholesaleValue << endl;
    cout << "Total Retail Value: $" << totalRetailValue << endl;
    cout << "Total Quantity: " << totalQuantity << endl;

    return 0;
}