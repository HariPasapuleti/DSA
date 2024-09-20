#include <bits/stdc++.h>

using namespace std;

void subSequence(int index, vector<int> res, int arr[], int n)
{
    if(index==n) {
        for(int num:res){
            cout<<num<<" ";
        }
        if(res.size()==0) cout << "{}";
        cout << endl;
        return;
    }
    res.push_back(arr[index]); //Pick
    subSequence(index+1,res,arr,n);

    res.pop_back();
    subSequence(index+1,res,arr,n); //Not Pick


}

int main()
{
    int n=3;
    int arr[n] = {6, 3, 7};
    vector<int> res;
    subSequence(0, res, arr, n);
}