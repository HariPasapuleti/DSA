#include <iostream>
#include <vector>

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

bool isPrimeBest(int num)
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


int main()
{
    int n;
    cout << "Prime numbers to print upto: ";
    cin >> n;

    cout << "Prime numbers upto " << n << " are: "; 
    for(int i = 0; i < n; i++)
    {
        if(isPrimeBest(i)) {
            cout << i << " ";
        }
    }
    return 0;
}