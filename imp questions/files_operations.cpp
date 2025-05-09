#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Writing to a file
    ofstream outFile("example.txt");  // Create and open a file for writing
    if (outFile.is_open()) {
        outFile << "Hello, File Handling in C++!" << endl;  // Writing to the file
        outFile.close();  // Close the file after writing
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Error opening the file for writing." << endl;
    }

    // Reading from a file
    ifstream inFile("example.txt");  // Open the file for reading
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {  // Read line by line
            cout << line << endl;  // Output the line
        }
        inFile.close();  // Close the file after reading
    } else {
        cout << "Error opening the file for reading." << endl;
    }

    return 0;
}