/*

    ABOUT: range-based for loop

    The syntax is:
    ```
    for (data_type element: list) {

        // This is where you define that action that should be performed
        // when the loop reaches an element.
        
    }
    ```

    The advantage of the `for range` loop is that there is no risk of
    an `out-of-bounds` error because you don't setup the index,
    or the condition.

*/

#include <print>
using std::println;

#include <vector>
using std::vector;

int main() {
    vector<int> player_scores{10, 20, 30, 40, 50};

    //_________________________________________________________________________

    // SECTION: int element (A copy of each element)
    
    // 1. This will make a copy of each element,
    // and use that. The original vector will NOT be modified.

    // 2. The copy can be modified.

    for (int element : player_scores) {
        element += 10;
    }

    println("============");
    println("int element");
    println();
    
    for (int element : player_scores) {
        println("{}", element);
    }
    
    println("============");
    println();
    
    //_________________________________________________________________________
    
    // SECTION: auto element (a copy of each element. The type is infered)

    // 1. This will make a copy of each element,
    // and use that. The original vector will NOT be modified.
    
    // 2. The copy can be modified.

    // 3. `auto` is a convinient syntax that will infer the type of element,
    // using the player_scores vector. 

    for (auto element : player_scores) {
        element += 10;
    }

    println("============");
    println("auto element");
    println();
    
    for (auto element : player_scores) {
        println("{}", element);
    }
    
    println("============");
    println();

    //_________________________________________________________________________
    
    // SECTION: const auto element (a read-only copy of each element. 
    // The type is infered)

    // 1. This will make a read-only copy of each element,
    // and use that. The original vector will NOT be modified.

    // 2. The copy can't be modified

    // 3. `auto` is a convinient syntax that will infer the type of element,
    // using the player_scores vector. 

    for (const auto element : player_scores) {
        // This line below is not allowed
        // element += 10;
    }

    println("============");
    println("auto element");
    println();
    
    for (int element : player_scores) {
        println("{}", element);
    }
    
    println("============");
    println();

    //_________________________________________________________________________
    
    // SECTION: auto& element

    // This is NOT a copy.
    // This allows you to modify the original elements in the vector,
    // by using a reference to each element. That's what the `&` means.

    for (auto& element : player_scores) {
        element += 10;
    }

    println("============");
    println("auto& element");
    println();
    
    for (int element : player_scores) {
        println("{}", element);
    }
    
    println("============");
    println();

    //_________________________________________________________________________
    
    // SECTION: const auto& element (read only reference)

    // This is NOT a copy.

    // Read only reference.
    for (const auto& element : player_scores) {
        // element += 10;
    }

    println("============");
    println("auto& element");
    println();
    
    for (const auto element : player_scores) {
        println("{}", element);
    }
    
    println("============");
    println();

    //_________________________________________________________________________

}
