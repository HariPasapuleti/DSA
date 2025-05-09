## 1. Which of the following best describes the role of smart pointers in C++?
### **Options:**
1. They automatically manage memory, eliminating the need for `delete`.
2. They are used to manually allocate memory but do not free it.
3. They are a type of garbage collector in C++.
4. They prevent memory leaks but require explicit manual memory management.

**Correct Answer:**:- 1. They automatically manage memory, eliminating the need for `delete`.


### **Solution Description:**
Smart pointers such as `unique_ptr` and `shared_ptr` in C++ are used to manage memory automatically. They deallocate memory when they go out of scope, thereby preventing memory leaks. This provides a safer and more reliable alternative to manually managing memory with `new` and `delete`. Using smart pointers ensures that memory is freed when no longer needed, without requiring explicit manual management.
