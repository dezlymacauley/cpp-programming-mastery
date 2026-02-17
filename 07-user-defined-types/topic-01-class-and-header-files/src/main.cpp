#include "Car.h"

#include <print>
using std::println;

int main() {

    //_________________________________________________________________________
    
    // SECTION: Creating an instance of the class with the default constructor
    
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
  
    // SECTION: Creating an instance of the class by setting the fuel amount

    Car blue_car = Car(42.20f);
    
    println("blue_car created with fuel already set");
    blue_car.ViewDashboard();

    //_________________________________________________________________________

    return 0;
}
