#include <bits/stdc++.h>
using namespace std;

// If interviewer want to optimize push operations as he pushes more elements and pops less.
stack<int> st1, st2;
class Queue {
public:
    void push(int x) {
        st1.push(x);
    }

    int pop() {
        if(st1.empty() && st2.empty()) return -1;
        if(!st2.empty()) {
            int popped=st2.top();
            st2.pop();
            return popped;
        }
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        int popped=st2.top();
        st2.pop();
        return popped;
    }

    int peek() { 
        if(!st2.empty()) {
            int peek=st2.top();
            return peek;
        }
        while(!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        int peek=st2.top();
        return peek;
    }
    bool empty() { 
        return st1.empty(); 
    }
    int Size() {
        return st1.size();
    }
};

int main() {
    Queue q;
    q.push(9);
    q.push(2);
    q.push(17);
    q.push(6);
    cout << "Top element of Queue : " << q.peek() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    q.push(46);
    cout << "Size of Queue : " << q.Size() << endl;
    return 0;
}