// This is a header guard
// It ensures that this header file is only included in the source file once
#pragma once

// NOTE: Don't forget to add the semicolon.

// In C++ everything is either a declaration or a statement:
// 1. declaration = defining a variable or custom data type like a class.
// 2. statement = performing some action.

class Car {

private:
    float fuel;
    float speed;
    int passengers;

public:

    // TIP: When creating a class in C++,
    // always create a constructor function to ensure that the fields of the
    // class are initialized when it is created.

    // This is a default constructor function
    // This will be used assign initialize an instance when it is created
    // without supplying any arguments.
    Car();

    //_________________________________________________________________________

    // SECTION: This is a destructor function
    
    // This is used to ensure that the memory allocated for an instance of
    // a class is released back to the computer.

    // NOTE: For this example, a destructor function is NOT needed because
    // all of the fields of the class are stack-allocated data types that
    // will automatically be cleaned up by C++ when those variables 
    // go out of scope.

    ~Car();

    //_________________________________________________________________________

    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassenger(int count);
    void ViewDashboard();
};
