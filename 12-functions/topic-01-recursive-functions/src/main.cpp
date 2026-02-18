/*

    ABOUT: Recursive Functions

    A recursive function is a function that tries to complete a task,
    by repeatedly calling itself until a condition is met.

    This condition is known as the base case.

    A recursive function works the same way as a `for loop`.
*/

#include <print>
using std::println;

// STEP: 1 => Define the task that needs to be completed

// Here's a very simple task:
// 🚚 A delivery truck that has a certain number of packages,
// has arrived at a restaurant.

// I want to offload truck by removing packages from the truck,
// and increasing the number of packages in the restaurant.

// STEP: 2 => Create the function signature of a recursive function
// to solve the task.

void offload_truck(int num_pkgs_in_truck, int num_pkgs_in_resturant) {

    // STEP: 3 => Define the base case

    // This is first thing that needs to be defined when you create
    // a recursive function.

    // It is a check that is performed before the function runs.
    // If this condition is true, the function will stop calling itself.

    // I.e. This is a check that that let's the function know that the
    // task has already been solved.

    if (num_pkgs_in_truck == 0) {

        // Notify me when the task is completed.
        println("There are no more packages in the truck to offload");
        println("Restaurant now has {} packages", num_pkgs_in_resturant);

        // Don't forget the return statement.
        // This ensures that the function will exit immediately and not
        // execute any more code.
        return;
    }

    // STEP: 3 => Define the recursive case

    // This is where you tell the function what to do if the task
    // has not yet been completed. 
    // I.e. The base case has not yet been reached.

    // Decrease the number of packages in the truck by 1;
    num_pkgs_in_truck--;

    // Increase the number of packages in the restaurant by 1;
    num_pkgs_in_resturant++;

    // This last line of a recursive function,
    // is where the function calls itself again but this time 
    // with the updated arguments.
    offload_truck(num_pkgs_in_truck, num_pkgs_in_resturant);
}

int main() {

    int packages_in_truck{5};
    int packages_in_resturant{2};

    offload_truck(packages_in_truck, packages_in_resturant);
}
