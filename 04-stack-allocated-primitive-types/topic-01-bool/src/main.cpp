/*

    ABOUT: bool

    The keyword `bool` means `boolean`
    The size of the `bool` data type is 8 bits (1 byte)
    
    This data type can only be set to: `false` or `true`
    Also note that when it comes to bool, 0 = false, and 1 = true

    // TIP: Use `Braced initialization` when declaring variables in C++

    E.g. If you declare a variable like this (without braced initialization)
    bool is_villain = 18;

    This statement will set the value of is_villain to `true`, 
    Due to the `narrowing` rules of C++, this code will compiled, 
    and it will lead to unintend behavior.  

    narrowing rules:
    0 will be converted to false. 
    Anything other than 0 will be converted to true.

    In this case is_villain will be incorrect set to true. 
    This can lead to bugs.

    However declaring a variable like this (with braced initialization):
    bool is_villain{18};

    This code will NOT compile, and you will get a warning from the clangd
    language server.

*/

#include <print>

using std::println;

int main() {

    //_________________________________________________________________________
 
    // SECTION: Declaring and printing the `bool` data type

    bool is_villain{true};
    println("is_villain: {}", is_villain);
    // is_villain: true

    bool is_hero{false};
    println("has_sword: {}", is_hero);
    // is_hero: false
   
    bool has_sword{0};
    println("has_sword: {}", has_sword);
    // has_sword: false
    
    bool has_gun{1};
    println("has_gun: {}", has_gun);
    // has_gun: true
    
    //_________________________________________________________________________
 
    // SECTION: How to print the size of a variable (in bytes)

    println("{}", sizeof(has_sword));
    // 1
    
    //_________________________________________________________________________

    return 0;
}
