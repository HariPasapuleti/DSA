#include <bits/stdc++.h>
using namespace std;

int minimumEnergy(vector<int>& height, int n) { // space optimization

    vector<int> dp(n+1,-1);
    
    dp[0]=0,dp[1]=0;
    int prev=0,prev2=0;
    for(int i=1;i<n;i++) {
        int fs=prev+abs(height[i]-height[i-1]);
        int ss=INT_MAX;
        
        if(i>1) ss=prev2+abs(height[i]-height[i-2]);
        
        int curr_min = min(ss,fs);
        prev2=prev;
        prev=curr_min;
    }
    return prev;
}

int path(int ind, vector<int> height, vector<int>& dp) 
{
    if(ind==0) return 0;

    if(dp[ind]!=-1) return dp[ind];
    int left = path(ind-1,height,dp) + abs(height[ind]-height[ind-1]);
    int right = INT_MAX;

    if(ind>1) right = path(ind-2,height,dp) + abs(height[ind]-height[ind-2]);

    return dp[ind]=min(left,right);

}

int main() {
    vector<int> height = {10, 20, 30, 10};
    int n=height.size();
    vector<int> dp(n+1,-1);
    cout << path(n-1,height, dp) << endl;
    cout << minimumEnergy(height,n) << endl;
}