#include <bits/stdc++.h>
using namespace std;

void switch_fun() {
    int day;
    cin >> day;
    // Case1
    cout << "Case1: " << endl;
    switch(day) {
        case 1:
            cout << "Monday" << endl;
        case 2:
            cout << "Tuesday" << endl;
        case 3:
            cout << "Wednesday" << endl;
        case 4:
            cout << "Thursday" << endl;
        case 5:
            cout << "Friday" << endl;
        case 6:
            cout << "Saturday" << endl;
        case 7:
            cout << "Sunday" << endl;
        default:
            cout << "Invalid day" << endl;
        cout << "Check" << endl;
    }
    // Case2
    cout << "Case2: " << endl;
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
            break;
        cout << "Check" << endl;
    }
    cout << "Executed sucessfully" << endl;
}

int main() {

    // Strings
    string str1, str2;
    // cin >> str1; // Hari Pasapuleti
    // cout << str1 << endl; // Hari

    // getline(cin, str2); // Hari Pasapuleti
    // cout << str2 << endl; // Hari Pasapuleti

    switch_fun();

}