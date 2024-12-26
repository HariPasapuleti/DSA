#include <bits/stdc++.h>
using namespace std;

stack<int> s;
void sortedInsert(stack<int> &st, int x)
{
    if(st.empty() or x > st.top())
    {
        st.push(x);
        return;
    }
    
    int temp = st.top();
    st.pop();
    sortedInsert(st, x);
    st.push(temp);
}

void Sort()
{
    if(!s.empty())
    {
        int x = s.top();
        s.pop();
        Sort();
        sortedInsert(s, x);
    }
}

int main() {
    
    s.push(1);
    s.push(2);
    s.push(13);
    s.push(44);
    s.push(3);
    Sort();
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

}