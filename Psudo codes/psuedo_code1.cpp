#include <bits/stdc++.h>
using namespace std;

class Student {
    public :
        int rollNumber;
        int age;
};


int main() {
    Student s1;

    Student const s2 = s1;

    s1.rollNumber = 101;
    s1.age = 20;

    cout << s2.rollNumber << " " << s2.age; // The correct answer is "Garbage Garbage." The code declares a const object s2 initialized with the values of s1, but then modifies the members of s1. Since s2 is const, it retains its original values, resulting in garbage values when printed.
}