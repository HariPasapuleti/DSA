
1. calloc() takes two arguments, but malloc takes only 1 argument.
2. malloc() and memset() can be used to get the same effect as calloc().
3. alloc() allocates the memory and also initializes the allocates memory to zero, while memory allocated using malloc() has random data.
4. Both malloc() and calloc() return 'void *' pointer.



*  Malloc allocates only the requested memory block of memory. 

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr = (char *)malloc(sizeof(char)); // Allocates 1 byte of memory

    if (ptr == NULL) {
        printf("Memory Error!\n");
    } else {
        *ptr = 'S';  // Assigns 'S' to the allocated memory
        printf("%c", *ptr);  // Prints 'S'
    }

    return 0;
}
```

* Calloc allocates memory according to the specified number of blocks of memory of a specific type.

```c
// C Program to dynamically allocate an array using calloc()
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);

	// Dynamically allocated array of size 10 using calloc()
	// array elements are initialized with 0
	// arr stores the base address of the memory block
	char *str = (char *)calloc(n, sizeof(char));

	if (str == NULL) {
		printf("Memory Error!\n");
	} else {
		// initializing array with char variables
		for (int i = 0; i < n; i++)	{
			char ch;
			scanf("%c", &ch);
			*(str + i) = ch;
		}

		// printing array using pointer
		for (int i = 0; i < n; i++) {
			printf("%c", *(str + i));
		}
	}

	return 0;
}
```
* The free() function in C plays a critical role in memory management by deallocating memory blocks previously allocated with malloc() or calloc(). This helps prevent memory leaks and ensures efficient use of memory.
* The realloc() function in C is utilized for resizing a memory block previously allocated with malloc() or calloc(). This versatile function can either increase or decrease the allocated memory size and even allocate or deallocate memory.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5; // Initial array size
    // Allocate array using malloc()
    int *arr = (int *)malloc(n * sizeof(int));
    
    // Fill array with values
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    
    // Resize array to double its size
    arr = (int *)realloc(arr, 2 * n * sizeof(int));
    
    // Fill new part of array
    for (int i = n; i < 2 * n; i++) {
        arr[i] = i + 1;
    }
    
    // Print resized array
    for (int i = 0; i < 2 * n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Free allocated memory
    free(arr);
    
    return 0;
}
```


## 1. Which of the following best describes the role of smart pointers in C++?
### **Options:**
1. They automatically manage memory, eliminating the need for `delete`.
2. They are used to manually allocate memory but do not free it.
3. They are a type of garbage collector in C++.
4. They prevent memory leaks but require explicit manual memory management.

**Correct Answer:**:- 1. They automatically manage memory, eliminating the need for `delete`.


### **Solution Description:**
Smart pointers such as `unique_ptr` and `shared_ptr` in C++ are used to manage memory automatically. They deallocate memory when they go out of scope, thereby preventing memory leaks. This provides a safer and more reliable alternative to manually managing memory with `new` and `delete`. Using smart pointers ensures that memory is freed when no longer needed, without requiring explicit manual management.
