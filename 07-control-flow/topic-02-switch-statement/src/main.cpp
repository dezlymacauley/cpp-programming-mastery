/*
    ABOUT: switch statement

*/

#include <print>
using std::println;

int main() {

    int status = 200;

    switch (status) {
    case 200:
        println("200 OK - Request successful");
        break;
    case 301:
        println("301 Moved Permanently - Resource relocated");
        break;
    case 400:
        println("400 Bad Request - Client error");
        break;
    case 404:
        println("404 Not Found - Resource does not exist");
        break;
    case 500:
        println("500 Internal Server Error - Server failure");
        break;
    default:
        println("Unknown status code");
        break;
    }

    return 0;
}
