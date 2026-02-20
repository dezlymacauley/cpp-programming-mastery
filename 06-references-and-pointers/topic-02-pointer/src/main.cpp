/*
    ABOUT: Pointer

    A pointer is a variable that is stored on the stack,
    and this variable stores a memory address that may be stored on
    the stack or heap, depending on the variable that the pointer
    is pointin at.

*/

#include <print>
using std::println;

int main() {

    //_________________________________________________________________________

    // SECTION: How to to print a memory address

    // ---------------------------------------------------------
    // 1. If you want to print the memory address of a variable:
    // &name_of_variable
    // ---------------------------------------------------------
    // 2. If you want to print the memory address
    // that a pointer is pointing to:
    // name_of_pointer
    // ---------------------------------------------------------
    // Do NOT make the mistake of doing this!
    // `&name_of_pointer`
    // This will give you the memory address of the pointer
    // variable that is stored in stack memory,
    // and not the memory address of the variable that the
    // pointer is pointer at.
    // ---------------------------------------------------------

    int num_apples{30};
    println("{}", static_cast<const void*>(&num_apples));
    // 0x7ffc8115c974

    int* ptr_to_num_apples{&num_apples};
    println("{}", static_cast<const void*>(ptr_to_num_apples));
    // 0x7ffc8115c974

    //_________________________________________________________________________

    // SECTION: How to read the access the value or element that the
    // memory address that a pointer is pointing to.

    num_apples = 50;

    println("num_apples: {}", num_apples);

    // Use the deference operator `*` followed by the variable name
    // of the pointer. This tells
    println("ptr_to_num_apples: {}", *ptr_to_num_apples);
    // num_apples: 50
    // ptr_to_num_apples: 50

    // Updating the original updates the value of the pointer

    //_________________________________________________________________________

    *ptr_to_num_apples = 25;

    println("num_apples: {}", num_apples);
    println("ptr_to_num_apples: {}", *ptr_to_num_apples);
    // num_apples: 25
    // ptr_to_num_apples: 25

    // Updating the value stored at the pointer updateds the value stored
    // in the original variable.

    //_________________________________________________________________________

    // SECTION: How to create a pointer that points to nothing

    int* placeholder_ptr{nullptr};
    println(
        "placeholder_ptr currently stores: {}",
        static_cast<const void*>(placeholder_ptr)
    );

    //_________________________________________________________________________
}
