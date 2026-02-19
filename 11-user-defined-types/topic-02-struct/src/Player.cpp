// Import the `include/Player.h` file
#include "Player.h"

#include <print>
using std::println;

// The logic of the default constructor function
Player::Player()
    : id(0), is_online(false), ninja_stars(0), account_balance(0.0) {
}

// The logic of the constructor function
Player::Player(int num_ninja_stars)
    : id(0), is_online(false), account_balance(0.0) {
    ninja_stars = num_ninja_stars;
}

// The logic of the destructor function
Player::~Player() {
    println("The memory allocated to the player has been freed");
}

void Player::ViewPlayerInfo() {
    println();
    println("======================================");
    println("id: {}", id);
    println("is_online: {}", is_online);
    println("ninja_stars: {}", ninja_stars);
    println("account_balance: {}", account_balance);
    println("======================================");
    println();
}
