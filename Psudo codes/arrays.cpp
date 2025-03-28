// #include <iostream>

// using namespace std;

// int main()
// {
//     static int i=5;
//     if(--i) {
//         main();
//         cout<<i<<" ";
//     }
// }

#include <stdio.h>
int main()
{
    int i = 0;
    switch (i)
    {
        case '0': printf("Hey!");
            break;
        case '1': printf("Aman");
            break;
        default: printf("How are you?");
    }
    return 0;
} 
// the values '0'(48) and '1'(49) are character literals, not integer literals.