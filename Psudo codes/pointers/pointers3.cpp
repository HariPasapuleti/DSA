int *g(void) { 
    int x = 10; 
    return (&x); 
}
// Undefined Behavior: Returning the address of a local variable (&x) is dangerous because x is stored on the stack, and its memory is deallocated once the function g() returns. 
// Therefore, the pointer returned points to a location that may be overwritten or invalid, leading to undefined behavior.


int *g(void) { 
    int *px; 
    *px = 10; 
    return px; 
}
// Undefined Behavior: The pointer px is not initialized, meaning it doesn't point to a valid memory location. 
// Dereferencing such a pointer results in undefined behavior, which could lead to a crash or memory corruption.

#include <cstdlib>

int *g(void) { 
    int *px; 
    px = (int *) malloc(sizeof(int)); 
    *px = 10; 
    return px;  
}
// Valid: This code is correct. The memory for px is allocated on the heap, so it remains valid even after the function returns. 
// The caller of this function should remember to free() the memory once it is done using the pointer to avoid memory leaks.
