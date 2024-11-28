#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=4;
    int arival[n]={2,10,11,15};
    int departure[n]={10,20,14,16};

    int res=0,count=0;
    sort(arival,arival+n);
    sort(departure,departure+n);
    int i=0,j=0;
    while(i<n && j < n)
    {
        if(arival[i]<=departure[j]) {
            count++;
            i++;
        }
        else {
            count--;
            j++;
        }
        res=max(res,count);
    }
    cout << res << endl;
}