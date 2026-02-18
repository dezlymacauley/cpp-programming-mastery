/*

    ABOUT: for loop

*/

#include <print>
using std::println;

#include <vector>
using std::vector;

int main() {

    // Declaring a vector object on the stack

    // index:                 0,  1,  2,  3, 4, 5,  6,  7
    vector<int> player_scores{15, 24, 8, 40, 9, 19, 5, 10};

    // There are 8 elements in the vector called `player_scores`

    // For a vector that is not empty:
    // - The position of the first element is always `index 0`
    // - The position of the last element is always the number of elements
    // minus 1. E.g. If there are 8 elements,
    // the position of the last element is at index 7.

    // `i` is short for `index`

    // 1. Initialization: Where should the loop start from?
    // `size_t i = 0;`
    // This tells C++ that the loop should start at index 0
    // Think of this marker that C++ will use to keep track of which element,
    // in the loop it is currently dealing with.

    // 2. Condition: What condition should be true, BEFORE the loop runs
    // again? If this condition becomes false, then the loop will stop.
    // `i < player_scores.size();`

    // 3. Increment (aka Step Expression): How should the loop progress
    // through the list?
    // `i++` means that `i` should be increased by 1, AFTER performing
    // the actions inside the body of the for loop.
    // If you don't set this, this loop will never move past index = 0,
    // and this will lead to an infinite loop.

    // The data type `size_t` is  used for `i` because
    // `player_scores.size()` returns `size_t` and both types need
    // to be the same so that you can compare them against each other.
    // i < player_scores.size();

    // It's best practice to always check that a loop is not empty before
    // trying to iterate over it with a loop.
    if (player_scores.size() > 0) {

        for (size_t i = 0; i < player_scores.size(); i++) {
            println("The value at index {} is {}", i, player_scores[i]);
        }

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
