// BT13: Inventory Program
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

struct InventoryItem {
    string description;
    int quantity;
    float wholesaleCost;
    float retailCost;
    string dateAdded;
};

bool validateInput(int quantity, float wholesaleCost, float retailCost, const string& dateAdded) {
    if (quantity < 0 || wholesaleCost < 0 || retailCost < 0) {
        cout << "Invalid input: Quantity and costs cannot be negative." << endl;
        return false;
    }

    // Validate dateAdded (assuming reasonable dates are between 2000 and current year)
    time_t now = time(0);
    tm* currentDate = localtime(&now);
    int currentYear = currentDate->tm_year + 1900;

    int year, month, day;
    sscanf(dateAdded.c_str(), "%d-%d-%d", &year, &month, &day);

    if (year < 2000 || year > currentYear || month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "Invalid input: Date added is not valid." << endl;
        return false;
    }

    return true;
}

void writeInventoryItemToFile(const InventoryItem& item, const string& filename) {
    ofstream outFile(filename, ios::app);
    if (!outFile) {
        cout << "Failed to open the file." << endl;
        return;
    }

    outFile << item.description << ","
            << item.quantity << ","
            << item.wholesaleCost << ","
            << item.retailCost << ","
            << item.dateAdded << endl;

    outFile.close();
}

int main() {
    string filename = "inventory.txt";

    InventoryItem item;
    cout << "Enter item description: ";
    getline(cin, item.description);

    cout << "Enter quantity on hand: ";
    cin >> item.quantity;

    cout << "Enter wholesale cost: ";
    cin >> item.wholesaleCost;

    cout << "Enter retail cost: ";
    cin >> item.retailCost;

    cin.ignore(); // Ignore newline character left by previous input

    cout << "Enter date added to inventory (YYYY-MM-DD): ";
    getline(cin, item.dateAdded);

    if (validateInput(item.quantity, item.wholesaleCost, item.retailCost, item.dateAdded)) {
        writeInventoryItemToFile(item, filename);
        cout << "Inventory item added to the file." << endl;
    } else {
        cout << "Failed to add inventory item to the file due to invalid input." << endl;
    }

    return 0;
}