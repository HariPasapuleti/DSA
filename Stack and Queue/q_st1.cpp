#include <bits/stdc++.h>
using namespace std;

stack<int> st1, st2;
class Queue {
public:
    void push(int x) {
        while (!st1.empty()) {
            st2.push(st1.top());
            st1.pop();
        }
        st1.push(x);
        while (!st2.empty()) {
            st1.push(st2.top());
            st2.pop();
        }
    }

    int pop() {
        if(st1.empty()) return -1;
        int popped = st1.top();
        st1.pop();
        return popped;
    }

    int peek() { 
        return st1.top(); 
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