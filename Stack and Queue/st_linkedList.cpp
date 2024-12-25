#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data=val;
        next=NULL;
    }
};

class Stack {
    public:
        Node* top;
        int size;
        Stack() {
            top = NULL;
            size=0;
        }
        ~Stack() {
            while (top != NULL) {
                Node* temp = top;
                top = top->next;
                delete temp;
            }
        }

        void push(int num) {
            Node* newNode = new Node(num);
            newNode->next=top;
            top=newNode;
            size++;
        }
        int pop() {
            if (top == NULL) {
                cout << "Stack is empty" << endl;
                return -1;
            }
            int popped=top->data;
            Node* temp=top;
            top=top->next;
            delete temp;
            size--;
            return popped;
        }
        int Size() {
            return size;
        }
        int Top() {
            if (top == NULL) {
                cout << "Stack is empty" << endl;
                return -1;
            }
            return top->data;
        }
};

int main() {
    Stack st;
    st.push(9);
    st.push(2);
    st.push(17);
    st.push(6);
    cout << "Top element of Stack : " << st.Top() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    cout << "Popped element of Stack : " << st.pop() << endl;
    st.push(46);
    cout << "Size of Stack : " << st.Size() << endl;
    return 0;
}