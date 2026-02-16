/*

    ABOUT: float

    The `float` data type is for storing number that have a decimal part.
    These numbers can be positive or negative.  
    
    Like the `int` data type, the `float` data type is also 32 bits (4 bytes)

    IEEE-754 float standard guarantees at least 6 decimal digits of precision.

    That means that it is good for storing numbers where you only care about
    the first 6 decimal being accurately stored.

    Anything beyond 6 digits may or may not be exact due to rounding.

*/

#include <print>

// TIP: You can add the `cfloat` header file to have access to values
// like `FLT_MIN` that can be used to view the smallest number that 
// a float can store.
#include <cfloat>

using std::println;

int main() {

    // SECTION: Declaring and printing the `float` data type

    // Don't forget to add the `f` behind the number
    // This tells the compiler that this value should be a `float` data type,
    // and not a `double` data type (I will have a separate guide on this
    // data type)

    float interest_rate{12.62f};
    println("interest_rate: {}", interest_rate);
    // interest_rate: 12.62

    //_________________________________________________________________________

    // SECTION: How to print the size of a variable (in bytes)

    println("{}", sizeof(interest_rate));
    // 4 

    //_________________________________________________________________________

    // SECTION: How to print the storage range of the int type

    println("Smallest number that a float can store: {}", FLT_MIN);
    // Smallest number that a float can store: 1.1754944e-38
   
    println("Largest number that a float can store: {}", FLT_MAX);
    // Largest number that a float can store: 3.4028235e+38
    
    // The format of the output is called `exponential notation` 
    // or `scientific` notation. This is used to display very small or very
    // large numbers.

    //_________________________________________________________________________

    return 0;
}
