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

class Queue {
    public:
        Node* front;
        Node* rear;
        int size;
        Queue() {
            front = NULL;
            rear=NULL;
            size=0;
        }
        ~Queue() {
            while (front != NULL) {
                Node* temp = front;
                front = front->next;
                delete temp;
            }
        }

        void push(int num) {
            Node* newNode = new Node(num);
            if(front==NULL) {
                front = rear = newNode;
                return;
            }
            else {
                rear->next=newNode;
                rear=newNode;
            }
            size++;
        }
        int pop() {
            if (front == NULL) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            int popped=front->data;
            Node* temp=front;
            front=front->next;
            if(front==NULL) rear=NULL;
            delete temp;
            size--;
            return popped;
        }
        int Size() {
            return size;
        }
        int Top() {
            if (front == NULL) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return front->data;
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