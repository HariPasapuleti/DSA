### 1. `#include <bits/stdc++.h>`
* The line `#include <bits/stdc++.h>` is a convenience header file in C++ that includes almost all standard library headers. It was introduced in GCC and is often used in competitive programming to save time by avoiding the need to include individual headers.
* Commonly used in competitive programming due to time constraints.
* You can quickly write programs without worrying about missing includes.
* It is not part of the C++ standard library. It is specific to GCC and may not work with other compilers like Clang or MSVC (one of the C++ standard compilers).
* Increases compilation time since it includes all headers, even those you may not use in your program.
* Brings in headers and functionalities that you might not need, potentially increasing memory usage.

### 2.`using namespace std;`
* C++ organizes its standard library features (e.g., cin, cout, vector, map) into a namespace called std.
* The line `using namespace std;` is used in C++ to simplify code by avoiding the need to prepend std:: to standard library functions, classes, or objects. 

### 3. `getline`
* The getline function in C++ reads a full line from a stream, including spaces, until a newline (\n) or specified delimiter.
* It is part of the <string> library and is often used for input handling where whitespace (spaces, tabs) is significant.

### 4. Why garbage value was automtically in array
* When an array is declared, its memory is allocated but not automatically cleared or initialized. The elements retain whatever data was already in those memory locations.
* Accessing uninitialized array elements results in undefined behavior, where the values depend on leftover data in the memory.


### Others
1. Array are always passed by reference in function calling.