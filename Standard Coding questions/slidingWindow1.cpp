#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution1 {
public:
    // Solution 1: Two-pointer Sliding Window
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, res = 0;
        long curr = 0;
        for (int right = 0; right < nums.size(); right++) {
            long target = nums[right];
            curr += nums[right];
            while ((right - left + 1) * target - curr > k) {
                curr -= nums[left];
                left++;
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};

class Solution2 {
public:
    // Solution 2: Alternative Two-pointer Sliding Window
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        long curr = 0;
        for (int right = 0; right < nums.size(); right++) {
            long target = nums[right];
            curr += target;
            if ((right - left + 1) * target - curr > k) {
                curr -= nums[left];
                left++;
            }
        }
        return nums.size() - left;
    }
};

class Solution3 {
public:
    // Solution 3: Binary Search with Prefix Sum
    int check(int i, int k, vector<int>& nums, vector<long>& prefix) {
        int target = nums[i];
        int left = 0, right = i, best = i;
        while (left <= right) {
            int mid = (left + right) / 2;
            long count = i - mid + 1;
            long finalSum = count * target;
            int originalSum = prefix[i] - prefix[mid] + nums[mid];
            int operationsRequired = finalSum - originalSum;
            if (operationsRequired > k) {
                left = mid + 1;
            } else {
                best = mid;
                right = mid - 1;
            }
        }
        return i - best + 1;
    }
    
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<long> prefix;
        prefix.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            prefix.push_back(nums[i] + prefix.back());
        }
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            ans = max(ans, check(i, k, nums, prefix));
        }
        return ans;
    }
};

int main() {
    Solution1 sol1;
    Solution2 sol2;
    Solution3 sol3;
    vector<int> testCases[] = {{1,2,4}, {1,4,8,13}, {3,9,6}};
    int kValues[] = {5, 5, 2};
    
    for (int i = 0; i < 3; i++) {
        cout << "Test Case " << i+1 << " (Sol1) Output: " << sol1.maxFrequency(testCases[i], kValues[i]) << endl;
        cout << "Test Case " << i+1 << " (Sol2) Output: " << sol2.maxFrequency(testCases[i], kValues[i]) << endl;
        cout << "Test Case " << i+1 << " (Sol3) Output: " << sol3.maxFrequency(testCases[i], kValues[i]) << endl;
    }
    return 0;
}

