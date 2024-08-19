#include <iostream>

using namespace std;

int fibonacciSeries(int n)
{
    int fbs[n+1];
    fbs[0] = 0;
    fbs[1] = 1;

    if(n == 0) cout << fbs[0] << endl;
    else cout << fbs[0] << " " << fbs[1] << " "; 

    for(int i = 2; i<= n; i++)
    {
        fbs[i] = fbs[i-1] + fbs[i-2];
        cout << fbs[i] << " ";
    }

    return 0;

}

int fib(int n) 
{ 
    int t1 = 0, t2 = 1, nextTerm = 0;

    nextTerm = t1 + t2;

    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    

}


int main()
{
    int n;
    cout << "Printing fibonacci series upto: ";
    cin >> n;

    // fibonacciSeries(n);
    fib(n);

    return 0;
}