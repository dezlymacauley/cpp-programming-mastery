/*

    ABOUT: nested for loop

    A nested for loop is used when you want to work with nested lists.

    A nested list is a `list of lists`.
    In other words, a list that contains other lists.

    This is often called a 2D (two dimensional) array.

    Here's a practical example

    So I have a database that has a table called `Weekend Sales`
    This table contains the `Weekend Sales` for three shops.

    | Name            | Saturday  | Sunday  |
    | --------------- | ----------| --------|
    | Gojo Specs      | 500       | 450     |
    | Techie Haven    | 300       | 350     |
    | Raikage Tea     | 300       | 350     |

    If you had to convert this to C++,
    the `Weekend Sales` table would be a list that contains three other
    lists.

    I.e. A vector that contains vectors

    However each element in a vector has to be of the same type.

    So it keep this example focused on implementing a nested for loop,
    I'll focus on only the figures and exclude the shop names.

    So row 1 (nested list 1) => 500, 450
    So row 2 (nested list 2) => 300, 350
    So row 3 (nested list 3) => 300, 350

    A better way to implement this is to use a `vector of classes`
    or a `vector of structs` but I want to keep those data structures out
    of this example.

*/

#include <cstddef>
#include <print>
using std::println;

#include <vector>
using std::vector;

int main() {

    // `Weekend Sales Table` (main list aka container)
    vector<vector<int>> weekend_sales{
        // Columns:
        // 1,  2
        {500, 450}, // Row 1 (nested list 1): Gojo Specs
        {300, 350}, // Row 2 (nested list 2): Techie Haven
        {300, 350}  // Row 3 (nested list 3): Raikage Tea
    };

    // First, you need a `for loop` to go through each row (each nested list)
    // in the weekend_sales list. This loop is called the outer loop.
    for (size_t i = 0; i < weekend_sales.size(); i++) {

        // Next, you need a `for loop` to go through each column
        // in each row (each nested list)
        // Since the variable name `i` is already in use,
        // you have to use another variable name for the index

        // for (size_t j) {
        //
        // }
    }

    return 0;
}
