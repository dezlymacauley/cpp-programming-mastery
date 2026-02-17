/*
    ABOUT: cin

    `cin` is used to read a single value from the terminal.
    It will pause the program until it receives input entered
    from in the terminal, and then it will store that input into a variable.

    // TIP: cin is for reading a single value.
    // As soon as cin encouters a space it will stop reading.

    cin >> user_age;
    
    // E.g. If you enter `18 27`,
    // user_age will be 18

*/

#include <print>
using std::println;

#include <array>
using std::array;

#include <iostream>
using std::cin;

int main() {

    // This is a placeholder to store the age of the user.
    // It is initialized to 0.
    int user_age{0};
    println("Enter your age:");

    cin >> user_age;

    println("user_age is {}", user_age);
    println();

    return 0;
}
