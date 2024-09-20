#include <bits/stdc++.h>

using namespace std;


void combinationSum(int index,int target,int arr[],int n, vector<int> res)
{
    if(index==n) {
        if(target==0) {
            for(int num:res){
                cout<<num<<" ";
            }
            cout<<endl;
        }
        return;
    }

    
    if(arr[index]<=target) {
        res.push_back(arr[index]);
        combinationSum(index,target-arr[index],arr,n, res);
        res.pop_back();
    }
    combinationSum(index+1,target,arr,n,res);
}

int main()
{
    int n=4,target=6;
    int arr[n]={2,3,6,4};
    vector<int> res;
    combinationSum(0,target, arr,n,res);
}