#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Structure to store each record
struct Record {
    int serial;
    string name;
    string phone;
};

// Function to print a line for table borders
void printLine(int width) {
    cout << "+";
    for (int i = 0; i < width; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < width; i++)
        cout << "-";
    cout << "+";
    for (int i = 0; i < width; i++)
        cout << "-";
    cout << "+" << endl;
}

// Function to display the records in a table format
void displayTable(const vector<Record>& records) {
    int width = 15; // Set column width
    
    // Print header
    printLine(width);
    cout << "| " << setw(width - 2) << "Serial Number" << " | "
         << setw(width - 2) << "Name" << " | "
         << setw(width - 2) << "Phone Number" << " |" << endl;
    printLine(width);

    // Print each record
    for (const auto& record : records) {
        cout << "| " << setw(width - 2) << record.serial << " | "
             << setw(width - 2) << record.name << " | "
             << setw(width - 2) << record.phone << " |" << endl;
    }

    // Print bottom line
    printLine(width);
}

int main() {
    vector<Record> records;
    int n;

    cout << "Enter number of records: ";
    cin >> n;

    // Input records
    for (int i = 0; i < n; ++i) {
        Record record;
        cout << "Enter serial number: ";
        cin >> record.serial;
        cin.ignore();  // To ignore leftover newline from serial input

        cout << "Enter name: ";
        getline(cin, record.name);

        cout << "Enter phone number: ";
        getline(cin, record.phone);

        records.push_back(record);
    }

    // Display table
    displayTable(records);

    return 0;
}