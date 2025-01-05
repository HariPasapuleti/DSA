#include <iostream>
#include <unordered_map>
#include <stack>
#include <string>

using namespace std;

string infixToPostfix(string& s) {
    unordered_map<char, int> mp{{'+', 1}, {'-', 1}, {'*', 2}, {'/', 2}, {'^', 3}};
    stack<char> st;
    string res = "";

    for (int i = 0; i < s.size(); i++) {
        char curr = s[i];
        if (isalnum(curr)) { // If the character is an operand
            res += curr;
        } else if (curr == '(') { // If the character is an opening parenthesis
            st.push(curr);
        } else if (curr == ')') { // If the character is a closing parenthesis
            while (st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop(); // Remove the '(' from the stack
        } else { // If the character is an operator
            while (!st.empty() && st.top() != '(' && mp[curr] <= mp[st.top()]) {
                res += st.top();
                st.pop();
            }
            st.push(curr);
        }
    }

    // Pop all remaining operators from the stack
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }

    return res;
}

int main() {
    string infix;

    cout << "Enter an infix expression: ";
    cin >> infix;

    // Convert to postfix
    string postfix = infixToPostfix(infix);

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
