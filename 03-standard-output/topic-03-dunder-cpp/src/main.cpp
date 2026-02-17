#include <print>
using std::println;

int main() {
    println("Compiled using the C++ standard: {}", __cplusplus);
    // Compiled using the C++ standard: 202302

    // The format is: YYYYMM (Year, Month)
    // 202302 mean 2023, February

    // So this code was compiled using the C++23 standard,
    // because that is what set I set in the Makefile of this project.
}
