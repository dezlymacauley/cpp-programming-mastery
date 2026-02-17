#include "Car.h"

#include <print>
using std::println;

//_____________________________________________________________________________

// SECTION: Example 1 - How to create a default constructor

// This is a constructor function with default values set
// Note that the brace initialization syntax can't be used
// in a constructor function

// Car::Car() {
//     fuel = 0;
//     speed = 0;
//     passengers = 0;
//     println("A new car has been created");
// }

//_____________________________________________________________________________

// SECTION: Example 2 - How to create a default constructor
// with the member initializer list syntax

// This is more efficient than assigning inside the constructor body 
// because it initializes the members directly rather 
// than default-initializing them first and then assigning values to them.

Car::Car() : fuel(0), speed(0), passengers(0) {
    println();
    println("A new car has been created");
    println();
}

//_____________________________________________________________________________

// This is the destructor function

// The destructor does not need to be called. It will be run automatically
// when the object goes out of scope or is manually deleted.
Car::~Car() {
    println();
    println("The memory allocated to the car has been released");
    println();
}

//_____________________________________________________________________________

void Car::FillFuel(float amount) {
    fuel += amount;
}

void Car::Accelerate() {
    // Increase fuel by 1
    speed++;

    // Decrease the fuel amount by -0.5
    fuel -= 0.5f;
}

void Car::Brake() {
    speed = 0;
}

void Car::AddPassenger(int count) {
    passengers += count;
}

void Car::ViewDashboard() {
    println();
    println("==========================");
    println("fuel: {}", fuel);
    println("speed: {}", speed);
    println("passengers: {}", passengers);
    println("==========================");
    println();
}
