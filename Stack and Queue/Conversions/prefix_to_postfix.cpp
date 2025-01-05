#include <iostream>
#include <unordered_map>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

string prefixToPostfix(string& s) {
    stack<string> st;
    for(int i=s.size()-1;i>=0;i--) {
        if(isalnum(s[i])) {
            st.push(string(1, s[i]));
        }
        else {
            string t1 = st.top();
            st.pop();
            string t2 = st.top();
            st.pop();
            string con=t1+t2+s[i];
            st.push(con);
        }
    }
    return st.top();
}


int main() {
    string prefix;

    cout << "Enter an prefix expression: ";
    cin >> prefix;
    string postfix = prefixToPostfix(prefix);

    cout << "postfix expression: " << postfix << endl;

    return 0;
}
