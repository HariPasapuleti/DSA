#include <bits/stdc++.h>

using namespace std;

void permute(int index, vector<int> arr, int n, vector<vector<int>>& res)
{
    if(index==n){
        res.push_back(arr);
        return;
    }
    for(int i=index;i<n;i++)
    {
        swap(arr[index], arr[i]);
        permute(index+1, arr, n, res);
        swap(arr[index], arr[i]);
    }
}

int main()
{
    int n=3;
    vector<int> arr={1,2,3};
    vector<vector<int>> res;
    vector<int> ds;
    permute(0, arr, n, res);

    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[i].size();j++)
        {
            cout<<res[i][j];
        }
        cout<<endl;
    }
}