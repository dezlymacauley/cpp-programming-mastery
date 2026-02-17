/*

ABOUT: `println()`

This is the modern way to print messages and variables in C++

The requirement to use this syntax is that you must be using C++23 to compile
your code, your lsp should have support C++23 available, 
and your lsp must be explicitly set to provide language support for C+23.

This is easy to do:

1. Ensure that clang++ compiles using C++23, by adding the flag: -std=c++23

2. Add a .clangd file in the root of your project and add -std=c+_23 
to the file like this:

CompileFlags:
  Add: [-std=c++23]

*/

#include <print>

using std::println;

int main() {
    println("C++ Programming Mastery");
    return 0;
}
