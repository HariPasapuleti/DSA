#include <iostream>

using namespace std;

int main()
{
        float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
        float *ptr1 = &arr[0];
        float *ptr2 = ptr1 + 3;

        cout << *ptr2 << " ";
        cout << ptr2 - ptr1 <<endl;

        return 0;
}

// float *ptr2 = ptr1 + 3;
// ptr2 is a pointer that points to the fourth element of the array. 
// This is because adding 3 to ptr1 moves the pointer forward by 3 elements. 
// So, ptr2 now points to arr[3], which is 90.5.