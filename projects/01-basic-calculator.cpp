/* 
Project: Basic Calculator (C++)

Author: Rupali Vaishnav
Date: 2026

About:
This is a simple calculator program built using basic C++ concepts.

Features:
- Performs addition, subtraction, multiplication, and division
- Uses only basic concepts:
   - Variables
   - Data types
   - Operators
   - Conditional statements (if-else)

How it works:
 - Takes two numbers as input
 - Takes an operator (+, -, *, /)
 - Displays the result accordingly

Learning Outcome
 - Understanding of operators
 - Input/Output handling
 - Basic decision making (if-else)
 
*/

// Code Implementation
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    if(op == '+') {
        cout << "Result: " << a + b << endl;
    }
    else if(op == '-') {
        cout << "Result: " << a - b << endl;
    }
    else if(op == '*') {
        cout << "Result: " << a * b << endl;
    }
    else if(op == '/') {
        if(b == 0) {
            cout << "Error: Division by zero is not allowed" << endl;
        } else {
            cout << "Result: " << a / b << endl;
        }
    }
    else {
        cout << "Invalid operator" << endl;
    }

    return 0;
}