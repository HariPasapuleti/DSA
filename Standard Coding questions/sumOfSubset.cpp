#include <bits/stdc++.h>

using namespace std;

void subSet(int index, int sum, vector<int> arr, int n, vector<int> &subSetSum)
{
    if(index==n){
        subSetSum.push_back(sum);
        // cout << sum << " ";
        return;
    }

    // Take
    subSet(index+1, sum+arr[index], arr, n, subSetSum);

    // Not Take
    subSet(index+1, sum, arr, n, subSetSum);
}



int main()
{
    int n=3;
    vector<int> arr={3,2,4};

    vector<int> subSetSum;
    subSet(0,0,arr,n,subSetSum);

    for(int i=0;i<subSetSum.size();i++)
    {
        cout << subSetSum[i] << " ";
    }
}