#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

// Class to track grocery item frequencies
class GroceryTracker {
private:
    // Stores each item and its frequency
    map<string, int> itemFrequency;

public:
    // Reads grocery items from the input file
    bool readInputFile() {
        ifstream inputFile("CS210_Project_Three_Input_File.txt");
        string item;

        if (!inputFile) {
            cout << "Error: Could not open the input file." << endl;
            return false;
        }

        // Count how many times each item appears
        while (inputFile >> item) {
            itemFrequency[item]++;
        }

        inputFile.close();
        return true;
    }

    // Creates the backup file
    bool writeBackupFile() {
        ofstream outputFile("frequency.dat");

        if (!outputFile) {
            cout << "Error: Could not create frequency.dat." << endl;
            return false;
        }

        // Save each item and its frequency
        for (const auto& item : itemFrequency) {
            outputFile << item.first << " "
                       << item.second << endl;
        }

        outputFile.close();
        return true;
    }

    // Returns the frequency of a specific item
    int getItemFrequency(const string& item) {
        auto foundItem = itemFrequency.find(item);

        if (foundItem != itemFrequency.end()) {
            return foundItem->second;
        }

        return 0;
    }

    // Displays all items and their frequencies
    void displayAllFrequencies() {
        cout << "\nGrocery Item Frequencies" << endl;
        cout << "------------------------" << endl;

        for (const auto& item : itemFrequency) {
            cout << item.first << " " << item.second << endl;
        }

        cout << endl;
    }

    // Displays a histogram using asterisks
    void displayHistogram() {
        cout << "\nGrocery Item Histogram" << endl;
        cout << "----------------------" << endl;

        for (const auto& item : itemFrequency) {
            cout << item.first << " ";

            // Print one asterisk for each purchase
            for (int i = 0; i < item.second; i++) {
                cout << "*";
            }

            cout << endl;
        }

        cout << endl;
    }
};

int main() {
    GroceryTracker tracker;
    int choice;
    string item;

    // Read the input file when the program starts
    if (!tracker.readInputFile()) {
        cout << "Please check that the input file exists." << endl;
        return 1;
    }

    // Create the backup file automatically
    if (!tracker.writeBackupFile()) {
        cout << "The backup file could not be created." << endl;
        return 1;
    }

    // Display the menu until the user chooses to exit
    do {
        cout << "Corner Grocer Item Tracking Program" << endl;
        cout << "===================================" << endl;
        cout << "1. Search for an item" << endl;
        cout << "2. Display all item frequencies" << endl;
        cout << "3. Display item frequency histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        // Handle non-numeric menu input
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "Invalid input. Enter a number from 1 to 4."
                 << endl << endl;

            continue;
        }

        switch (choice) {
        case 1:
            cout << "Enter the item you want to search for: ";
            cin >> item;

            cout << item << " appears "
                 << tracker.getItemFrequency(item)
                 << " time(s)." << endl << endl;
            break;

        case 2:
            tracker.displayAllFrequencies();
            break;

        case 3:
            tracker.displayHistogram();
            break;

        case 4:
            cout << "Thank you for using the program." << endl;
            break;

        default:
            cout << "Invalid choice. Please select 1, 2, 3, or 4."
                 << endl << endl;
        }

    } while (choice != 4);

    return 0;
}
