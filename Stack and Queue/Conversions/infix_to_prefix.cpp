#include <iostream>
#include <unordered_map>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

string infixToPrefix(string& s) {
    unordered_map<char, int> mp{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}};
    stack<char> st;
    string res = "";
    reverse(s.begin(), s.end());
    for(int i=0;i<s.size();i++) {
        if(isalnum(s[i])) {
            res+=s[i];
        }
        else if(s[i]==')') {
            st.push(s[i]);
        }
        else if(s[i]=='(') {
            while(!st.empty() && st.top() != ')') {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            if(s[i]=='^') {
                while(!st.empty() && mp[s[i]] <= mp[st.top()]) {
                    res += st.top();
                    st.pop();
                }
            }
            else {
                while(!st.empty() && mp[s[i]] < mp[st.top()]) {
                    res += st.top();
                    st.pop();
                }
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}


int main() {
    string infix;

    cout << "Enter an infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);

    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
