#include <bits/stdc++.h>

using namespace std;

// bool palindrom(int i, string &str, int n)
// {
//     if(i >= n/2) return true;
//     if(str[i] != str[n]) {
//         return false;
//     }
//     return palindrom(i+1, str, n-1);
// }

bool palindrom(int i, string &str)
{
    if(i >= str.size()/2) return true;
    if(str[i] != str[str.size()-i-1]) {
        return false;
    }
    return palindrom(i+1, str);
}

int main()
{
    string str = "madam";
    int n=str.size();
    // bool res = palindrom(0, str, n-1);
    bool res = palindrom(0, str);
    cout << res << endl;

}