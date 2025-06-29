#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     vector <int> vec;
//     int i = 7, a = 0;
//     // cout << i << endl;

//     for(i = 2; i < 7; i++)
//     {
//         cout << i << endl;
//         a = 8;
//     }
//     cout << i << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> numberPattern(int n) {
    // Initialize the matrix to store the pattern
    int totalRows = 2 * n - 1; // Total number of rows in the pattern
    vector<vector<char>> ans(totalRows, vector<char>(totalRows, ' ')); // Fill with spaces

    // Generate the upper part of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < totalRows; j++) {
            // Skip cells outside the triangle and odd sums
            if (i > j || (i + j) >= totalRows || (i + j) % 2 == 1) {
                continue;
            }
            ans[i][j] = '*';
        }
    }

    // Generate the lower part of the pattern
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < totalRows; j++) {
            // Skip cells outside the triangle and odd sums
            if (i > j || (i + j) >= totalRows || (i + j) % 2 == 1) {
                continue;
            }
            ans[2 * n - 2 - i][j] = '*'; // Mirror the row
        }
    }

    return ans;
}

// Function to print the pattern
void printPattern(const vector<vector<char>> &pattern) {
    for (const auto &line : pattern) {
        for (const char &c : line) {
            cout << c;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<vector<char>> pattern = numberPattern(n);
    printPattern(pattern);

    return 0;
}
