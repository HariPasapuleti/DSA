#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor)
            return 1;
        bool sign = true;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
            sign = false;
        int res = 0;
        long n = abs((long)dividend), d = abs((long)divisor);
        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count++;
            }
            res += 1 << count;
            n -= (d << count);
        }

        if (res == (1 << 31)) {
            return sign ? INT_MAX : INT_MIN;
        }
        return sign ? res : (-1 * res);
    }
};

int main() {
    Solution solution;
    int dividend, divisor;

    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter the divisor: ";
    cin >> divisor;

    try {
        int result = solution.divide(dividend, divisor);
        cout << "Result: " << result << endl;
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
