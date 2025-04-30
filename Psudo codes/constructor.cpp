// #include <iostream>
// #include <string>
// Error
// using namespace std;
// class A {
//     int a;
//     public:
//         A(int i) {
//             a = i;
//         }
//         void assign(int i) {
//             a = i;
//         }
//         int getA() {
//             return a;
//         }
// };
// int main() {
//     A obj;
//     obj.assign(5);
//     cout << obj.getA();
// }

#include <iostream>
#include <string>

using namespace std;

class A {
    int a;

public:
    A() { a = 0; } // Default constructor
    A(int i) { a = i; }
    void assign(int i) { a = i; }
    int getA() { return a; }
};

int main() {
    A obj;          // Now uses the default constructor
    obj.assign(5);  // Assigns 5 to the member variable 'a'
    cout << obj.getA(); // Outputs: 5
}

// The class A has a user-defined constructor: A(int i). This constructor requires an integer parameter.
// In the main function, when you create an object of class A using A obj;, the compiler tries to use a default constructor (a constructor with no arguments). However, since no default constructor is defined in the class, the compiler cannot find one, leading to an error.

