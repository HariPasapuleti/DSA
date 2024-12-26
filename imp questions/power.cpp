#include <bits/stdc++.h>
using namespace std;
int mod=1e9+7;
long long power(int n, int m) { // recursion
    if(m==0) return 1;
    long long temp=power(n,m/2);
    if(m%2==0) return (temp*temp)%mod;
    else return (((temp*n)%mod)*temp)%mod;
}

double myPow(double x, int n) { // Handles decimals and negative power.
    long pov = n;
    if (pov < 0)
        pov = pov * -1;
    double res = 1.0;
    while (pov > 0) {
        if (pov % 2 == 1) {
            res *= x;
            pov--;
        } else {
            x *= x;
            pov /= 2;
        }
    }
    if (n < 0)
        return 1 / res;
    return res;
}

int main() {
    int n=4, m=9;
    cout << "4 to the power of 9 : " << power(n,m) << endl;
}