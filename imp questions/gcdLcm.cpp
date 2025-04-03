#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

// 1️⃣ Brute Force Approach (Iterative O(min(a, b)))
int findGcdBruteForce(int n1, int n2) {
    int gcd = 1;
    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

// 2️⃣ Reverse Iteration (Optimized Brute Force O(min(a, b)))
int findGcdReverseIteration(int n1, int n2) {
    for (int i = min(n1, n2); i > 0; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            return i;
        }
    }
    return 1;
}

// 3️⃣ Euclidean Algorithm (Efficient O(log(min(a, b))))
int findGcdEuclidean(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    return (a == 0) ? b : a;
}

int main() {
    int n1, n2;
    
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    int gcd = findGcdEuclidean(n1, n2);
    int lcm = (n1 * n2) / gcd;

    // Testing all three methods
    cout << "GCD using Brute Force Approach: " << findGcdBruteForce(n1, n2) << endl;
    cout << "GCD using Reverse Iteration: " << findGcdReverseIteration(n1, n2) << endl;
    cout << "GCD using Euclidean Algorithm: " << findGcdEuclidean(n1, n2) << endl;
    cout << "LCM of the two given numbers: " << lcm << endl;

    return 0;
}
