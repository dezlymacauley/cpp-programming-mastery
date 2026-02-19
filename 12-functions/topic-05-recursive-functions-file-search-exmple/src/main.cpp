/*

    ABOUT: Recursive Functions - File Search Example

    A recursive function is a function that tries to complete a task,
    by repeatedly calling itself until a condition is met.

    This condition is known as the base case.

    A recursive function works the same way as a `for loop`.
*/

#include <print>
using std::println;

// STEP: 1 => Define the task that needs to be completed

// 📁 There is a directory which contains many files, 
// and sub-directories which also contain many files and sub-directories.
// I am looking for a file with a specific name.

// STEP: 2 => Define the manual process to complete the task.

// a. Get the file path of the directory that needs to be searched.
// E.g. `/home/dezlymacauley/personal-notes`
//
// b. Get the file name that that you want to search for
// E.g. `european_countries.md`
//
// c. Open the current directory and check each file to see if it matches,
// the file name.
//
// d. If none of the files in the directory match the file name,
// and the there are no more sub-directories, then you can consider
// the file not found.
//
// f. If none of the files in the directory match the file name,
// but there is a sub-directories, then repeat step c and step d.

// NOTE: need to go up one directory to check the rest of the sub sub-directories

// STEP: 2 => Create the function signature of a recursive function
// to solve the task.

void offload_van(int num_pkgs_in_van, int num_pkgs_in_resturant) {

    // STEP: 3 => Define the base case

    // This is first thing that needs to be defined when you create
    // a recursive function.

    // It is a check that is performed before the function runs.
    // If this condition is true, the function will stop calling itself.

    // I.e. This is a check that that let's the function know that the
    // task has already been solved.

    if (num_pkgs_in_van == 0) {

        // Notify me when the task is completed.
        println("There are no more packages in the van to offload");
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

    // Decrease the number of packages in the van by 1;
    num_pkgs_in_van--;

    // Increase the number of packages in the restaurant by 1;
    num_pkgs_in_resturant++;

    // This last line of a recursive function,
    // is where the function calls itself again but this time 
    // with the updated arguments.
    offload_van(num_pkgs_in_van, num_pkgs_in_resturant);
}

int main() {

    int packages_in_van{5};
    int packages_in_resturant{2};

    offload_van(packages_in_van, packages_in_resturant);
}
