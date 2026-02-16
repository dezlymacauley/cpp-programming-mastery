/*
    ABOUT: Structures

    In C++ a struct is almost identical to a class.

    struct → default access is public (for members) and public inheritance.
    class → default access is private (for members) and private inheritance.

*/

#include <iostream>

struct Point {
    int x;
    int y;
};

void Drawline(Point starting_point, Point ending_point) {
    using std::cout, std::endl;

    cout << "starting_point x co-ordinate is " << starting_point.x
         << endl;
    cout << "starting_point y co-ordinate is " << starting_point.y
         << endl;
    cout << "ending_point x co-ordinate is " << ending_point.x
         << endl;
    cout << "ending_point y co-ordinate is " << ending_point.y
         << endl;
}

int main() { 

    Point starting_point{12, 5};
    Point ending_point{7, 41};

    Drawline(starting_point, ending_point);
    return 0; 
}
