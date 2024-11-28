#include <bits/stdc++.h>

using namespace std;

void subSet(int index, int n, vector<int> nums, vector<int> ds, vector<vector<int>> &res)
{
    res.push_back(ds);

    for(int i=index; i<n;i++)
    {
        if(i!=index && nums[i]==nums[i-1]) continue;
        ds.push_back(nums[i]);
        subSet(i+1,n,nums,ds,res);
        ds.pop_back();
    }
}

int main()
{
    int n=3;
    vector<int> nums={1,2,2};
    vector<vector<int>> res;
    vector<int> ds;
    subSet(0,n,nums,ds,res);
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}