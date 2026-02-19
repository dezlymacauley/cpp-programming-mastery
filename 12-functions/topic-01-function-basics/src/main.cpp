/*
    ABOUT: Functions

    A function is a block of resuable code that can be used to perform
    a specific task. 

    Functions are used to make the code of a program modular.
    I.e. Splitting in the logic of the program into smaller sections.

    The syntax of a function in C++

    return_type function_name(function_parameters) {

        // This is the body of the function.
        // The body contains the instruction that 
        // the function should execute when it is called.

    }

    If a you want to indicate that a function does not return anything,
    to the caller, 
    then the return_type of the function must be set to `void`.

*/

//_____________________________________________________________________________

#include <print>
using std::println;

#include <string>
using std::string;

//_____________________________________________________________________________

int calc_total_fruits(int num_fruit_1, int num_fruit_2) {
    int total{num_fruit_1 + num_fruit_2};
    return total;
}

void greet_user(string user_name) {
    println("Hello {}", user_name);
}

//_____________________________________________________________________________

// `main` is a function that tells the C++ compiler where it should start
// executing the the program.

// The function `main` returns an integer to the `caller`.
// `0` will be returned if `main` reaches the last line.
int main() {

    int num_apples{5};
    int num_peaches{3};
    int total_fruits{0};

    total_fruits = calc_total_fruits(num_apples, num_peaches);
    println("total_fruits: {}", total_fruits);

    greet_user("Dezly");

    return 0;
}

