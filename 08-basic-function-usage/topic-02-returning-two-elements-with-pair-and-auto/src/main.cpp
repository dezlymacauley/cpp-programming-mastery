/*
    ABOUT: Returning two elements with `pair` and `auto

*/

//_____________________________________________________________________________

#include <print>
using std::println;

#include <utility>
using std::pair;

//_____________________________________________________________________________

// SECTION: `pair`

// Use this when you want to declare a function that returns
// exactly two data types

pair<int, int> double_each_score(int score_01, int score_02) {
    int doubled_score_01{score_01 * 2};
    int doubled_score_02{score_02 * 2};
    return {doubled_score_01, doubled_score_02};
}

//_____________________________________________________________________________

int main() {

    // The result of doubling 5, will be stored in the variable `score_01`.
    // The result of doubling 2, will be stored in the variable `score_02`.
    
    // The variables inside the square brackets, 
    // `score_01` and `score_02` will be created and initialized in one line.
    // The `auto` keyword will ensure that the data types of `score_01`,
    // and `score_02`, 
    // match the return type of elements returned by the function.

    auto [score_01, score_02] = double_each_score(5, 2);

    println("score_01: {}", score_01);
    println("score_02: {}", score_02);

    return 0;
}
