/*
    ABOUT: Returning more than two elements with `tuple` and `auto

*/

//_____________________________________________________________________________

#include <print>
using std::println;

#include <tuple>
using std::tuple;

//_____________________________________________________________________________

// SECTION: `tuple`

// Use this when you want to declare a function that returns
// more than two data types

tuple<int, int, int, int, int> double_each_score(
    int score_01, int score_02, int score_03, int score_04, int score_05
) {
    int db_score_01{score_01 * 2};
    int db_score_02{score_02 * 2};
    int db_score_03{score_03 * 2};
    int db_score_04{score_04 * 2};
    int db_score_05{score_05 * 2};
    return {db_score_01, db_score_02, db_score_03, db_score_04, db_score_05};
}

//_____________________________________________________________________________

int main() {

    auto [score_01, score_02, score_03, score_04, score_05] =
        double_each_score(2, 8, 10, 3, 5);
    //
    println("score_01: {}", score_01);
    println("score_02: {}", score_02);
    println("score_03: {}", score_03);
    println("score_04: {}", score_04);
    println("score_05: {}", score_05);

    return 0;
}
