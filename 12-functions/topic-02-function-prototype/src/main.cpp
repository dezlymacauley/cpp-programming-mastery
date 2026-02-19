/*
    ABOUT: Function prototype

    In C++ a function can't be used before the line where 
    the function defined.

    In C++ if you want to used a function before it is defined,
    you must have a `function declaration` (also called the function prototype)

*/

//_____________________________________________________________________________

#include <print>
using std::println;

#include <string>
using std::string;

//_____________________________________________________________________________

// SECTION: How to write a function declaration

int calc_total_fruits(int num_fruit_1, int num_fruit_2);
void greet_user(string user_name);

//_____________________________________________________________________________

int main() {

    int num_apples{5};
    int num_peaches{3};
    int total_fruits{0};

    total_fruits = calc_total_fruits(num_apples, num_peaches);
    println("total_fruits: {}", total_fruits);

    greet_user("Dezly");

    return 0;
}

//_____________________________________________________________________________

int calc_total_fruits(int num_fruit_1, int num_fruit_2) {
    int total{num_fruit_1 + num_fruit_2};
    return total;
}

void greet_user(string user_name) {
    println("Hello {}", user_name);
}

//_____________________________________________________________________________
