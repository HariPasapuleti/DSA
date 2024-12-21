#include <bits/stdc++.h>
using namespace std;

// Longest Common subsequence using dynamic programming (memoization and Tabulation).

int spaceoptimization(string str1, string str2) { //Space optimization

    int n=str1.size(), m=str2.size();
        vector<int> curr(m + 1, 0), prev(m + 1, 0);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (str1[i - 1] == str2[j - 1])
                    curr[j] = 1 + prev[j - 1];
                else
                    curr[j] = max(prev[j], curr[j - 1]);
            }
            prev = curr;
        }
        return curr[m];
}

int tabulation(string text1, string text2) {
    int n = text1.size(), m = text2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) { // Tabulation (bottom-up approachTop)
        for (int j = 1; j <= m; j++) {
            if (text1[i - 1] == text2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
}

int memoization(int ind1, int ind2, string t1, string t2, vector<vector<int>>& dp) { // Memoization (Top-down approach)
    if (ind1 < 0 || ind2 < 0)
        return 0;

    if (dp[ind1][ind2] != -1)
        return dp[ind1][ind2];
    if (t1[ind1] == t2[ind2])
        return dp[ind1][ind2] = 1 + memoization(ind1 - 1, ind2 - 1, t1, t2, dp);
    else {
        return dp[ind1][ind2] = max(memoization(ind1 - 1, ind2, t1, t2, dp),
                                    memoization(ind1, ind2 - 1, t1, t2, dp));
    }
}

int longestCommonSubsequence(string text1, string text2) {

    int n=text1.size(), m=text2.size();
    return spaceoptimization(text1, text2);
    // return tabulation(text1, text2);
    vector<vector<int>>dp (n+1,vector<int>(m+1,-1));
    // return memoization(n - 1, m - 1, text1, text2, dp);
}

int main() {

    string str1="leetcode", str2="peertopeer";
    cout << longestCommonSubsequence(str1, str2)  << endl;

}