#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            vector<int> count(26, 0);
            string str = "";
            for (int i = 0; i < s.size(); i++) {
                count[s[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                str += to_string(count[i]) + "#";  // safer than char addition
            }
            mp[str].push_back(s);
        }

        vector<vector<string>> anagrams;
        // This structured binding syntax (auto [key, val]) is only valid in C++17 or later.
        for (auto it : mp) {
            anagrams.push_back(it.second);
        }
        return anagrams;
    }
};

int main() {
    Solution sol;
    vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = sol.groupAnagrams(input);

    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : result) {
        for (const string& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
