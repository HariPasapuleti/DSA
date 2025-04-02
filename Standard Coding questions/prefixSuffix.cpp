#include <bits/stdc++.h>
using namespace std;

// O(n^3)
class BruteForceEnumeration {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    res = max(res, (long long)(nums[i] - nums[j]) * nums[k]);
                }
            }
        }
        return res;
    }
};

// O(n^2)
class Greedy {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        for (int k = 2; k < n; k++) {
            int maxPrefix = nums[0];
            for (int j = 1; j < k; j++) {
                res = max(res, (long long)(maxPrefix - nums[j]) * nums[k]);
                maxPrefix = max(maxPrefix, nums[j]);
            }
        }
        return res;
    }
};

// O(n)
class GreedyPrefixSuffixArray {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftMax(n), rightMax(n);
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], nums[i - 1]);
            rightMax[n - i - 1] = max(rightMax[n - i], nums[n - i]);
        }
        long long res = 0;
        for (int j = 1; j < n; j++) {
            res = max(res, (long long)(leftMax[j] - nums[j]) * rightMax[j]);
        }
        return res;
    }
};

int main() {
    vector<int> nums1 = {12,6,1,2,7};
    vector<int> nums2 = {1,10,3,4,19};
    vector<int> nums3 = {1,2,3};
    
    BruteForceEnumeration sol1;
    cout << "Brute Force Output: " << sol1.maximumTripletValue(nums1) << endl;
    cout << "Brute Force Output: " << sol1.maximumTripletValue(nums2) << endl;
    cout << "Brute Force Output: " << sol1.maximumTripletValue(nums3) << endl;
    
    Greedy sol2;
    cout << "Greedy Output: " << sol2.maximumTripletValue(nums1) << endl;
    cout << "Greedy Output: " << sol2.maximumTripletValue(nums2) << endl;
    cout << "Greedy Output: " << sol2.maximumTripletValue(nums3) << endl;
    
    GreedyPrefixSuffixArray sol3;
    cout << "Greedy + Prefix Suffix Array Output: " << sol3.maximumTripletValue(nums1) << endl;
    cout << "Greedy + Prefix Suffix Array Output: " << sol3.maximumTripletValue(nums2) << endl;
    cout << "Greedy + Prefix Suffix Array Output: " << sol3.maximumTripletValue(nums3) << endl;
    
    return 0;
}