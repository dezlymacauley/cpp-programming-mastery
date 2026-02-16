/*

    ABOUT: int

    The `int` data type is short for `integer`
    This data type is 32 bits (4 bytes)

    This is for storing whole numbers that can be either positive and negative

    Whole numbers are numbers that do not have a decimal part.
*/

#include <print>

// TIP: You can add the `climits` header file to
#include <climits>

using std::println;

int main() {

    // SECTION: Declaring and printing the `int` data type

    int account_balance{50};
    println("account_balance: {}", account_balance);
    // account_balance: 50

    //_________________________________________________________________________

    // SECTION: How to print the size of a variable (in bytes)

    println("{}", sizeof(account_balance));
    // 4

    //_________________________________________________________________________

    // SECTION: How to print the storage range of the int type

    println("Smallest number that int can store: {}", INT_MIN);
    // Smallest number that int can store: -2147483648

    println("Largest number that int can store: {}", INT_MAX);
    // Largest number that int can store: 2147483647

    //_________________________________________________________________________

    return 0;
}
