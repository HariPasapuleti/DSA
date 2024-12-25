#include <bits/stdc++.h>
using namespace std;

queue<int> q;

class Stack {
    public:
        void push(int x) {
            int n = q.size();
            q.push(x);
            for (int i = 0; i < n; i++) {
                q.push(q.front());
                q.pop();
            }
        }

        int pop() {
            if(q.empty()) return -1;
            int popped = q.front();
            q.pop();
            return popped;
        }
        int top() { 
            return q.front(); 
        }
        bool empty() { 
            return q.empty(); 
        }
        int size() {
            return q.size();
        }
};

int main() {
    Stack st;
    st.push(9);
    st.push(2);
    st.push(17);
    st.push(6);
    cout << "Top element of Stack : " << st.top() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    st.push(46);
    cout << "Size of Stack : " << st.size() << endl;
    return 0;
}