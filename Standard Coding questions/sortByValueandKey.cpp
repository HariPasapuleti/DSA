#include <bits/stdc++.h>

using namespace std;

bool cmp(const pair<int,int>& a, const pair<int,int>& b)
{
    if(a.second==b.second) return a.first < b.first;
    return a.second < b.second;
}

int main()
{
    vector<int> v{5,6,7,3,4,5,5,3,7,4,5,9,3,4};

    unordered_map<int,int> mp;

    for(int i=0;i<v.size();i++)
    {
        mp[v[i]]++;
    }

    for(auto i=mp.begin();i!=mp.end();i++)
    {
        cout << i->first << " " << i->second << endl;
    }
    cout  << endl;

    vector<pair<int,int>> mpp(mp.begin(),mp.end());

    sort(mpp.begin(), mpp.end(), cmp);    

    for(int i=0;i<mpp.size();i++)
    {
        cout << mpp[i].first << " " << mpp[i].second << endl;
    }

    return 0;

}