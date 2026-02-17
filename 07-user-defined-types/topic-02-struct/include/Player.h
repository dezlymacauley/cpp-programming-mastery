// This is a header guard
// It ensures that this header file is only included in the source file once
#pragma once

// `private` and `public` are access specifiers
struct Player {


private:
    // private fields
    double account_balance;

public:
    // public fields
    int id;
    bool is_online;
    int ninja_stars; 

    // public functions

    // default constructor
    Player();
    
    // constructor
    Player(int num_ninja_stars);

    // destructor
    ~Player();

    void ViewPlayerInfo();
};

// NOTE: In C++ you simply declare the member functions 
// (aka associated functions, aka methods) in the header file,
// include/Player.h

// The logic (aka the implementation) of those functions should be done
// in the C++ file src/Player.cpp

// The reason for this is to reduce the build time of the project.
// If you add the implementation of the member functions 
// directly in `include/Player.h`, then every C++ file that imports 
// the Player.h file using `#include "Player.h"` will will compile 
// the code for those member functions.

// So it's far more efficient to put the code 
// in one `src/Player.cpp` file, so that code is only compiled once. 
