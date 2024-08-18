#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPrimeAvg(int num) 
{
    if(num == 0 || num == 1) return false;

    for(int i = 2; i*i <= num; i++) 
    {
        if(num % i == 0) return false;
    }
    return true;
}

bool isPrimeBetter(int num)
{
    if(num == 0 || num == 1) return false;
    if(num == 2 || num == 3) return true;
    if(num % 2 == 0 || num % 3 == 0) return false;

    for(int i = 5; i*i <= num; i+=6)
    {
        if((num % i) == 0 || (num % (i + 2)) == 0) return false;
    }
    return true;

}

void isPrimeBest(int num)
{
    // cout << "working" << endl;
    vector<bool> is_prime(num + 1, true);

    for(int i = 2; i*i <= num; i++)
    {
        if(is_prime[i] == true) {
            for(int j = i*i; j <= num; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }

    for(int i = 2; i <= num; i++)
    {
        if(is_prime[i] == true) {
            cout << i << " ";
        }
    }

}


int main()
{
    int n;
    cout << "Prime numbers to print upto: ";
    cin >> n;

    cout << "Prime numbers upto " << n << " are: "; 

    isPrimeBest(n);
    // for(int i = 0; i < n; i++)
    // {
    //     if(isPrimeBest(i)) {
    //         cout << i << " ";
    //     }
    // }
    return 0;
}