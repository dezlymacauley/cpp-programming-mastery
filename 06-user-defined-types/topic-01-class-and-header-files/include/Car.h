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

    // This is a constructor
    Car();

    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassenger(int count);
    void ViewDashboard();
};
