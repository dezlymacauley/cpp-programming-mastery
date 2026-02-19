/*
    ABOUT: Pass by value

*/

#include <print>
using std::println;

int main() {

    //_________________________________________________________________________

    // Here's a scenario:
    // There's a person who has a badge with a changeable number on it.
    // The person likes to change the number on
    // the badge throughout the week.
    // The person's badge is currently set to 8.

    // I'm going to create a variable to record the current number on
    // the badge.
    int badge_number{8};

    // Now let's say I use my phone to take a picture of the badge.

    int picture_of_badge_number{badge_number};
    // The badge number on the picture saved on my phone,
    // will obviously be the same as the person's badge number... at the
    // time when the picture was taken.

    // This is called `pass by value`.
    // This is when a variable recieves a copy of the value
    // of another variable. I.e. It's a snapshot of the value.

    println("badge_number: {}", badge_number);
    println("picture_of_badge_number: {}", picture_of_badge_number);
    // badge_number: 8
    // picture_of_badge_number: 8

    //_________________________________________________________________________

    // The next day, the person changes their badge number to 42
    badge_number = 42;

    println("badge_number: {}", badge_number);
    println("picture_of_badge_number: {}", picture_of_badge_number);
    // badge_number: 42
    // picture_of_badge_number: 8

    // picture_of_badge_number is still 8,
    // because the picture is a snapshot in time.

    //_________________________________________________________________________

    // I use photo editing software to edit the badge number in the photo,
    // so that it's a 10.
    picture_of_badge_number = 10;

    println("badge_number: {}", badge_number);
    println("picture_of_badge_number: {}", picture_of_badge_number);

    // badge_number: 42
    // picture_of_badge_number: 10

    // Editing the photo will not change the badge number in real life.

    //_________________________________________________________________________

    // You can further prove this `pass by value` concept by printing
    // the memory address of both variables.

    println("The value of badge_number is stored at:");
    println("{}", static_cast<const void*>(&badge_number));

    println();

    println("The value of picture_of_badge_number is stored at:");
    println("{}", static_cast<const void*>(&picture_of_badge_number));

    // The value of badge_number is stored at:
    // 0x7ffe76e96994

    // The value of picture_of_badge_number is stored at:
    // 0x7ffe76e96990

    // As you can see, both of these values are stored at different,
    // locations in memory so they are not connected. 
    
    // That is why changing the value of either one of these variables,
    // does not affect the other variable.

    //_________________________________________________________________________
}
