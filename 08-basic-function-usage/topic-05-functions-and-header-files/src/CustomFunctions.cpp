#include "CustomFunctions.h"

#include <print>
using std::println;

int calc_total_fruits(int num_fruit_1, int num_fruit_2) {
    int total{num_fruit_1 + num_fruit_2};
    return total;
}

void greet_user(string user_name) {
    println("Hello {}", user_name);
}
