/*

    ABOUT: nested for loop

    A nested for loop is used when you want to work with a list
    that contains nested lists.

    This is often called a 2D (two dimensional) array.

    Here's a practical example

    So I have a database that has a table called `Weekly Sales`
    This table contains the weekly sales for three shops.

    | Name            | Mon | Tue | Wed | Thu | Fri | Sat | Sun |
    | --------------- | --- | --- | --- | --- | --- | --- | --- |
    | Gojo Specs      | 100 | 200 | 150 | 300 | 400 | 500 | 450 |
    | Techie Haven    | 210 | 320 | 270 | 180 | 390 | 260 | 310 |
    | Raikage Tea     | 430 | 140 | 380 | 220 | 290 | 170 | 340 |

    If you had to convert this to C++,
    the `Weekly Sales` table would be a list that contains three other
    lists.

    For this specific guide, I've chosen to use a vector that contains
    nested vectors, rather than a vector of structs or a vector of classes.

    This is because I want to keep the focus on how to to use
    a nested for loop.

    Another limitation of this is that the elements of a vector have to
    be of the same data type, so I'll have to exclude the data in the
    `name` column because it contains strings:

    So now all the values are of integers.

    | Mon | Tue | Wed | Thu | Fri | Sat | Sun |
    | --- | --- | --- | --- | --- | --- | --- |
    | 100 | 200 | 150 | 300 | 400 | 500 | 450 |
    | 210 | 320 | 270 | 180 | 390 | 260 | 310 |
    | 430 | 140 | 380 | 220 | 290 | 170 | 340 |

*/

#include <print>
using std::println;

#include <vector>
using std::vector;

int main() {

    // ________________________________________________________________________

    // SECTION: Declaring a nested array

    // `Weekend Sales Table` (main list aka container)
    vector<vector<int>> weekly_sales{
        // Columns:
        // 1,   2,   3,   4,   5,   6,   7

        // Columns Index:
        // 0,  1,   2,   3,   4,   5,   6
        {100, 200, 150, 300, 400, 500, 450}, // Nested row 1: Gojo Specs
        {210, 320, 270, 180, 390, 260, 310}, // Nested row 2: Techie Haven
        {430, 140, 380, 220, 290, 170, 340}  // Nested row 3: Raikage Tea
    };

    // index 0 of weekend_sales is Nested row 1: Gojo Specs
    // index 1 of weekend_sales is Nested row 2: Techie Haven
    // index 2 of weekend_sales is Nested row 3: Raikage Tea

    // ________________________________________________________________________

    // SECTION: How to manually access a value in a nested array

    println("The value of row 2, column 4 is: {}", weekly_sales[1][3]);
    // The value of row 2, column 4 is: 180

    // ________________________________________________________________________

    // SECTION: How to iterate over the elements of a nested array

    // First I'll just perform a best practice check to ensure that the
    // weekend_sales table is not empty before I attempt to run any loops.
    if (weekly_sales.size() > 0) {

        // Next, I need a `for loop` to go through each row
        // in the weekly_sales table (The main list).
        // This loop is called the outer loop.
        for (size_t i = 0; i < weekly_sales.size(); i++) {

            println();
            switch (i) {
            case 0:
                println("😎 Gojo Specs");
                break;
            case 1:
                println("💻 Techie Haven");
                break;
            case 2:
                println("🧋 Raikage Tea");
                break;
            }

            println("=======================");

            // Ensure that the nested list is not empty
            if (weekly_sales[i].size() > 0) {
                // Next, you need a `for loop` to go through each column
                // in each row (each nested list)
                // Since the variable name `i` is already in use,
                // I have to use another variable name for the index.
                // So I just chose `j` because it's
                // the next letter of the alphabet.
                for (size_t j = 0; j < weekly_sales[i].size(); j++) {
                    switch (j) {
                    case 0:
                        println("Mon: {}", weekly_sales[i][j]);
                        break;
                    case 1:
                        println("Tue: {}", weekly_sales[i][j]);
                        break;
                    case 2:
                        println("Wed: {}", weekly_sales[i][j]);
                        break;
                    case 3:
                        println("Thu: {}", weekly_sales[i][j]);
                        break;
                    case 4:
                        println("Fri: {}", weekly_sales[i][j]);
                        break;
                    case 5:
                        println("Sat: {}", weekly_sales[i][j]);
                        break;
                    case 6:
                        println("Sun: {}", weekly_sales[i][j]);
                        break;
                    }
                }
            }
        }

    } else {
        println("The weekly_sales table is empty");
    }

    return 0;
}

/*
    NOTE: This should be the ouput

    The value of row 2, column 4 is: 180

    😎 Gojo Specs
    =======================
    Mon: 100
    Tue: 200
    Wed: 150
    Thu: 300
    Fri: 400
    Sat: 500
    Sun: 450

    💻 Techie Haven
    =======================
    Mon: 210
    Tue: 320
    Wed: 270
    Thu: 180
    Fri: 390
    Sat: 260
    Sun: 310

    🧋 Raikage Tea
    =======================
    Mon: 430
    Tue: 140
    Wed: 380
    Thu: 220
    Fri: 290
    Sat: 170
    Sun: 340

*/
