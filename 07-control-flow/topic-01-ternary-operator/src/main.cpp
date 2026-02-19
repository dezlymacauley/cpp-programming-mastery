/*
    ABOUT: ternary operator

    Use this when you have only two potential outcomes.

*/

#include <print>
using std::println;

#include <string>
using std::string;

int main() {

    int status_code {201};

    // If status_code = 200, the value of response will be set 
    // to "Successful", otherwise it will be set to "Failed"
    string response = (status_code == 200) ? "Successful" : "Failed";

    println("{}", response);

    return 0;
}
