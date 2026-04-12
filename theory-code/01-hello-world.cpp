// Program: Hello World in C++
// Description: Demonstrates the basic structure of a C++ program and prints output.
// Author: Rupali Vaishnav
// Date: 2026

// Learning Source: Apna College (with my own notes and understanding)

// Compiler: GCC (MinGW)
// Language: C++
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// 1. Install MinGW / GCC Compiler
// 2. Open Terminal / Command Prompt
// 3. Navigate to file location:
//    cd path_to_your_file
// 4. Compile:
//    g++ 01-hello-world.cpp -o hello
// 5. Run:
//    hello

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Program:
// A set of instructions given to a computer to perform a specific task.

// main():
// Entry point of every C++ program (execution starts from here).

// cout:
// Standard output stream used to display output on screen.

// endl / \n:
// Used to move output to the next line.

// Header File:
// Provides declarations for input/output and other functionalities.
// Example: <iostream>

// ======================================================
// 🔹 BASIC STRUCTURE OF C++ PROGRAM
// ======================================================

// 1. Documentation Section (Comments)
// 2. Link Section (#include)
// 3. Namespace Declaration
// 4. main() Function
// 5. Execution Statements
// 6. return 0;

// ======================================================
// 🔹 SYNTAX OVERVIEW
// ======================================================

// #include <iostream>  → for input/output
// using namespace std; → avoids writing std:: repeatedly

// int main() {
//     // statements
//     return 0;
// }

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes:
// - I understood the basic structure of a C++ program
// - Learned how compilation and execution works
// - Understood the role of header files and namespaces
// - Learned how output is displayed using cout
// - Realized that every program starts execution from main()

// Important Points:
// - main() is mandatory in every C++ program
// - #include <iostream> is required for input/output
// - using namespace std; simplifies syntax
// - Semicolon (;) is required after each statement
// - Curly braces {} define scope and function body
// - return 0; indicates successful execution

// Mistakes:
// - Forgetting semicolon → compilation error
// - Missing #include <iostream>
// - Not using std:: or namespace → cout error
// - Writing multiple main() functions
// - Syntax errors in brackets or quotes

// ======================================================
// 🔹 CODE IMPLEMENTATION
// ======================================================

#include <iostream>
using namespace std;

int main() {

    // 🔸 Output Section

    cout << "Hello World!\n";

    return 0;
}
