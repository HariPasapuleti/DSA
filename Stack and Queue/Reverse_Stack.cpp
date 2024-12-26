#include <bits/stdc++.h>
using namespace std;

void insert_at_bottom(stack<int> &St,int x){
    if(St.size()==0){
        St.push(x);
    }
    else{
        int y=St.top();
        St.pop();
        insert_at_bottom(St,x);
        St.push(y);
    }
}

void Reverse(stack<int> &St){
    if(St.size()>0){
        int x=St.top();
        St.pop();
        Reverse(St);
        insert_at_bottom(St,x);
    }
}

int main() {
    stack<int> s;
    s.push(18);
    s.push(2);
    s.push(39);
    s.push(14);
    s.push(5);
    Reverse(s);
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

}