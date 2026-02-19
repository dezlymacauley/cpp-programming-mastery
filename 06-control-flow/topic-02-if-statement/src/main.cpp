/*
    ABOUT: if statement

    This is best for handling 1 to 3 potential outcomes

*/

#include <print>
using std::println;

int main() {

    int num_apples{8};
    println("num_apples is {}", num_apples);

    if (num_apples > 10) {
        println("num_apples greater than 10");
    } else if (num_apples == 10) {
        println("There are exactly 10 apples");
    } else {
        println("There are less than 10 apples");
    }

    return 0;
}
