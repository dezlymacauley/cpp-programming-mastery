/*

    ABOUT: while loop

    Use this when you know how many times the loop needs to run

*/

#include <print>
using std::println;

#include <vector>
using std::vector;

int main() {

    vector<int> player_scores{15, 24, 8, 40, 9, 19, 5, 10};

    size_t i = 0;

    while (i < player_scores.size()) {
        println("The value at index {} is {}", i, player_scores[i]);
        i++;
    }

    // The value at index 0 is 15
    // The value at index 1 is 24
    // The value at index 2 is 8
    // The value at index 3 is 40
    // The value at index 4 is 9
    // The value at index 5 is 19
    // The value at index 6 is 5
    // The value at index 7 is 10

    return 0;
}
