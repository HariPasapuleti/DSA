#include <iostream>
#include <unordered_map>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

string postfixToPrefix(string& s) {
    stack<string> st;
    for(int i=0;i<s.size();i++) {
        if(isalnum(s[i])) {
            st.push(string(1, s[i]));
        }
        else {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string con=s[i]+t2+t1;
            st.push(con);
        }
    }
    return st.top();
}


int main() {
    string postfix;

    cout << "Enter an postfix expression: ";
    cin >> postfix;
    string prefix = postfixToPrefix(postfix);

    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
