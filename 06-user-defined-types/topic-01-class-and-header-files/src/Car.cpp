#include "Car.h"

#include <print>
using std::println;


void Car::FillFuel(float amount) {
    fuel = amount;
}

void Car::Accelerate() {
    speed++;
    fuel -= 0.5f;
}

void Car::Brake() {
    speed = 0;
}

void Car::AddPassenger(int count) {
    passengers = count;
}

void Car::Dashboard() {
    println("fuel: {}", fuel);
    println("speed: {}", speed);
    println("passengers: {}", passengers);
}
