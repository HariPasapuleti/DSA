#include <iostream>
using namespace std;

class Solution {
public:
    int setBit(int n) {
        int temp = n, pos = 0;
        while ((temp & 1) == 1) {
            temp = temp >> 1;
            pos++;
        }
        int mask = 1 << pos;
        return n | mask;  
    }
};

int main() {
    Solution solution;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int result = solution.setBit(n);
    cout << "The number after setting the first unset bit is: " << result << endl;

    return 0;
}
