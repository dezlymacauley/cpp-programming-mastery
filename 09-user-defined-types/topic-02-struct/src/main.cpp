/*
    ABOUT: struct

    In C++ a struct is almost identical to a class.

    The only difference is that if you don't use `access specifiers` like
    `private` or `public`...

    With a `class` all fields and functions are private by default.
    With a `struct` all fields and functions are public by default.

    My opinion is that you should just use `access specifiers`, 
    instead of trying to remember the rules above.
*/

#include "Player.h"

int main() { 

    // player_one created with the default constructor
    Player player_one; 
    player_one.ViewPlayerInfo();
    
    // player_two created with the constructor,
    // and the field `ninja_stars` has been set to 50.
    Player player_two = Player(50); 
    player_two.ViewPlayerInfo();

    return 0; 
}
