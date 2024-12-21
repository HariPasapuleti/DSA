#include <iostream>
#include <vector>

using namespace std;

int fibonacciSeries(int n)
{
    //dp programming(tabulation)
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

int fib_rec(int n)
{
    if(n<=1) return n;

    return fib_rec(n-1)+fib_rec(n-2);
}

int fab_dp(int n, vector<int>& dp)
{
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];

    return dp[n]=fab_dp(n-1,dp)+fab_dp(n-2,dp);
}

int fib(int n) 
{ 
    int t1 = 0, t2 = 1, nextTerm = 0;

    nextTerm = t1 + t2;

    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    while(nextTerm <= n-1) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    cout << nextTerm;
}


int main()
{
    int n;
    cout << "Printing fibonacci series upto: ";
    cin >> n;

    // fibonacciSeries(n);
    // fib(n);
    // cout << fib_rec(n) << endl;

    vector<int> dp(n+1, -1);
    // dp[0]=0,dp[1]=1;
    fab_dp(n, dp) ;
    for(int i=0;i<dp.size();i++) {
        cout << dp[i] << " ";
    }


    return 0;
}