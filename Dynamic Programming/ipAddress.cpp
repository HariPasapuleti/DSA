#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> IPs, temp;
        findIP(0, s, temp, IPs);
        return IPs;
    }

    void findIP(int ind, string s, vector<string>& temp, vector<string>& IPs) {
        if (ind == s.size() && temp.size() == 4) {
            string validIP = temp[0] + '.' + temp[1] + '.' + temp[2] + '.' + temp[3];
            IPs.push_back(validIP);
            return;
        }

        string tempStr = "";
        for (int i = ind; i < s.size() && temp.size() < 4; i++) {
            tempStr += s[i];
            int tempInt = stoi(tempStr);

            if (tempInt >= 0 && tempInt <= 255) {
                // avoid leading zeros (like "01", "00")
                if (tempStr.size() > 1 && tempStr[0] == '0') break;

                temp.push_back(tempStr);
                findIP(i + 1, s, temp, IPs);
                temp.pop_back();
            }

            if (tempInt <= 0 || tempInt > 255)
                break;
        }
    }
};

int main() {
    Solution sol;

    // Example inputs
    vector<string> inputs = {"25525511135", "0000", "101023"};

    for (string s : inputs) {
        cout << "Input: " << s << endl;
        vector<string> res = sol.restoreIpAddresses(s);

        cout << "Output: [";
        for (int i = 0; i < res.size(); i++) {
            cout << "\"" << res[i] << "\"";
            if (i != res.size() - 1) cout << ", ";
        }
        cout << "]" << endl << endl;
    }

    return 0;
}
