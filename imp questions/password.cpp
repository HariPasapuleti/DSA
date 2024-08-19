#include <iostream>
#include <string>
#include <cctype> // For isdigit, islower, isupper, ispunct

using namespace std;

bool isValidPassword(const string& STR) {
    if (STR.length() < 8 || STR.length() > 15) {
        return false;
    }
    
    // Initialize flags for different character types
    bool hasDigit = false;
    bool hasLower = false;
    bool hasUpper = false;
    bool hasSpecial = false;
    
    for (char ch : STR) {
        if (isdigit(ch)) {
            hasDigit = true;
        } else if (islower(ch)) {
            hasLower = true;
        } else if (isupper(ch)) {
            hasUpper = true;
        } else if (ispunct(ch)) { // ispunct checks for any punctuation characters
            hasSpecial = true;
        } else if (isspace(ch)) { 
            return false;
        }
    }
    
    return hasDigit && hasLower && hasUpper && hasSpecial;
}

int main() {
    
    string STR;
    cout << "Enter password: ";
    getline(cin, STR);
    
    if (isValidPassword(STR)) {
        cout << "Valid" << endl;
    } else {
        cout << "Not Valid" << endl;
    }
    
    return 0;
}
