#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=4;
    int *p=&a;
    int **p1=&p;
    int arr[a]={3,5,2,1};
    int b=5;
    cout << &p  << " " << &*p1 << " " << &a << " " << &arr << " " << &b << endl;
    return 0;
}