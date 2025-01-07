#include <iostream>
using namespace std;

class Solution {
public:
    int countSetBits(int n) {
        int res = 0;
        for (int i = 1; i <= n; i++) {
            int temp = i;

            while (temp > 0) {
                temp = temp & (temp - 1); // Remove the rightmost set bit
                res++;
            }
        }
        return res;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    cout << "Total set bits from 1 to " << n << ": " << obj.countSetBits(n) << endl;

    return 0;
}
