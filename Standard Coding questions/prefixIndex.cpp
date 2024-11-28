#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=10;
    int arr[n]={1,7,-6,4,-3,9,3,-7,4,-9};

    unordered_map<int,int> indexMap;
    int sum=0,max_len=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0){
            max_len=i+1;
        }
        else {
            if(indexMap.find(sum)!=indexMap.end()){
                max_len=max(max_len,i-indexMap[sum]);
            }
            else {
                indexMap[sum]=i;
            }
        }
    }
    cout << max_len << endl;
}