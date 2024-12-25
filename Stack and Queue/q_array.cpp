#include <bits/stdc++.h>
using namespace std;

class Queue {
    int size;
    int *arr;
    int front, rear, currSize;
    public:
        Queue() {
            size=4;
            arr=new int[size];
            front=-1;
            rear=-1;
            currSize=0;
        }
        ~Queue() {
            delete[] arr; // Free dynamically allocated memory
        }
    void push(int num) {
        if(currSize==size) {
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(currSize==0) {
            rear=0;
            front=0;
        }
        else {
            rear=(rear+1)%size;
        }
        arr[rear]=num;
        currSize++;
    }
    int pop() {
        if(currSize==0) {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int popped=arr[front];
        if(currSize==1) {
            rear=-1;
            front=-1;
        }
        else {
            front=(front+1)%size;
        }
        currSize--;
        return popped;
    }
    int Size() {
        return currSize;
    }
    int Top() {
        if(currSize==0) {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }
};

int main() {
    Queue q;
    q.push(9);
    q.push(2);
    q.push(17);
    q.push(6);
    cout << "Top element of Queue : " << q.Top() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    cout << "Popped element of Queue : " << q.pop() << endl;
    q.push(46);
    cout << "Size of Queue : " << q.Size() << endl;
    return 0;
}