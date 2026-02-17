/*
    ABOUT: getline()

*/

#include <print>
using std::println;

#include <string>
using std::string;
using std::getline;

#include <iostream>
using std::cin;


int main() {

    // This is a placeholder to store the name of the user.
    // It is initialized to an empty string.
    string user_name{};

    println("Enter your name:");

    // standard input, string variable
    getline(cin, user_name);

    println("user_name is {}", user_name);

    return 0;
}
