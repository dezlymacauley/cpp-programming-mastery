#include "Car.h"

#include <print>
using std::println;

int main() {

    //_________________________________________________________________________
    
    // Creating an instance of the class
    Car red_car;
    
    println("red_car after creation");
    red_car.ViewDashboard();

    //_________________________________________________________________________

    red_car.FillFuel(11.25f);
    red_car.FillFuel(1.25f);
   
    println("red_car after adding fuel");
    red_car.ViewDashboard();
    
    //_________________________________________________________________________

    red_car.Accelerate();
    red_car.Accelerate();
    red_car.Accelerate();
    
    println("red_car after accelerating three times");
    red_car.ViewDashboard();

    //_________________________________________________________________________
    
    red_car.Brake();
    
    println("red_car after hitting the brake");
    red_car.ViewDashboard();
    
    //_________________________________________________________________________

    return 0;
}
