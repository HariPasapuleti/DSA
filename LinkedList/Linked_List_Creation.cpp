#include <bits/stdc++.h>

using namespace std;


struct Node {
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

class LinkedList
{
    public:
        Node* head;
        LinkedList(){
            head=nullptr;
        };
        void add(int val)
        {
            Node* newNode=new Node(val);
            newNode->next=head;
            head=newNode;
        }
        void display()
        {
            Node* temp = head;
            while(temp!=nullptr)
            {
                cout << temp->data << " ";
                temp=temp->next;
            }
        }

};

int main()
{
    LinkedList list;
    list.add(1);
    list.add(3);
    list.add(2);

    list.display();
}