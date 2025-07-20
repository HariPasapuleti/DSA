#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void recur_permute(vector<int> nums, vector<int>& ds,
                       vector<vector<int>>& res, vector<int> freq) {

        if (ds.size() == nums.size()) {
            res.push_back(ds);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (!freq[i]) {
                freq[i] = 1;
                ds.push_back(nums[i]);
                recur_permute(nums, ds, res, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n, 0), ds;
        vector<vector<int>> res;
        recur_permute(nums, ds, res, freq);
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = sol.permute(nums);

    cout << "All permutations of [1, 2, 3]:" << endl;
    for (const auto& perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
