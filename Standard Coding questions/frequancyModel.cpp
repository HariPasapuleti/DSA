#include <bits/stdc++.h>

using namespace std;

int frequency(int skill[], int n)
{
    int sum=0;
    vector<int> frequency(1001,0);
    for(int i=0;i<n;i++)
    {
        sum+=skill[i];
        frequency[skill[i]]++;
    }

    int avg=sum/(n/2);
    if(sum%(n/2)!=0){
        return -1;
    }
    long long product=0;
    for(int i=0;i<n;i++)
    {
        int diff=avg-skill[i];
        if(frequency[diff]==0){
            return -1;
        }
        product+=skill[i]*diff;
        frequency[diff]--;
    }
    return product/2;
}

int main()
{
    int n=6;
    int skill[n]={3,2,5,1,3,4};

    cout << frequency(skill,n) << endl;

    return 0;
}