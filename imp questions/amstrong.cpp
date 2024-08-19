#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int isAmstrong(int n)
{
    if(n < 9) return n;
    int sum = 0, temp = n, count = 0;
    // int digits = floor(log10(abs(n)) + 1);

    int digits = (int)log2(n) + 1;
    cout << digits << endl;

    while(temp != 0)
    {
        temp /= 10;
        count++;
    }

    while(n != 0)
    {
        int unit_digit = n % 10;
        sum += pow(unit_digit, count);
        n /= 10;
    }


    return sum;
    
}



int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isAmstrong(n) == n) cout << n << " is an amstrong number." << endl;
    else cout << n << " is not an amstrong number." << endl;

    return 0;
}