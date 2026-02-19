/*

    ABOUT: array

    This is a fixed sized list,
    where each element in the list must have the same variable type.
*/

#include <print>
using std::println;

#include <array>
using std::array;

int main() {

    // SECTION: Declaring an array

    array<int, 3> top_three_scores = {50, 40, 20};

    //_________________________________________________________________________

    // SECTION: How to print the size of a fixed sixed array (in bytes)

    println("The size of top_three_scores is {} bytes",
            sizeof(top_three_scores));
    // The size of top_three_scores is 12 bytes

    //_________________________________________________________________________

    // NOTE: Why is this 12 bytes?

    // The data type of each element in the array is an `int`
    println("The size of an int data type is {} bytes", sizeof(int));
    // The size of an int data type is 4 bytes

    // array<int, 3> means that this array has the capacity to store 
    // three int data types. Keep in mind that even if there were only two
    // values in the array, this would not change things.

    // So `3` int data types, where each one is `4` bytes means:
    // 3 * 4 = 12 bytes

    //_________________________________________________________________________

    return 0;
}
