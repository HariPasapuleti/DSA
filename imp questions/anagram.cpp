#include <iostream>
#include <vector>
// #include <algorithm>

using namespace std;

bool isAnagram(string s1, string s2)
{
    if(s1.size() != s2.size()) return false;

    vector<int> freq(26, 0);

    for(char ch : s1)
    {
        freq[ch - 'a']++;
    }

    for(char ch : s2)
    {
        freq[ch - 'a']--;
    }

    for(int i = 0; i < freq.size(); i++)
    {
        if(freq[i] != 0) return false;
    }
    return true;

    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());

    // return s1 == s2;
}



int main()
{
    string s1, s2;

    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2; 

    if(isAnagram(s1, s2)) cout << "Given strings are Anagram" << endl;
    else cout << "Given strings are not Anagram" << endl;

    return 0;
}