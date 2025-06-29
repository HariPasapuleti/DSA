#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int a[2] = {20, 25}, *p, *q;
    p = a;
    q = p + 1;
    cout << q << " " << p << endl;
    printf("%d,%d", (int)(q - p), (int)(*q - *p));
    return 0;
}
