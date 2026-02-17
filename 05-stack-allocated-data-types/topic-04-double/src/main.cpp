/*

    ABOUT: double

    The `double` data type is for storing number that have a decimal part.
    These numbers can be positive or negative.

    The `double` is 64 bits (8 bytes) and offers more precision than the
    `float` data type.

    IEEE-754 double standard guarantees at least 15 decimal
    digits of precision.

    Anything decimals after 15 digits may not be accurately stored
    due to rounding.

    That means that it is good for storing numbers where you only care about
    the first 6 decimal being accurately stored.

    This makes `double` suitable for calculations where a higher precision
    is required.

*/

#include <print>

// TIP: You can add the `cfloat` header file to have access to values
// like `-DBL_MIN` that can be used to view the smallest number that
// a double can store.
#include <cfloat>

using std::println;

int main() {

    // SECTION: Declaring and printing the `float` data type

    // Don't forget to add the `f` behind the number
    // This tells the compiler that this value should be a `float` data type,
    // and not a `double` data type (I will have a separate guide on this
    // data type)

    // Don't add the 'f' suffix at the end when using double
    double interest_rate{12.62f};
    println("interest_rate: {}", interest_rate);
    // interest_rate: 12.62

    //_________________________________________________________________________

    // SECTION: How to print the size of a variable (in bytes)

    println("{}", sizeof(interest_rate));
    // 4

    //_________________________________________________________________________

    // SECTION: How to print the storage range of the int type

    println("The most negative number a double can store: {}", -DBL_MIN);
    // The most negative number a double can store: -2.2250738585072014e-308

    println("The most positive that a double can store: {}", DBL_MAX);
    // The most positive that a double can store: 1.7976931348623157e+308

    // The format of the output is called `exponential notation`
    // or `scientific` notation. This is used to display very small or very
    // large numbers.

    //_________________________________________________________________________

    return 0;
}
