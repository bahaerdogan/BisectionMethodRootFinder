Bisection Method
Overview
This C++ program implements the bisection method to find the root of a user-defined function within a given interval. The user-defined function is provided as a parameter to the bisection function, and the program uses this method to iteratively narrow down the interval until the root is found or a predefined tolerance is reached.

Files
bisection.cpp: The main C++ source code file containing the implementation of the bisection method.
README.md: This file, providing an overview of the program.
Compilation
To compile the program, you can use a C++ compiler. For example:

bash
Copy code
g++ bisection.cpp -o bisection
This will generate an executable file named bisection that you can run.

Usage
After compilation, you can run the program by executing the generated executable:

bash
Copy code
./bisection
By default, the program searches for the root of the function (x * x * x) - x - 1 within the interval [0, 2] with a tolerance of 0.01. You can modify the userDefinedFunction, a, b, and tolerance variables in the main function to analyze different functions or intervals.

Output
The program will output the root if found, along with a message indicating success. If the bisection method does not converge within the specified number of iterations, a message indicating failure will be displayed.

Dependencies
The code relies on the <iostream>, <cmath>, and <functional> standard C++ libraries.