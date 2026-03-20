// Program: Hello World
// Description: Prints "Hello World" on the screen
// Author: Rupali Vaishnav
// Date: 2026

// Learning Platform: Apna College

// Compiler: GCC (MinGW) 
// Language: C++
// OS: Windows

// ======================================================
// 🔹 EXECUTION (WINDOWS + VS CODE)
// ======================================================

// Step 1: Install MinGW / GCC compiler

// Step 2: Open Command Prompt and navigate to file location 
// cd path_to_your_file

// Step 3: Compile the program
// g++ 01-hello-world.cpp -o hello

// Step 4: Run the program
// hello

// ======================================================
// 🔹 DEFINITIONS
// ======================================================

// Program: A set of instructions given to a computer to perform a task.
// main(): Entry point of every C++ program.
// cout: Used to display output on the screen.
// endl / \n: Used to move to the next line.
// Header File: A file that contains predefined functions (e.g., iostream).

// ======================================================
// 🔹 BASIC STRUCTURE OF C++ PROGRAM
// ======================================================

// 1. Documentation Section (comments)
// 2. Link Section: (#include)
// 3. Namespace Declaration
// 4. main() Function
// 5. Execution Statements
// 6. return 0;

// ======================================================
// 🔹 LEARNINGS, INSIGHTS & COMMON MISTAKES
// ======================================================

// Notes: 
// - main() is the entry point 
// - cout is used for output
// - iostream is required for input/output

// Important Points:
// - Every C++ program starts from main()
// - Semicolon (;) is necessary after each statement 
// - Curly braces {} define the function body

// Mistakes:
// - Forgot semicolon (causes compilation error)
// - Wrote duplicate main() function
// - Forgot to include iostream 
// - Missing "using namespace std;" (can cause cout error)

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
