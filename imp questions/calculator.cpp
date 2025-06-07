#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform operation based on user input
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}

/*
#include <iostream>
using namespace std;

// Base class
class Operation {
protected:
    double num1, num2;

public:
    Operation(double n1, double n2) : num1(n1), num2(n2) {}
    virtual double calculate() = 0; // Pure virtual function
    virtual ~Operation() {}
};

// Derived classes for each operation
class Addition : public Operation {
public:
    Addition(double n1, double n2) : Operation(n1, n2) {}
    double calculate() override {
        return num1 + num2;
    }
};

class Subtraction : public Operation {
public:
    Subtraction(double n1, double n2) : Operation(n1, n2) {}
    double calculate() override {
        return num1 - num2;
    }
};

class Multiplication : public Operation {
public:
    Multiplication(double n1, double n2) : Operation(n1, n2) {}
    double calculate() override {
        return num1 * num2;
    }
};

class Division : public Operation {
public:
    Division(double n1, double n2) : Operation(n1, n2) {}
    double calculate() override {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            throw runtime_error("Error! Division by zero.");
        }
    }
};

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    Operation* op = nullptr;

    try {
        // Create the appropriate operation object based on user input
        switch (operation) {
            case '+':
                op = new Addition(num1, num2);
                break;
            case '-':
                op = new Subtraction(num1, num2);
                break;
            case '*':
                op = new Multiplication(num1, num2);
                break;
            case '/':
                op = new Division(num1, num2);
                break;
            default:
                cout << "Invalid operator!" << endl;
                return 1;
        }

        // Perform the calculation
        cout << "Result: " << op->calculate() << endl;

        // Clean up memory
        delete op;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
*/