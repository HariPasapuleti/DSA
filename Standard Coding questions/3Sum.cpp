#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <climits>
using namespace std;

class Solution {
public:
    // Solution for 3Sum
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> uniqueTriplets;

        for (int i = 0; i < nums.size(); i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[left] + nums[right];
                if (currentSum == 0) {
                    uniqueTriplets.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                } else if (currentSum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        vector<vector<int>> result(uniqueTriplets.begin(), uniqueTriplets.end());
        return result;
    }

    // Solution for 3Sum Closest
    int threeSumClosest(vector<int>& nums, int target) {
        int close_sum = INT_MAX, res_sum = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1, right = nums.size() - 1;

            while (left < right) {
                int current_sum = nums[i] + nums[left] + nums[right];
                if (abs(current_sum - target) < close_sum) {
                    close_sum = abs(current_sum - target);
                    res_sum = current_sum;
                }
                if (current_sum > target) {
                    right--;
                } else {
                    left++;
                }
            }
        }

        return res_sum;
    }
};

int main() {
    // Input for 3Sum
    vector<int> nums1 = {-1, 0, 1, 2, -1, -4};
    Solution sol;

    cout << "3Sum Results:\n";
    vector<vector<int>> triplets = sol.threeSum(nums1);
    for (const auto& triplet : triplets) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Input for 3Sum Closest
    vector<int> nums2 = {-1, 2, 1, -4};
    int target = 1;

    int closestSum = sol.threeSumClosest(nums2, target);
    cout << "3Sum Closest Result: " << closestSum << endl;

    return 0;
}
