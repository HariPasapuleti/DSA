#include <bits/stdc++.h>
using namespace std;

class Stack{
    int size;
    int top;
    int *arr;
    public:
        Stack(){
            top=-1;
            size=1000;
            arr=new int[size];
        }
    void push(int num) {
        if(top==size-1) {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=num;
    }
    int pop(){
        if(top==-1) {
            cout<<"Stack Underflow"<<endl;
            return -1;
        }
        int x=arr[top];
        top--;
        return x;
    }
    int Size() {
        return top+1;
    }
    int Top() {
        if(top==-1) {
            cout<<"Stack is empty"<<endl;
            return 0;
        }
        return arr[top];
    }

};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(4);
    s.push(8);
    cout << "Top element of the stack : " << s.Top() << endl;
    cout << "Popped element in stack : " << s.pop() << endl;
    cout << "Size of the stack : " << s.Size() << endl;
    return 0;

}