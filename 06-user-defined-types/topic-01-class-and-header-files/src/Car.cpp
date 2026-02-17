#include "Car.h"

#include <print>
using std::println;

//_____________________________________________________________________________

// SECTION: Example 1 - How to create a constructor

// This is a constructor function with default values set
// Note that the brace initialization syntax can't be used
// in a constructor function

// Car::Car() {
//     fuel = 0;
//     speed = 0;
//     passengers = 0;
// }

//_____________________________________________________________________________

// SECTION: Example 2 - How to create a constructor
// with the member initializer list syntax

Car::Car() : fuel(0), speed(0), passengers(0) {
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
    passengers = count;
}

void Car::ViewDashboard() {
    println("");
    println("==========================");
    println("fuel: {}", fuel);
    println("speed: {}", speed);
    println("passengers: {}", passengers);
    println("==========================");
    println("");
}
