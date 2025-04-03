#include <iostream>
#include <cmath> // Required for sqrt()

using namespace std;

// Solution 1: Efficient approach
int sumOfAllDivisorsSol1(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        res += (n / i) * i;
    }
    return res;
}

// Solution 2: Brute force approach
int sumOfAllDivisorsSol2(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sqrt(i); j++) {
            if (i % j == 0) {
                if (j != i / j) 
                    res += i / j + j;
                else 
                    res += j;
            }
        }
    }
    return res;
}

// Main function to test the solutions
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Solution 1 Output: " << sumOfAllDivisorsSol1(n) << endl;
    cout << "Solution 2 Output: " << sumOfAllDivisorsSol2(n) << endl;

    return 0;
}
