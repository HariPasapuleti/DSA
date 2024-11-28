#include <bits/stdc++.h>

using namespace std;

void combinationSum2(int index, vector<int> &ds, int arr[], int n, int target, vector<vector<int>> &res)
{
    if(target==0) {
        res.push_back(ds);
        return;
    }
    

    for(int i=index;i<n;i++)
    {
        if(i>index && arr[i]==arr[i-1]) continue;
        if(target<arr[i]) break;
        ds.push_back(arr[i]);
        combinationSum2(i+1,ds,arr,n,target-arr[i],res);

        ds.pop_back();
    }
}

int main()
{
    int n=5;
    int arr[n]={1,1,1,2,2};
    vector<int> ds;
    vector<vector<int>> res;
    int sum=4;
    sort(arr, arr+n);
    combinationSum2(0,ds,arr,n,sum,res);
    cout << res.size() << endl;
    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}